#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3817);
CLANG_FORWARD_PROC_SYMBOL(public_6ad38fb);
CLANG_FORWARD_PROC_SYMBOL(public_6ad7b6b);

#define public_6ad3928 _public_6ad3928
#define public_6ad394a _public_6ad394a
#define public_6ad3954 _public_6ad3954
#define public_6ad3958 _public_6ad3958
#define public_6ad395c _public_6ad395c
#define public_6ad3980 _public_6ad3980
#define public_6ad3989 _public_6ad3989
#define public_6ad39b4 _public_6ad39b4
#define public_6ad39c1 _public_6ad39c1

PROC_DECLARE(0x6ad38fb, internal_6ad38fb, public_6ad38fb);
extern "C" NAKED register_t __cdecl internal_6ad38fb()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr ds : [public_6ae0f64], 0
        push ebx
        push esi
        push edi
        jne public_6ad3928
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, 0x41
        jl public_6ad39c1
        cmp eax, 0x5A
        jg public_6ad39c1
        add eax, 0x20
        jmp public_6ad39c1
        public_6ad3928 : nop
        mov ebx, dword ptr ss : [ebp+8]
        mov edi, 0x100
        push 1
        cmp ebx, edi
        pop esi
        jge public_6ad395c
        cmp dword ptr ds : [public_6addc10], esi
        jle public_6ad394a
        push esi
        push ebx
        call public_6ad3817
        pop ecx
        pop ecx
        jmp public_6ad3954
        public_6ad394a : nop
        mov eax, dword ptr ds : [public_6add750]
        mov al, byte ptr ds : [eax+ebx*2]
        and eax, esi
        public_6ad3954 : nop
        test eax, eax
        jne public_6ad395c
        public_6ad3958 : nop
        mov eax, ebx
        jmp public_6ad39c1
        public_6ad395c : nop
        mov edx, dword ptr ds : [public_6add750]
        mov eax, ebx
        sar eax, 8
        movzx ecx, al
        test byte ptr ds : [edx+ecx*2+1], 0x80
        je public_6ad3980
        and byte ptr ss : [ebp+0xA], 0
        push 2
        mov byte ptr ss : [ebp+8], al
        mov byte ptr ss : [ebp+9], bl
        pop eax
        jmp public_6ad3989
        public_6ad3980 : nop
        and byte ptr ss : [ebp+9], 0
        mov byte ptr ss : [ebp+8], bl
        mov eax, esi
        public_6ad3989 : nop
        push esi
        push 0
        lea ecx, ss:[ebp-4]
        push 3
        push ecx
        push eax
        lea eax, ss:[ebp+8]
        push eax
        push edi
        push dword ptr ds : [public_6ae0f64]
        call public_6ad7b6b
        add esp, 0x20
        test eax, eax
        je public_6ad3958
        cmp eax, esi
        jne public_6ad39b4
        movzx eax, byte ptr ss : [ebp-4]
        jmp public_6ad39c1
        public_6ad39b4 : nop
        movzx eax, byte ptr ss : [ebp-3]
        movzx ecx, byte ptr ss : [ebp-4]
        shl eax, 8
        or eax, ecx
        public_6ad39c1 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad38fb)
    }
}

#undef public_6ad3928
#undef public_6ad394a
#undef public_6ad3954
#undef public_6ad3958
#undef public_6ad395c
#undef public_6ad3980
#undef public_6ad3989
#undef public_6ad39b4
#undef public_6ad39c1
