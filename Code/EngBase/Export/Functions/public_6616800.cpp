#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6614f70);
CLANG_FORWARD_PROC_SYMBOL(public_66152d0);
CLANG_FORWARD_PROC_SYMBOL(public_66181e0);
CLANG_FORWARD_PROC_SYMBOL(public_6618ad0);
CLANG_FORWARD_PROC_SYMBOL(public_661a110);
CLANG_FORWARD_PROC_SYMBOL(public_6627a70);

#define public_6616834 _public_6616834
#define public_661685e _public_661685e
#define public_6616873 _public_6616873
#define public_661687b _public_661687b
#define public_6616885 _public_6616885
#define public_661688a _public_661688a
#define public_661688c _public_661688c
#define public_6616892 _public_6616892
#define public_66168c4 _public_66168c4
#define public_66168cc _public_66168cc
#define public_66168e2 _public_66168e2

PROC_DECLARE(0x6616800, internal_6616800, public_6616800);
extern "C" NAKED register_t __cdecl internal_6616800()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        cmp eax, 0xFFFFFFFF
        push edi
        je public_66168e2
        mov ebx, dword ptr ss : [esp+0x10]
        push eax
        mov ecx, ebx
        call public_6614f70
        mov edi, eax
        test edi, edi
        je public_66168e2
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6616892
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        public_6616834 : nop
        lea eax, ds:[esi+0x1C]
        push ebp
        lea ecx, ds:[esi+0xC]
        push eax
        push ecx
        mov ecx, ebx
        call public_66152d0
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        jne public_661685e
        lea edx, ss:[esp+0x14]
        push esi
        push edx
        mov ecx, edi
        call public_6618ad0
        mov esi, dword ptr ss : [esp+0x14]
        jmp public_661688c
        public_661685e : nop
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x2D]
        test cl, cl
        jne public_6616873
        push eax
        call public_661a110
        add esp, 4
        jmp public_661688a
        public_6616873 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6616885
        public_661687b : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_661687b
        public_6616885 : nop
        cmp dword ptr ds : [esi+8], eax
        je public_661688c
        public_661688a : nop
        mov esi, eax
        public_661688c : nop
        cmp esi, dword ptr ds : [edi+4]
        jne public_6616834
        pop ebp
        public_6616892 : nop
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        jne public_66168e2
        lea esi, ds:[ebx+0x3C]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6627a70
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_66168c4
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [eax+0xC]
        cmp edx, edi
        jl public_66168c4
        lea eax, ss:[esp+0x10]
        jmp public_66168cc
        public_66168c4 : nop
        mov dword ptr ss : [esp+0x18], ecx
        lea eax, ss:[esp+0x18]
        public_66168cc : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ebx+0x40]
        cmp eax, ecx
        je public_66168e2
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_66181e0
        public_66168e2 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6616800)
    }
}

#undef public_6616834
#undef public_661685e
#undef public_6616873
#undef public_661687b
#undef public_6616885
#undef public_661688a
#undef public_661688c
#undef public_6616892
#undef public_66168c4
#undef public_66168cc
#undef public_66168e2
