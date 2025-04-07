#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9b580);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d9b5a7 _public_6d9b5a7

PROC_DECLARE(0x6d9b580, internal_6d9b580, public_6d9b580);
extern "C" NAKED register_t __cdecl internal_6d9b580()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x28]
        test al, al
        mov dword ptr ds : [esi], offset public_6db43f8
        je public_6d9b5a7
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        je public_6d9b5a7
        push eax
        call public_6db1dc2
        add esp, 4
        mov dword ptr ds : [esi+0x20], 0
        public_6d9b5a7 : nop
        mov ecx, esi
        pop esi
        jmp public_6da1370
        UNREACHABLE_TRAP(0x6d9b580)
    }
}

#undef public_6d9b5a7
