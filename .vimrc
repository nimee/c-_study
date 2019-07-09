set nocompatible               "去除VIM一致性，必须"
filetype off                   "必须"

"设置包括vundle和初始化相关的运行时路径"
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()

"启用vundle管理插件，必须"
Plugin 'VundleVim/Vundle.vim'
Plugin 'Valloric/YouCompleteMe'
Plugin 'Raimondi/delimitMate'
"在此增加其他插件，安装的插件需要放在vundle#begin和vundle#end之间"
"安装github上的插件格式为 Plugin '用户名/插件仓库名'"

call vundle#end()              
filetype plugin indent on      "加载vim自带和插件相应的语法和文件类型相关脚本，必须"
" 寻找全局配置文件
let g:ycm_global_ycm_extra_conf = '~/.ycm_extra_conf.py'
let g:ycm_collect_identifiers_from_tag_files = 1
"关键字补全
"let g:ycm_seed_identifiers_with_syntax = 1
"" 让补全行为与一般的IDE一致
set completeopt=longest,menu
let g:ycm_enable_diagnostic_signs = 0
let g:ycm_enable_diagnostic_highlighting = 0
set nu              " 显示行号

set completeopt-=preview

set backspace=start,eol
let delimitMate_expand_cr = 1 "需要backspace包含start,eol"
let delimitMate_expand_space = 1 "需要backspace包含start,eol”
set ts=4
set expandtab
set autoindent
