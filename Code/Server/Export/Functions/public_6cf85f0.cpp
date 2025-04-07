#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6d00410);
CLANG_FORWARD_PROC_SYMBOL(public_6d00630);
CLANG_FORWARD_PROC_SYMBOL(public_6d58e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d59ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c810);

#define public_6cf8648 _public_6cf8648
#define public_6cf8655 _public_6cf8655
#define public_6cf8686 _public_6cf8686
#define public_6cf868e _public_6cf868e
#define public_6cf86a4 _public_6cf86a4
#define public_6cf86d0 _public_6cf86d0
#define public_6cf86d8 _public_6cf86d8
#define public_6cf86ee _public_6cf86ee
#define public_6cf86f0 _public_6cf86f0

PROC_DECLARE(0x6cf85f0, internal_6cf85f0, public_6cf85f0);
extern "C" NAKED register_t __cdecl internal_6cf85f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        sub esp, 0xC
        test ecx, 0x3FFFFFFF
        push esi
        mov eax, 0xFFFFFFFC
        je public_6cf86f0
        lea eax, ss:[esp+8]
        push eax
        lea edx, ss:[esp+8]
        push edx
        push ecx
        mov esi, 0xFFFFFFFE
        call public_6d00630
        add esp, 0xC
        test al, al
        je public_6cf86ee
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6cf8648
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edx
        call dword ptr ds : [eax+0x158]
        xor esi, esi
        jmp public_6cf8655
        public_6cf8648 : nop
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6d00410
        add esp, 4
        public_6cf8655 : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, offset public_6d8d834
        call public_6d5c810
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [public_6d8d838]
        cmp eax, ecx
        je public_6cf8686
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6cf8686
        lea eax, ss:[esp+0x18]
        jmp public_6cf868e
        public_6cf8686 : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_6cf868e : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_6cf86a4
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, offset public_6d8d834
        call public_6ce3ea0
        public_6cf86a4 : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_6d8d820
        call public_6d59ea0
        mov ecx, dword ptr ds : [public_6d8d824]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        je public_6cf86d0
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6cf86d0
        lea eax, ss:[esp+0x18]
        jmp public_6cf86d8
        public_6cf86d0 : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_6cf86d8 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_6cf86ee
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, offset public_6d8d820
        call public_6d58e50
        public_6cf86ee : nop
        mov eax, esi
        public_6cf86f0 : nop
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6cf85f0)
    }
}

#undef public_6cf8648
#undef public_6cf8655
#undef public_6cf8686
#undef public_6cf868e
#undef public_6cf86a4
#undef public_6cf86d0
#undef public_6cf86d8
#undef public_6cf86ee
#undef public_6cf86f0
