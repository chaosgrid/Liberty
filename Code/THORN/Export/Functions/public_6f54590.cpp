#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52920);
CLANG_FORWARD_PROC_SYMBOL(public_6f53530);
CLANG_FORWARD_PROC_SYMBOL(public_6f53a80);
CLANG_FORWARD_PROC_SYMBOL(public_6f54590);

#define public_6f545b9 _public_6f545b9
#define public_6f545e5 _public_6f545e5
#define public_6f545f9 _public_6f545f9

PROC_DECLARE(0x6f54590, internal_6f54590, public_6f54590);
extern "C" NAKED register_t __cdecl internal_6f54590()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        lea eax, ss:[esp+8]
        push eax
        push esi
        call public_6f53a80
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edi], 1
        mov eax, dword ptr ds : [esi+4]
        add esp, 8
        cmp eax, 0x2C
        jne public_6f545e5
        public_6f545b9 : nop
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+8]
        push ecx
        inc eax
        push esi
        mov dword ptr ds : [edi], eax
        call public_6f53530
        push esi
        call public_6f52920
        lea edx, ss:[esp+0x14]
        push edx
        push esi
        call public_6f53a80
        mov eax, dword ptr ds : [esi+4]
        add esp, 0x14
        cmp eax, 0x2C
        je public_6f545b9
        public_6f545e5 : nop
        cmp dword ptr ss : [esp+8], 4
        jne public_6f545f9
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi+4], eax
        pop edi
        pop esi
        add esp, 8
        ret 
        public_6f545f9 : nop
        lea ecx, ss:[esp+8]
        push ecx
        push esi
        call public_6f53530
        add esp, 8
        mov dword ptr ds : [edi+4], 0
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f54590)
    }
}

#undef public_6f545b9
#undef public_6f545e5
#undef public_6f545f9
