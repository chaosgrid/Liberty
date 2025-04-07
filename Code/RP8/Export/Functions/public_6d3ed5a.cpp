#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3c5ce);

#define public_6d3eda7 _public_6d3eda7
#define public_6d3edae _public_6d3edae
#define public_6d3ede6 _public_6d3ede6
#define public_6d3edf4 _public_6d3edf4

PROC_DECLARE(0x6d3ed5a, internal_6d3ed5a, public_6d3ed5a);
extern "C" NAKED register_t __cdecl internal_6d3ed5a()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [esi+8]
        push edi
        fld dword ptr ds : [esi+4]
        push ecx
        fld dword ptr ds : [esi]
        push ecx
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp dword ptr ss : [ebp+0xC]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld1 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp+0xC]
        fstp dword ptr ss : [esp]
        call public_6d3c5ce
        add esp, 8
        test eax, eax
        je public_6d3edae
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, esi
        je public_6d3edf4
        public_6d3eda7 : nop
        mov edi, eax
        movsd 
        movsd 
        movsd 
        jmp public_6d3edf4
        public_6d3edae : nop
        fld dword ptr ss : [ebp+0xC]
        fcomp dword ptr ds : [public_6d5f8ec]
        fnstsw ax
        test ah, 0x41
        mov eax, dword ptr ss : [ebp+8]
        jne public_6d3ede6
        fld dword ptr ss : [ebp+0xC]
        fsqrt 
        fdivr dword ptr ds : [public_6d5e488]
        fld st(0)
        fmul dword ptr ds : [esi]
        fstp dword ptr ss : [ebp-0xC]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ss : [ebp-8]
        fmul dword ptr ds : [esi+8]
        lea esi, ss:[ebp-0xC]
        fstp dword ptr ss : [ebp-4]
        jmp public_6d3eda7
        public_6d3ede6 : nop
        fldz 
        fstp dword ptr ds : [eax]
        fldz 
        fstp dword ptr ds : [eax+4]
        fldz 
        fstp dword ptr ds : [eax+8]
        public_6d3edf4 : nop
        pop edi
        pop esi
        leave 
        ret 8
        UNREACHABLE_TRAP(0x6d3ed5a)
    }
}

#undef public_6d3eda7
#undef public_6d3edae
#undef public_6d3ede6
#undef public_6d3edf4
