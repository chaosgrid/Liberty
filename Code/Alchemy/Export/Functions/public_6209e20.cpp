#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209e20);

PROC_DECLARE(0x6209e20, internal_6209e20, public_6209e20);
extern "C" NAKED register_t __cdecl internal_6209e20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        add eax, 0xFFFFFFF8
        mov dword ptr ds : [ecx], eax
        mov ecx, eax
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x6209e20)
    }
}
