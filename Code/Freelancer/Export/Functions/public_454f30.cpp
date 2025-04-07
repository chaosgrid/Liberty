#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_454f30);

PROC_DECLARE(0x454f30, internal_454f30, public_454f30);
extern "C" NAKED register_t __cdecl internal_454f30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ds : [public_5c628c]
        mov dword ptr ds : [esi+0xC8], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0xCC], ecx
        push eax
        lea ecx, ds:[esi+0xD4]
        mov dword ptr ds : [esi+0xD0], edx
        call edi
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        lea ecx, ds:[esi+0xEC]
        call edi
        pop edi
        pop esi
        ret 0x14
        UNREACHABLE_TRAP(0x454f30)
    }
}
