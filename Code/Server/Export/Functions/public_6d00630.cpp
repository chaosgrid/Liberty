#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00630);
CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);

#define public_6d0065e _public_6d0065e

PROC_DECLARE(0x6d00630, internal_6d00630, public_6d00630);
extern "C" NAKED register_t __cdecl internal_6d00630()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push eax
        lea ecx, ss:[esp+0xC]
        push esi
        push ecx
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6d0065e
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x160]
        test al, al
        jne public_6d0065e
        mov al, 1
        pop esi
        ret 
        public_6d0065e : nop
        mov dword ptr ds : [esi], 0
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d00630)
    }
}

#undef public_6d0065e
