#include "THORN-PCH.h"

PROC_DECLARE(0x6f2aa00, internal_6f2aa00, public_6f2aa00);
extern "C" NAKED register_t __cdecl internal_6f2aa00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0xC], eax
        ret 4
        UNREACHABLE_TRAP(0x6f2aa00)
    }
}
