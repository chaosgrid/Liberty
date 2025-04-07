#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57ee0);

#define public_6f57eec _public_6f57eec
#define public_6f57f00 _public_6f57f00

PROC_DECLARE(0x6f57ee0, internal_6f57ee0, public_6f57ee0);
extern "C" NAKED register_t __cdecl internal_6f57ee0()
{
    __asm
    {
        push ecx
        cmp eax, 0x1000
        lea ecx, ss:[esp+8]
        jb public_6f57f00
        public_6f57eec : nop
        sub ecx, 0x1000
        sub eax, 0x1000
        test dword ptr ds : [ecx], eax
        cmp eax, 0x1000
        jae public_6f57eec
        public_6f57f00 : nop
        sub ecx, eax
        mov eax, esp
        test dword ptr ds : [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        push eax
        ret 
        UNREACHABLE_TRAP(0x6f57ee0)
    }
}

#undef public_6f57eec
#undef public_6f57f00
