#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d03480);
CLANG_FORWARD_PROC_SYMBOL(public_6d04480);
CLANG_FORWARD_PROC_SYMBOL(public_6d59ea0);

#define public_6d034c4 _public_6d034c4
#define public_6d034cc _public_6d034cc
#define public_6d034e0 _public_6d034e0
#define public_6d034ee _public_6d034ee

PROC_DECLARE(0x6d03480, internal_6d03480, public_6d03480);
extern "C" NAKED register_t __cdecl internal_6d03480()
{
    __asm
    {
        sub esp, 8
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        call dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_6d8d980
        call public_6d59ea0
        mov ecx, dword ptr ds : [public_6d8d984]
        cmp eax, ecx
        mov dword ptr ss : [esp+8], eax
        je public_6d034c4
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6d034c4
        lea eax, ss:[esp+8]
        jmp public_6d034cc
        public_6d034c4 : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_6d034cc : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_6d034ee
        mov edi, dword ptr ds : [eax+0x18]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6d034ee
        nop 
        lea esp, ss:[esp]
        public_6d034e0 : nop
        mov ecx, dword ptr ds : [esi+8]
        call public_6d04480
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6d034e0
        public_6d034ee : nop
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6d03480)
    }
}

#undef public_6d034c4
#undef public_6d034cc
#undef public_6d034e0
#undef public_6d034ee
