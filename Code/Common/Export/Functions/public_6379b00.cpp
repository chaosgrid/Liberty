#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6379b00);

PROC_DECLARE(0x6379b00, internal_6379b00, public_6379b00);
extern "C" NAKED register_t __cdecl internal_6379b00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6379b00)
    }
}
