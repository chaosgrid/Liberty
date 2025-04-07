#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634e8a0);
CLANG_FORWARD_PROC_SYMBOL(public_6350020);
CLANG_FORWARD_PROC_SYMBOL(public_6362a30);
CLANG_FORWARD_PROC_SYMBOL(public_6362d60);

PROC_DECLARE(0x6362d60, internal_6362d60, public_6362d60);
extern "C" NAKED register_t __cdecl internal_6362d60()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        call public_6362a30
        mov eax, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [eax+0x18]
        mov edi, dword ptr ds : [ecx+0x10]
        push esi
        mov ecx, edi
        call public_6350020
        push esi
        mov ecx, edi
        call public_634e8a0
        mov eax, dword ptr ds : [esi+0x14]
        and eax, 0xFFFFCFFF
        pop edi
        mov dword ptr ds : [esi+0x14], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6362d60)
    }
}
