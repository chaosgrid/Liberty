#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f1d90);

PROC_DECLARE(0x65f1d90, internal_65f1d90, public_65f1d90);
extern "C" NAKED register_t __cdecl internal_65f1d90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [public_6603150], eax
        mov dword ptr ds : [public_6603154], ecx
        ret 
        UNREACHABLE_TRAP(0x65f1d90)
    }
}
