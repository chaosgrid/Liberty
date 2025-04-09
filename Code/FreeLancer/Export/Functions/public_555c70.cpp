#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555c70);

PROC_DECLARE(0x555c70, internal_555c70, public_555c70);
extern "C" NAKED register_t __cdecl internal_555c70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6d40]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [esi+edi*4]
        push 0
        push 0
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x24]
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x555c70)
    }
}
