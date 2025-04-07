#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ec590);

PROC_DECLARE(0x62ec590, internal_62ec590, public_62ec590);
extern "C" NAKED register_t __cdecl internal_62ec590()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dl, byte ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0xB4], eax
        mov byte ptr ds : [ecx+0xBF], dl
        ret 8
        UNREACHABLE_TRAP(0x62ec590)
    }
}
