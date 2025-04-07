#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee1330);

PROC_DECLARE(0x6ee12f0, internal_6ee12f0, public_6ee12f0);
extern "C" NAKED register_t __cdecl internal_6ee12f0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        movzx ebx, word ptr ds : [esi+6]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        xor edx, edx
        mov eax, edi
        div ebx
        mov edx, dword ptr ds : [ecx+0xC]
        push edx
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+4]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        push 0
        push edi
        push esi
        call public_6ee1330
        neg eax
        pop edi
        sbb eax, eax
        pop esi
        inc eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ee12f0)
    }
}
