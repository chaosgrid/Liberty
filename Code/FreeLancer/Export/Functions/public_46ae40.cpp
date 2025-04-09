#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ad40);
CLANG_FORWARD_PROC_SYMBOL(public_46ae40);
CLANG_FORWARD_PROC_SYMBOL(public_46e610);

#define public_46ae86 _public_46ae86
#define public_46ae8e _public_46ae8e
#define public_46aea0 _public_46aea0

PROC_DECLARE(0x46ae40, internal_46ae40, public_46ae40);
extern "C" NAKED register_t __cdecl internal_46ae40()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ds : [public_66da7c]
        test esi, esi
        je public_46aea0
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
        je public_46ae86
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [eax+0xC]
        ja public_46ae86
        lea eax, ss:[esp+8]
        jmp public_46ae8e
        public_46ae86 : nop
        mov dword ptr ss : [esp+0xC], edi
        lea eax, ss:[esp+0xC]
        public_46ae8e : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+0x1C]
        pop edi
        je public_46aea0
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x18], ecx
        inc dword ptr ds : [esi+0x14]
        public_46aea0 : nop
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x46ae40)
    }
}

#undef public_46ae86
#undef public_46ae8e
#undef public_46aea0
