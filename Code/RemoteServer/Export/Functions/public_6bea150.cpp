#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bea150);
CLANG_FORWARD_PROC_SYMBOL(public_6beaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bea17d _public_6bea17d

PROC_DECLARE(0x6bea150, internal_6bea150, public_6bea150);
extern "C" NAKED register_t __cdecl internal_6bea150()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x228
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6bea17d
        mov ecx, eax
        call public_6beaf10
        test eax, eax
        je public_6bea17d
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6bea17d : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bea150)
    }
}

#undef public_6bea17d
