#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6365d10);

PROC_DECLARE(0x6365d10, internal_6365d10, public_6365d10);
extern "C" NAKED register_t __cdecl internal_6365d10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+8]
        fmul dword ptr ds : [edx+4]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [edx+8]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0xC]
        fmul dword ptr ds : [edx+0xC]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        fmul dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0xC], edx
        fstp dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx+4]
        ret 8
        UNREACHABLE_TRAP(0x6365d10)
    }
}
