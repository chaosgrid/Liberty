#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fbe0);
CLANG_FORWARD_PROC_SYMBOL(public_456d80);

PROC_DECLARE(0x456d80, internal_456d80, public_456d80);
extern "C" NAKED register_t __cdecl internal_456d80()
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
        xor eax, eax
        mov ecx, 0x4E6E6B28
        mov dword ptr ds : [esi+0x90], ecx
        mov dword ptr ds : [esi+0x94], ecx
        mov ecx, 0x168
        mov dword ptr ds : [esi+0x98], ecx
        mov dword ptr ds : [esi+0x9C], ecx
        mov dword ptr ds : [esi+0x6C], eax
        mov dword ptr ds : [esi+0x70], eax
        mov byte ptr ds : [esi+0x74], al
        mov byte ptr ds : [esi+0x75], al
        mov byte ptr ds : [esi+0x76], al
        mov byte ptr ds : [esi+0x77], al
        mov byte ptr ds : [esi+0x78], al
        mov dword ptr ds : [esi+0x7C], eax
        mov dword ptr ds : [esi+0x80], eax
        mov byte ptr ds : [esi+0x84], al
        mov dword ptr ds : [esi+0x88], eax
        mov dword ptr ds : [esi+0x8C], eax
        mov dword ptr ds : [esi+0xA0], eax
        mov dword ptr ds : [esi+0xA4], eax
        mov edx, eax
        mov dword ptr ds : [esi], offset public_5ce264
        mov dword ptr ds : [esi+4], offset public_5ce234
        mov dword ptr ds : [esi+8], offset public_5ce218
        mov dword ptr ds : [esi+0xC], offset public_5ce1f8
        mov dword ptr ds : [esi+0x10], offset public_5ce1c0
        mov dword ptr ds : [esi+0x14], offset public_5ce198
        mov dword ptr ds : [esi+0x18], offset public_5ce174
        mov dword ptr ds : [esi+0x1C], offset public_5ce13c
        mov dword ptr ds : [esi+0x20], offset public_5ce124
        lea ecx, ds:[esi+0xA8]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+8], edx
        mov ecx, 0x3F800000
        mov dword ptr ds : [esi+0xD0], eax
        mov dword ptr ds : [esi+0xCC], eax
        mov dword ptr ds : [esi+0xC8], eax
        mov dword ptr ds : [esi+0xC0], eax
        mov dword ptr ds : [esi+0xBC], eax
        mov dword ptr ds : [esi+0xB8], eax
        mov dword ptr ss : [esp+4], eax
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ds : [esi+0xD4], ecx
        mov dword ptr ds : [esi+0xC4], ecx
        mov dword ptr ds : [esi+0xB4], ecx
        mov eax, esi
        pop esi
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x456d80)
    }
}
