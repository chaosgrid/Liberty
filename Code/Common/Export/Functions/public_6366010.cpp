#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6366010);

PROC_DECLARE(0x6366010, internal_6366010, public_6366010);
extern "C" NAKED register_t __cdecl internal_6366010()
{
    __asm
    {
        fld dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+4]
        fmul dword ptr ds : [eax]
        fld dword ptr ds : [ecx+0x24]
        fmul dword ptr ds : [eax+8]
        faddp 
        fld dword ptr ds : [ecx+0x14]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [eax]
        fld dword ptr ds : [ecx+0x28]
        fmul dword ptr ds : [eax+8]
        faddp 
        fld dword ptr ds : [ecx+0x18]
        fmul dword ptr ds : [eax+4]
        faddp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0x20]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx+0x10]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+4]
        fmul dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+8], ecx
        faddp 
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        ret 8
        UNREACHABLE_TRAP(0x6366010)
    }
}
