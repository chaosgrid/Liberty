#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6bf4750);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bf4769 _public_6bf4769

PROC_DECLARE(0x6bf4750, internal_6bf4750, public_6bf4750);
extern "C" NAKED register_t __cdecl internal_6bf4750()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6c0ca88
        je public_6bf4769
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bf4769 : nop
        mov ecx, esi
        pop esi
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6bf4750)
    }
}

#undef public_6bf4769
