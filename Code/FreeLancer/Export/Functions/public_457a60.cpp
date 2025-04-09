#include "FreeLancer-PCH.h"


#define public_457a74 _public_457a74

PROC_DECLARE(0x457a60, internal_457a60, public_457a60);
extern "C" NAKED register_t __cdecl internal_457a60()
{
    __asm
    {
        test byte ptr ss : [esp+0xC], 1
        je public_457a74
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x68]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], ecx
        public_457a74 : nop
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x457a60)
    }
}

#undef public_457a74
