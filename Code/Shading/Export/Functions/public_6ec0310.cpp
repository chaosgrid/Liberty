#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec0310);

#define public_6ec0323 _public_6ec0323

PROC_DECLARE(0x6ec0310, internal_6ec0310, public_6ec0310);
extern "C" NAKED register_t __cdecl internal_6ec0310()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xC]
        push esi
        movzx esi, byte ptr ds : [ecx+0x1C]
        mov eax, edx
        shr eax, 2
        cmp eax, esi
        jae public_6ec0323
        mov eax, esi
        public_6ec0323 : nop
        shr dword ptr ds : [ecx+0x14], 1
        shr dword ptr ds : [ecx+0x18], 1
        add dword ptr ds : [ecx+0x10], edx
        mov dword ptr ds : [ecx+0xC], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ec0310)
    }
}

#undef public_6ec0323
