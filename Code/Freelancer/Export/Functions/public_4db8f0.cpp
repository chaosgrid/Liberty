#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4be390);
CLANG_FORWARD_PROC_SYMBOL(public_4db930);

#define public_4db925 _public_4db925

PROC_DECLARE(0x4db8f0, internal_4db8f0, public_4db8f0);
extern "C" NAKED register_t __cdecl internal_4db8f0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp dword ptr ds : [edi], 0xFFFFFFFF
        mov esi, ecx
        jne public_4db925
        call public_4be390
        mov ecx, dword ptr ds : [public_5c6368]
        xor eax, eax
        mov ax, word ptr ds : [esi+0x37C]
        cmp ax, word ptr ds : [ecx]
        je public_4db925
        cmp dword ptr ds : [edi+4], 2
        jne public_4db925
        push eax
        lea ecx, ds:[esi-0x38]
        call public_4db930
        public_4db925 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4db8f0)
    }
}

#undef public_4db925
