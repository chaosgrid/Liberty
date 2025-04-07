#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf1990);
CLANG_FORWARD_PROC_SYMBOL(public_6d00010);
CLANG_FORWARD_PROC_SYMBOL(public_6d18880);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

#define public_6d54399 _public_6d54399
#define public_6d543b0 _public_6d543b0

PROC_DECLARE(0x6d54340, internal_6d54340, public_6d54340);
extern "C" NAKED register_t __cdecl internal_6d54340()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6d90260]
        sub esp, 0xC
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, esi
        imul eax, 0x418
        push edi
        push esi
        lea edi, ds:[eax+ecx-0x418]
        call public_6d00010
        push esi
        call public_6d18880
        mov eax, dword ptr ds : [edi+0x3E0]
        add esp, 8
        test eax, 0x3FFFFFFF
        je public_6d54399
        lea edx, ss:[esp+8]
        push edx
        push 0x3A
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], esi
        call public_6d43650
        add esp, 8
        public_6d54399 : nop
        mov eax, dword ptr ds : [edi+0x3CC]
        test eax, eax
        je public_6d543b0
        push 4
        push esi
        mov ecx, offset public_6d8facc
        call public_6cf1990
        public_6d543b0 : nop
        pop edi
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6d54340)
    }
}

#undef public_6d54399
#undef public_6d543b0
