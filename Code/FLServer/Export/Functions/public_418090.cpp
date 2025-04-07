#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_409880);
CLANG_FORWARD_PROC_SYMBOL(public_40cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_40ce70);
CLANG_FORWARD_PROC_SYMBOL(public_418090);
CLANG_FORWARD_PROC_SYMBOL(public_419056);

#define public_418105 _public_418105

PROC_DECLARE(0x418090, internal_418090, public_418090);
extern "C" NAKED register_t __cdecl internal_418090()
{
    __asm
    {
        push esi
        push edi
        call public_40cdc0
        mov eax, dword ptr ds : [public_42a6d8]
        mov esi, dword ptr ds : [public_41bbe8]
        push 0
        push 0
        push 0xBA
        push eax
        call esi
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [public_42a6d8]
        push ecx
        push edx
        mov edi, eax
        call public_409880
        mov eax, dword ptr ds : [public_42a6d8]
/*FIXUP push offset public_4259c4 @0x4180c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4259c4
        push eax
        call public_409880
        mov ecx, dword ptr ds : [public_42a6d8]
        add esp, 0x10
        push 0
        push 0
        push 0xBA
        push ecx
        call esi
        mov esi, eax
        call dword ptr ds : [public_41bbc0]
        cmp eax, dword ptr ds : [public_42a6d8]
        je public_418105
        push 0
        sub esi, edi
        push esi
        mov ecx, offset public_42a6b8
        call public_419056
        public_418105 : nop
        pop edi
        pop esi
        jmp public_40ce70
        UNREACHABLE_TRAP(0x418090)
    }
}

#undef public_418105
