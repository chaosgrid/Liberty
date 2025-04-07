#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d40253);

PROC_DECLARE(0x6d40253, internal_6d40253, public_6d40253);
extern "C" NAKED register_t __cdecl internal_6d40253()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        xor eax, eax
        pusha 
        mov eax, 1
        cpuid 
        test edx, 0x800000
        popa 
        setne al
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d40253)
    }
}
