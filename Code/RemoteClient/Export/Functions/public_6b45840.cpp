#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b45840);

PROC_DECLARE(0x6b45840, internal_6b45840, public_6b45840);
extern "C" NAKED register_t __cdecl internal_6b45840()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        or byte ptr ds : [ecx+0x20], 4
        mov dword ptr ds : [ecx+0x24], eax
        ret 4
        UNREACHABLE_TRAP(0x6b45840)
    }
}
