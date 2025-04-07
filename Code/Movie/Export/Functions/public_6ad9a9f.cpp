#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad5560);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9a9f);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9b3b);

#define public_6ad9acd _public_6ad9acd

PROC_DECLARE(0x6ad9a9f, internal_6ad9a9f, public_6ad9a9f);
extern "C" NAKED register_t __cdecl internal_6ad9a9f()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push 1
        mov esi, ecx
        push edi
        call public_6ad9b3b
        test al, al
        je public_6ad9acd
        push edi
        push dword ptr ss : [esp+0x10]
        push dword ptr ds : [esi+4]
        call public_6ad5560
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        mov dword ptr ds : [esi+8], edi
        and byte ptr ds : [eax+edi], 0
        public_6ad9acd : nop
        mov eax, esi
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ad9a9f)
    }
}

#undef public_6ad9acd
