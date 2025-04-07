#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620db40);
CLANG_FORWARD_PROC_SYMBOL(public_623fb50);

#define public_620db6a _public_620db6a

PROC_DECLARE(0x620db40, internal_620db40, public_620db40);
extern "C" NAKED register_t __cdecl internal_620db40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        add eax, 4
        cmp ecx, 0xBA0B3BB
        jne public_620db6a
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x88]
        push eax
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_620db6a : nop
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], eax
        jmp public_623fb50
        UNREACHABLE_TRAP(0x620db40)
    }
}

#undef public_620db6a
