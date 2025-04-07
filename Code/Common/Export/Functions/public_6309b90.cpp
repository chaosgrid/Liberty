#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f93f0);

#define public_6309bbc _public_6309bbc

PROC_DECLARE(0x6309b90, internal_6309b90, public_6309b90);
extern "C" NAKED register_t __cdecl internal_6309b90()
{
    __asm
    {
        fld dword ptr ds : [public_6399408]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        cmp eax, dword ptr ds : [public_63fcf0c]
        jne public_6309bbc
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6309bbc
        push eax
        fstp st(0)
        call public_62f93f0
        fild dword ptr ds : [esi+0x14]
        add esp, 4
        fmul dword ptr ds : [eax+0x5C]
        public_6309bbc : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6309b90)
    }
}

#undef public_6309bbc
