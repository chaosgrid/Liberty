#include "ximage-PCH.h"


#define public_6f82739 _public_6f82739

PROC_DECLARE(0x6f82700, internal_6f82700, public_6f82700);
extern "C" NAKED register_t __cdecl internal_6f82700()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        jl public_6f82739
        mov eax, dword ptr ss : [esp+4]
        cmp ecx, dword ptr ds : [eax+0x14]
        jge public_6f82739
        mov edx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [edx+ecx*4]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+0x24]
        mov edx, dword ptr ds : [eax+0x20]
        mov eax, dword ptr ss : [esp+0x10]
        push ecx
        push edx
        push 0
        push 0
        push eax
        call dword ptr ds : [public_6f83034]
        xor eax, eax
        ret 0x10
        public_6f82739 : nop
        or eax, 0xFFFFFFFF
        ret 0x10
        UNREACHABLE_TRAP(0x6f82700)
    }
}

#undef public_6f82739
