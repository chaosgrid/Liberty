#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_49f0e0);

PROC_DECLARE(0x49f0e0, internal_49f0e0, public_49f0e0);
extern "C" NAKED register_t __cdecl internal_49f0e0()
{
    __asm
    {
        push esi
        push 0
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x8E0]
        mov eax, dword ptr ds : [ecx]
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x8E4]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x8E8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x7F4]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x7F8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x7FC]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x800]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x8EC]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xAD0]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov byte ptr ds : [esi+0x92C], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x49f0e0)
    }
}
