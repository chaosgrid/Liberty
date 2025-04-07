#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b45850);

PROC_DECLARE(0x6b45850, internal_6b45850, public_6b45850);
extern "C" NAKED register_t __cdecl internal_6b45850()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        or byte ptr ds : [ecx+0x20], 0x20
        mov dword ptr ds : [ecx+0x54], eax
        ret 4
        UNREACHABLE_TRAP(0x6b45850)
    }
}
