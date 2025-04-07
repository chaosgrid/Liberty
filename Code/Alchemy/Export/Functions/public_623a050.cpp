#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623a050);

#define public_623a059 _public_623a059
#define public_623a069 _public_623a069

PROC_DECLARE(0x623a050, internal_623a050, public_623a050);
extern "C" NAKED register_t __cdecl internal_623a050()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp eax, edx
        je public_623a069
        push esi
        public_623a059 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ds : [ecx]
        cmp eax, edx
        jne public_623a059
        pop esi
        public_623a069 : nop
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        ret 
        UNREACHABLE_TRAP(0x623a050)
    }
}

#undef public_623a059
#undef public_623a069
