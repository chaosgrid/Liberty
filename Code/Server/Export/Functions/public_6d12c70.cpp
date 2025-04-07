#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d12c70);
CLANG_FORWARD_PROC_SYMBOL(public_6d59ea0);

#define public_6d12ca8 _public_6d12ca8
#define public_6d12cb0 _public_6d12cb0
#define public_6d12cc7 _public_6d12cc7

PROC_DECLARE(0x6d12c70, internal_6d12c70, public_6d12c70);
extern "C" NAKED register_t __cdecl internal_6d12c70()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ds : [ecx+4]
        lea ecx, ss:[esp+0x10]
        add esi, 0x10
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        call public_6d59ea0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+4], eax
        je public_6d12ca8
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6d12ca8
        lea eax, ss:[esp+4]
        jmp public_6d12cb0
        public_6d12ca8 : nop
        mov dword ptr ss : [esp+8], esi
        lea eax, ss:[esp+8]
        public_6d12cb0 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        pop esi
        je public_6d12cc7
        add eax, 0x10
        test eax, eax
        je public_6d12cc7
        mov eax, dword ptr ds : [eax+8]
        add esp, 8
        ret 4
        public_6d12cc7 : nop
        xor eax, eax
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d12c70)
    }
}

#undef public_6d12ca8
#undef public_6d12cb0
#undef public_6d12cc7
