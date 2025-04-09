#include "Freelancer-PCH.h"


#define public_53eaf7 _public_53eaf7

PROC_DECLARE(0x53eae0, internal_53eae0, public_53eae0);
extern "C" NAKED register_t __cdecl internal_53eae0()
{
    __asm
    {
        test byte ptr ds : [ecx+0x44], 4
        je public_53eaf7
        mov eax, dword ptr ss : [esp+4]
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        ret 4
        public_53eaf7 : nop
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call dword ptr ds : [public_5c67e0]
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x53eae0)
    }
}

#undef public_53eaf7
