#include "Alchemy-PCH.h"

PROC_DECLARE(0x620a070, internal_620a070, public_620a070);
extern "C" NAKED register_t __cdecl internal_620a070()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xB0]
        dec ecx
        mov dword ptr ds : [eax+0xB0], ecx
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x620a070)
    }
}
