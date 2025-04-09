#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4102c0);
CLANG_FORWARD_PROC_SYMBOL(public_557170);
CLANG_FORWARD_PROC_SYMBOL(public_5572b0);

PROC_DECLARE(0x5572b0, internal_5572b0, public_5572b0);
extern "C" NAKED register_t __cdecl internal_5572b0()
{
    __asm
    {
        sub esp, 0x204
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ss : [esp+0x210]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x90]
        fld dword ptr ds : [public_5e129c]
        lea ecx, ss:[esp]
        push ecx
        lea edx, ss:[esp+0x108]
        push edx
        mov edx, dword ptr ss : [esp+0x21C]
        lea ecx, ss:[esp+0xC]
        push ecx
        push 4
        push edx
        mov edx, dword ptr ds : [eax]
        sub esp, 0x10
        mov ecx, esp
        fstp dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x22C]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [esp+0x230]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x2C], 0x40
        call public_557170
        mov eax, dword ptr ss : [esp+0x244]
        mov ecx, dword ptr ss : [esp+0x2C]
        push 0
        push eax
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        call public_4102c0
        add esp, 0x240
        ret 
        UNREACHABLE_TRAP(0x5572b0)
    }
}
