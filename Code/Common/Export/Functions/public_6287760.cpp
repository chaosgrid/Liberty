#include "Common-PCH.h"


#define public_6287775 _public_6287775

PROC_DECLARE(0x6287760, internal_6287760, public_6287760);
extern "C" NAKED register_t __cdecl internal_6287760()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        je public_6287775
        lea edx, ds:[ecx+4]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax+4], ecx
        ret 4
        public_6287775 : nop
        xor edx, edx
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax+4], ecx
        ret 4
        UNREACHABLE_TRAP(0x6287760)
    }
}

#undef public_6287775
