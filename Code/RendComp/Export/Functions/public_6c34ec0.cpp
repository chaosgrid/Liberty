#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34ec0);

#define public_6c34ecc _public_6c34ecc
#define public_6c34ee0 _public_6c34ee0

PROC_DECLARE(0x6c34ec0, internal_6c34ec0, public_6c34ec0);
extern "C" NAKED register_t __cdecl internal_6c34ec0()
{
    __asm
    {
        push ecx
        cmp eax, 0x1000
        lea ecx, ss:[esp+8]
        jb public_6c34ee0
        public_6c34ecc : nop
        sub ecx, 0x1000
        sub eax, 0x1000
        test dword ptr ds : [ecx], eax
        cmp eax, 0x1000
        jae public_6c34ecc
        public_6c34ee0 : nop
        sub ecx, eax
        mov eax, esp
        test dword ptr ds : [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        push eax
        ret 
        UNREACHABLE_TRAP(0x6c34ec0)
    }
}

#undef public_6c34ecc
#undef public_6c34ee0
