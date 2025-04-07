#include "THORN-PCH.h"

PROC_DECLARE(0x6f39450, internal_6f39450, public_6f39450);
extern "C" NAKED register_t __cdecl internal_6f39450()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x58]
        UNREACHABLE_TRAP(0x6f39450)
    }
}
