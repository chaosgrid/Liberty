#include "ximage-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f82950);

#define public_6f8295c _public_6f8295c
#define public_6f82970 _public_6f82970

PROC_DECLARE(0x6f82950, internal_6f82950, public_6f82950);
extern "C" NAKED register_t __cdecl internal_6f82950()
{
    __asm
    {
        push ecx
        cmp eax, 0x1000
        lea ecx, ss:[esp+8]
        jb public_6f82970
        public_6f8295c : nop
        sub ecx, 0x1000
        sub eax, 0x1000
        test dword ptr ds : [ecx], eax
        cmp eax, 0x1000
        jae public_6f8295c
        public_6f82970 : nop
        sub ecx, eax
        mov eax, esp
        test dword ptr ds : [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        push eax
        ret 
        UNREACHABLE_TRAP(0x6f82950)
    }
}

#undef public_6f8295c
#undef public_6f82970
