#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f003e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f48fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6f48fe0 _public_6f48fe0
#define public_6f48fe8 _public_6f48fe8
#define public_6f49014 _public_6f49014

PROC_DECLARE(0x6f48fb0, internal_6f48fb0, public_6f48fb0);
extern "C" NAKED register_t __cdecl internal_6f48fb0()
{
    __asm
    {
        sub esp, 0x10
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x1C]
        lea esi, ds:[edi+0x48]
        push eax
        mov ecx, esi
        call public_6fa7200
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+8], eax
        je public_6f48fe0
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6f48fe0
        lea eax, ss:[esp+8]
        jmp public_6f48fe8
        public_6f48fe0 : nop
        mov dword ptr ss : [esp+0x10], ecx
        lea eax, ss:[esp+0x10]
        public_6f48fe8 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x4C]
        jne public_6f49014
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], edx
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 1
        call public_6f003e0
        pop edi
        pop esi
        add esp, 0x10
        ret 4
        public_6f49014 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        inc ecx
        pop edi
        mov dword ptr ds : [eax+0x10], ecx
        pop esi
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f48fb0)
    }
}

#undef public_6f48fe0
#undef public_6f48fe8
#undef public_6f49014
