#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57b0a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_599ef1 _public_599ef1

PROC_DECLARE(0x599eb0, internal_599eb0, public_599eb0);
extern "C" NAKED register_t __cdecl internal_599eb0()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ds : [public_67dbc0]
        test eax, eax
        push esi
        mov esi, ecx
        fld dword ptr ds : [esi+0x49C]
        mov dword ptr ss : [esp+0xC], 0
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0x4A0]
        fmul dword ptr ds : [public_5cef60]
        fstp dword ptr ss : [esp+8]
        jne public_599ef1
        call public_5b73e0
        mov dword ptr ds : [public_67dbc0], eax
        public_599ef1 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+4]
        push edx
        lea edx, ds:[esi+0x3C]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [eax]
        push eax
        fld dword ptr ss : [esp+0x18]
        mov ecx, esi
        fadd dword ptr ds : [eax+4]
        fld dword ptr ds : [public_5c7500]
        fdiv dword ptr ds : [eax+8]
        fxch st(2)
        fmul st, st(2)
        fsub dword ptr ds : [eax]
        fstp dword ptr ds : [esi+0xA8]
        fmul st, st(1)
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ds : [esi+0xAC]
        fstp st(0)
        fld dword ptr ds : [public_5c7500]
        fsub dword ptr ds : [eax+8]
        fstp dword ptr ds : [esi+0xB0]
        call public_57b0a0
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x599eb0)
    }
}

#undef public_599ef1
