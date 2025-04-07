#include "Alchemy-PCH.h"

PROC_DECLARE(0x62099f0, internal_62099f0, public_62099f0);
extern "C" NAKED register_t __cdecl internal_62099f0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        push esi
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [ecx+edx*8+4]
        xor edx, edx
        mov ecx, eax
        mov dword ptr ss : [esp+8], edx
        shr ecx, 0x10
        and ecx, 0xFF
        mov esi, eax
        mov dword ptr ss : [esp+4], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        fild qword ptr ss : [esp+4]
        shr esi, 8
        and esi, 0xFF
        mov dword ptr ss : [esp+8], edx
        fmul dword ptr ds : [public_624bc98]
        mov dword ptr ss : [esp+4], esi
        and eax, 0xFF
        pop esi
        fstp dword ptr ds : [ecx]
        fild qword ptr ss : [esp]
        mov dword ptr ss : [esp], eax
        mov dword ptr ss : [esp+4], edx
        xor eax, eax
        fmul dword ptr ds : [public_624bc98]
        fstp dword ptr ds : [ecx+4]
        fild qword ptr ss : [esp]
        fmul dword ptr ds : [public_624bc98]
        fstp dword ptr ds : [ecx+8]
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x62099f0)
    }
}
