#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f1810);

PROC_DECLARE(0x65f1810, internal_65f1810, public_65f1810);
extern "C" NAKED register_t __cdecl internal_65f1810()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], offset public_66011ac
        xor ecx, ecx
        mov dword ptr ds : [eax], offset public_6601110
        mov dword ptr ds : [eax+4], offset public_66010dc
        mov dword ptr ds : [public_6603128], ecx
        mov dword ptr ds : [public_660312c], ecx
        mov dword ptr ds : [public_6603130], ecx
        mov dword ptr ds : [public_6603134], ecx
        mov dword ptr ds : [public_6603138], ecx
        mov dword ptr ds : [public_660313c], ecx
        mov dword ptr ds : [public_6603140], ecx
        ret 
        UNREACHABLE_TRAP(0x65f1810)
    }
}
