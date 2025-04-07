#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2a270);

#define public_6c21964 _public_6c21964
#define public_6c21986 _public_6c21986
#define public_6c2199d _public_6c2199d

PROC_DECLARE(0x6c21940, internal_6c21940, public_6c21940);
extern "C" NAKED register_t __cdecl internal_6c21940()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+4]
        mov al, byte ptr ds : [esi+0x28]
        inc ecx
        test al, al
        mov dword ptr ds : [esi+4], ecx
        je public_6c21964
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, dword ptr ss : [esp+0xC]
        jne public_6c21964
        inc dword ptr ds : [esi+8]
        jmp public_6c21986
        public_6c21964 : nop
        lea edx, ss:[esp+0xC]
        push edx
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ds:[esi+0xC]
        call public_6c2a270
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [esi+0x10]
        je public_6c21986
        mov dword ptr ds : [esi+0x24], eax
        mov byte ptr ds : [esi+0x28], 1
        public_6c21986 : nop
        cmp eax, dword ptr ds : [esi+0x10]
        pop esi
        je public_6c2199d
        mov eax, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [eax+8]
        lea ecx, ds:[eax+8]
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        call dword ptr ds : [edx+0xC]
        public_6c2199d : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6c21940)
    }
}

#undef public_6c21964
#undef public_6c21986
#undef public_6c2199d
