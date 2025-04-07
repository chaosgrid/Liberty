#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d20f0);

PROC_DECLARE(0x62c60a0, internal_62c60a0, public_62c60a0);
extern "C" NAKED register_t __cdecl internal_62c60a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xA4]
        lea ecx, ds:[esi+0xA4]
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi+0x2C]
        lea ecx, ds:[esi+0x2C]
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [esi+0x164]
        lea ecx, ds:[esi+0x164]
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi+0x178]
        lea ecx, ds:[esi+0x178]
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [esi+0x258]
        lea ecx, ds:[esi+0x258]
        call dword ptr ds : [eax+0x10]
        mov ecx, esi
        pop esi
        jmp public_62d20f0
        UNREACHABLE_TRAP(0x62c60a0)
    }
}
