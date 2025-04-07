#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ac2e0);

PROC_DECLARE(0x62ac2e0, internal_62ac2e0, public_62ac2e0);
extern "C" NAKED register_t __cdecl internal_62ac2e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x190], eax
        ret 4
        UNREACHABLE_TRAP(0x62ac2e0)
    }
}
