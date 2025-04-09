#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421620);

PROC_DECLARE(0x421620, internal_421620, public_421620);
extern "C" NAKED register_t __cdecl internal_421620()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_5c6de0]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        push eax
        push edi
        mov dword ptr ds : [public_66499c], edi
        mov edi, dword ptr ds : [public_610854]
        sub edi, esi
        sub edi, eax
        push edi
        mov dword ptr ds : [public_664994], edx
        mov dword ptr ds : [public_664998], esi
        mov dword ptr ds : [public_6649a0], eax
        mov ecx, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx]
        push edx
        push ecx
        call dword ptr ds : [ebx+0x54]
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x421620)
    }
}
