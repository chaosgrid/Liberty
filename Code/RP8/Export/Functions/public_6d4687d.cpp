#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4668b);
CLANG_FORWARD_PROC_SYMBOL(public_6d4671d);
CLANG_FORWARD_PROC_SYMBOL(public_6d4687d);
CLANG_FORWARD_PROC_SYMBOL(public_6d4993c);
CLANG_FORWARD_PROC_SYMBOL(public_6d49941);

#define public_6d46893 _public_6d46893
#define public_6d468ab _public_6d468ab
#define public_6d468ae _public_6d468ae
#define public_6d468b7 _public_6d468b7
#define public_6d468d5 _public_6d468d5
#define public_6d468d8 _public_6d468d8
#define public_6d46901 _public_6d46901
#define public_6d46912 _public_6d46912
#define public_6d46917 _public_6d46917
#define public_6d46934 _public_6d46934
#define public_6d46955 _public_6d46955
#define public_6d4697c _public_6d4697c
#define public_6d4697f _public_6d4697f
#define public_6d46988 _public_6d46988
#define public_6d469a5 _public_6d469a5
#define public_6d469c9 _public_6d469c9
#define public_6d469f0 _public_6d469f0
#define public_6d469f3 _public_6d469f3
#define public_6d469f7 _public_6d469f7

PROC_DECLARE(0x6d4687d, internal_6d4687d, public_6d4687d);
extern "C" NAKED register_t __cdecl internal_6d4687d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edi+0x40]
        xor esi, esi
        xor ebx, ebx
        jmp public_6d468ae
        public_6d46893 : nop
        cmp dword ptr ds : [eax], 0
        jne public_6d468ab
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax+0xC]
        imul edx, ecx
        add esi, edx
        mov edx, dword ptr ds : [eax+4]
        imul edx, ecx
        add ebx, edx
        public_6d468ab : nop
        mov eax, dword ptr ds : [eax+0x24]
        public_6d468ae : nop
        test eax, eax
        jne public_6d46893
        mov eax, dword ptr ds : [edi+0x44]
        jmp public_6d468d8
        public_6d468b7 : nop
        cmp dword ptr ds : [eax], 0
        jne public_6d468d5
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax+0xC]
        imul edx, ecx
        shl edx, 7
        add esi, edx
        mov edx, dword ptr ds : [eax+4]
        imul edx, ecx
        shl edx, 7
        add ebx, edx
        public_6d468d5 : nop
        mov eax, dword ptr ds : [eax+0x24]
        public_6d468d8 : nop
        test eax, eax
        jne public_6d468b7
        test esi, esi
        jle public_6d469f7
        push dword ptr ds : [edi+0x48]
        push ebx
        push esi
        push dword ptr ss : [ebp+8]
        call public_6d4993c
        add esp, 0x10
        cmp eax, ebx
        jl public_6d46901
        mov dword ptr ss : [ebp-4], 0x3B9ACA00
        jmp public_6d46912
        public_6d46901 : nop
        cdq 
        idiv esi
        test eax, eax
        mov dword ptr ss : [ebp-4], eax
        jg public_6d46912
        mov dword ptr ss : [ebp-4], 1
        public_6d46912 : nop
        mov esi, dword ptr ds : [edi+0x40]
        jmp public_6d4697f
        public_6d46917 : nop
        cmp dword ptr ds : [esi], 0
        jne public_6d4697c
        mov ebx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0xC]
        xor edx, edx
        lea eax, ds:[ebx-1]
        div ecx
        inc eax
        cmp eax, dword ptr ss : [ebp-4]
        jg public_6d46934
        mov dword ptr ds : [esi+0x10], ebx
        jmp public_6d46955
        public_6d46934 : nop
        mov eax, dword ptr ds : [esi+8]
        imul ecx, dword ptr ss : [ebp-4]
        imul eax, ebx
        push eax
        lea eax, ds:[esi+0x28]
        push eax
        push dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+0x10], ecx
        call public_6d49941
        add esp, 0xC
        mov byte ptr ds : [esi+0x22], 1
        public_6d46955 : nop
        push dword ptr ds : [esi+0x10]
        push dword ptr ds : [esi+8]
        push 1
        push dword ptr ss : [ebp+8]
        call public_6d4668b
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [edi+0x4C]
        and dword ptr ds : [esi+0x18], 0
        and dword ptr ds : [esi+0x1C], 0
        add esp, 0x10
        and byte ptr ds : [esi+0x21], 0
        mov dword ptr ds : [esi+0x14], eax
        public_6d4697c : nop
        mov esi, dword ptr ds : [esi+0x24]
        public_6d4697f : nop
        test esi, esi
        jne public_6d46917
        mov esi, dword ptr ds : [edi+0x44]
        jmp public_6d469f3
        public_6d46988 : nop
        cmp dword ptr ds : [esi], 0
        jne public_6d469f0
        mov ebx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0xC]
        xor edx, edx
        lea eax, ds:[ebx-1]
        div ecx
        inc eax
        cmp eax, dword ptr ss : [ebp-4]
        jg public_6d469a5
        mov dword ptr ds : [esi+0x10], ebx
        jmp public_6d469c9
        public_6d469a5 : nop
        mov eax, dword ptr ds : [esi+8]
        imul ecx, dword ptr ss : [ebp-4]
        imul eax, ebx
        shl eax, 7
        push eax
        lea eax, ds:[esi+0x28]
        push eax
        push dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+0x10], ecx
        call public_6d49941
        add esp, 0xC
        mov byte ptr ds : [esi+0x22], 1
        public_6d469c9 : nop
        push dword ptr ds : [esi+0x10]
        push dword ptr ds : [esi+8]
        push 1
        push dword ptr ss : [ebp+8]
        call public_6d4671d
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [edi+0x4C]
        and dword ptr ds : [esi+0x18], 0
        and dword ptr ds : [esi+0x1C], 0
        add esp, 0x10
        and byte ptr ds : [esi+0x21], 0
        mov dword ptr ds : [esi+0x14], eax
        public_6d469f0 : nop
        mov esi, dword ptr ds : [esi+0x24]
        public_6d469f3 : nop
        test esi, esi
        jne public_6d46988
        public_6d469f7 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4687d)
    }
}

#undef public_6d46893
#undef public_6d468ab
#undef public_6d468ae
#undef public_6d468b7
#undef public_6d468d5
#undef public_6d468d8
#undef public_6d46901
#undef public_6d46912
#undef public_6d46917
#undef public_6d46934
#undef public_6d46955
#undef public_6d4697c
#undef public_6d4697f
#undef public_6d46988
#undef public_6d469a5
#undef public_6d469c9
#undef public_6d469f0
#undef public_6d469f3
#undef public_6d469f7
