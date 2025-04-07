#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f9a0);

#define public_622494d _public_622494d

PROC_DECLARE(0x6224930, internal_6224930, public_6224930);
extern "C" NAKED register_t __cdecl internal_6224930()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x18DADCA8
        jne public_622494d
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x70]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 0xC
        public_622494d : nop
        mov dword ptr ss : [esp+8], eax
        jmp public_623f9a0
        UNREACHABLE_TRAP(0x6224930)
    }
}

#undef public_622494d
