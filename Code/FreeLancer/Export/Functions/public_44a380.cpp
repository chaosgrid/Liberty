#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44a380);

PROC_DECLARE(0x44a380, internal_44a380, public_44a380);
extern "C" NAKED register_t __cdecl internal_44a380()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x818]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+eax*4+0x618], edx
        inc dword ptr ds : [ecx+0x818]
        ret 4
        UNREACHABLE_TRAP(0x44a380)
    }
}
