#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be8c40);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be8c59 _public_6be8c59

PROC_DECLARE(0x6be8c40, internal_6be8c40, public_6be8c40);
extern "C" NAKED register_t __cdecl internal_6be8c40()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6c0d098
        je public_6be8c59
        push eax
        call public_6c09aaa
        add esp, 4
        public_6be8c59 : nop
        mov ecx, esi
        pop esi
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6be8c40)
    }
}

#undef public_6be8c59
