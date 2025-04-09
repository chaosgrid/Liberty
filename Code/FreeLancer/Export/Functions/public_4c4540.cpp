#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c43d0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4540);

PROC_DECLARE(0x4c4540, internal_4c4540, public_4c4540);
extern "C" NAKED register_t __cdecl internal_4c4540()
{
    __asm
    {
        mov edx, dword ptr ds : [public_673344]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [ecx]
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        push edx
        mov edx, dword ptr ss : [ebp]
        push esi
        push edi
        push ebx
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        call dword ptr ds : [eax+0x80]
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        push edi
        push ebx
        push ebp
        push eax
        call public_4c43d0
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4c4540)
    }
}
