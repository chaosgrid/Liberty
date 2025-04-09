#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_430990);
CLANG_FORWARD_PROC_SYMBOL(public_431850);
CLANG_FORWARD_PROC_SYMBOL(public_432cc0);
CLANG_FORWARD_PROC_SYMBOL(public_4330a0);
CLANG_FORWARD_PROC_SYMBOL(public_433330);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_431885 _public_431885
#define public_4318b7 _public_4318b7
#define public_4318d9 _public_4318d9
#define public_4318e0 _public_4318e0
#define public_431903 _public_431903

PROC_DECLARE(0x431850, internal_431850, public_431850);
extern "C" NAKED register_t __cdecl internal_431850()
{
    __asm
    {
        sub esp, 8
        mov ecx, dword ptr ds : [public_667e1c]
        mov edx, dword ptr ds : [public_667e28]
        test edx, edx
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], eax
        je public_4318d9
        mov edx, eax
        cmp eax, edx
        jne public_4318d9
        cmp edi, ecx
        jne public_4318d9
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_667e20]
        cmp edi, eax
        mov esi, edi
        je public_4318b7
        public_431885 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, offset public_667e18
        call public_4330a0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_430990
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [public_667e20]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_431885
        mov ecx, dword ptr ds : [public_667e1c]
        public_4318b7 : nop
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [public_667e1c]
        mov dword ptr ds : [public_667e28], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_667e1c]
        pop edi
        mov dword ptr ds : [eax+8], eax
        pop esi
        add esp, 8
        ret 
        public_4318d9 : nop
        cmp eax, edi
        je public_431903
        lea ecx, ds:[ecx]
        public_4318e0 : nop
        lea ecx, ss:[esp+8]
        mov esi, eax
        call public_433330
        push esi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_667e18
        call public_432cc0
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        jne public_4318e0
        public_431903 : nop
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x431850)
    }
}

#undef public_431885
#undef public_4318b7
#undef public_4318d9
#undef public_4318e0
#undef public_431903
