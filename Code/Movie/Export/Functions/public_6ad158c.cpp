#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad158c);

#define public_6ad1591 _public_6ad1591
#define public_6ad159f _public_6ad159f
#define public_6ad15a4 _public_6ad15a4

PROC_DECLARE(0x6ad158c, internal_6ad158c, public_6ad158c);
extern "C" NAKED register_t __cdecl internal_6ad158c()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        public_6ad1591 : nop
        cmp esi, dword ptr ss : [esp+0xC]
        jae public_6ad15a4
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6ad159f
        call eax
        public_6ad159f : nop
        add esi, 4
        jmp public_6ad1591
        public_6ad15a4 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad158c)
    }
}

#undef public_6ad1591
#undef public_6ad159f
#undef public_6ad15a4
