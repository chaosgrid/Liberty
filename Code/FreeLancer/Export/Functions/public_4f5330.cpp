#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f4f50);
CLANG_FORWARD_PROC_SYMBOL(public_4f5330);

PROC_DECLARE(0x4f5330, internal_4f5330, public_4f5330);
extern "C" NAKED register_t __cdecl internal_4f5330()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        mov ecx, offset public_674bcc
        call public_4f4f50
        ret 
        UNREACHABLE_TRAP(0x4f5330)
    }
}
