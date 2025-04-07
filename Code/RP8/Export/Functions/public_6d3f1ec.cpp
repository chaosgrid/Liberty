#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3c5ce);

#define public_6d3f244 _public_6d3f244
#define public_6d3f24c _public_6d3f24c
#define public_6d3f28c _public_6d3f28c
#define public_6d3f29f _public_6d3f29f

PROC_DECLARE(0x6d3f1ec, internal_6d3f1ec, public_6d3f1ec);
extern "C" NAKED register_t __cdecl internal_6d3f1ec()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [esi+0xC]
        push edi
        fld dword ptr ds : [esi+8]
        push ecx
        fld dword ptr ds : [esi+4]
        push ecx
        fld dword ptr ds : [esi]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fstp dword ptr ss : [ebp+0xC]
        fstp st(0)
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
        je public_6d3f24c
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, esi
        je public_6d3f29f
        public_6d3f244 : nop
        mov edi, eax
        movsd 
        movsd 
        movsd 
        movsd 
        jmp public_6d3f29f
        public_6d3f24c : nop
        fld dword ptr ss : [ebp+0xC]
        fcomp dword ptr ds : [public_6d5f8ec]
        fnstsw ax
        test ah, 0x41
        mov eax, dword ptr ss : [ebp+8]
        jne public_6d3f28c
        fld dword ptr ss : [ebp+0xC]
        fsqrt 
        fdivr dword ptr ds : [public_6d5e488]
        fld st(0)
        fmul dword ptr ds : [esi]
        fstp dword ptr ss : [ebp-0x10]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ss : [ebp-0xC]
        fld st(0)
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ss : [ebp-8]
        fmul dword ptr ds : [esi+0xC]
        lea esi, ss:[ebp-0x10]
        fstp dword ptr ss : [ebp-4]
        jmp public_6d3f244
        public_6d3f28c : nop
        fldz 
        fstp dword ptr ds : [eax]
        fldz 
        fstp dword ptr ds : [eax+4]
        fldz 
        fstp dword ptr ds : [eax+8]
        fldz 
        fstp dword ptr ds : [eax+0xC]
        public_6d3f29f : nop
        pop edi
        pop esi
        leave 
        ret 8
        UNREACHABLE_TRAP(0x6d3f1ec)
    }
}

#undef public_6d3f244
#undef public_6d3f24c
#undef public_6d3f28c
#undef public_6d3f29f
