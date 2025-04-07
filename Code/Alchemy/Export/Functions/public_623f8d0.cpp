#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_623f8d0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_623f8f8 _public_623f8f8

PROC_DECLARE(0x623f8d0, internal_623f8d0, public_623f8d0);
extern "C" NAKED register_t __cdecl internal_623f8d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, dword ptr ds : [esi+0x24]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [esi+0x34]
        xor edi, edi
        cmp eax, edi
        je public_623f8f8
        mov eax, dword ptr ds : [esi+0x38]
        cmp eax, edi
        je public_623f8f8
        push eax
        call public_62460e0
        add esp, 4
        public_623f8f8 : nop
        mov eax, edi
        mov dword ptr ds : [esi+0x38], edi
        push eax
        mov dword ptr ds : [esi+0x34], edi
        mov dword ptr ds : [esi+0x40], edi
        mov dword ptr ds : [esi+0x3C], edi
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [esi+0x2C], eax
        xor eax, eax
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x623f8d0)
    }
}

#undef public_623f8f8
