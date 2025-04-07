#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f6b30);

PROC_DECLARE(0x65f6b30, internal_65f6b30, public_65f6b30);
extern "C" NAKED register_t __cdecl internal_65f6b30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx]
        faddp 
        fadd dword ptr ds : [eax+0x24]
        fstp dword ptr ds : [edx]
        fld dword ptr ds : [eax+0x14]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [ecx]
        faddp 
        fld dword ptr ds : [eax+0x10]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fadd dword ptr ds : [eax+0x28]
        fstp dword ptr ds : [edx+4]
        fld dword ptr ds : [eax+0x20]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+0x18]
        fmul dword ptr ds : [ecx]
        faddp 
        fld dword ptr ds : [eax+0x1C]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fadd dword ptr ds : [eax+0x2C]
        fstp dword ptr ds : [edx+8]
        ret 
        UNREACHABLE_TRAP(0x65f6b30)
    }
}
