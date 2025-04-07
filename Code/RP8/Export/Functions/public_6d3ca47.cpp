#include "RP8-PCH.h"

PROC_DECLARE(0x6d3ca47, internal_6d3ca47, public_6d3ca47);
extern "C" NAKED register_t __cdecl internal_6d3ca47()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [edx]
        mov eax, dword ptr ss : [ebp+8]
        fsub dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ss : [ebp+0x14]
        fmul dword ptr ss : [ebp+0x18]
        fld dword ptr ds : [esi]
        fsub dword ptr ds : [ecx]
        fmul dword ptr ss : [ebp+0x1C]
        faddp 
        fadd dword ptr ds : [ecx]
        fstp dword ptr ds : [eax]
        fld dword ptr ds : [edx+4]
        fsub dword ptr ds : [ecx+4]
        fmul dword ptr ss : [ebp+0x18]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ds : [ecx+4]
        fmul dword ptr ss : [ebp+0x1C]
        faddp 
        fadd dword ptr ds : [ecx+4]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ds : [edx+8]
        fsub dword ptr ds : [ecx+8]
        fmul dword ptr ss : [ebp+0x18]
        fld dword ptr ds : [esi+8]
        pop esi
        fsub dword ptr ds : [ecx+8]
        fmul dword ptr ss : [ebp+0x1C]
        faddp 
        fadd dword ptr ds : [ecx+8]
        fstp dword ptr ds : [eax+8]
        pop ebp
        ret 0x18
        UNREACHABLE_TRAP(0x6d3ca47)
    }
}
