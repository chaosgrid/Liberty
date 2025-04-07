#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285cb0);
CLANG_FORWARD_PROC_SYMBOL(public_62aa250);

PROC_DECLARE(0x62b0d80, internal_62b0d80, public_62b0d80);
extern "C" NAKED register_t __cdecl internal_62b0d80()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62aa250
        mov eax, dword ptr ds : [esi+0x230]
        lea ecx, ds:[esi+0x230]
        call dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ds : [esi+0x258]
        lea ecx, ds:[esi+0x258]
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ds : [esi+0x280]
        lea ecx, ds:[esi+0x280]
        call dword ptr ds : [eax+0x1C]
        push esi
        add esi, 0x1A4
        push esi
        call public_6285cb0
        add esp, 8
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62b0d80)
    }
}
