#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635d360);

PROC_DECLARE(0x635d360, internal_635d360, public_635d360);
extern "C" NAKED register_t __cdecl internal_635d360()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+0xC]
        fld dword ptr ds : [ecx+edx*4+0xA0]
        mov edx, dword ptr ss : [esp+8]
        fimul dword ptr ds : [eax]
        push esi
        fstp dword ptr ds : [edx]
        mov esi, dword ptr ds : [eax+0xC]
        fld dword ptr ds : [ecx+esi*4+0xA0]
        fimul dword ptr ds : [eax+4]
        fstp dword ptr ds : [edx+4]
        mov esi, dword ptr ds : [eax+0xC]
        fld dword ptr ds : [ecx+esi*4+0xA0]
        pop esi
        fimul dword ptr ds : [eax+8]
        fstp dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [eax+0x10]
        fld dword ptr ds : [ecx+eax*4+0xA0]
        mov ecx, dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [ecx]
        ret 0xC
        UNREACHABLE_TRAP(0x635d360)
    }
}
