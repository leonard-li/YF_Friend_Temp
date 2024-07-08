
Pod::Spec.new do |spec|

  spec.name         = "YF_Friend_Temp"
  spec.version      = "1.0.0"
  spec.summary      = "好友系统"

  spec.description  = <<-DESC
  iOS好友系统功能库
                   DESC

  spec.homepage     = "https://github.com/leonard-li/YF_Friend_Temp.git"


  spec.license      = { :type => "MIT", :file => "LICENSE" }

  spec.author             = { "leonard.li" => "495145872@qq.com" }

  spec.ios.deployment_target = "9.0"

  spec.source       = { :git => "https://github.com/leonard-li/YF_Friend_Temp.git", :tag => spec.version }

  spec.vendored_frameworks = 'YFFriend.framework'

  spec.requires_arc = true

  spec.dependency "YF_Core"

  spec.resource_bundles = {
    'YF_FriendResources' => ['Resources/PrivacyInfo.xcprivacy']
  }

end
