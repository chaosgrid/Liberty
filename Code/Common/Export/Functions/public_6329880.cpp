#include "Common-PCH.h"

PROC_DECLARE(0x6329880, internal_6329880, public_6329880);
extern "C" NAKED register_t __cdecl internal_6329880()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], 0
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [edi]
        lea eax, ds:[esi+0xC]
        push eax
        add esi, 8
        push esi
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6329880)
    }
}
