#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f2a30);

PROC_DECLARE(0x65f2a30, internal_65f2a30, public_65f2a30);
extern "C" NAKED register_t __cdecl internal_65f2a30()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x65f2a30)
    }
}
