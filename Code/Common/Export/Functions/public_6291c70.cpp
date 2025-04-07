#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6290a20);
CLANG_FORWARD_PROC_SYMBOL(public_6291c70);

PROC_DECLARE(0x6291c70, internal_6291c70, public_6291c70);
extern "C" NAKED register_t __cdecl internal_6291c70()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+8]
        push edi
        mov dword ptr ds : [ecx], offset public_639b98c
        call public_6290a20
        lea ecx, ds:[esi+0xD8]
        mov dword ptr ds : [ecx], offset public_639b98c
        call public_6290a20
        lea ecx, ds:[esi+0x1A8]
        mov dword ptr ds : [ecx], offset public_639b98c
        call public_6290a20
        lea eax, ds:[esi+0x278]
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
        lea edi, ds:[esi+0x284]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], ecx
        mov dword ptr ds : [edi+8], edx
        lea edi, ds:[esi+0x290]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], ecx
        mov dword ptr ds : [edi+8], edx
        lea edi, ds:[esi+0x2AC]
        mov dword ptr ds : [edi], eax
        xor eax, eax
        mov dword ptr ds : [edi+4], ecx
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [esi+0x2B8], eax
        mov dword ptr ds : [esi+0x2C8], eax
        mov dword ptr ds : [esi+0x2CC], eax
        mov dword ptr ds : [esi+0x2C0], eax
        mov dword ptr ds : [esi+0x2C4], eax
        mov dword ptr ds : [esi+0x2D8], eax
        pop edi
        mov dword ptr ds : [esi], offset public_639b994
        mov dword ptr ds : [esi+0x2DC], 0x40140000
        mov eax, esi
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6291c70)
    }
}
