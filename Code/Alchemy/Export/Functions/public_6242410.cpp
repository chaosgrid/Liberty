#include "Alchemy-PCH.h"

PROC_DECLARE(0x6242410, internal_6242410, public_6242410);
extern "C" NAKED register_t __cdecl internal_6242410()
{
    __asm
    {
        sub esp, 0x14
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x20]
        mov ecx, eax
        mov edx, eax
        shr ecx, 0x10
        and ecx, 0xFF
        mov dword ptr ss : [esp], ecx
        xor ecx, ecx
        mov dword ptr ss : [esp+4], ecx
        fild qword ptr ss : [esp]
        shr edx, 8
        and edx, 0xFF
        mov dword ptr ss : [esp+4], ecx
        fmul dword ptr ds : [public_624bc98]
        mov dword ptr ss : [esp], edx
        and eax, 0xFF
        fstp dword ptr ss : [esp+8]
        fild qword ptr ss : [esp]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+4], ecx
        fmul dword ptr ds : [public_624bc98]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+0xC]
        fild qword ptr ss : [esp]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+4], edx
        fmul dword ptr ds : [public_624bc98]
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x6242410)
    }
}
