#include "Content-PCH.h"

PROC_DECLARE(0x6f27950, internal_6f27950, public_6f27950);
extern "C" NAKED register_t __cdecl internal_6f27950()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [esi+0x118]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f27950)
    }
}
