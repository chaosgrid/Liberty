#include "RendComp-PCH.h"


#define public_6c30af1 _public_6c30af1

PROC_DECLARE(0x6c30ae0, internal_6c30ae0, public_6c30ae0);
extern "C" NAKED register_t __cdecl internal_6c30ae0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        jge public_6c30af1
        or eax, 0xFFFFFFFF
        ret 8
        public_6c30af1 : nop
        mov eax, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [eax+0x34]
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax], edx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6c30ae0)
    }
}

#undef public_6c30af1
