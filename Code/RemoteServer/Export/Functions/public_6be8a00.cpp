#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be8a00);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be8a27 _public_6be8a27

PROC_DECLARE(0x6be8a00, internal_6be8a00, public_6be8a00);
extern "C" NAKED register_t __cdecl internal_6be8a00()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x28]
        test al, al
        mov dword ptr ds : [esi], offset public_6c0d068
        je public_6be8a27
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        je public_6be8a27
        push eax
        call public_6c09aaa
        add esp, 4
        mov dword ptr ds : [esi+0x20], 0
        public_6be8a27 : nop
        mov ecx, esi
        pop esi
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6be8a00)
    }
}

#undef public_6be8a27
