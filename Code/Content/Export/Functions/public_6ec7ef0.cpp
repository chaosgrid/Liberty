#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f48030);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ec7f15 _public_6ec7f15

PROC_DECLARE(0x6ec7ef0, internal_6ec7ef0, public_6ec7ef0);
extern "C" NAKED register_t __cdecl internal_6ec7ef0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        add eax, 0xC
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ec7f15
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        mov ecx, dword ptr ds : [edx+8]
        call public_6f48030
        public_6ec7f15 : nop
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ec7ef0)
    }
}

#undef public_6ec7f15
