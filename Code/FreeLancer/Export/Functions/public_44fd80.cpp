#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fd80);

PROC_DECLARE(0x44fd80, internal_44fd80, public_44fd80);
extern "C" NAKED register_t __cdecl internal_44fd80()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_5cc6d4
        mov dword ptr ds : [ecx+4], offset public_5cc6a0
        mov dword ptr ds : [ecx+8], offset public_5cc684
        mov dword ptr ds : [ecx+0xC], offset public_5cc664
        mov dword ptr ds : [ecx+0x10], offset public_5cc62c
        mov dword ptr ds : [ecx+0x14], offset public_5cc604
        mov dword ptr ds : [ecx+0x18], offset public_5cc5e0
        mov dword ptr ds : [ecx+0x1C], offset public_5cc5a8
        mov dword ptr ds : [ecx+0x20], offset public_5cc590
        add ecx, 0x64
        push ecx
        call dword ptr ds : [public_5c60c8]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x44fd80)
    }
}
