#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d40df6);

#define public_6d40e26 _public_6d40e26
#define public_6d40e4c _public_6d40e4c
#define public_6d40e68 _public_6d40e68
#define public_6d40e83 _public_6d40e83
#define public_6d40f1a _public_6d40f1a
#define public_6d40f1e _public_6d40f1e
#define public_6d40f34 _public_6d40f34
#define public_6d40f45 _public_6d40f45
#define public_6d40f4d _public_6d40f4d
#define public_6d40f69 _public_6d40f69
#define public_6d40f6b _public_6d40f6b

PROC_DECLARE(0x6d40df6, internal_6d40df6, public_6d40df6);
extern "C" NAKED register_t __cdecl internal_6d40df6()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        push edi
        mov edi, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        mov ebx, dword ptr ds : [edi]
        mov dword ptr ss : [ebp+8], eax
        jne public_6d40e26
        push esi
        call dword ptr ds : [edi+0xC]
        test al, al
        pop ecx
        je public_6d40f1a
        mov eax, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [edi]
        mov dword ptr ss : [ebp+8], eax
        public_6d40e26 : nop
        dec dword ptr ss : [ebp+8]
        xor eax, eax
        mov ah, byte ptr ds : [ebx]
        inc ebx
        cmp dword ptr ss : [ebp+8], 0
        mov dword ptr ss : [ebp-4], eax
        jne public_6d40e4c
        push esi
        call dword ptr ds : [edi+0xC]
        test al, al
        pop ecx
        je public_6d40f1a
        mov eax, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [edi]
        mov dword ptr ss : [ebp+8], eax
        public_6d40e4c : nop
        movzx eax, byte ptr ds : [ebx]
        add dword ptr ss : [ebp-4], eax
        dec dword ptr ss : [ebp+8]
        sub dword ptr ss : [ebp-4], 2
        inc ebx
        cmp dword ptr ss : [ebp-4], 0xC
        jl public_6d40f34
        and dword ptr ss : [ebp-8], 0
        public_6d40e68 : nop
        cmp dword ptr ss : [ebp+8], 0
        jne public_6d40e83
        push esi
        call dword ptr ds : [edi+0xC]
        test al, al
        pop ecx
        je public_6d40f1a
        mov eax, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [edi]
        mov dword ptr ss : [ebp+8], eax
        public_6d40e83 : nop
        dec dword ptr ss : [ebp+8]
        mov al, byte ptr ds : [ebx]
        mov ecx, dword ptr ss : [ebp-8]
        inc ebx
        inc dword ptr ss : [ebp-8]
        cmp dword ptr ss : [ebp-8], 0xC
        mov byte ptr ss : [ebp+ecx-0x14], al
        jl public_6d40e68
        sub dword ptr ss : [ebp-4], 0xC
        cmp byte ptr ss : [ebp-0x14], 0x41
        jne public_6d40f1e
        cmp byte ptr ss : [ebp-0x13], 0x64
        jne public_6d40f1e
        cmp byte ptr ss : [ebp-0x12], 0x6F
        jne public_6d40f1e
        cmp byte ptr ss : [ebp-0x11], 0x62
        jne public_6d40f1e
        cmp byte ptr ss : [ebp-0x10], 0x65
        jne public_6d40f1e
        mov eax, dword ptr ds : [esi]
        movzx ecx, byte ptr ss : [ebp-0xF]
        movzx edx, byte ptr ss : [ebp-0xE]
        shl ecx, 8
        add ecx, edx
        movzx edx, byte ptr ss : [ebp-0xC]
        add eax, 0x18
        mov dword ptr ds : [eax], ecx
        movzx ecx, byte ptr ss : [ebp-0xD]
        shl ecx, 8
        add ecx, edx
        movzx edx, byte ptr ss : [ebp-0xA]
        mov dword ptr ds : [eax+4], ecx
        movzx ecx, byte ptr ss : [ebp-0xB]
        shl ecx, 8
        add ecx, edx
        mov dword ptr ds : [eax+8], ecx
        movzx ecx, byte ptr ss : [ebp-9]
        mov dword ptr ds : [eax+0xC], ecx
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x4B
        mov eax, dword ptr ds : [esi]
        push 1
        push esi
        call dword ptr ds : [eax+4]
        movzx eax, byte ptr ss : [ebp-9]
        mov byte ptr ds : [esi+0x106], 1
        mov byte ptr ds : [esi+0x107], al
        jmp public_6d40f4d
        public_6d40f1a : nop
        xor al, al
        jmp public_6d40f6b
        public_6d40f1e : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x4D
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [esi]
        add eax, 0xC
        mov dword ptr ds : [ecx+0x18], eax
        jmp public_6d40f45
        public_6d40f34 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+0x14], 0x4D
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x18], ecx
        public_6d40f45 : nop
        mov eax, dword ptr ds : [esi]
        push 1
        push esi
        call dword ptr ds : [eax+4]
        public_6d40f4d : nop
        cmp dword ptr ss : [ebp-4], 0
        mov eax, dword ptr ss : [ebp+8]
        pop ecx
        pop ecx
        mov dword ptr ds : [edi], ebx
        mov dword ptr ds : [edi+4], eax
        jle public_6d40f69
        push dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [esi+0x14]
        push esi
        call dword ptr ds : [eax+0x10]
        pop ecx
        pop ecx
        public_6d40f69 : nop
        mov al, 1
        public_6d40f6b : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d40df6)
    }
}

#undef public_6d40e26
#undef public_6d40e4c
#undef public_6d40e68
#undef public_6d40e83
#undef public_6d40f1a
#undef public_6d40f1e
#undef public_6d40f34
#undef public_6d40f45
#undef public_6d40f4d
#undef public_6d40f69
#undef public_6d40f6b
