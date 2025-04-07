#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a140);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a710);

#define public_6f490c0 _public_6f490c0
#define public_6f490c8 _public_6f490c8
#define public_6f490f4 _public_6f490f4

PROC_DECLARE(0x6f49090, internal_6f49090, public_6f49090);
extern "C" NAKED register_t __cdecl internal_6f49090()
{
    __asm
    {
        sub esp, 0x10
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x1C]
        lea esi, ds:[edi+0x5C]
        push eax
        mov ecx, esi
        call public_6f4a710
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dl, byte ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+8], eax
        je public_6f490c0
        cmp dl, byte ptr ds : [eax+0xC]
        jb public_6f490c0
        lea eax, ss:[esp+8]
        jmp public_6f490c8
        public_6f490c0 : nop
        mov dword ptr ss : [esp+0x10], ecx
        lea eax, ss:[esp+0x10]
        public_6f490c8 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x60]
        jne public_6f490f4
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
        public_6f490f4 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        inc ecx
        pop edi
        mov dword ptr ds : [eax+0x10], ecx
        pop esi
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f49090)
    }
}

#undef public_6f490c0
#undef public_6f490c8
#undef public_6f490f4
