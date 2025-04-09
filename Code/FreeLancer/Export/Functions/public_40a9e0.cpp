#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4068d0);
CLANG_FORWARD_PROC_SYMBOL(public_40a9e0);

PROC_DECLARE(0x40a9e0, internal_40a9e0, public_40a9e0);
extern "C" NAKED register_t __cdecl internal_40a9e0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        push edi
        mov esi, ecx
        call public_4068d0
        xor eax, eax
        mov dword ptr ds : [esi+0x80], eax
        mov dword ptr ds : [esi+0x88], eax
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x78], eax
        mov dword ptr ds : [esi+0x7C], eax
        lea eax, ds:[esi+0x6C]
        mov edi, eax
        mov dword ptr ss : [esp+8], 0
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [edi], eax
        mov dword ptr ss : [esp+0xC], 0
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi+4], ecx
        mov dword ptr ss : [esp+0x10], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+8], edx
        lea edi, ds:[esi+0x60]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], ecx
        mov dword ptr ds : [edi+8], edx
        lea edi, ds:[esi+0x54]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], ecx
        mov eax, 0xBF800000
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [esi+0x8C], eax
        mov dword ptr ds : [esi+0x90], eax
        pop edi
        mov dword ptr ds : [esi], offset public_5c7eb8
        mov dword ptr ds : [esi+0x84], 0x3E99999A
        mov dword ptr ds : [esi+0x94], 0x43340000
        mov eax, esi
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x40a9e0)
    }
}
