#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3aebe);

#define public_6d3af24 _public_6d3af24
#define public_6d3b016 _public_6d3b016
#define public_6d3b01c _public_6d3b01c
#define public_6d3b024 _public_6d3b024
#define public_6d3b02a _public_6d3b02a
#define public_6d3b032 _public_6d3b032
#define public_6d3b038 _public_6d3b038
#define public_6d3b040 _public_6d3b040
#define public_6d3b046 _public_6d3b046
#define public_6d3b09e _public_6d3b09e
#define public_6d3b0a6 _public_6d3b0a6

PROC_DECLARE(0x6d3aebe, internal_6d3aebe, public_6d3aebe);
extern "C" NAKED register_t __cdecl internal_6d3aebe()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x2C
        mov dword ptr ss : [ebp-4], ecx
        cmp dword ptr ds : [ecx+0x108C], 0
        je public_6d3b0a6
        cmp dword ptr ds : [ecx+0x1090], 0
        je public_6d3b0a6
        mov eax, dword ptr ds : [ecx+0x1080]
        imul eax, dword ptr ds : [ecx+0x1054]
        mov edx, dword ptr ds : [ecx+0x1070]
        push esi
        mov esi, dword ptr ds : [ecx+0x1074]
        imul esi, dword ptr ds : [ecx+0x1050]
        add eax, esi
        lea eax, ds:[eax+edx*2]
        add eax, dword ptr ds : [ecx+0x18]
        cmp edx, dword ptr ds : [ecx+0x1078]
        mov dword ptr ss : [ebp-0xC], eax
        mov eax, dword ptr ds : [ecx+0x106C]
        mov dword ptr ss : [ebp-8], edx
        jae public_6d3b09e
        push ebx
        push edi
        public_6d3af24 : nop
        fld dword ptr ds : [eax+0x10]
        mov ecx, 0xFF
        fmul dword ptr ds : [public_6d5f6b4]
        fld dword ptr ds : [eax+0x18]
        fmul dword ptr ds : [public_6d5f6b0]
        faddp 
        fld dword ptr ds : [eax+0x14]
        fmul dword ptr ds : [public_6d5f6ac]
        faddp 
        fstp dword ptr ss : [ebp-0x18]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [public_6d5f6a8]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [public_6d5f6a4]
        fsubp 
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [public_6d5f6a0]
        fsubp 
        fstp dword ptr ss : [ebp-0x20]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [public_6d5f6a8]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [public_6d5f69c]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [public_6d5f698]
        faddp 
        fsubp 
        fstp dword ptr ss : [ebp-0x28]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [public_6d5f6b4]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [public_6d5f6ac]
        faddp 
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [public_6d5f6b0]
        faddp 
        fadd dword ptr ds : [public_6d5f1fc]
        fstp dword ptr ss : [ebp-0x10]
        fld dword ptr ss : [ebp-0x10]
        fistp dword ptr ss : [ebp-0x14]
        fld dword ptr ss : [ebp-0x18]
        mov edx, dword ptr ss : [ebp-0x14]
        fadd dword ptr ds : [public_6d5f1fc]
        add edx, 0x10
        fstp dword ptr ss : [ebp-0x18]
        fld dword ptr ss : [ebp-0x18]
        fistp dword ptr ss : [ebp-0x1C]
        fld dword ptr ss : [ebp-0x20]
        mov esi, dword ptr ss : [ebp-0x1C]
        fadd dword ptr ds : [public_6d5f1fc]
        add esi, 0x10
        fstp dword ptr ss : [ebp-0x20]
        fld dword ptr ss : [ebp-0x20]
        fistp dword ptr ss : [ebp-0x24]
        fld dword ptr ss : [ebp-0x28]
        mov ebx, dword ptr ss : [ebp-0x24]
        fadd dword ptr ds : [public_6d5f1fc]
        add ebx, 0x80
        fstp dword ptr ss : [ebp-0x28]
        fld dword ptr ss : [ebp-0x28]
        fistp dword ptr ss : [ebp-0x2C]
        mov edi, dword ptr ss : [ebp-0x2C]
        add edi, 0x80
        test edx, edx
        jge public_6d3b016
        xor edx, edx
        jmp public_6d3b01c
        public_6d3b016 : nop
        cmp edx, ecx
        jle public_6d3b01c
        mov edx, ecx
        public_6d3b01c : nop
        test esi, esi
        jge public_6d3b024
        xor esi, esi
        jmp public_6d3b02a
        public_6d3b024 : nop
        cmp esi, ecx
        jle public_6d3b02a
        mov esi, ecx
        public_6d3b02a : nop
        test ebx, ebx
        jge public_6d3b032
        xor ebx, ebx
        jmp public_6d3b038
        public_6d3b032 : nop
        cmp ebx, ecx
        jle public_6d3b038
        mov ebx, ecx
        public_6d3b038 : nop
        test edi, edi
        jge public_6d3b040
        xor edi, edi
        jmp public_6d3b046
        public_6d3b040 : nop
        cmp edi, ecx
        jle public_6d3b046
        mov edi, ecx
        public_6d3b046 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [ecx+0x1094]
        shl edx, cl
        mov ecx, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [ecx+0x1098]
        add dword ptr ss : [ebp-8], 2
        shl ebx, cl
        add eax, 0x20
        or edx, ebx
        mov ebx, dword ptr ss : [ebp-0xC]
        mov word ptr ds : [ebx], dx
        mov edx, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [edx+0x1094]
        shl esi, cl
        mov ecx, dword ptr ds : [edx+0x1098]
        mov edx, dword ptr ss : [ebp-8]
        shl edi, cl
        add ebx, 4
        mov dword ptr ss : [ebp-0xC], ebx
        or esi, edi
        mov word ptr ds : [ebx-2], si
        mov ecx, dword ptr ss : [ebp-4]
        cmp edx, dword ptr ds : [ecx+0x1078]
        jb public_6d3af24
        pop edi
        pop ebx
        public_6d3b09e : nop
        and dword ptr ds : [ecx+0x108C], 0
        pop esi
        public_6d3b0a6 : nop
        xor eax, eax
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d3aebe)
    }
}

#undef public_6d3af24
#undef public_6d3b016
#undef public_6d3b01c
#undef public_6d3b024
#undef public_6d3b02a
#undef public_6d3b032
#undef public_6d3b038
#undef public_6d3b040
#undef public_6d3b046
#undef public_6d3b09e
#undef public_6d3b0a6
