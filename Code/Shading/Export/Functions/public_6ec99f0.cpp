#include "Shading-PCH.h"


#define public_6ec9a09 _public_6ec9a09
#define public_6ec9a13 _public_6ec9a13

PROC_DECLARE(0x6ec99f0, internal_6ec99f0, public_6ec99f0);
extern "C" NAKED register_t __cdecl internal_6ec99f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        push esi
        mov esi, dword ptr ds : [ecx+0x74]
        mov dword ptr ds : [ecx+0x74], eax
        je public_6ec9a09
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6ec9a09 : nop
        test esi, esi
        je public_6ec9a13
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        public_6ec9a13 : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ec99f0)
    }
}

#undef public_6ec9a09
#undef public_6ec9a13
