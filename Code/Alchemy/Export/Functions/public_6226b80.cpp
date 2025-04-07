#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6226b80);

#define public_6226b9f _public_6226b9f

PROC_DECLARE(0x6226b80, internal_6226b80, public_6226b80);
extern "C" NAKED register_t __cdecl internal_6226b80()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1FC112
        jne public_6226b9f
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov cl, byte ptr ds : [eax+0x84]
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_6226b9f : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6226b80)
    }
}

#undef public_6226b9f
