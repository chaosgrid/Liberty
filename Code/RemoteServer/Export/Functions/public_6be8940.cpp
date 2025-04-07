#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be8940);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be8967 _public_6be8967

PROC_DECLARE(0x6be8940, internal_6be8940, public_6be8940);
extern "C" NAKED register_t __cdecl internal_6be8940()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x28]
        test al, al
        mov dword ptr ds : [esi], offset public_6c0d058
        je public_6be8967
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        je public_6be8967
        push eax
        call public_6c09aaa
        add esp, 4
        mov dword ptr ds : [esi+0x20], 0
        public_6be8967 : nop
        mov ecx, esi
        pop esi
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6be8940)
    }
}

#undef public_6be8967
