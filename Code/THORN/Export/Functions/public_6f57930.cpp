#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b0b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b500);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b590);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4bf30);
CLANG_FORWARD_PROC_SYMBOL(public_6f4bf90);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55450);
CLANG_FORWARD_PROC_SYMBOL(public_6f554d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55510);
CLANG_FORWARD_PROC_SYMBOL(public_6f56c30);
CLANG_FORWARD_PROC_SYMBOL(public_6f57320);
CLANG_FORWARD_PROC_SYMBOL(public_6f577c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57930);

#define public_6f57972 _public_6f57972
#define public_6f57987 _public_6f57987
#define public_6f579a4 _public_6f579a4
#define public_6f579b7 _public_6f579b7
#define public_6f579ca _public_6f579ca
#define public_6f579e7 _public_6f579e7
#define public_6f579f5 _public_6f579f5
#define public_6f57a31 _public_6f57a31
#define public_6f57a63 _public_6f57a63
#define public_6f57a68 _public_6f57a68

PROC_DECLARE(0x6f57930, internal_6f57930, public_6f57930);
extern "C" NAKED register_t __cdecl internal_6f57930()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push esi
        call public_6f4b500
        add esp, 4
        test eax, eax
        je public_6f579f5
        push esi
        call public_6f4b590
        push esi
        mov edi, eax
        call public_6f4b5e0
        add esp, 8
        xor esi, esi
        test eax, eax
        mov dword ptr ss : [esp+0xC], eax
        jle public_6f57a68
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ds : [public_6f5a0c4]
        public_6f57972 : nop
        mov al, byte ptr ds : [esi+edi]
        cmp al, 0x25
        je public_6f57987
        movsx eax, al
        push eax
        call public_6f55450
        add esp, 4
        jmp public_6f579e7
        public_6f57987 : nop
        mov ecx, dword ptr ds : [public_6f5a0c0]
        mov eax, dword ptr ds : [ecx]
        inc esi
        cmp eax, 1
        jle public_6f579a4
        xor edx, edx
        mov dl, byte ptr ds : [esi+edi]
        push 4
        push edx
        call ebp
        add esp, 8
        jmp public_6f579b7
        public_6f579a4 : nop
        mov ecx, dword ptr ds : [public_6f5a0bc]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        mov al, byte ptr ds : [esi+edi]
        mov al, byte ptr ds : [edx+eax*2]
        and eax, 4
        public_6f579b7 : nop
        test eax, eax
        jne public_6f579ca
        movsx eax, byte ptr ds : [esi+edi]
        push eax
        call public_6f55450
        add esp, 4
        jmp public_6f579e7
        public_6f579ca : nop
        movsx ecx, byte ptr ds : [esi+edi]
        push ebx
        push ecx
        call public_6f577c0
        mov edx, dword ptr ds : [ebx+eax*8+0xC]
        mov eax, dword ptr ds : [ebx+eax*8+8]
        push edx
        push eax
        call public_6f56c30
        add esp, 0x10
        public_6f579e7 : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc esi
        cmp esi, eax
        jl public_6f57972
        pop ebp
        pop ebx
        pop edi
        pop esi
        ret 
        public_6f579f5 : nop
        call public_6f4bf30
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        call public_6f57320
        push 0
        call public_6f554d0
        push esi
        mov edi, eax
        call public_6f4b0b0
        push edi
        mov esi, eax
        call public_6f55510
        add esp, 0x10
        test esi, esi
        je public_6f57a31
        call public_6f4bf90
        push 0
        call public_6f4c7f0
        add esp, 4
        public_6f57a31 : nop
        push 1
        call public_6f4b090
        mov esi, eax
        push esi
        call public_6f4b500
        add esp, 8
        test eax, eax
        je public_6f57a63
        push esi
        call public_6f4b5e0
        add esp, 4
        push eax
        push esi
        call public_6f4b590
        add esp, 4
        push eax
        call public_6f56c30
        add esp, 8
        public_6f57a63 : nop
        call public_6f4bf90
        public_6f57a68 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f57930)
    }
}

#undef public_6f57972
#undef public_6f57987
#undef public_6f579a4
#undef public_6f579b7
#undef public_6f579ca
#undef public_6f579e7
#undef public_6f579f5
#undef public_6f57a31
#undef public_6f57a63
#undef public_6f57a68
