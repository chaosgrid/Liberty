#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f87d);
CLANG_FORWARD_PROC_SYMBOL(public_6d2fc9d);
CLANG_FORWARD_PROC_SYMBOL(public_6d37ac6);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd8c);
CLANG_FORWARD_JUMP_SYMBOL(public_6d5d143);

#define public_6d3ba69 _public_6d3ba69
#define public_6d3ba6b _public_6d3ba6b
#define public_6d3ba83 _public_6d3ba83
#define public_6d3ba9f _public_6d3ba9f
#define public_6d3baee _public_6d3baee
#define public_6d3bb0a _public_6d3bb0a
#define public_6d3bb12 _public_6d3bb12
#define public_6d3bb32 _public_6d3bb32
#define public_6d3bb61 _public_6d3bb61
#define public_6d3bb82 _public_6d3bb82
#define public_6d3bc89 _public_6d3bc89
#define public_6d3bc8b _public_6d3bc8b
#define public_6d3bc8f _public_6d3bc8f
#define public_6d3bca3 _public_6d3bca3

PROC_DECLARE(0x6d3ba0a, internal_6d3ba0a, public_6d3ba0a);
extern "C" NAKED register_t __cdecl internal_6d3ba0a()
{
    __asm
    {
        mov eax, public_6d5d143
        call public_6d5cd8c
        sub esp, 0x38
        mov dword ptr ss : [ebp-0x10], ecx
        mov eax, dword ptr ds : [ecx+0x1034]
        add dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ds : [ecx+0x1040]
        add dword ptr ss : [ebp+0xC], eax
        cmp dword ptr ds : [ecx+0x10B8], 0
        push esi
        push edi
        jne public_6d3ba83
        mov esi, dword ptr ds : [ecx+0x10A4]
        shl esi, 4
        mov eax, esi
        shl eax, 4
        push eax
        call public_6d2f2a0
        mov edi, eax
        pop ecx
        mov dword ptr ss : [ebp-0x24], edi
        and dword ptr ss : [ebp-4], 0
        test edi, edi
        je public_6d3ba69
/*FIXUP push offset _public_6d2f87d @0x6d3ba59*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d2f87d
        push esi
        push 0x10
        push edi
        call public_6d2fc9d
        jmp public_6d3ba6b
        public_6d3ba69 : nop
        xor edi, edi
        public_6d3ba6b : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        test edi, edi
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [eax+0x10B8], edi
        je public_6d3bca3
        mov ecx, dword ptr ss : [ebp-0x10]
        public_6d3ba83 : nop
        mov edx, dword ptr ss : [ebp+8]
        lea eax, ds:[ecx+0x10B0]
        and edx, 0xFFFFFFFC
        cmp edx, dword ptr ds : [eax]
        push ebx
        jne public_6d3ba9f
        mov esi, dword ptr ss : [ebp+0xC]
        cmp esi, dword ptr ds : [ecx+0x10B4]
        je public_6d3bb12
        public_6d3ba9f : nop
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax+0x10B4], ecx
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edi, dword ptr ds : [ecx+0x108C]
        mov esi, dword ptr ds : [ecx+0x10B0]
        shr esi, 2
        imul esi, dword ptr ds : [ecx+0x1050]
        mov ebx, dword ptr ds : [ecx+0x10B8]
        mov eax, edi
        shr eax, 2
        imul eax, dword ptr ds : [ecx+0x1080]
        add esi, eax
        mov eax, dword ptr ds : [ecx+0x10B4]
        imul eax, dword ptr ds : [ecx+0x1054]
        add esi, eax
        add esi, dword ptr ds : [ecx+0x18]
        jmp public_6d3bb0a
        public_6d3baee : nop
        push esi
        push ebx
        call dword ptr ds : [ecx+0x1084]
        pop ecx
        pop ecx
        mov ecx, dword ptr ss : [ebp-0x10]
        add esi, dword ptr ds : [ecx+0x1080]
        add ebx, 0x100
        add edi, 4
        public_6d3bb0a : nop
        cmp edi, dword ptr ds : [ecx+0x1094]
        jb public_6d3baee
        public_6d3bb12 : nop
        mov ebx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ecx+0x1030]
        sub ebx, dword ptr ds : [ecx+0x1090]
        sub eax, dword ptr ds : [ecx+0x108C]
        mov edx, dword ptr ds : [ecx+0x1058]
        and ebx, 3
        add edx, eax
        public_6d3bb32 : nop
        cmp eax, edx
        jae public_6d3bb61
        mov esi, eax
        and esi, 0xFFFFFFFC
        or esi, ebx
        shl esi, 2
        mov edi, eax
        and edi, 3
        or esi, edi
        mov edi, dword ptr ss : [ebp+0x10]
        shl esi, 4
        add esi, dword ptr ds : [ecx+0x10B8]
        movsd 
        movsd 
        movsd 
        movsd 
        add dword ptr ss : [ebp+0x10], 0x10
        mov ecx, dword ptr ss : [ebp-0x10]
        inc eax
        jmp public_6d3bb32
        public_6d3bb61 : nop
        cmp dword ptr ds : [ecx+0x10], 0
        pop ebx
        je public_6d3bca3
        mov edx, dword ptr ds : [ecx+0x1058]
        shl edx, 4
        add edx, dword ptr ss : [ebp+0x10]
        call public_6d37ac6
        jmp public_6d3bc8f
        public_6d3bb82 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [public_6d5f5e8]
        fadd dword ptr ds : [public_6d5f1fc]
        fstp dword ptr ss : [ebp-0x14]
        fld dword ptr ss : [ebp-0x14]
        fistp dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-0x14], eax
        fild dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ss : [ebp+0x10]
        fmul dword ptr ds : [public_6d5f61c]
        fstp dword ptr ss : [ebp-0x34]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [public_6d5f5e4]
        fadd dword ptr ds : [public_6d5f1fc]
        fstp dword ptr ss : [ebp-0x14]
        fld dword ptr ss : [ebp-0x14]
        fistp dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0x14], eax
        fild dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ss : [ebp+0x10]
        fmul dword ptr ds : [public_6d5f618]
        fstp dword ptr ss : [ebp-0x30]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [public_6d5f5e8]
        fadd dword ptr ds : [public_6d5f1fc]
        fstp dword ptr ss : [ebp-0x14]
        fld dword ptr ss : [ebp-0x14]
        fistp dword ptr ss : [ebp-0x20]
        mov eax, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-0x14], eax
        fild dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ss : [ebp-0x10]
        fmul dword ptr ds : [public_6d5f61c]
        fstp dword ptr ss : [ebp-0x2C]
        fld dword ptr ds : [eax+0x106C]
        mov eax, dword ptr ss : [ebp+0x10]
        fmul dword ptr ds : [eax+0xC]
        fadd dword ptr ds : [public_6d5f1fc]
        fstp dword ptr ss : [ebp-0x14]
        fld dword ptr ss : [ebp-0x14]
        fistp dword ptr ss : [ebp-0x24]
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x14], eax
        fild dword ptr ss : [ebp-0x14]
        fmul dword ptr ds : [ecx+0x1070]
        fld dword ptr ss : [ebp-0x34]
        fcomp dword ptr ds : [ecx+0x1C]
        fnstsw ax
        test ah, 0x44
        jp public_6d3bc89
        fld dword ptr ss : [ebp-0x30]
        fcomp dword ptr ds : [ecx+0x20]
        fnstsw ax
        test ah, 0x44
        jp public_6d3bc89
        fld dword ptr ss : [ebp-0x2C]
        fcomp dword ptr ds : [ecx+0x24]
        fnstsw ax
        test ah, 0x44
        jp public_6d3bc89
        fcomp dword ptr ds : [ecx+0x28]
        fnstsw ax
        test ah, 0x44
        jp public_6d3bc8b
        mov edi, dword ptr ss : [ebp+0x10]
        fldz 
        fstp dword ptr ss : [ebp-0x44]
        lea esi, ss:[ebp-0x44]
        fldz 
        fstp dword ptr ss : [ebp-0x40]
        fldz 
        fstp dword ptr ss : [ebp-0x3C]
        fldz 
        fstp dword ptr ss : [ebp-0x38]
        movsd 
        movsd 
        movsd 
        movsd 
        jmp public_6d3bc8b
        public_6d3bc89 : nop
        fstp st(0)
        public_6d3bc8b : nop
        add dword ptr ss : [ebp+0x10], 0x10
        public_6d3bc8f : nop
        cmp dword ptr ss : [ebp+0x10], edx
        jb public_6d3bb82
        mov eax, dword ptr ds : [public_6d72920]
        mov dword ptr ss : [ebp-0x24], eax
        fldcw word ptr ss : [ebp-0x24]
        public_6d3bca3 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d3ba0a)
    }
}

#undef public_6d3ba69
#undef public_6d3ba6b
#undef public_6d3ba83
#undef public_6d3ba9f
#undef public_6d3baee
#undef public_6d3bb0a
#undef public_6d3bb12
#undef public_6d3bb32
#undef public_6d3bb61
#undef public_6d3bb82
#undef public_6d3bc89
#undef public_6d3bc8b
#undef public_6d3bc8f
#undef public_6d3bca3
