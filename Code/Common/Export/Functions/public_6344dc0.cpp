#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344dc0);
CLANG_FORWARD_PROC_SYMBOL(public_63450e0);

#define public_6344dd1 _public_6344dd1

PROC_DECLARE(0x6344dc0, internal_6344dc0, public_6344dc0);
extern "C" NAKED register_t __cdecl internal_6344dc0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x98]
        cmp byte ptr ds : [eax+0x60], 8
        jne public_6344dd1
        jmp public_63450e0
        public_6344dd1 : nop
        ret 
        UNREACHABLE_TRAP(0x6344dc0)
    }
}

#undef public_6344dd1
