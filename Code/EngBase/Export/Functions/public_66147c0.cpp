#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a260);

#define public_661481b _public_661481b
#define public_6614823 _public_6614823
#define public_661484e _public_661484e
#define public_6614852 _public_6614852

PROC_DECLARE(0x66147c0, internal_66147c0, public_66147c0);
extern "C" NAKED register_t __cdecl internal_66147c0()
{
    __asm
    {
        sub esp, 8
        fld dword ptr ds : [public_662920c]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        fst dword ptr ss : [esp+8]
        cmp edi, 0xFFFFFFFF
        je public_6614852
        test edi, edi
        je public_6614852
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push eax
        fstp st(0)
        call dword ptr ds : [public_662900c]
        add esp, 4
        lea ecx, ss:[esp+0x18]
        lea esi, ds:[edi+4]
        mov dword ptr ss : [esp+0x18], eax
        push ecx
        mov ecx, esi
        call public_661a260
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x1C], eax
        je public_661481b
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp edx, ecx
        jb public_661481b
        lea eax, ss:[esp+0x1C]
        jmp public_6614823
        public_661481b : nop
        mov dword ptr ss : [esp+8], esi
        lea eax, ss:[esp+8]
        public_6614823 : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        pop esi
        je public_661484e
        mov eax, dword ptr ds : [eax+0x10]
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], 0xBF800000
        push edx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x10]
        fld dword ptr ss : [esp+0x18]
        pop edi
        add esp, 8
        ret 0xC
        public_661484e : nop
        fld dword ptr ss : [esp+8]
        public_6614852 : nop
        pop edi
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x66147c0)
    }
}

#undef public_661481b
#undef public_6614823
#undef public_661484e
#undef public_6614852
