#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0c70);

#define public_6ed0c7c _public_6ed0c7c
#define public_6ed0c90 _public_6ed0c90

PROC_DECLARE(0x6ed0c70, internal_6ed0c70, public_6ed0c70);
extern "C" NAKED register_t __cdecl internal_6ed0c70()
{
    __asm
    {
        push ecx
        cmp eax, 0x1000
        lea ecx, ss:[esp+8]
        jb public_6ed0c90
        public_6ed0c7c : nop
        sub ecx, 0x1000
        sub eax, 0x1000
        test dword ptr ds : [ecx], eax
        cmp eax, 0x1000
        jae public_6ed0c7c
        public_6ed0c90 : nop
        sub ecx, eax
        mov eax, esp
        test dword ptr ds : [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        push eax
        ret 
        UNREACHABLE_TRAP(0x6ed0c70)
    }
}

#undef public_6ed0c7c
#undef public_6ed0c90
