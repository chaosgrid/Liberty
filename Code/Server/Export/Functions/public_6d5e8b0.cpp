#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d447b0);

PROC_DECLARE(0x6d5e8b0, internal_6d5e8b0, public_6d5e8b0);
extern "C" NAKED register_t __cdecl internal_6d5e8b0()
{
    __asm
    {
        call public_6d447b0
        mov eax, dword ptr ss : [esp+4]
        fstp qword ptr ds : [eax]
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d5e8b0)
    }
}
