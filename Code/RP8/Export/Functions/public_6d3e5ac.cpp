#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3c5ce);

#define public_6d3e626 _public_6d3e626
#define public_6d3e640 _public_6d3e640

PROC_DECLARE(0x6d3e5ac, internal_6d3e5ac, public_6d3e5ac);
extern "C" NAKED register_t __cdecl internal_6d3e5ac()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [ecx+8]
        push esi
        fld dword ptr ds : [ecx+4]
        mov esi, dword ptr ss : [ebp+8]
        fld dword ptr ds : [ecx]
        lea eax, ds:[esi+0xC]
        fld st(0)
        mov dword ptr ss : [ebp+8], eax
        fmul st, st(1)
        lea eax, ss:[ebp+0xC]
        fld st(2)
        mov dword ptr ss : [ebp-8], eax
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fstp dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-8]
        mov edx, dword ptr ss : [ebp+8]
        fld dword ptr ss : [ebp-4]
        fsincos 
        fstp dword ptr ds : [edx]
        fstp dword ptr ds : [eax]
        fldz 
        push ecx
        push ecx
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp+0xC]
        fstp dword ptr ss : [esp]
        call public_6d3c5ce
        add esp, 8
        test eax, eax
        je public_6d3e626
        cmp esi, ecx
        je public_6d3e640
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], eax
        jmp public_6d3e640
        public_6d3e626 : nop
        fld dword ptr ss : [ebp+0xC]
        fdiv dword ptr ss : [ebp-4]
        fld st(0)
        fmul dword ptr ds : [ecx]
        fstp dword ptr ds : [esi]
        fld st(0)
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ds : [esi+4]
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ds : [esi+8]
        public_6d3e640 : nop
        mov eax, esi
        pop esi
        leave 
        ret 8
        UNREACHABLE_TRAP(0x6d3e5ac)
    }
}

#undef public_6d3e626
#undef public_6d3e640
