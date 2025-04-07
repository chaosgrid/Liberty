#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63327f0);

PROC_DECLARE(0x6332bb0, internal_6332bb0, public_6332bb0);
extern "C" NAKED register_t __cdecl internal_6332bb0()
{
    __asm
    {
        sub esp, 0x18
        fld dword ptr ss : [esp+0x20]
        push esi
        fsub qword ptr ds : [public_639c9f0]
        push ecx
        lea eax, ss:[esp+0x14]
        mov esi, ecx
        fstp dword ptr ss : [esp]
        push eax
        call public_63327f0
        fld dword ptr ss : [esp+0x24]
        fadd qword ptr ds : [public_639c9f0]
        push ecx
        lea ecx, ss:[esp+8]
        fstp dword ptr ss : [esp]
        push ecx
        mov ecx, esi
        call public_63327f0
        fld dword ptr ss : [esp+4]
        fsub dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+8]
        mov edx, eax
        fsub dword ptr ss : [esp+0x14]
        pop esi
        fld dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+0x14]
        fst dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fstp dword ptr ss : [esp+0x20]
        fxch 
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ds : [edx], ecx
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        mov dword ptr ds : [edx+4], ecx
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx+8], ecx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6332bb0)
    }
}
