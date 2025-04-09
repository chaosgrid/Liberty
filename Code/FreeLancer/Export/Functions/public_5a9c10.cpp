#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a9c10);

PROC_DECLARE(0x5a9c10, internal_5a9c10, public_5a9c10);
/* CHUNK of public_5a81f0 */
extern "C" NAKED register_t __cdecl internal_5a9c10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_673344], eax
        mov byte ptr ds : [ecx+0x184], 1
        ret 4
        UNREACHABLE_TRAP(0x5a9c10)
    }
}
