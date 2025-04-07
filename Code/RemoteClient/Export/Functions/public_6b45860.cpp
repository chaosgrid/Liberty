#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b45860);

PROC_DECLARE(0x6b45860, internal_6b45860, public_6b45860);
extern "C" NAKED register_t __cdecl internal_6b45860()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        or byte ptr ds : [ecx+0x20], 1
        mov dword ptr ds : [ecx+0x34], eax
        ret 4
        UNREACHABLE_TRAP(0x6b45860)
    }
}
