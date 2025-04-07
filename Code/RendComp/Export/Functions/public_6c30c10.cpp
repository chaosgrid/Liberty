#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c31160);

#define public_6c30c21 _public_6c30c21

PROC_DECLARE(0x6c30c10, internal_6c30c10, public_6c30c10);
extern "C" NAKED register_t __cdecl internal_6c30c10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        jge public_6c30c21
        or eax, 0xFFFFFFFF
        ret 8
        public_6c30c21 : nop
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        lea ecx, ds:[eax-4]
        call public_6c31160
        neg al
        sbb eax, eax
        and eax, 8
        add eax, 0xFFFFFFF8
        ret 8
        UNREACHABLE_TRAP(0x6c30c10)
    }
}

#undef public_6c30c21
