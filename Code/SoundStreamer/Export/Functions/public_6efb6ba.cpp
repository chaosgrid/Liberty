#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8474);
CLANG_FORWARD_PROC_SYMBOL(public_6efb6ba);
CLANG_FORWARD_PROC_SYMBOL(public_6efb7e7);

#define public_6efb6eb _public_6efb6eb
#define public_6efb6f8 _public_6efb6f8
#define public_6efb705 _public_6efb705
#define public_6efb712 _public_6efb712
#define public_6efb721 _public_6efb721
#define public_6efb72c _public_6efb72c
#define public_6efb738 _public_6efb738
#define public_6efb743 _public_6efb743
#define public_6efb755 _public_6efb755
#define public_6efb77b _public_6efb77b
#define public_6efb77e _public_6efb77e
#define public_6efb79f _public_6efb79f
#define public_6efb7aa _public_6efb7aa
#define public_6efb7b1 _public_6efb7b1
#define public_6efb7bf _public_6efb7bf
#define public_6efb7cd _public_6efb7cd
#define public_6efb7e0 _public_6efb7e0
#define public_6efb7e3 _public_6efb7e3

PROC_DECLARE(0x6efb6ba, internal_6efb6ba, public_6efb6ba);
extern "C" NAKED register_t __cdecl internal_6efb6ba()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        mov eax, edi
        dec eax
        dec eax
        je public_6efb721
        dec eax
        dec eax
        je public_6efb712
        sub eax, 4
        je public_6efb712
        sub eax, 3
        je public_6efb712
        sub eax, 4
        je public_6efb705
        sub eax, 6
        je public_6efb6f8
        dec eax
        je public_6efb6eb
        or eax, 0xFFFFFFFF
        jmp public_6efb7e3
        public_6efb6eb : nop
        mov esi, dword ptr ds : [public_6f012c8]
        mov eax, offset public_6f012c8
        jmp public_6efb72c
        public_6efb6f8 : nop
        mov esi, dword ptr ds : [public_6f012c4]
        mov eax, offset public_6f012c4
        jmp public_6efb72c
        public_6efb705 : nop
        mov esi, dword ptr ds : [public_6f012cc]
        mov eax, offset public_6f012cc
        jmp public_6efb72c
        public_6efb712 : nop
        push edi
        call public_6efb7e7
        mov esi, dword ptr ds : [eax+8]
        add eax, 8
        pop ecx
        jmp public_6efb72c
        public_6efb721 : nop
        mov esi, dword ptr ds : [public_6f012c0]
        mov eax, offset public_6f012c0
        public_6efb72c : nop
        cmp esi, 1
        jne public_6efb738
        xor eax, eax
        jmp public_6efb7e3
        public_6efb738 : nop
        test esi, esi
        jne public_6efb743
        push 3
        call public_6ef8474
        public_6efb743 : nop
        push ebx
        push 8
        pop ecx
        cmp edi, ecx
        je public_6efb755
        cmp edi, 0xB
        je public_6efb755
        cmp edi, 4
        jne public_6efb77b
        public_6efb755 : nop
        mov ebx, dword ptr ds : [public_6f01294]
        and dword ptr ds : [public_6f01294], 0
        cmp edi, ecx
        jne public_6efb7aa
        mov edx, dword ptr ds : [public_6f00c64]
        mov dword ptr ds : [public_6f00c64], 0x8C
        mov dword ptr ss : [ebp+8], edx
        jmp public_6efb77e
        public_6efb77b : nop
        mov ebx, dword ptr ss : [ebp+8]
        public_6efb77e : nop
        cmp edi, ecx
        jne public_6efb7aa
        mov eax, dword ptr ds : [public_6f00c58]
        mov ecx, dword ptr ds : [public_6f00c5c]
        add ecx, eax
        cmp eax, ecx
        jge public_6efb7b1
        lea edx, ds:[eax+eax*2]
        sub ecx, eax
        lea edx, ds : [edx*4+public_6f00be8]
        public_6efb79f : nop
        and dword ptr ds : [edx], 0
        add edx, 0xC
        dec ecx
        jne public_6efb79f
        jmp public_6efb7b1
        public_6efb7aa : nop
        and dword ptr ds : [eax], 0
        cmp edi, ecx
        jne public_6efb7bf
        public_6efb7b1 : nop
        push dword ptr ds : [public_6f00c64]
        push 8
        call esi
        pop ecx
        pop ecx
        jmp public_6efb7cd
        public_6efb7bf : nop
        push edi
        call esi
        cmp edi, 0xB
        pop ecx
        je public_6efb7cd
        cmp edi, 4
        jne public_6efb7e0
        public_6efb7cd : nop
        cmp edi, 8
        mov dword ptr ds : [public_6f01294], ebx
        jne public_6efb7e0
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [public_6f00c64], eax
        public_6efb7e0 : nop
        xor eax, eax
        pop ebx
        public_6efb7e3 : nop
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6efb6ba)
    }
}

#undef public_6efb6eb
#undef public_6efb6f8
#undef public_6efb705
#undef public_6efb712
#undef public_6efb721
#undef public_6efb72c
#undef public_6efb738
#undef public_6efb743
#undef public_6efb755
#undef public_6efb77b
#undef public_6efb77e
#undef public_6efb79f
#undef public_6efb7aa
#undef public_6efb7b1
#undef public_6efb7bf
#undef public_6efb7cd
#undef public_6efb7e0
#undef public_6efb7e3
