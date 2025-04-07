#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efcb20);
CLANG_FORWARD_PROC_SYMBOL(public_6f671a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f67660);

#define public_6f671fc _public_6f671fc
#define public_6f67276 _public_6f67276
#define public_6f672a8 _public_6f672a8
#define public_6f672ab _public_6f672ab
#define public_6f672be _public_6f672be

PROC_DECLARE(0x6f671a0, internal_6f671a0, public_6f671a0);
extern "C" NAKED register_t __cdecl internal_6f671a0()
{
    __asm
    {
        sub esp, 0x40C
        push esi
        mov esi, dword ptr ss : [esp+0x414]
        mov ecx, dword ptr ds : [esi+0x150]
        test ecx, ecx
        push edi
        mov edi, dword ptr ds : [esi+0x154]
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        je public_6f671fc
        mov eax, dword ptr ds : [esi+0x14C]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        call public_6efcb20
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+8], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xC], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], eax
        public_6f671fc : nop
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_6fb3098]
        cmp edi, 0xFFFFFFFF
        je public_6f67276
        mov eax, dword ptr ds : [esi+0x14C]
        test eax, eax
        je public_6f67276
        cmp dword ptr ds : [esi+0x154], 0xFFFFFFFF
        je public_6f67276
        push edi
        call public_6f67660
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_6f672be
        mov eax, dword ptr ds : [esi+4]
        push eax
        call dword ptr ds : [public_6fb3638]
        push 1
        push eax
        call dword ptr ds : [public_6fb323c]
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x40], eax
        call dword ptr ds : [public_6fb363c]
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x1C]
        push eax
        push ecx
        push edx
        call dword ptr ds : [public_6fb3580]
        add esp, 0x20
        pop edi
        pop esi
        add esp, 0x40C
        ret 
        public_6f67276 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call dword ptr ds : [public_6fb3638]
        push 0
        push eax
        call dword ptr ds : [public_6fb323c]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x38], eax
        lea eax, ss:[esp+0x2C]
        push eax
        push ecx
        call dword ptr ds : [public_6fb363c]
        add esp, 0x14
        cmp edi, 0xFFFFFFFF
        jne public_6f672a8
        xor eax, eax
        jmp public_6f672ab
        public_6f672a8 : nop
        mov eax, dword ptr ds : [esi+4]
        public_6f672ab : nop
        lea edx, ss:[esp+8]
        push edx
        push eax
        mov eax, dword ptr ds : [esi+4]
        push eax
        call dword ptr ds : [public_6fb3580]
        add esp, 0xC
        public_6f672be : nop
        pop edi
        pop esi
        add esp, 0x40C
        ret 
        UNREACHABLE_TRAP(0x6f671a0)
    }
}

#undef public_6f671fc
#undef public_6f67276
#undef public_6f672a8
#undef public_6f672ab
#undef public_6f672be
