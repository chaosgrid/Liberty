#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec0b80);

PROC_DECLARE(0x6ec0b80, internal_6ec0b80, public_6ec0b80);
extern "C" NAKED register_t __cdecl internal_6ec0b80()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x30]
        push edx
        push 5
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x34]
        push edx
        push 6
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x38]
        push edx
        push 7
        push eax
        call dword ptr ds : [ecx+0x20]
        mov byte ptr ds : [esi+0x2C], 1
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ec0b80)
    }
}
