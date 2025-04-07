#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63454e0);
CLANG_FORWARD_PROC_SYMBOL(public_634ebd0);

PROC_DECLARE(0x63454e0, internal_63454e0, public_63454e0);
extern "C" NAKED register_t __cdecl internal_63454e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x98]
        mov eax, dword ptr ds : [ecx+0x60]
        push edi
        mov edi, eax
        and eax, 0xFFFFFF21
        or eax, 0x21
        mov dword ptr ds : [ecx+0x60], eax
        mov eax, dword ptr ds : [esi+0x98]
        mov ecx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [ecx+0x10]
        shl edi, 0x18
        push esi
        sar edi, 0x18
        call public_634ebd0
        mov esi, dword ptr ds : [esi+0x98]
        mov eax, dword ptr ds : [esi+0x60]
        mov edx, eax
        xor edx, edi
        and edx, 0xFF
        xor edx, eax
        pop edi
        mov dword ptr ds : [esi+0x60], edx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63454e0)
    }
}
