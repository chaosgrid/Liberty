#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634d970);

PROC_DECLARE(0x634d970, internal_634d970, public_634d970);
extern "C" NAKED register_t __cdecl internal_634d970()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+4]
        fmul dword ptr ds : [eax]
        fld dword ptr ds : [ecx+0x40]
        fmul dword ptr ds : [eax+8]
        faddp 
        fld dword ptr ds : [ecx+0x30]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ds : [ecx+0x24]
        fmul dword ptr ds : [eax]
        fld dword ptr ds : [ecx+0x44]
        fmul dword ptr ds : [eax+8]
        faddp 
        fld dword ptr ds : [ecx+0x34]
        fmul dword ptr ds : [eax+4]
        faddp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0x3C]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx+0x2C]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ds : [ecx+0x1C]
        mov ecx, dword ptr ss : [esp+4]
        fmul dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+8], ecx
        faddp 
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        ret 8
        UNREACHABLE_TRAP(0x634d970)
    }
}
