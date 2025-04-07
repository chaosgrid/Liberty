#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d410c7);
CLANG_FORWARD_PROC_SYMBOL(public_6d46f6e);

#define public_6d410ff _public_6d410ff
#define public_6d4112b _public_6d4112b
#define public_6d4113e _public_6d4113e
#define public_6d4115f _public_6d4115f
#define public_6d41190 _public_6d41190
#define public_6d411b1 _public_6d411b1
#define public_6d4127d _public_6d4127d
#define public_6d4128c _public_6d4128c
#define public_6d41293 _public_6d41293
#define public_6d412b1 _public_6d412b1
#define public_6d412c9 _public_6d412c9
#define public_6d412e5 _public_6d412e5
#define public_6d412f1 _public_6d412f1
#define public_6d412fa _public_6d412fa
#define public_6d4130e _public_6d4130e
#define public_6d4131c _public_6d4131c
#define public_6d4133f _public_6d4133f
#define public_6d41353 _public_6d41353
#define public_6d41357 _public_6d41357

PROC_DECLARE(0x6d410c7, internal_6d410c7, public_6d410c7);
extern "C" NAKED register_t __cdecl internal_6d410c7()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x130
        push esi
        mov esi, dword ptr ds : [ebx+0x14]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        push edi
        mov edi, dword ptr ds : [esi]
        mov dword ptr ss : [ebp-0x2C], esi
        mov dword ptr ss : [ebp-4], eax
        jne public_6d410ff
        push ebx
        call dword ptr ds : [esi+0xC]
        test al, al
        pop ecx
        je public_6d41357
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-4], eax
        public_6d410ff : nop
        dec dword ptr ss : [ebp-4]
        xor eax, eax
        mov ah, byte ptr ds : [edi]
        inc edi
        cmp dword ptr ss : [ebp-4], 0
        mov dword ptr ss : [ebp-0xC], eax
        jne public_6d4112b
        push ebx
        call dword ptr ds : [esi+0xC]
        test al, al
        pop ecx
        je public_6d41357
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-4], eax
        public_6d4112b : nop
        movzx eax, byte ptr ds : [edi]
        dec dword ptr ss : [ebp-4]
        add dword ptr ss : [ebp-0xC], eax
        inc edi
        sub dword ptr ss : [ebp-0xC], 2
        jmp public_6d4133f
        public_6d4113e : nop
        cmp dword ptr ss : [ebp-4], 0
        jne public_6d4115f
        push ebx
        call dword ptr ds : [esi+0xC]
        test al, al
        pop ecx
        je public_6d41357
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-4], eax
        public_6d4115f : nop
        movzx eax, byte ptr ds : [edi]
        mov ecx, dword ptr ds : [ebx]
        dec dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+0x14], 0x4F
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-0x30], eax
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [ebx]
        push 1
        push ebx
        inc edi
        call dword ptr ds : [eax+4]
        and byte ptr ss : [ebp-0x28], 0
        and dword ptr ss : [ebp-0x14], 0
        pop ecx
        pop ecx
        mov dword ptr ss : [ebp-0x10], 1
        public_6d41190 : nop
        cmp dword ptr ss : [ebp-4], 0
        jne public_6d411b1
        push ebx
        call dword ptr ds : [esi+0xC]
        test al, al
        pop ecx
        je public_6d41357
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-4], eax
        public_6d411b1 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov cl, byte ptr ds : [edi]
        dec dword ptr ss : [ebp-4]
        lea eax, ss:[ebp+eax-0x28]
        mov byte ptr ds : [eax], cl
        movzx eax, cl
        add dword ptr ss : [ebp-0x14], eax
        inc edi
        inc dword ptr ss : [ebp-0x10]
        cmp dword ptr ss : [ebp-0x10], 0x10
        mov dword ptr ss : [ebp-8], edi
        jle public_6d41190
        mov eax, dword ptr ds : [ebx]
        movzx ecx, byte ptr ss : [ebp-0x27]
        add eax, 0x18
        mov dword ptr ds : [eax], ecx
        movzx ecx, byte ptr ss : [ebp-0x26]
        mov dword ptr ds : [eax+4], ecx
        movzx ecx, byte ptr ss : [ebp-0x25]
        mov dword ptr ds : [eax+8], ecx
        movzx ecx, byte ptr ss : [ebp-0x24]
        sub dword ptr ss : [ebp-0xC], 0x11
        mov dword ptr ds : [eax+0xC], ecx
        movzx ecx, byte ptr ss : [ebp-0x23]
        mov dword ptr ds : [eax+0x10], ecx
        movzx ecx, byte ptr ss : [ebp-0x22]
        mov dword ptr ds : [eax+0x14], ecx
        movzx ecx, byte ptr ss : [ebp-0x21]
        mov dword ptr ds : [eax+0x18], ecx
        movzx ecx, byte ptr ss : [ebp-0x20]
        push 0x55
        mov dword ptr ds : [eax+0x1C], ecx
        mov eax, dword ptr ds : [ebx]
        pop edi
        mov dword ptr ds : [eax+0x14], edi
        mov eax, dword ptr ds : [ebx]
        push 2
        push ebx
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ebx]
        movzx ecx, byte ptr ss : [ebp-0x1F]
        add eax, 0x18
        mov dword ptr ds : [eax], ecx
        movzx ecx, byte ptr ss : [ebp-0x1E]
        mov dword ptr ds : [eax+4], ecx
        movzx ecx, byte ptr ss : [ebp-0x1D]
        mov dword ptr ds : [eax+8], ecx
        movzx ecx, byte ptr ss : [ebp-0x1C]
        mov dword ptr ds : [eax+0xC], ecx
        movzx ecx, byte ptr ss : [ebp-0x1B]
        mov dword ptr ds : [eax+0x10], ecx
        movzx ecx, byte ptr ss : [ebp-0x1A]
        mov dword ptr ds : [eax+0x14], ecx
        movzx ecx, byte ptr ss : [ebp-0x19]
        mov dword ptr ds : [eax+0x18], ecx
        movzx ecx, byte ptr ss : [ebp-0x18]
        mov dword ptr ds : [eax+0x1C], ecx
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ds : [eax+0x14], edi
        mov eax, dword ptr ds : [ebx]
        push 2
        push ebx
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [ebp-0x14]
        add esp, 0x10
        cmp eax, 0x100
        jg public_6d4127d
        cmp eax, dword ptr ss : [ebp-0xC]
        jle public_6d4128c
        public_6d4127d : nop
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ds : [eax+0x14], 0x1C
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax]
        pop ecx
        public_6d4128c : nop
        xor edi, edi
        cmp dword ptr ss : [ebp-0x14], edi
        jle public_6d412c9
        public_6d41293 : nop
        cmp dword ptr ss : [ebp-4], 0
        jne public_6d412b1
        push ebx
        call dword ptr ds : [esi+0xC]
        test al, al
        pop ecx
        je public_6d41357
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [ebp-4], eax
        public_6d412b1 : nop
        mov eax, dword ptr ss : [ebp-8]
        dec dword ptr ss : [ebp-4]
        mov al, byte ptr ds : [eax]
        inc dword ptr ss : [ebp-8]
        mov byte ptr ss : [ebp+edi-0x130], al
        inc edi
        cmp edi, dword ptr ss : [ebp-0x14]
        jl public_6d41293
        public_6d412c9 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        sub dword ptr ss : [ebp-0xC], eax
        mov eax, dword ptr ss : [ebp-0x30]
        test al, 0x10
        je public_6d412e5
        sub eax, 0x10
        lea edi, ds:[ebx+eax*4+0xB0]
        mov dword ptr ss : [ebp-0x10], edi
        jmp public_6d412f1
        public_6d412e5 : nop
        lea ecx, ds:[ebx+eax*4+0xA0]
        mov dword ptr ss : [ebp-0x10], ecx
        mov edi, ecx
        public_6d412f1 : nop
        test eax, eax
        jl public_6d412fa
        cmp eax, 4
        jl public_6d4130e
        public_6d412fa : nop
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [ecx+0x14], 0x1D
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax]
        pop ecx
        public_6d4130e : nop
        cmp dword ptr ds : [edi], 0
        jne public_6d4131c
        push ebx
        call public_6d46f6e
        pop ecx
        mov dword ptr ds : [edi], eax
        public_6d4131c : nop
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ss : [ebp-0x10]
        lea esi, ss:[ebp-0x28]
        movsd 
        movsd 
        movsd 
        movsd 
        movsb 
        mov edi, dword ptr ds : [eax]
        push 0x40
        add edi, 0x11
        pop ecx
        lea esi, ss:[ebp-0x130]
        rep movsd
        mov edi, dword ptr ss : [ebp-8]
        mov esi, dword ptr ss : [ebp-0x2C]
        public_6d4133f : nop
        cmp dword ptr ss : [ebp-0xC], 0
        jg public_6d4113e
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], edi
        mov al, 1
        public_6d41353 : nop
        pop edi
        pop esi
        leave 
        ret 
        public_6d41357 : nop
        xor al, al
        jmp public_6d41353
        UNREACHABLE_TRAP(0x6d410c7)
    }
}

#undef public_6d410ff
#undef public_6d4112b
#undef public_6d4113e
#undef public_6d4115f
#undef public_6d41190
#undef public_6d411b1
#undef public_6d4127d
#undef public_6d4128c
#undef public_6d41293
#undef public_6d412b1
#undef public_6d412c9
#undef public_6d412e5
#undef public_6d412f1
#undef public_6d412fa
#undef public_6d4130e
#undef public_6d4131c
#undef public_6d4133f
#undef public_6d41353
#undef public_6d41357
