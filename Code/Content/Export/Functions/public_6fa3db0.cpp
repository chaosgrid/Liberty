#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);

#define public_6fa3dba _public_6fa3dba

PROC_DECLARE(0x6fa3db0, internal_6fa3db0, public_6fa3db0);
extern "C" NAKED register_t __cdecl internal_6fa3db0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6fa3dba
        xor eax, eax
        ret 
        public_6fa3dba : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x6fa3db0)
    }
}

#undef public_6fa3dba
