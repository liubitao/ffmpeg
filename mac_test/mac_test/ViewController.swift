//
//  ViewController.swift
//  mac_test
//
//  Created by TQ on 2020/4/15.
//  Copyright © 2020 TQ. All rights reserved.
//

import Cocoa

class ViewController: NSViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        
        let button = NSButton.init(frame: CGRect(x: 0, y: 0, width: 40, height: 40))
        button.title = "start"
        button.action = #selector(touchIn)
        self.view.addSubview(button)
        
    }
    
    @objc func touchIn(){
        haha()
    }

    override var representedObject: Any? {
        didSet {
        // Update the view, if already loaded.
        }
    }


}

