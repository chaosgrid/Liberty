#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202460);

PROC_DECLARE(0x6202460, internal_6202460, public_6202460);
extern "C" NAKED register_t __cdecl internal_6202460()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x6202460)
    }
}
