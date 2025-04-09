#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_5b7e9c _public_5b7e9c
#define public_5b7eb0 _public_5b7eb0

PROC_DECLARE(0x5b7e90, internal_5b7e90, public_5b7e90);
extern "C" NAKED register_t __cdecl internal_5b7e90()
{
    __asm
    {
        push ecx
        cmp eax, 0x1000
        lea ecx, ss:[esp+8]
        jb public_5b7eb0
        public_5b7e9c : nop
        sub ecx, 0x1000
        sub eax, 0x1000
        test dword ptr ds : [ecx], eax
        cmp eax, 0x1000
        jae public_5b7e9c
        public_5b7eb0 : nop
        sub ecx, eax
        mov eax, esp
        test dword ptr ds : [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        push eax
        ret 
        UNREACHABLE_TRAP(0x5b7e90)
    }
}

#undef public_5b7e9c
#undef public_5b7eb0
