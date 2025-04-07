#include "Alchemy-PCH.h"

PROC_DECLARE(0x6213340, internal_6213340, public_6213340);
extern "C" NAKED register_t __cdecl internal_6213340()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xE0]
        inc ecx
        mov dword ptr ds : [eax+0xE0], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6213340)
    }
}
