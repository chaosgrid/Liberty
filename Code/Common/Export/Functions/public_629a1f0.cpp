#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6293380);
CLANG_FORWARD_PROC_SYMBOL(public_629a1f0);

#define public_629a1f8 _public_629a1f8

PROC_DECLARE(0x629a1f0, internal_629a1f0, public_629a1f0);
extern "C" NAKED register_t __cdecl internal_629a1f0()
{
    __asm
    {
        lea eax, ds:[ecx+0x54]
        mov edx, 8
        public_629a1f8 : nop
        mov dword ptr ds : [eax], 0xFFFFFFFF
        add eax, 0x34
        dec edx
        jne public_629a1f8
        jmp public_6293380
        UNREACHABLE_TRAP(0x629a1f0)
    }
}

#undef public_629a1f8
