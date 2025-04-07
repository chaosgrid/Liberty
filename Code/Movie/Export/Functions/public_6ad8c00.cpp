#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3817);
CLANG_FORWARD_PROC_SYMBOL(public_6ad7b6b);
CLANG_FORWARD_PROC_SYMBOL(public_6ad8c00);

#define public_6ad8c2b _public_6ad8c2b
#define public_6ad8c4b _public_6ad8c4b
#define public_6ad8c56 _public_6ad8c56
#define public_6ad8c5a _public_6ad8c5a
#define public_6ad8c5e _public_6ad8c5e
#define public_6ad8c81 _public_6ad8c81
#define public_6ad8c8a _public_6ad8c8a
#define public_6ad8cbc _public_6ad8cbc
#define public_6ad8cc9 _public_6ad8cc9

PROC_DECLARE(0x6ad8c00, internal_6ad8c00, public_6ad8c00);
extern "C" NAKED register_t __cdecl internal_6ad8c00()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr ds : [public_6ae0f64], 0
        push ebx
        jne public_6ad8c2b
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, 0x61
        jl public_6ad8cc9
        cmp eax, 0x7A
        jg public_6ad8cc9
        sub eax, 0x20
        jmp public_6ad8cc9
        public_6ad8c2b : nop
        mov ebx, dword ptr ss : [ebp+8]
        cmp ebx, 0x100
        jge public_6ad8c5e
        cmp dword ptr ds : [public_6addc10], 1
        jle public_6ad8c4b
        push 2
        push ebx
        call public_6ad3817
        pop ecx
        pop ecx
        jmp public_6ad8c56
        public_6ad8c4b : nop
        mov eax, dword ptr ds : [public_6add750]
        mov al, byte ptr ds : [eax+ebx*2]
        and eax, 2
        public_6ad8c56 : nop
        test eax, eax
        jne public_6ad8c5e
        public_6ad8c5a : nop
        mov eax, ebx
        jmp public_6ad8cc9
        public_6ad8c5e : nop
        mov edx, dword ptr ds : [public_6add750]
        mov eax, ebx
        sar eax, 8
        movzx ecx, al
        test byte ptr ds : [edx+ecx*2+1], 0x80
        je public_6ad8c81
        and byte ptr ss : [ebp+0xA], 0
        mov byte ptr ss : [ebp+8], al
        mov byte ptr ss : [ebp+9], bl
        push 2
        jmp public_6ad8c8a
        public_6ad8c81 : nop
        and byte ptr ss : [ebp+9], 0
        mov byte ptr ss : [ebp+8], bl
        push 1
        public_6ad8c8a : nop
        pop eax
        lea ecx, ss:[ebp-4]
        push 1
        push 0
        push 3
        push ecx
        push eax
        lea eax, ss:[ebp+8]
        push eax
        push 0x200
        push dword ptr ds : [public_6ae0f64]
        call public_6ad7b6b
        add esp, 0x20
        test eax, eax
        je public_6ad8c5a
        cmp eax, 1
        jne public_6ad8cbc
        movzx eax, byte ptr ss : [ebp-4]
        jmp public_6ad8cc9
        public_6ad8cbc : nop
        movzx eax, byte ptr ss : [ebp-3]
        movzx ecx, byte ptr ss : [ebp-4]
        shl eax, 8
        or eax, ecx
        public_6ad8cc9 : nop
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad8c00)
    }
}

#undef public_6ad8c2b
#undef public_6ad8c4b
#undef public_6ad8c56
#undef public_6ad8c5a
#undef public_6ad8c5e
#undef public_6ad8c81
#undef public_6ad8c8a
#undef public_6ad8cbc
#undef public_6ad8cc9
