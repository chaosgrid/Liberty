#include "Alchemy-PCH.h"


#define public_6243114 _public_6243114

PROC_DECLARE(0x6243100, internal_6243100, public_6243100);
extern "C" NAKED register_t __cdecl internal_6243100()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        jne public_6243114
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], eax
        ret 0xC
        public_6243114 : nop
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+8]
        shl edx, 4
        mov ecx, dword ptr ds : [eax+edx+4]
        mov edx, dword ptr ss : [esp+0xC]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6243100)
    }
}

#undef public_6243114
