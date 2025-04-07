#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346980);
CLANG_FORWARD_PROC_SYMBOL(public_6346a50);

#define public_63469d9 _public_63469d9

PROC_DECLARE(0x6346980, internal_6346980, public_6346980);
extern "C" NAKED register_t __cdecl internal_6346980()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x60]
        shl eax, 0x18
        sub esp, 0x10
        cmp eax, 0x2000000
        jl public_63469d9
        fld dword ptr ds : [ecx+0x24]
        mov eax, dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [public_63a5464]
        push ecx
        lea edx, ss:[esp+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0x28]
        fadd dword ptr ds : [public_63a5464]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+0x2C]
        fadd dword ptr ds : [public_63a5464]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx+0x44]
        fadd dword ptr ds : [public_63a5464]
        fstp dword ptr ss : [esp]
        push edx
        push eax
        call public_6346a50
        add esp, 0x10
        ret 4
        public_63469d9 : nop
        mov edx, dword ptr ds : [ecx+0x44]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ds:[ecx+0x24]
        push eax
        push edx
        call public_6346a50
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6346980)
    }
}

#undef public_63469d9
