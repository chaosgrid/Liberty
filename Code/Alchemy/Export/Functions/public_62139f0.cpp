#include "Alchemy-PCH.h"

PROC_DECLARE(0x62139f0, internal_62139f0, public_62139f0);
extern "C" NAKED register_t __cdecl internal_62139f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x80]
        mov dword ptr ss : [esp+4], eax
        mov ecx, dword ptr ds : [eax]
        jmp dword ptr ds : [ecx+0x14]
        UNREACHABLE_TRAP(0x62139f0)
    }
}
