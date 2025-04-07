#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c6ac0);

#define public_65c6acc _public_65c6acc
#define public_65c6ae0 _public_65c6ae0

PROC_DECLARE(0x65c6ac0, internal_65c6ac0, public_65c6ac0);
extern "C" NAKED register_t __cdecl internal_65c6ac0()
{
    __asm
    {
        push ecx
        cmp eax, 0x1000
        lea ecx, ss:[esp+8]
        jb public_65c6ae0
        public_65c6acc : nop
        sub ecx, 0x1000
        sub eax, 0x1000
        test dword ptr ds : [ecx], eax
        cmp eax, 0x1000
        jae public_65c6acc
        public_65c6ae0 : nop
        sub ecx, eax
        mov eax, esp
        test dword ptr ds : [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        push eax
        ret 
        UNREACHABLE_TRAP(0x65c6ac0)
    }
}

#undef public_65c6acc
#undef public_65c6ae0
