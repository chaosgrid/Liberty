#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee1750);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8ddc);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8de2);

#define public_6ee1778 _public_6ee1778
#define public_6ee1782 _public_6ee1782
#define public_6ee17b0 _public_6ee17b0
#define public_6ee17c2 _public_6ee17c2
#define public_6ee17d6 _public_6ee17d6

PROC_DECLARE(0x6ee1750, internal_6ee1750, public_6ee1750);
extern "C" NAKED register_t __cdecl internal_6ee1750()
{
    __asm
    {
        mov edx, dword ptr ds : [public_6eeaf40]
        mov eax, dword ptr ds : [public_6eeaf3c]
        add edx, 2
        test eax, eax
        mov dword ptr ds : [public_6eeaf40], edx
        je public_6ee1778
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_6eeaf3c], ecx
        dec dword ptr ds : [public_6eeaf48]
        jmp public_6ee1782
        public_6ee1778 : nop
        push 0x60
        call public_6ee8de2
        add esp, 4
        public_6ee1782 : nop
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [public_6eeaf04], eax
        mov eax, dword ptr ds : [public_6eeaf40]
        dec eax
        mov dword ptr ds : [public_6eeaf08], 0
        mov dword ptr ds : [public_6eeaf40], eax
        jne public_6ee17d6
        mov eax, dword ptr ds : [public_6eeaf3c]
        test eax, eax
        je public_6ee17c2
        push esi
        lea ecx, ds:[ecx]
        public_6ee17b0 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6ee8ddc
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_6ee17b0
        pop esi
        public_6ee17c2 : nop
        mov dword ptr ds : [public_6eeaf3c], 0
        mov dword ptr ds : [public_6eeaf48], 0
        public_6ee17d6 : nop
        ret 
        UNREACHABLE_TRAP(0x6ee1750)
    }
}

#undef public_6ee1778
#undef public_6ee1782
#undef public_6ee17b0
#undef public_6ee17c2
#undef public_6ee17d6
