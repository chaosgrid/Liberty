#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62111b0);

#define public_62111b9 _public_62111b9
#define public_62111c9 _public_62111c9

PROC_DECLARE(0x62111b0, internal_62111b0, public_62111b0);
extern "C" NAKED register_t __cdecl internal_62111b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp eax, edx
        je public_62111c9
        push esi
        public_62111b9 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ds : [ecx]
        cmp eax, edx
        jne public_62111b9
        pop esi
        public_62111c9 : nop
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        ret 
        UNREACHABLE_TRAP(0x62111b0)
    }
}

#undef public_62111b9
#undef public_62111c9
