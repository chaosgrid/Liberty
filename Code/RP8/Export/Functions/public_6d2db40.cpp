#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2db40);

#define public_6d2db4b _public_6d2db4b
#define public_6d2db5d _public_6d2db5d
#define public_6d2db83 _public_6d2db83
#define public_6d2db8a _public_6d2db8a
#define public_6d2db8c _public_6d2db8c

PROC_DECLARE(0x6d2db40, internal_6d2db40, public_6d2db40);
extern "C" NAKED register_t __cdecl internal_6d2db40()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov dword ptr ss : [ebp-8], ecx
        jmp public_6d2db5d
        public_6d2db4b : nop
        mov eax, dword ptr ss : [ebp+0x10]
        add eax, 4
        mov dword ptr ss : [ebp+0x10], eax
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 4
        mov dword ptr ss : [ebp+8], ecx
        public_6d2db5d : nop
        mov edx, dword ptr ss : [ebp+8]
        cmp edx, dword ptr ss : [ebp+0xC]
        je public_6d2db8c
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        je public_6d2db83
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0xC], ecx
        jmp public_6d2db8a
        public_6d2db83 : nop
        mov dword ptr ss : [ebp-0xC], 0
        public_6d2db8a : nop
        jmp public_6d2db4b
        public_6d2db8c : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d2db40)
    }
}

#undef public_6d2db4b
#undef public_6d2db5d
#undef public_6d2db83
#undef public_6d2db8a
#undef public_6d2db8c
