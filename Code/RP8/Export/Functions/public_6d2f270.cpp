#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f270);

#define public_6d2f27c _public_6d2f27c
#define public_6d2f290 _public_6d2f290

PROC_DECLARE(0x6d2f270, internal_6d2f270, public_6d2f270);
extern "C" NAKED register_t __cdecl internal_6d2f270()
{
    __asm
    {
        push ecx
        cmp eax, 0x1000
        lea ecx, ss:[esp+8]
        jb public_6d2f290
        public_6d2f27c : nop
        sub ecx, 0x1000
        sub eax, 0x1000
        test dword ptr ds : [ecx], eax
        cmp eax, 0x1000
        jae public_6d2f27c
        public_6d2f290 : nop
        sub ecx, eax
        mov eax, esp
        test dword ptr ds : [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        push eax
        ret 
        UNREACHABLE_TRAP(0x6d2f270)
    }
}

#undef public_6d2f27c
#undef public_6d2f290
