#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63128e0);
CLANG_FORWARD_PROC_SYMBOL(public_6312970);
CLANG_FORWARD_PROC_SYMBOL(public_6312b70);

PROC_DECLARE(0x631b880, internal_631b880, public_631b880);
extern "C" NAKED register_t __cdecl internal_631b880()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push 4
        lea eax, ss:[esp+0x10]
        mov esi, ecx
        push eax
        mov ecx, edi
        call public_63128e0
        mov ecx, dword ptr ss : [esp+0xC]
        push 4
        lea edx, ss:[esp+0x10]
        mov dword ptr ds : [esi], ecx
        push edx
        mov ecx, edi
        call public_63128e0
        mov eax, dword ptr ss : [esp+0xC]
        push 4
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        call public_63128e0
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, edi
        mov dword ptr ds : [esi+8], edx
        call public_6312970
        mov ecx, edi
        mov byte ptr ds : [esi+0xC], al
        call public_6312b70
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x631b880)
    }
}
