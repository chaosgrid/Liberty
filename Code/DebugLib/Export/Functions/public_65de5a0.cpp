#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65de5a0);

#define public_65de5ac _public_65de5ac
#define public_65de5c0 _public_65de5c0

PROC_DECLARE(0x65de5a0, internal_65de5a0, public_65de5a0);
extern "C" NAKED register_t __cdecl internal_65de5a0()
{
    __asm
    {
        push ecx
        cmp eax, 0x1000
        lea ecx, ss:[esp+8]
        jb public_65de5c0
        public_65de5ac : nop
        sub ecx, 0x1000
        sub eax, 0x1000
        test dword ptr ds : [ecx], eax
        cmp eax, 0x1000
        jae public_65de5ac
        public_65de5c0 : nop
        sub ecx, eax
        mov eax, esp
        test dword ptr ds : [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        push eax
        ret 
        UNREACHABLE_TRAP(0x65de5a0)
    }
}

#undef public_65de5ac
#undef public_65de5c0
