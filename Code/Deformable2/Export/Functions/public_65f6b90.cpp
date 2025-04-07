#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f6b90);

PROC_DECLARE(0x65f6b90, internal_65f6b90, public_65f6b90);
extern "C" NAKED register_t __cdecl internal_65f6b90()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [eax]
        faddp 
        fstp dword ptr ds : [edx]
        fld dword ptr ds : [ecx+0x14]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [eax]
        faddp 
        fld dword ptr ds : [ecx+0x10]
        fmul dword ptr ds : [eax+4]
        faddp 
        fstp dword ptr ds : [edx+4]
        fld dword ptr ds : [ecx+0x20]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx+0x18]
        fmul dword ptr ds : [eax]
        faddp 
        fld dword ptr ds : [ecx+0x1C]
        fmul dword ptr ds : [eax+4]
        faddp 
        fstp dword ptr ds : [edx+8]
        ret 
        UNREACHABLE_TRAP(0x65f6b90)
    }
}
