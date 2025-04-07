#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622e640);
CLANG_FORWARD_PROC_SYMBOL(public_623fb50);

#define public_622e66a _public_622e66a

PROC_DECLARE(0x622e640, internal_622e640, public_622e640);
extern "C" NAKED register_t __cdecl internal_622e640()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        add eax, 4
        cmp ecx, 0xF0004D58
        jne public_622e66a
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x88]
        push eax
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_622e66a : nop
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], eax
        jmp public_623fb50
        UNREACHABLE_TRAP(0x622e640)
    }
}

#undef public_622e66a
