#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa9000);

#define public_6fa900c _public_6fa900c
#define public_6fa9020 _public_6fa9020

PROC_DECLARE(0x6fa9000, internal_6fa9000, public_6fa9000);
extern "C" NAKED register_t __cdecl internal_6fa9000()
{
    __asm
    {
        push ecx
        cmp eax, 0x1000
        lea ecx, ss:[esp+8]
        jb public_6fa9020
        public_6fa900c : nop
        sub ecx, 0x1000
        sub eax, 0x1000
        test dword ptr ds : [ecx], eax
        cmp eax, 0x1000
        jae public_6fa900c
        public_6fa9020 : nop
        sub ecx, eax
        mov eax, esp
        test dword ptr ds : [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        push eax
        ret 
        UNREACHABLE_TRAP(0x6fa9000)
    }
}

#undef public_6fa900c
#undef public_6fa9020
