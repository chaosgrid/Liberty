#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43ba90);

PROC_DECLARE(0x43ba90, internal_43ba90, public_43ba90);
extern "C" NAKED register_t __cdecl internal_43ba90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dl, byte ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x44], eax
        mov eax, dword ptr ss : [esp+8]
        mov byte ptr ds : [ecx+0x48], dl
        mov dword ptr ds : [ecx+0x4C], 0
        mov dword ptr ds : [ecx+0x50], eax
        ret 0xC
        UNREACHABLE_TRAP(0x43ba90)
    }
}
