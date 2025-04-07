#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6378c10);

PROC_DECLARE(0x6378c10, internal_6378c10, public_6378c10);
extern "C" NAKED register_t __cdecl internal_6378c10()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+8]
        fld dword ptr ds : [edx+4]
        fsub dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+0x10]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edx]
        fmul dword ptr ds : [ecx+0x14]
        faddp 
        ret 4
        UNREACHABLE_TRAP(0x6378c10)
    }
}
