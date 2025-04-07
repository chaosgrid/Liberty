#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b45830);

PROC_DECLARE(0x6b45830, internal_6b45830, public_6b45830);
extern "C" NAKED register_t __cdecl internal_6b45830()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        or byte ptr ds : [ecx+0x20], 8
        mov dword ptr ds : [ecx+0x28], eax
        ret 4
        UNREACHABLE_TRAP(0x6b45830)
    }
}
