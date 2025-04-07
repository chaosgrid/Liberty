#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b390);

PROC_DECLARE(0x620b390, internal_620b390, public_620b390);
extern "C" NAKED register_t __cdecl internal_620b390()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x620b390)
    }
}
