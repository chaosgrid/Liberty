#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631fad0);
CLANG_FORWARD_PROC_SYMBOL(public_6324550);

PROC_DECLARE(0x6324550, internal_6324550, public_6324550);
extern "C" NAKED register_t __cdecl internal_6324550()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], ecx
        push eax
        lea ecx, ds:[esi+4]
        call public_631fad0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6324550)
    }
}
