#include "Alchemy-PCH.h"


#define public_6243221 _public_6243221

PROC_DECLARE(0x6243210, internal_6243210, public_6243210);
extern "C" NAKED register_t __cdecl internal_6243210()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        jne public_6243221
        or eax, 0xFFFFFFFF
        ret 8
        public_6243221 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6243210)
    }
}

#undef public_6243221
