/*
Copyright Soramitsu Co., Ltd. 2016 All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include "monitor.hpp"

namespace peer_service{
  namespace monitor{

    Nodes peerList;
    std::shared_ptr<peer::Node> getCurrentLeader(){

    }
    std::string getCurrentLeaderIp(){

    }


    void initialize(){

    }

    size_t getMaxFaulty(){

    }

    Nodes getAllPeerList(){

    }
    std::shared_ptr<peer::Node> getPeerAt(unsigned int index){

    }
    std::vector<std::string> getAllIpList(){

    }

    Nodes getActivePeerList(){

    }
    std::shared_ptr<peer::Node> getActivePeerAt(unsigned int index){

    }
    std::vector<std::string> getActiveIpList(){

    }


    bool isExistIP(const std::string &){

    }
    bool isExistPublicKey(const std::string &){

    }

    Nodes::iterator findPeerIP(const std::string &ip){

    }
    Nodes::iterator findPeerPublicKey(const std::string &publicKey){

    }

  };  // namespace monitor
};