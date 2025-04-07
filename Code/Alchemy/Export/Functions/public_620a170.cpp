#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a170);

PROC_DECLARE(0x620a170, internal_620a170, public_620a170);
extern "C" NAKED register_t __cdecl internal_620a170()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp], 0
        mov dword ptr ds : [eax], ecx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x620a170)
    }
}
