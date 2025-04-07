#include "Alchemy-PCH.h"

PROC_DECLARE(0x620e010, internal_620e010, public_620e010);
extern "C" NAKED register_t __cdecl internal_620e010()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x20], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x620e010)
    }
}
