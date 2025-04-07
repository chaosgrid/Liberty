#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9b700);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d9b727 _public_6d9b727

PROC_DECLARE(0x6d9b700, internal_6d9b700, public_6d9b700);
extern "C" NAKED register_t __cdecl internal_6d9b700()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x28]
        test al, al
        mov dword ptr ds : [esi], offset public_6db4418
        je public_6d9b727
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        je public_6d9b727
        push eax
        call public_6db1dc2
        add esp, 4
        mov dword ptr ds : [esi+0x20], 0
        public_6d9b727 : nop
        mov ecx, esi
        pop esi
        jmp public_6da1370
        UNREACHABLE_TRAP(0x6d9b700)
    }
}

#undef public_6d9b727
