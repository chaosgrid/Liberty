#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15b45);

#define public_6d15b52 _public_6d15b52
#define public_6d15b5b _public_6d15b5b
#define public_6d15b75 _public_6d15b75
#define public_6d15b77 _public_6d15b77
#define public_6d15b79 _public_6d15b79

PROC_DECLARE(0x6d15b45, internal_6d15b45, public_6d15b45);
extern "C" NAKED register_t __cdecl internal_6d15b45()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], offset public_6d64040
        jmp public_6d15b5b
        public_6d15b52 : nop
        mov eax, dword ptr ss : [ebp-4]
        add eax, 0xC
        mov dword ptr ss : [ebp-4], eax
        public_6d15b5b : nop
        mov ecx, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [ecx], 0
        je public_6d15b77
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, dword ptr ds : [edx]
        jne public_6d15b75
        mov ecx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [ecx+8]
        jmp public_6d15b79
        public_6d15b75 : nop
        jmp public_6d15b52
        public_6d15b77 : nop
        xor eax, eax
        public_6d15b79 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d15b45)
    }
}

#undef public_6d15b52
#undef public_6d15b5b
#undef public_6d15b75
#undef public_6d15b77
#undef public_6d15b79
