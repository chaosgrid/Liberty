#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d455cc);
CLANG_FORWARD_PROC_SYMBOL(public_6d4570a);

#define public_6d45734 _public_6d45734
#define public_6d45749 _public_6d45749
#define public_6d45763 _public_6d45763
#define public_6d45778 _public_6d45778
#define public_6d45789 _public_6d45789

PROC_DECLARE(0x6d4570a, internal_6d4570a, public_6d4570a);
extern "C" NAKED register_t __cdecl internal_6d4570a()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, dword ptr ss : [ebp+8]
        lea eax, ds:[esi+8]
        push eax
        push edi
        call public_6d455cc
        test eax, eax
        pop ecx
        pop ecx
        jl public_6d45789
        mov ecx, dword ptr ds : [esi]
        fld dword ptr ds : [public_6d5f620]
        push 8
        pop edx
        lea eax, ds:[edi+0xC]
        push ebx
        public_6d45734 : nop
        mov ebx, ecx
        and ebx, 0xF
        test ebx, ebx
        mov dword ptr ss : [ebp+0xC], ebx
        fild dword ptr ss : [ebp+0xC]
        jge public_6d45749
        fadd dword ptr ds : [public_6d5f200]
        public_6d45749 : nop
        fmul st, st(1)
        shr ecx, 4
        fstp dword ptr ds : [eax]
        add eax, 0x10
        dec edx
        jne public_6d45734
        mov esi, dword ptr ds : [esi+4]
        push 8
        pop ecx
        lea eax, ds:[edi+0x8C]
        pop ebx
        public_6d45763 : nop
        mov edx, esi
        and edx, 0xF
        test edx, edx
        mov dword ptr ss : [ebp+0xC], edx
        fild dword ptr ss : [ebp+0xC]
        jge public_6d45778
        fadd dword ptr ds : [public_6d5f200]
        public_6d45778 : nop
        fmul st, st(1)
        shr esi, 4
        fstp dword ptr ds : [eax]
        add eax, 0x10
        dec ecx
        jne public_6d45763
        fstp st(0)
        xor eax, eax
        public_6d45789 : nop
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d4570a)
    }
}

#undef public_6d45734
#undef public_6d45749
#undef public_6d45763
#undef public_6d45778
#undef public_6d45789
