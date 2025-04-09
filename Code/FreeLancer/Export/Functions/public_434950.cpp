#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41b030);
CLANG_FORWARD_PROC_SYMBOL(public_434950);

#define public_434960 _public_434960
#define public_434990 _public_434990
#define public_434996 _public_434996

PROC_DECLARE(0x434950, internal_434950, public_434950);
extern "C" NAKED register_t __cdecl internal_434950()
{
    __asm
    {
        mov eax, dword ptr ds : [public_668650]
        push esi
        xor esi, esi
        test eax, eax
        jle public_434990
        lea esp, ss:[esp]
        public_434960 : nop
        lea eax, ds : [esi*4+public_668250]
        push eax
        call public_41b030
        mov ecx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi*4+public_667e50]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        push ecx
        push eax
        call dword ptr ds : [edx+0x3C]
        mov eax, dword ptr ds : [public_668650]
        inc esi
        cmp esi, eax
        jl public_434960
        public_434990 : nop
        xor eax, eax
        or ecx, 0xFFFFFFFF
        pop esi
        public_434996 : nop
        mov dword ptr ds : [eax+public_667e50], ecx
        mov dword ptr ds : [eax+public_668250], 0
        add eax, 4
        cmp eax, 0x400
        jl public_434996
        mov dword ptr ds : [public_668650], 0
        ret 
        UNREACHABLE_TRAP(0x434950)
    }
}

#undef public_434960
#undef public_434990
#undef public_434996
