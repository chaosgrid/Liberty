#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285d10);
CLANG_FORWARD_PROC_SYMBOL(public_62aa2a0);

PROC_DECLARE(0x62b0d30, internal_62b0d30, public_62b0d30);
extern "C" NAKED register_t __cdecl internal_62b0d30()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62aa2a0
        mov eax, dword ptr ds : [esi+0x230]
        lea ecx, ds:[esi+0x230]
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [esi+0x258]
        lea ecx, ds:[esi+0x258]
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ds : [esi+0x280]
        lea ecx, ds:[esi+0x280]
        call dword ptr ds : [eax+0x20]
        add esi, 0x1A4
        push esi
        call public_6285d10
        add esp, 4
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62b0d30)
    }
}
