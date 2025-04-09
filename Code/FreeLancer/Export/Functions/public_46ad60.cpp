#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ad40);
CLANG_FORWARD_PROC_SYMBOL(public_46ad60);
CLANG_FORWARD_PROC_SYMBOL(public_46e610);

#define public_46ada6 _public_46ada6
#define public_46adae _public_46adae
#define public_46adc0 _public_46adc0

PROC_DECLARE(0x46ad60, internal_46ad60, public_46ad60);
extern "C" NAKED register_t __cdecl internal_46ad60()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ds : [public_66da7c]
        test esi, esi
        je public_46adc0
        mov eax, dword ptr ss : [esp+0x10]
        push edi
        push eax
        lea ecx, ss:[esp+0x18]
        call public_46ad40
        lea ecx, ss:[esp+0x14]
        lea edi, ds:[esi+0x18]
        push ecx
        mov ecx, edi
        call public_46e610
        mov edi, dword ptr ds : [edi+4]
        cmp eax, edi
        mov dword ptr ss : [esp+8], eax
        je public_46ada6
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [eax+0xC]
        ja public_46ada6
        lea eax, ss:[esp+8]
        jmp public_46adae
        public_46ada6 : nop
        mov dword ptr ss : [esp+0xC], edi
        lea eax, ss:[esp+0xC]
        public_46adae : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+0x1C]
        pop edi
        je public_46adc0
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x10], ecx
        inc dword ptr ds : [esi+0x14]
        public_46adc0 : nop
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x46ad60)
    }
}

#undef public_46ada6
#undef public_46adae
#undef public_46adc0
