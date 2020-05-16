//
//  testc.c
//  mac_test
//
//  Created by TQ on 2020/4/15.
//  Copyright © 2020 TQ. All rights reserved.
//

#include "testc.h"

void haha(){
    printf("haha\n");
    
    avdevice_register_all();
    
    
    int ret = 0;
    char errors[1024] = {0,};
    
    //ctx
    AVFormatContext * fmt_ctx = NULL;
    
    //[[video device]: [audio device]]
    char *deviceName = ":0";
    
    AVDictionary *options = NULL;
    
    //get format
    AVInputFormat *iformat = av_find_input_format("avfoundation");
    
    
    if ((ret = avformat_open_input(&fmt_ctx, deviceName, iformat, &options)) < 0){
        av_strerror(ret, errors, 1024);
        fprintf(stderr, "Failed to open audio device, [%d]%s\n", ret, errors);
        return;
    }
    
    av_log_set_level(AV_LOG_DEBUG);
    av_log(NULL, AV_LOG_DEBUG, "hello world");
    
    AVPacket *avpkt = av_packet_alloc();
    
    
    if ((ret = av_read_frame(fmt_ctx, avpkt)) == 0) {
        
    }
    
    
    
    return;
}
