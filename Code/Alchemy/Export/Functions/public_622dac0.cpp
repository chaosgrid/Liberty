#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622dac0);

#define public_622dac9 _public_622dac9
#define public_622dad9 _public_622dad9

PROC_DECLARE(0x622dac0, internal_622dac0, public_622dac0);
extern "C" NAKED register_t __cdecl internal_622dac0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp eax, edx
        je public_622dad9
        push esi
        public_622dac9 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ds : [ecx]
        cmp eax, edx
        jne public_622dac9
        pop esi
        public_622dad9 : nop
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        ret 
        UNREACHABLE_TRAP(0x622dac0)
    }
}

#undef public_622dac9
#undef public_622dad9
