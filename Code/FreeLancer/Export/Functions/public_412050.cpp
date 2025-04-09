#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412050);

PROC_DECLARE(0x412050, internal_412050, public_412050);
extern "C" NAKED register_t __cdecl internal_412050()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [public_616510], eax
        mov al, 1
        mov byte ptr ds : [public_6105ac], al
        mov dword ptr ds : [public_616508], ecx
        mov byte ptr ds : [public_616514], al
        ret 
        UNREACHABLE_TRAP(0x412050)
    }
}
