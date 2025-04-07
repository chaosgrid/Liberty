#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347410);
CLANG_FORWARD_PROC_SYMBOL(public_6347c10);

PROC_DECLARE(0x6347c10, internal_6347c10, public_6347c10);
extern "C" NAKED register_t __cdecl internal_6347c10()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+4]
        fdivr dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x20], eax
        fld st(0)
        fmul dword ptr ds : [ecx+0x14]
        fstp dword ptr ds : [ecx+0x14]
        fld st(0)
        fmul dword ptr ds : [ecx+0x18]
        fstp dword ptr ds : [ecx+0x18]
        fmul dword ptr ds : [ecx+0x1C]
        fstp dword ptr ds : [ecx+0x1C]
        call public_6347410
        ret 4
        UNREACHABLE_TRAP(0x6347c10)
    }
}
