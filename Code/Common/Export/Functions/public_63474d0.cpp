#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63474d0);
CLANG_FORWARD_PROC_SYMBOL(public_63481d0);
CLANG_FORWARD_PROC_SYMBOL(public_6350ca0);

PROC_DECLARE(0x63474d0, internal_63474d0, public_63474d0);
extern "C" NAKED register_t __cdecl internal_63474d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ebx, ds:[esi+0xF4]
        push ebx
        push eax
        mov ecx, ebx
        call public_63481d0
        fld dword ptr ds : [esi+0x128]
        mov ecx, dword ptr ds : [esi+0x12C]
        fld dword ptr ds : [esi+0x124]
        fstp dword ptr ds : [esi+0xB4]
        mov edx, ecx
        mov dword ptr ss : [esp+0x10], ecx
        fstp dword ptr ds : [esi+0xB8]
        lea edi, ds:[esi+0xD4]
        push ebx
        mov ecx, edi
        mov dword ptr ds : [esi+0xBC], edx
        call public_6350ca0
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        add esi, 0xE4
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], edx
        pop edi
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x63474d0)
    }
}
