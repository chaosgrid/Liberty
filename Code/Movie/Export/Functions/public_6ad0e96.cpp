#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf3e9);
CLANG_FORWARD_PROC_SYMBOL(public_6acf42b);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0de2);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0e96);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0f11);
CLANG_FORWARD_PROC_SYMBOL(public_6ad1056);

#define public_6ad0eb8 _public_6ad0eb8
#define public_6ad0ec4 _public_6ad0ec4
#define public_6ad0ec7 _public_6ad0ec7
#define public_6ad0f0c _public_6ad0f0c

PROC_DECLARE(0x6ad0e96, internal_6ad0e96, public_6ad0e96);
extern "C" NAKED register_t __cdecl internal_6ad0e96()
{
    __asm
    {
        push ebp
        mov ebp, esp
        cmp dword ptr ss : [ebp+0x20], 0
        push ebx
        mov ebx, dword ptr ss : [ebp+0x1C]
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+0xC]
        je public_6ad0eb8
        push dword ptr ss : [ebp+0x20]
        push ebx
        push edi
        push dword ptr ss : [ebp+8]
        call public_6ad1056
        add esp, 0x10
        public_6ad0eb8 : nop
        cmp dword ptr ss : [ebp+0x2C], 0
        push dword ptr ss : [ebp+8]
        jne public_6ad0ec4
        push edi
        jmp public_6ad0ec7
        public_6ad0ec4 : nop
        push dword ptr ss : [ebp+0x2C]
        public_6ad0ec7 : nop
        call public_6acf42b
        mov esi, dword ptr ss : [ebp+0x24]
        push dword ptr ds : [esi]
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        push edi
        call public_6ad0de2
        mov eax, dword ptr ds : [esi+4]
        push 0x100
        push dword ptr ss : [ebp+0x28]
        inc eax
        mov dword ptr ds : [edi+8], eax
        push dword ptr ds : [ebx+0xC]
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x10]
        push edi
        push dword ptr ss : [ebp+8]
        call public_6ad0f11
        add esp, 0x2C
        test eax, eax
        je public_6ad0f0c
        push edi
        push eax
        call public_6acf3e9
        public_6ad0f0c : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ad0e96)
    }
}

#undef public_6ad0eb8
#undef public_6ad0ec4
#undef public_6ad0ec7
#undef public_6ad0f0c
