#include "Common-PCH.h"

PROC_DECLARE(0x63078b0, internal_63078b0, public_63078b0);
extern "C" NAKED register_t __cdecl internal_63078b0()
{
    __asm
    {
        sub esp, 0x30
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        push esi
        mov esi, dword ptr ss : [esp+0x40]
        push edi
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0xC], edx
        mov ecx, 9
        lea edi, ss:[esp+0x14]
        rep movsd
        mov ecx, 0xC
        lea esi, ss:[esp+8]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x63078b0)
    }
}
