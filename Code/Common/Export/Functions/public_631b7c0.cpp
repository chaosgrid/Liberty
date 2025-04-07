#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334430);

PROC_DECLARE(0x631b7c0, internal_631b7c0, public_631b7c0);
extern "C" NAKED register_t __cdecl internal_631b7c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0x10]
        push edi
        call public_6334430
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [edi], eax
        pop edi
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [esi+0xC], 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x631b7c0)
    }
}
