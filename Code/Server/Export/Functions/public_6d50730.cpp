#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d50730);

PROC_DECLARE(0x6d50730, internal_6d50730, public_6d50730);
extern "C" NAKED register_t __cdecl internal_6d50730()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x39C], edx
        ret 8
        UNREACHABLE_TRAP(0x6d50730)
    }
}
