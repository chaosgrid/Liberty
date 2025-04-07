#include "EngBase-PCH.h"

PROC_DECLARE(0x6616400, internal_6616400, public_6616400);
extern "C" NAKED register_t __cdecl internal_6616400()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+4], edx
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x34]
        UNREACHABLE_TRAP(0x6616400)
    }
}
