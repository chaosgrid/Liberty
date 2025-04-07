#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be6380);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be6393 _public_6be6393

PROC_DECLARE(0x6be6380, internal_6be6380, public_6be6380);
extern "C" NAKED register_t __cdecl internal_6be6380()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_6be6393
        push eax
        call public_6c09aaa
        add esp, 4
        public_6be6393 : nop
        mov ecx, esi
        pop esi
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6be6380)
    }
}

#undef public_6be6393
