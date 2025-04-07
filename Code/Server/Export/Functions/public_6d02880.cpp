#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0e120);

PROC_DECLARE(0x6d02880, internal_6d02880, public_6d02880);
extern "C" NAKED register_t __cdecl internal_6d02880()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xC]
        push edi
        call dword ptr ds : [public_6d645f0]
        mov edi, dword ptr ds : [esi+0xC]
        mov ecx, edi
        lea ebx, ds:[esi-4]
        call dword ptr ds : [public_6d645ec]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6d645e8]
        push eax
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ds : [esi+0x24]
        push eax
        call public_6d0e120
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d02880)
    }
}
