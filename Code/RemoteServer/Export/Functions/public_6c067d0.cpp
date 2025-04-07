#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c067d0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6c067e9 _public_6c067e9

PROC_DECLARE(0x6c067d0, internal_6c067d0, public_6c067d0);
extern "C" NAKED register_t __cdecl internal_6c067d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6c0db20
        je public_6c067e9
        push eax
        call public_6c09aaa
        add esp, 4
        public_6c067e9 : nop
        mov ecx, esi
        pop esi
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6c067d0)
    }
}

#undef public_6c067e9
