#include "FLServer-PCH.h"

PROC_DECLARE(0x40cd90, internal_40cd90, public_40cd90);
extern "C" NAKED register_t __cdecl internal_40cd90()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], 0
        jmp dword ptr ds : [eax]
        UNREACHABLE_TRAP(0x40cd90)
    }
}
