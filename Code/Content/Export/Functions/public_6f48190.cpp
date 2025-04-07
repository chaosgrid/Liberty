#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f48190);

#define public_6f481a7 _public_6f481a7

PROC_DECLARE(0x6f48190, internal_6f48190, public_6f48190);
extern "C" NAKED register_t __cdecl internal_6f48190()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ss : [esp+8]
        cmp eax, ecx
        mov byte ptr ss : [esp+3], 0
        jne public_6f481a7
        mov al, 1
        pop ecx
        ret 4
        public_6f481a7 : nop
        lea edx, ss:[esp+3]
        push edx
        push ecx
        push eax
        call dword ptr ds : [public_6fb352c]
        mov al, byte ptr ss : [esp+0xF]
        add esp, 0xC
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f48190)
    }
}

#undef public_6f481a7
