#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402330);

PROC_DECLARE(0x402330, internal_402330, public_402330);
extern "C" NAKED register_t __cdecl internal_402330()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x9A4], eax
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x402330)
    }
}
