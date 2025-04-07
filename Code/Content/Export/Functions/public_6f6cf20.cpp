#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33e80);
CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6cf20);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);

#define public_6f6cf55 _public_6f6cf55
#define public_6f6cf60 _public_6f6cf60
#define public_6f6cf65 _public_6f6cf65
#define public_6f6cf73 _public_6f6cf73
#define public_6f6cf7f _public_6f6cf7f
#define public_6f6cf81 _public_6f6cf81
#define public_6f6cf8d _public_6f6cf8d
#define public_6f6cf97 _public_6f6cf97
#define public_6f6cfaa _public_6f6cfaa
#define public_6f6cfac _public_6f6cfac
#define public_6f6cfb4 _public_6f6cfb4
#define public_6f6d006 _public_6f6d006
#define public_6f6d015 _public_6f6d015
#define public_6f6d020 _public_6f6d020
#define public_6f6d022 _public_6f6d022
#define public_6f6d02e _public_6f6d02e

PROC_DECLARE(0x6f6cf20, internal_6f6cf20, public_6f6cf20);
extern "C" NAKED register_t __cdecl internal_6f6cf20()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        push esi
        je public_6f6d02e
        lea eax, ss:[esp+0xC]
        push eax
        call public_6f49bc0
        add esp, 4
        test eax, eax
        je public_6f6cfb4
        mov esi, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [public_6fd1cac]
        mov ecx, dword ptr ds : [public_6fd1cb0]
        cmp eax, ecx
        je public_6f6cf60
        mov edx, dword ptr ss : [esp+0x10]
        public_6f6cf55 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f6cf65
        add eax, 0x14
        cmp eax, ecx
        jne public_6f6cf55
        public_6f6cf60 : nop
        xor al, al
        pop esi
        pop ecx
        ret 
        public_6f6cf65 : nop
        cmp eax, ecx
        je public_6f6cf60
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        je public_6f6cf7f
        public_6f6cf73 : nop
        cmp dword ptr ds : [ecx], 0
        je public_6f6cf81
        add ecx, 4
        cmp ecx, edx
        jne public_6f6cf73
        public_6f6cf7f : nop
        mov ecx, edx
        public_6f6cf81 : nop
        mov edx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        je public_6f6cf8d
        mov al, 1
        pop esi
        pop ecx
        ret 
        public_6f6cf8d : nop
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        cmp ecx, eax
        je public_6f6cfac
        public_6f6cf97 : nop
        cmp dword ptr ds : [ecx], esi
        je public_6f6cfaa
        add ecx, 4
        cmp ecx, eax
        jne public_6f6cf97
        cmp eax, edx
        setne al
        pop esi
        pop ecx
        ret 
        public_6f6cfaa : nop
        mov eax, ecx
        public_6f6cfac : nop
        cmp eax, edx
        setne al
        pop esi
        pop ecx
        ret 
        public_6f6cfb4 : nop
        mov esi, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+4]
        push ecx
        push esi
        mov dword ptr ss : [esp+0xC], 0
        call dword ptr ds : [public_6fb362c]
        mov eax, dword ptr ss : [esp+0xC]
        add esp, 8
        test eax, 0x3FFFFFFF
        je public_6f6d02e
        lea edx, ss:[esp+4]
        push edx
        call public_6f75f30
        add esp, 4
        test eax, eax
        je public_6f6d02e
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, eax
        call public_6f73930
        test eax, eax
        je public_6f6d006
        mov ecx, eax
        call public_6f33e80
        test al, al
        je public_6f6d02e
        public_6f6d006 : nop
        mov eax, dword ptr ds : [public_6fd1cc0]
        mov ecx, dword ptr ds : [public_6fd1cc4]
        cmp eax, ecx
        je public_6f6d020
        public_6f6d015 : nop
        cmp dword ptr ds : [eax], esi
        je public_6f6d022
        add eax, 4
        cmp eax, ecx
        jne public_6f6d015
        public_6f6d020 : nop
        mov eax, ecx
        public_6f6d022 : nop
        xor edx, edx
        cmp eax, ecx
        setne dl
        mov al, dl
        pop esi
        pop ecx
        ret 
        public_6f6d02e : nop
        xor al, al
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f6cf20)
    }
}

#undef public_6f6cf55
#undef public_6f6cf60
#undef public_6f6cf65
#undef public_6f6cf73
#undef public_6f6cf7f
#undef public_6f6cf81
#undef public_6f6cf8d
#undef public_6f6cf97
#undef public_6f6cfaa
#undef public_6f6cfac
#undef public_6f6cfb4
#undef public_6f6d006
#undef public_6f6d015
#undef public_6f6d020
#undef public_6f6d022
#undef public_6f6d02e
