#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9b640);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d9b667 _public_6d9b667

PROC_DECLARE(0x6d9b640, internal_6d9b640, public_6d9b640);
extern "C" NAKED register_t __cdecl internal_6d9b640()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x28]
        test al, al
        mov dword ptr ds : [esi], offset public_6db4408
        je public_6d9b667
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        je public_6d9b667
        push eax
        call public_6db1dc2
        add esp, 4
        mov dword ptr ds : [esi+0x20], 0
        public_6d9b667 : nop
        mov ecx, esi
        pop esi
        jmp public_6da1370
        UNREACHABLE_TRAP(0x6d9b640)
    }
}

#undef public_6d9b667
