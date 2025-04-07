#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401cb0);

#define public_40d89a _public_40d89a

PROC_DECLARE(0x40d880, internal_40d880, public_40d880);
extern "C" NAKED register_t __cdecl internal_40d880()
{
    __asm
    {
        mov eax, dword ptr ds : [public_427828]
        mov cl, byte ptr ds : [eax+0xA78]
        test cl, cl
        je public_40d89a
        lea ecx, ds:[eax+0xCC]
        jmp public_401cb0
        public_40d89a : nop
        ret 8
        UNREACHABLE_TRAP(0x40d880)
    }
}

#undef public_40d89a
