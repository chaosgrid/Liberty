#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9a630);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

PROC_DECLARE(0x6d9a630, internal_6d9a630, public_6d9a630);
extern "C" NAKED register_t __cdecl internal_6d9a630()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        push eax
        mov dword ptr ds : [esi], offset public_6db408c
        call public_6db1dc2
        add esp, 4
        mov dword ptr ds : [esi+0x24], 0
        mov ecx, esi
        pop esi
        jmp public_6da1370
        UNREACHABLE_TRAP(0x6d9a630)
    }
}
