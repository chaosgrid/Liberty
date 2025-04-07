#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623fb50);

#define public_6224866 _public_6224866

PROC_DECLARE(0x6224840, internal_6224840, public_6224840);
extern "C" NAKED register_t __cdecl internal_6224840()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xF0004D58
        jne public_6224866
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x84]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6224866 : nop
        mov dword ptr ss : [esp+8], eax
        jmp public_623fb50
        UNREACHABLE_TRAP(0x6224840)
    }
}

#undef public_6224866
