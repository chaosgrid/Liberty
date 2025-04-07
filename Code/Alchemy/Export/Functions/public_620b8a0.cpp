#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b8a0);

#define public_620b8a9 _public_620b8a9
#define public_620b8b9 _public_620b8b9

PROC_DECLARE(0x620b8a0, internal_620b8a0, public_620b8a0);
extern "C" NAKED register_t __cdecl internal_620b8a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp eax, edx
        je public_620b8b9
        push esi
        public_620b8a9 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ds : [ecx]
        cmp eax, edx
        jne public_620b8a9
        pop esi
        public_620b8b9 : nop
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        ret 
        UNREACHABLE_TRAP(0x620b8a0)
    }
}

#undef public_620b8a9
#undef public_620b8b9
