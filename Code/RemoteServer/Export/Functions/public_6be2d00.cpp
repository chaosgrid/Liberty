#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be2d00);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be2d19 _public_6be2d19

PROC_DECLARE(0x6be2d00, internal_6be2d00, public_6be2d00);
extern "C" NAKED register_t __cdecl internal_6be2d00()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x34]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6c0bd50
        je public_6be2d19
        push eax
        call public_6c09aaa
        add esp, 4
        public_6be2d19 : nop
        mov ecx, esi
        pop esi
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6be2d00)
    }
}

#undef public_6be2d19
