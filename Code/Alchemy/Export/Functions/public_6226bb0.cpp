#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6226bb0);

#define public_6226bcd _public_6226bcd

PROC_DECLARE(0x6226bb0, internal_6226bb0, public_6226bb0);
extern "C" NAKED register_t __cdecl internal_6226bb0()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1FC112
        jne public_6226bcd
        mov eax, dword ptr ss : [esp+4]
        mov cl, byte ptr ss : [esp+0xC]
        mov byte ptr ds : [eax+0x84], cl
        xor eax, eax
        ret 0xC
        public_6226bcd : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6226bb0)
    }
}

#undef public_6226bcd
