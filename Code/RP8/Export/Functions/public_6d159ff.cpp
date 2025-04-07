#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d159a6);
CLANG_FORWARD_PROC_SYMBOL(public_6d159ff);

#define public_6d15a23 _public_6d15a23
#define public_6d15a2c _public_6d15a2c
#define public_6d15a74 _public_6d15a74
#define public_6d15ab8 _public_6d15ab8
#define public_6d15abf _public_6d15abf
#define public_6d15adf _public_6d15adf
#define public_6d15ae4 _public_6d15ae4
#define public_6d15aee _public_6d15aee
#define public_6d15b09 _public_6d15b09

PROC_DECLARE(0x6d159ff, internal_6d159ff, public_6d159ff);
extern "C" NAKED register_t __cdecl internal_6d159ff()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        mov dword ptr ss : [ebp-0x10], 0x64
        mov dword ptr ss : [ebp-0xC], 0x64
        mov dword ptr ss : [ebp-8], 0
        mov dword ptr ss : [ebp-4], offset public_6d64040
        jmp public_6d15a2c
        public_6d15a23 : nop
        mov eax, dword ptr ss : [ebp-4]
        add eax, 0xC
        mov dword ptr ss : [ebp-4], eax
        public_6d15a2c : nop
        mov ecx, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [ecx], 0
        je public_6d15ae4
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [edx]
        sub ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x18], ecx
        mov edx, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [edx]
        sub ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x14], ecx
        cmp dword ptr ss : [ebp-0x14], 0
        jl public_6d15adf
        cmp dword ptr ss : [ebp-0x18], 0
        jl public_6d15adf
        cmp dword ptr ss : [ebp-8], 0
        je public_6d15a74
        mov edx, dword ptr ss : [ebp-0x14]
        cmp edx, dword ptr ss : [ebp-0x10]
        jle public_6d15a74
        jmp public_6d15a23
        public_6d15a74 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call public_6d159a6
        add esp, 0x10
        mov byte ptr ss : [ebp-0x19], al
        movzx edx, byte ptr ss : [ebp-0x19]
        test edx, edx
        je public_6d15adf
        cmp dword ptr ss : [ebp-8], 0
        je public_6d15ab8
        mov eax, dword ptr ss : [ebp-0x14]
        cmp eax, dword ptr ss : [ebp-0x10]
        jl public_6d15ab8
        mov ecx, dword ptr ss : [ebp-0x18]
        cmp ecx, dword ptr ss : [ebp-0xC]
        jl public_6d15ab8
        mov dword ptr ss : [ebp-0x20], 0
        jmp public_6d15abf
        public_6d15ab8 : nop
        mov dword ptr ss : [ebp-0x20], 1
        public_6d15abf : nop
        mov dl, byte ptr ss : [ebp-0x20]
        mov byte ptr ss : [ebp-0x1A], dl
        movzx eax, byte ptr ss : [ebp-0x1A]
        test eax, eax
        je public_6d15adf
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-0xC], eax
        public_6d15adf : nop
        jmp public_6d15a23
        public_6d15ae4 : nop
        cmp dword ptr ss : [ebp-8], 0
        jne public_6d15aee
        xor eax, eax
        jmp public_6d15b09
        public_6d15aee : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [ecx]
        public_6d15b09 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d159ff)
    }
}

#undef public_6d15a23
#undef public_6d15a2c
#undef public_6d15a74
#undef public_6d15ab8
#undef public_6d15abf
#undef public_6d15adf
#undef public_6d15ae4
#undef public_6d15aee
#undef public_6d15b09
