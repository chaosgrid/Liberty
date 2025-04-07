#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6246470);

#define public_624647c _public_624647c
#define public_6246490 _public_6246490

PROC_DECLARE(0x6246470, internal_6246470, public_6246470);
extern "C" NAKED register_t __cdecl internal_6246470()
{
    __asm
    {
        push ecx
        cmp eax, 0x1000
        lea ecx, ss:[esp+8]
        jb public_6246490
        public_624647c : nop
        sub ecx, 0x1000
        sub eax, 0x1000
        test dword ptr ds : [ecx], eax
        cmp eax, 0x1000
        jae public_624647c
        public_6246490 : nop
        sub ecx, eax
        mov eax, esp
        test dword ptr ds : [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        push eax
        ret 
        UNREACHABLE_TRAP(0x6246470)
    }
}

#undef public_624647c
#undef public_6246490
