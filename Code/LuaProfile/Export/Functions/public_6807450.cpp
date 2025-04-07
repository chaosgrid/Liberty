#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a20);
CLANG_FORWARD_PROC_SYMBOL(public_6807450);
CLANG_FORWARD_PROC_SYMBOL(public_68074b0);
CLANG_FORWARD_PROC_SYMBOL(public_68074d0);
CLANG_FORWARD_PROC_SYMBOL(public_6807630);
CLANG_FORWARD_PROC_SYMBOL(public_6807710);
CLANG_FORWARD_PROC_SYMBOL(public_6807750);

#define public_680747f _public_680747f
#define public_68074aa _public_68074aa

PROC_DECLARE(0x6807450, internal_6807450, public_6807450);
extern "C" NAKED register_t __cdecl internal_6807450()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        xor ebx, ebx
        push ebx
        push edi
        push esi
        call public_6807750
        add esp, 4
        push eax
        push esi
        call public_68074d0
        mov eax, dword ptr ds : [esi+4]
        add esp, 0x10
        cmp eax, 0x3A
        je public_680747f
        cmp eax, 0x2E
        jne public_68074aa
        public_680747f : nop
        xor ebx, ebx
        cmp eax, 0x3A
        push esi
        sete bl
        call public_6806a20
        push edi
        push esi
        call public_6807630
        push esi
        call public_6807710
        push eax
        push esi
        call public_68074b0
        add esp, 0x18
        mov dword ptr ds : [edi], 3
        public_68074aa : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6807450)
    }
}

#undef public_680747f
#undef public_68074aa
