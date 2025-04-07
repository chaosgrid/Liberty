#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6354d70);

PROC_DECLARE(0x6354d70, internal_6354d70, public_6354d70);
extern "C" NAKED register_t __cdecl internal_6354d70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x40]
        mov edx, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0x80]
        fmul dword ptr ds : [edx+8]
        fld dword ptr ds : [eax+0x7C]
        fmul dword ptr ds : [edx+4]
        faddp 
        fld dword ptr ds : [eax+0x78]
        fmul dword ptr ds : [edx]
        faddp 
        fadd dword ptr ds : [ecx+0x38]
        fstp dword ptr ds : [ecx+0x38]
        fld dword ptr ds : [eax+0x90]
        fmul dword ptr ds : [edx+8]
        fld dword ptr ds : [eax+0x8C]
        fmul dword ptr ds : [edx+4]
        faddp 
        fld dword ptr ds : [eax+0x88]
        fmul dword ptr ds : [edx]
        faddp 
        fadd dword ptr ds : [ecx+0x3C]
        fstp dword ptr ds : [ecx+0x3C]
        ret 4
        UNREACHABLE_TRAP(0x6354d70)
    }
}
