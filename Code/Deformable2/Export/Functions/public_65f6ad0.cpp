#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f6ad0);

#define public_65f6ae0 _public_65f6ae0

PROC_DECLARE(0x65f6ad0, internal_65f6ad0, public_65f6ad0);
extern "C" NAKED register_t __cdecl internal_65f6ad0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        sub ecx, eax
        mov edx, 0xC
        nop 
        public_65f6ae0 : nop
        fld dword ptr ss : [esp+0xC]
        add eax, 4
        dec edx
        fmul dword ptr ds : [ecx+eax-4]
        fstp dword ptr ds : [eax-4]
        jne public_65f6ae0
        ret 
        UNREACHABLE_TRAP(0x65f6ad0)
    }
}

#undef public_65f6ae0
