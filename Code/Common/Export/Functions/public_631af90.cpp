#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6312890);
CLANG_FORWARD_PROC_SYMBOL(public_6312940);
CLANG_FORWARD_PROC_SYMBOL(public_6312ce0);

PROC_DECLARE(0x631af90, internal_631af90, public_631af90);
extern "C" NAKED register_t __cdecl internal_631af90()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push 4
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x10], eax
        call public_6312890
        mov edx, dword ptr ds : [esi+4]
        push 4
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], edx
        call public_6312890
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+8]
        push ecx
        mov ecx, edi
        call public_6312940
        add esi, 0xC
        push esi
        mov ecx, edi
        call public_6312ce0
        pop edi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x631af90)
    }
}
