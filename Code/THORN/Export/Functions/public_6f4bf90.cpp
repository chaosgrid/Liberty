#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4bf90);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c2f0);

PROC_DECLARE(0x6f4bf90, internal_6f4bf90, public_6f4bf90);
extern "C" NAKED register_t __cdecl internal_6f4bf90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        dec dword ptr ds : [eax+0x30]
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0x30]
        mov edx, dword ptr ds : [eax+0x2C]
        lea ecx, ds:[ecx+ecx*2]
        lea ecx, ds:[edx+ecx*4]
        mov edx, dword ptr ds : [ecx]
        add eax, 0xC
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [edx+0xC]
        push eax
        call public_6f4c2f0
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f4bf90)
    }
}
