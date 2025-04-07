#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3ed50);

PROC_DECLARE(0x6f3ed50, internal_6f3ed50, public_6f3ed50);
extern "C" NAKED register_t __cdecl internal_6f3ed50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [eax+ecx], 0
        ret 4
        UNREACHABLE_TRAP(0x6f3ed50)
    }
}
