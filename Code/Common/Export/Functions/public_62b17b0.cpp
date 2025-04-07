#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b17b0);

PROC_DECLARE(0x62b17b0, internal_62b17b0, public_62b17b0);
extern "C" NAKED register_t __cdecl internal_62b17b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x2B8], eax
        ret 4
        UNREACHABLE_TRAP(0x62b17b0)
    }
}
