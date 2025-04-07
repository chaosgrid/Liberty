#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_63074a9 _public_63074a9

PROC_DECLARE(0x6307490, internal_6307490, public_6307490);
extern "C" NAKED register_t __cdecl internal_6307490()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fceb8]
        sub esp, 0x18
        test eax, eax
        push esi
        mov esi, ecx
        jne public_63074a9
        call public_6391cf0
        mov dword ptr ds : [public_63fceb8], eax
        public_63074a9 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ds:[esi+0xC]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, eax
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+4]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+4], edx
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+8], edx
        pop esi
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6307490)
    }
}

#undef public_63074a9
