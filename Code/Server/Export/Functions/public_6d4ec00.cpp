#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4ec00);

PROC_DECLARE(0x6d4ec00, internal_6d4ec00, public_6d4ec00);
extern "C" NAKED register_t __cdecl internal_6d4ec00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x284]
        ret 
        UNREACHABLE_TRAP(0x6d4ec00)
    }
}
