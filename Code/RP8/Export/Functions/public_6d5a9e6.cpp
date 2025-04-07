#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5a661);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a9e6);

#define public_6d5aa0b _public_6d5aa0b
#define public_6d5aa3d _public_6d5aa3d
#define public_6d5aa4a _public_6d5aa4a
#define public_6d5aa54 _public_6d5aa54
#define public_6d5aa62 _public_6d5aa62

PROC_DECLARE(0x6d5a9e6, internal_6d5a9e6, public_6d5a9e6);
extern "C" NAKED register_t __cdecl internal_6d5a9e6()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        and dword ptr ss : [ebp-4], 0
        push esi
        mov esi, dword ptr ss : [ebp+0x18]
        push 4
        push 0x13
        push dword ptr ds : [esi+0x28]
        call dword ptr ds : [esi+0x20]
        add esp, 0xC
        test eax, eax
        mov dword ptr ss : [ebp+0x18], eax
        jne public_6d5aa0b
        push 0xFFFFFFFC
        pop eax
        jmp public_6d5aa62
        public_6d5aa0b : nop
        push ebx
        push eax
        lea eax, ss:[ebp-4]
        push eax
        push dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+0x10]
        push 0
        push 0
        push 0x13
        push 0x13
        push dword ptr ss : [ebp+8]
        call public_6d5a661
        mov ebx, eax
        add esp, 0x24
        cmp ebx, 0xFFFFFFFD
        jne public_6d5aa3d
        mov dword ptr ds : [esi+0x18], offset public_6d6256c
        jmp public_6d5aa54
        public_6d5aa3d : nop
        cmp ebx, 0xFFFFFFFB
        je public_6d5aa4a
        mov eax, dword ptr ss : [ebp+0xC]
        cmp dword ptr ds : [eax], 0
        jne public_6d5aa54
        public_6d5aa4a : nop
        push 0xFFFFFFFD
        mov dword ptr ds : [esi+0x18], offset public_6d62548
        pop ebx
        public_6d5aa54 : nop
        push dword ptr ss : [ebp+0x18]
        push dword ptr ds : [esi+0x28]
        call dword ptr ds : [esi+0x24]
        pop ecx
        pop ecx
        mov eax, ebx
        pop ebx
        public_6d5aa62 : nop
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d5a9e6)
    }
}

#undef public_6d5aa0b
#undef public_6d5aa3d
#undef public_6d5aa4a
#undef public_6d5aa54
#undef public_6d5aa62
