#include "Common-PCH.h"

PROC_DECLARE(0x63113d0, internal_63113d0, public_63113d0);
extern "C" NAKED register_t __cdecl internal_63113d0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        lea edi, ds:[eax+8]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x63113d0)
    }
}
