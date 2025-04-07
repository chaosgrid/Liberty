#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6716af0);

#define public_6716afc _public_6716afc
#define public_6716b10 _public_6716b10

PROC_DECLARE(0x6716af0, internal_6716af0, public_6716af0);
extern "C" NAKED register_t __cdecl internal_6716af0()
{
    __asm
    {
        push ecx
        cmp eax, 0x1000
        lea ecx, ss:[esp+8]
        jb public_6716b10
        public_6716afc : nop
        sub ecx, 0x1000
        sub eax, 0x1000
        test dword ptr ds : [ecx], eax
        cmp eax, 0x1000
        jae public_6716afc
        public_6716b10 : nop
        sub ecx, eax
        mov eax, esp
        test dword ptr ds : [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        push eax
        ret 
        UNREACHABLE_TRAP(0x6716af0)
    }
}

#undef public_6716afc
#undef public_6716b10
