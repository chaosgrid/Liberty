#include "Common-PCH.h"

PROC_DECLARE(0x63333a0, internal_63333a0, public_63333a0);
extern "C" NAKED register_t __cdecl internal_63333a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+4], ecx
        mov eax, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], offset public_63a49cc
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x63333a0)
    }
}
