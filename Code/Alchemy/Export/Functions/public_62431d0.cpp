#include "Alchemy-PCH.h"


#define public_62431e1 _public_62431e1

PROC_DECLARE(0x62431d0, internal_62431d0, public_62431d0);
extern "C" NAKED register_t __cdecl internal_62431d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        jne public_62431e1
        or eax, 0xFFFFFFFF
        ret 0xC
        public_62431e1 : nop
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+0xC]
        shl eax, 4
        add eax, edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+0xC], edx
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], ecx
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x62431d0)
    }
}

#undef public_62431e1
