#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_595d90);

PROC_DECLARE(0x595d90, internal_595d90, public_595d90);
extern "C" NAKED register_t __cdecl internal_595d90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x3C0]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+0x3C4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        ret 8
        UNREACHABLE_TRAP(0x595d90)
    }
}
