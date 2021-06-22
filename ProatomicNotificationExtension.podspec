#
# Be sure to run `pod lib lint ProatomicNotificationExtension.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ProatomicNotificationExtension'
  s.version          = '0.2.2'
  s.summary          = 'A description of ProatomicNotificationExtension.'

  s.description = "Proatomic notifications extensions for iOS. This works only with iOS 10 and newer"

  s.homepage         = 'http://proatomicdev.com/'
  s.license= {
    :text=> "Copyright 2019 Proatomic",
    :type => "Copyright"
  }
  s.author           = { 'Guillermo Sáenz' => 'gsaenz@proatomicdev.com' }
  s.source           = { :git => 'https://github.com/ProAtomic/ProatomicNotificationExtension.git', :tag => s.version.to_s }

  s.ios.deployment_target = '11.0'

  s.frameworks = 'UIKit', 'Foundation'
  s.default_subspecs= [
    'ProatomicServiceExtension'
  ]

  s.subspec "ProatomicServiceExtension" do |ss|
    ss.vendored_frameworks = [
        'ProatomicNotificationExtension/Frameworks/ProatomicServiceExtension-Release-iphoneuniversal/ProatomicServiceExtension.xcframework'
    ]
  end

end
