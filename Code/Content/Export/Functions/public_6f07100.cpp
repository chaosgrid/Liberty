#include "Content-PCH.h"

PROC_DECLARE(0x6f07100, internal_6f07100, public_6f07100);
extern "C" NAKED register_t __cdecl internal_6f07100()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+4], eax
        ret 4
        UNREACHABLE_TRAP(0x6f07100)
    }
}
