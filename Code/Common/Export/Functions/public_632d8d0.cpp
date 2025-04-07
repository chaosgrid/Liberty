#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334430);

PROC_DECLARE(0x632d8d0, internal_632d8d0, public_632d8d0);
extern "C" NAKED register_t __cdecl internal_632d8d0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0x14]
        push edi
        call public_6334430
        lea ebx, ds:[esi+0x18]
        push ebx
        call public_6334430
        add esi, 0x58
        push esi
        call public_6334430
        add esp, 0xC
        mov dword ptr ds : [edi], 0
        pop edi
        mov dword ptr ds : [esi], 0
        pop esi
        mov dword ptr ds : [ebx], 0
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x632d8d0)
    }
}
