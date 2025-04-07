#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4443b);
CLANG_FORWARD_PROC_SYMBOL(public_6d44dc8);
CLANG_FORWARD_PROC_SYMBOL(public_6d458e1);

#define public_6d4590f _public_6d4590f
#define public_6d4595f _public_6d4595f
#define public_6d45983 _public_6d45983
#define public_6d4599d _public_6d4599d
#define public_6d459c2 _public_6d459c2
#define public_6d459c4 _public_6d459c4

PROC_DECLARE(0x6d458e1, internal_6d458e1, public_6d458e1);
extern "C" NAKED register_t __cdecl internal_6d458e1()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x50
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        push edi
        push 0x10
        xor edx, edx
        pop ecx
        xor eax, eax
        lea edi, ss:[ebp-0x50]
        mov dword ptr ds : [ebx], edx
        mov dword ptr ds : [ebx+4], edx
        rep stosd
        call public_6d4443b
        mov eax, dword ptr ss : [ebp+0xC]
        add eax, 0xC
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp-4], eax
        public_6d4590f : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp-4]
        mov ecx, eax
        shl ecx, 2
        fld dword ptr ss : [ebp+ecx-0x50]
        fadd dword ptr ds : [edx]
        fst dword ptr ss : [ebp-8]
        fmul dword ptr ds : [public_6d5f5ec]
        fadd dword ptr ds : [public_6d5f1fc]
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp-0xC]
        fistp dword ptr ss : [ebp-0x10]
        mov esi, dword ptr ss : [ebp-0x10]
        shr eax, 3
        lea edx, ds:[ebx+eax*4]
        mov eax, dword ptr ds : [edx]
        mov edi, esi
        shr eax, 4
        shl edi, 0x1C
        or eax, edi
        test esi, esi
        mov dword ptr ss : [ebp-0xC], esi
        fild dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [edx], eax
        jge public_6d4595f
        fadd dword ptr ds : [public_6d5f200]
        public_6d4595f : nop
        mov edx, dword ptr ss : [ebp+8]
        fmul dword ptr ds : [public_6d5f620]
        and edx, 3
        cmp edx, 3
        fsubr dword ptr ss : [ebp-8]
        je public_6d45983
        fld dword ptr ds : [public_6d6112c]
        lea eax, ss:[ebp+ecx-0x4C]
        fmul st, st(1)
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        public_6d45983 : nop
        cmp dword ptr ss : [ebp+8], 0xC
        jae public_6d459c2
        test edx, edx
        je public_6d4599d
        fld dword ptr ds : [public_6d61128]
        lea eax, ss:[ebp+ecx-0x44]
        fmul st, st(1)
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        public_6d4599d : nop
        cmp edx, 3
        fld dword ptr ds : [public_6d61124]
        fmul st, st(1)
        lea eax, ss:[ebp+ecx-0x40]
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        je public_6d459c2
        fmul dword ptr ds : [public_6d5f638]
        lea ecx, ss:[ebp+ecx-0x3C]
        fadd dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx]
        jmp public_6d459c4
        public_6d459c2 : nop
        fstp st(0)
        public_6d459c4 : nop
        inc dword ptr ss : [ebp+8]
        add dword ptr ss : [ebp-4], 0x10
        cmp dword ptr ss : [ebp+8], 0x10
        jb public_6d4590f
        mov eax, dword ptr ds : [public_6d73504]
        mov dword ptr ss : [ebp+8], eax
        fldcw word ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+0xC]
        add ebx, 8
        push 0
        push ebx
        call public_6d44dc8
        pop ecx
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d458e1)
    }
}

#undef public_6d4590f
#undef public_6d4595f
#undef public_6d45983
#undef public_6d4599d
#undef public_6d459c2
#undef public_6d459c4
