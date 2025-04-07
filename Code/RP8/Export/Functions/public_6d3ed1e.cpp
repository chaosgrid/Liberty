#include "RP8-PCH.h"

PROC_DECLARE(0x6d3ed1e, internal_6d3ed1e, public_6d3ed1e);
extern "C" NAKED register_t __cdecl internal_6d3ed1e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [ecx+0x10]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx]
        faddp 
        fstp dword ptr ss : [ebp-8]
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [eax]
        fld dword ptr ds : [ecx+0x14]
        mov ecx, dword ptr ss : [ebp-8]
        fmul dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax], ecx
        faddp 
        fstp dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+4], ecx
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d3ed1e)
    }
}
