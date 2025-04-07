#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4b9f90);
CLANG_FORWARD_PROC_SYMBOL(public_4ba2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4bcbf0);
CLANG_FORWARD_PROC_SYMBOL(public_4bd620);
CLANG_FORWARD_PROC_SYMBOL(public_4c46c0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4ff0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4bcc30 _public_4bcc30
#define public_4bcc64 _public_4bcc64
#define public_4bcc9b _public_4bcc9b
#define public_4bcca2 _public_4bcca2
#define public_4bccc7 _public_4bccc7
#define public_4bccd9 _public_4bccd9
#define public_4bcce8 _public_4bcce8
#define public_4bccf7 _public_4bccf7
#define public_4bcd06 _public_4bcd06
#define public_4bcd28 _public_4bcd28

PROC_DECLARE(0x4bcbf0, internal_4bcbf0, public_4bcbf0);
extern "C" NAKED register_t __cdecl internal_4bcbf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_672950]
        mov byte ptr ds : [public_6720c9], 1
        mov byte ptr ds : [public_67494c], 1
        mov ecx, dword ptr ds : [eax]
        sub esp, 8
        cmp ecx, eax
        je public_4bcd28
        call public_4c46c0
        call public_4c4fb0
        xor ecx, ecx
        test eax, eax
        mov dword ptr ss : [esp+4], eax
        mov dword ptr ss : [esp], ecx
        jle public_4bcd28
        push ebx
        push ebp
        push esi
        push edi
        public_4bcc30 : nop
        push ecx
        call public_4c4ff0
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        je public_4bcd06
        mov al, byte ptr ds : [ebx+0x18]
        test al, al
        jns public_4bcce8
        mov al, byte ptr ds : [public_66d35a]
        test al, al
        jne public_4bcca2
        mov ebp, dword ptr ds : [public_672328]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_4bcc9b
        public_4bcc64 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        push 0
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_4bd620
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_67232c]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [public_67232c], ecx
        jne public_4bcc64
        public_4bcc9b : nop
        mov byte ptr ds : [public_672404], 0
        public_4bcca2 : nop
        mov eax, dword ptr ds : [public_672400]
        test eax, eax
        je public_4bcce8
        push 0
        push eax
        call public_59dd00
        mov edi, dword ptr ds : [public_672400]
        add esp, 8
        test edi, edi
        je public_4bcce8
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_4bccd9
        public_4bccc7 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_4bccc7
        public_4bccd9 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [eax]
        public_4bcce8 : nop
        test byte ptr ds : [ebx+0x18], 0x20
        je public_4bccf7
        push ebx
        call public_4ba2a0
        add esp, 4
        public_4bccf7 : nop
        test byte ptr ds : [ebx+0x18], 0x10
        je public_4bcd06
        push ebx
        call public_4b9f90
        add esp, 4
        public_4bcd06 : nop
        mov esi, dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        and esi, 0xF
        inc ecx
        cmp ecx, eax
        mov dword ptr ds : [ebx+0x18], esi
        mov dword ptr ss : [esp+0x10], ecx
        jl public_4bcc30
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_4bcd28 : nop
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x4bcbf0)
    }
}

#undef public_4bcc30
#undef public_4bcc64
#undef public_4bcc9b
#undef public_4bcca2
#undef public_4bccc7
#undef public_4bccd9
#undef public_4bcce8
#undef public_4bccf7
#undef public_4bcd06
#undef public_4bcd28
