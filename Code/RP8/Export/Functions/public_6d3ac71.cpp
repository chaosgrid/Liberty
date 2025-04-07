#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cf30);

#define public_6d3acb0 _public_6d3acb0
#define public_6d3acd4 _public_6d3acd4
#define public_6d3acf6 _public_6d3acf6
#define public_6d3ad0f _public_6d3ad0f
#define public_6d3ad34 _public_6d3ad34
#define public_6d3ad4b _public_6d3ad4b

PROC_DECLARE(0x6d3ac71, internal_6d3ac71, public_6d3ac71);
extern "C" NAKED register_t __cdecl internal_6d3ac71()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ds : [ecx+0x1054]
        imul eax, dword ptr ss : [ebp+0xC]
        push esi
        mov esi, dword ptr ds : [ecx+0x1050]
        imul esi, dword ptr ss : [ebp+8]
        add esi, eax
        add esi, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x1058]
        lea eax, ds:[esi+eax*8]
        cmp esi, eax
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp-4], ecx
        mov dword ptr ss : [ebp+8], eax
        jae public_6d3ad34
        push ebx
        mov ebx, 0xFFFF
        public_6d3acb0 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov cl, 0x20
        call public_6d5cf30
        fld dword ptr ds : [public_6d5f62c]
        and eax, ebx
        test eax, eax
        mov dword ptr ss : [ebp+0x10], eax
        fild dword ptr ss : [ebp+0x10]
        jge public_6d3acd4
        fadd dword ptr ds : [public_6d5f200]
        public_6d3acd4 : nop
        fmul st, st(1)
        fstp dword ptr ds : [edi]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        shrd eax, ecx, 0x10
        and eax, ebx
        shr ecx, 0x10
        test eax, eax
        mov dword ptr ss : [ebp+0x10], eax
        fild dword ptr ss : [ebp+0x10]
        jge public_6d3acf6
        fadd dword ptr ds : [public_6d5f200]
        public_6d3acf6 : nop
        fmul st, st(1)
        fstp dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [esi]
        and eax, ebx
        test eax, eax
        mov dword ptr ss : [ebp+0x10], eax
        fild dword ptr ss : [ebp+0x10]
        jge public_6d3ad0f
        fadd dword ptr ds : [public_6d5f200]
        public_6d3ad0f : nop
        fmul st, st(1)
        add esi, 8
        add edi, 0x10
        cmp esi, dword ptr ss : [ebp+8]
        fstp dword ptr ds : [edi-8]
        movzx eax, word ptr ds : [esi-2]
        mov dword ptr ss : [ebp+0x10], eax
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edi-4]
        fstp st(0)
        jb public_6d3acb0
        mov ecx, dword ptr ss : [ebp-4]
        pop ebx
        public_6d3ad34 : nop
        cmp dword ptr ds : [ecx+0x10], 0
        je public_6d3ad4b
        mov eax, dword ptr ds : [ecx+0x1058]
        shl eax, 4
        sub edi, eax
        push edi
        call public_6d37e98
        public_6d3ad4b : nop
        pop edi
        pop esi
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d3ac71)
    }
}

#undef public_6d3acb0
#undef public_6d3acd4
#undef public_6d3acf6
#undef public_6d3ad0f
#undef public_6d3ad34
#undef public_6d3ad4b
