#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49190);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a140);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a710);

#define public_6f491c3 _public_6f491c3
#define public_6f491cb _public_6f491cb
#define public_6f491fa _public_6f491fa

PROC_DECLARE(0x6f49190, internal_6f49190, public_6f49190);
extern "C" NAKED register_t __cdecl internal_6f49190()
{
    __asm
    {
        sub esp, 0x10
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x1C]
        lea esi, ds:[edi+0x84]
        push eax
        mov ecx, esi
        call public_6f4a710
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dl, byte ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+8], eax
        je public_6f491c3
        cmp dl, byte ptr ds : [eax+0xC]
        jb public_6f491c3
        lea eax, ss:[esp+8]
        jmp public_6f491cb
        public_6f491c3 : nop
        mov dword ptr ss : [esp+0x10], ecx
        lea eax, ss:[esp+0x10]
        public_6f491cb : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x88]
        jne public_6f491fa
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x10], dl
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 1
        call public_6f4a140
        pop edi
        pop esi
        add esp, 0x10
        ret 4
        public_6f491fa : nop
        mov ecx, dword ptr ds : [eax+0x10]
        inc ecx
        pop edi
        mov dword ptr ds : [eax+0x10], ecx
        pop esi
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f49190)
    }
}

#undef public_6f491c3
#undef public_6f491cb
#undef public_6f491fa
