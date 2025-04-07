#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4eae0);

#define public_6d4eaf9 _public_6d4eaf9

PROC_DECLARE(0x6d4eae0, internal_6d4eae0, public_6d4eae0);
extern "C" NAKED register_t __cdecl internal_6d4eae0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6d4eaf9
        push eax
        call dword ptr ds : [public_6d64bd0]
        add esp, 4
        mov dword ptr ds : [esi], 0
        public_6d4eaf9 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d4eae0)
    }
}

#undef public_6d4eaf9
