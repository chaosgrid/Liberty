#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be60e0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be60f3 _public_6be60f3

PROC_DECLARE(0x6be60e0, internal_6be60e0, public_6be60e0);
extern "C" NAKED register_t __cdecl internal_6be60e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_6be60f3
        push eax
        call public_6c09aaa
        add esp, 4
        public_6be60f3 : nop
        mov ecx, esi
        pop esi
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6be60e0)
    }
}

#undef public_6be60f3
