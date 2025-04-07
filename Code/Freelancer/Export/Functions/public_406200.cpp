#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406200);
CLANG_FORWARD_PROC_SYMBOL(public_406230);

PROC_DECLARE(0x406200, internal_406200, public_406200);
extern "C" NAKED register_t __cdecl internal_406200()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        push ebx
        mov esi, ecx
        call public_406230
        push edi
        push ebx
        mov ecx, esi
        mov dword ptr ds : [esi+8], eax
        call public_406230
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x406200)
    }
}
