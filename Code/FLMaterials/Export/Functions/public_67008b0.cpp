#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67008b0);

#define public_67008bc _public_67008bc
#define public_67008d0 _public_67008d0

PROC_DECLARE(0x67008b0, internal_67008b0, public_67008b0);
extern "C" NAKED register_t __cdecl internal_67008b0()
{
    __asm
    {
        push ecx
        cmp eax, 0x1000
        lea ecx, ss:[esp+8]
        jb public_67008d0
        public_67008bc : nop
        sub ecx, 0x1000
        sub eax, 0x1000
        test dword ptr ds : [ecx], eax
        cmp eax, 0x1000
        jae public_67008bc
        public_67008d0 : nop
        sub ecx, eax
        mov eax, esp
        test dword ptr ds : [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        push eax
        ret 
        UNREACHABLE_TRAP(0x67008b0)
    }
}

#undef public_67008bc
#undef public_67008d0
