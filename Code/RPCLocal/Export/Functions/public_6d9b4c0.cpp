#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9b4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d9b4e7 _public_6d9b4e7

PROC_DECLARE(0x6d9b4c0, internal_6d9b4c0, public_6d9b4c0);
extern "C" NAKED register_t __cdecl internal_6d9b4c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x28]
        test al, al
        mov dword ptr ds : [esi], offset public_6db43e8
        je public_6d9b4e7
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        je public_6d9b4e7
        push eax
        call public_6db1dc2
        add esp, 4
        mov dword ptr ds : [esi+0x20], 0
        public_6d9b4e7 : nop
        mov ecx, esi
        pop esi
        jmp public_6da1370
        UNREACHABLE_TRAP(0x6d9b4c0)
    }
}

#undef public_6d9b4e7
