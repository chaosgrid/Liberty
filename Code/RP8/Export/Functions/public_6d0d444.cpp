#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0d444);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cc50);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cc70);

#define public_6d0d4ad _public_6d0d4ad
#define public_6d0d4c7 _public_6d0d4c7
#define public_6d0d4f3 _public_6d0d4f3
#define public_6d0d543 _public_6d0d543
#define public_6d0d576 _public_6d0d576
#define public_6d0d5a1 _public_6d0d5a1
#define public_6d0d5a8 _public_6d0d5a8
#define public_6d0d5b4 _public_6d0d5b4
#define public_6d0d622 _public_6d0d622

PROC_DECLARE(0x6d0d444, internal_6d0d444, public_6d0d444);
extern "C" NAKED register_t __cdecl internal_6d0d444()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x2C
        mov dword ptr ss : [ebp-0x28], ecx
        mov eax, dword ptr ss : [ebp-0x28]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0d4ad
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x10]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x10]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x10], ecx
/*FIXUP push offset public_6d673f8 @0x6d0d484*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d673f8
        push 0xBEB
/*FIXUP push offset public_6d67438 @0x6d0d48e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67438
/*FIXUP push offset public_6d67484 @0x6d0d493*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d67484
        mov edx, dword ptr ss : [ebp-0x10]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        mov al, 1
        jmp public_6d0d622
        public_6d0d4ad : nop
        mov ecx, dword ptr ss : [ebp+8]
        xor edx, edx
        cmp dword ptr ds : [ecx], 0
        setne dl
        xor eax, eax
        mov al, dl
        test eax, eax
        jne public_6d0d4c7
        xor al, al
        jmp public_6d0d622
        public_6d0d4c7 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ds : [ecx+0x378]
        mov dword ptr ss : [ebp-0x14], edx
        cmp dword ptr ss : [ebp-0x14], 0
        jne public_6d0d4f3
        mov eax, dword ptr ss : [ebp+8]
        xor ecx, ecx
        cmp dword ptr ds : [eax], 1
        sete cl
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d0d4f3
        xor al, al
        jmp public_6d0d622
        public_6d0d4f3 : nop
        mov eax, dword ptr ss : [ebp+8]
        xor ecx, ecx
        cmp dword ptr ds : [eax], 1
        sete cl
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d0d543
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call public_6d5cc70
        add esp, 4
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x18], edx
        cmp dword ptr ss : [ebp-0x18], 0x10
        jae public_6d0d543
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call public_6d5cc50
        add esp, 4
        neg eax
        sbb eax, eax
        neg eax
        xor edx, edx
        mov dl, al
        test edx, edx
        jne public_6d0d543
        xor al, al
        jmp public_6d0d622
        public_6d0d543 : nop
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ds : [eax+0x384]
        mov dword ptr ss : [ebp-0x1C], ecx
        cmp dword ptr ss : [ebp-0x1C], 0
        jne public_6d0d576
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx]
        push eax
        call public_6d5cc70
        add esp, 4
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x20], ecx
        cmp dword ptr ss : [ebp-0x20], 0x20
        jb public_6d0d576
        xor al, al
        jmp public_6d0d622
        public_6d0d576 : nop
        mov edx, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ds : [edx+0x390]
        mov dword ptr ss : [ebp-0x24], eax
        cmp dword ptr ss : [ebp-0x24], 0
        jne public_6d0d5b4
        mov ecx, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [ecx], 0xA
        jl public_6d0d5a1
        mov edx, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [edx], 0xE
        jg public_6d0d5a1
        mov dword ptr ss : [ebp-0x2C], 1
        jmp public_6d0d5a8
        public_6d0d5a1 : nop
        mov dword ptr ss : [ebp-0x2C], 0
        public_6d0d5a8 : nop
        movzx eax, byte ptr ss : [ebp-0x2C]
        test eax, eax
        je public_6d0d5b4
        xor al, al
        jmp public_6d0d622
        public_6d0d5b4 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ds : [ecx+0x230]
        push edx
        call public_6d5cbb0
        add esp, 4
        mov dword ptr ss : [ebp-0xC], eax
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call public_6d5cbb0
        add esp, 4
        mov dword ptr ss : [ebp-4], eax
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ds : [eax+0x1AC]
        push ecx
        mov edx, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ds : [edx+0x1A8]
        push eax
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ds : [ecx+0x12C]
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ds : [eax+0x12C]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+0x28]
        mov dword ptr ss : [ebp-8], eax
        xor eax, eax
        cmp dword ptr ss : [ebp-8], 0
        sete al
        public_6d0d622 : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d0d444)
    }
}

#undef public_6d0d4ad
#undef public_6d0d4c7
#undef public_6d0d4f3
#undef public_6d0d543
#undef public_6d0d576
#undef public_6d0d5a1
#undef public_6d0d5a8
#undef public_6d0d5b4
#undef public_6d0d622
