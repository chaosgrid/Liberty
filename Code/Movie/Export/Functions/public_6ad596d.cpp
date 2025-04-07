#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad24de);
CLANG_FORWARD_PROC_SYMBOL(public_6ad24e7);
CLANG_FORWARD_PROC_SYMBOL(public_6ad596d);
CLANG_FORWARD_PROC_SYMBOL(public_6ad59d2);
CLANG_FORWARD_PROC_SYMBOL(public_6ad8780);
CLANG_FORWARD_PROC_SYMBOL(public_6ad87df);

#define public_6ad59ba _public_6ad59ba

PROC_DECLARE(0x6ad596d, internal_6ad596d, public_6ad596d);
extern "C" NAKED register_t __cdecl internal_6ad596d()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp esi, dword ptr ds : [public_6ae2580]
        jae public_6ad59ba
        mov ecx, esi
        mov eax, esi
        sar ecx, 5
        and eax, 0x1F
        mov ecx, dword ptr ds : [ecx*4+public_6ae2480]
        lea eax, ds:[eax+eax*8]
        test byte ptr ds : [ecx+eax*4+4], 1
        je public_6ad59ba
        push edi
        push esi
        call public_6ad8780
        push dword ptr ss : [esp+0x18]
        push dword ptr ss : [esp+0x18]
        push esi
        call public_6ad59d2
        push esi
        mov edi, eax
        call public_6ad87df
        add esp, 0x14
        mov eax, edi
        pop edi
        pop esi
        ret 
        public_6ad59ba : nop
        call public_6ad24de
        mov dword ptr ds : [eax], 9
        call public_6ad24e7
        and dword ptr ds : [eax], 0
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad596d)
    }
}

#undef public_6ad59ba
