#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fbe0);
CLANG_FORWARD_PROC_SYMBOL(public_453690);

PROC_DECLARE(0x453690, internal_453690, public_453690);
extern "C" NAKED register_t __cdecl internal_453690()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_44fbe0
        lea eax, ds:[esi+0x6C]
        mov dword ptr ds : [esi], offset public_5cd8dc
        mov dword ptr ds : [esi+4], offset public_5cd8ac
        mov dword ptr ds : [esi+8], offset public_5cd890
        mov dword ptr ds : [esi+0xC], offset public_5cd870
        mov dword ptr ds : [esi+0x10], offset public_5cd838
        mov dword ptr ds : [esi+0x14], offset public_5cd810
        mov dword ptr ds : [esi+0x18], offset public_5cd7ec
        mov dword ptr ds : [esi+0x1C], offset public_5cd7b4
        mov dword ptr ds : [esi+0x20], offset public_5cd79c
        mov dword ptr ss : [esp+4], 0
        mov edx, dword ptr ss : [esp+4]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+8], 0
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ss : [esp+0xC], 0
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0xC], ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov eax, esi
        pop esi
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x453690)
    }
}
