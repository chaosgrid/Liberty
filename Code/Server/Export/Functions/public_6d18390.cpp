#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d14f10);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);

#define public_6d183af _public_6d183af

PROC_DECLARE(0x6d18390, internal_6d18390, public_6d18390);
extern "C" NAKED register_t __cdecl internal_6d18390()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        cmp eax, 0xFFFFFFFF
        je public_6d183af
        push eax
        call public_6d15650
        mov ecx, eax
        call public_6d14f10
        mov dword ptr ds : [esi], 0xFFFFFFFF
        public_6d183af : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d18390)
    }
}

#undef public_6d183af
