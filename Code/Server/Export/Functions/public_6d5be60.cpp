#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d18ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6d19180);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c530);

#define public_6d5bea1 _public_6d5bea1
#define public_6d5bee1 _public_6d5bee1
#define public_6d5beee _public_6d5beee
#define public_6d5bef6 _public_6d5bef6
#define public_6d5bf04 _public_6d5bf04
#define public_6d5bf0b _public_6d5bf0b
#define public_6d5bf0f _public_6d5bf0f
#define public_6d5bf14 _public_6d5bf14

PROC_DECLARE(0x6d5be60, internal_6d5be60, public_6d5be60);
extern "C" NAKED register_t __cdecl internal_6d5be60()
{
    __asm
    {
        sub esp, 0x804
        mov ecx, dword ptr ss : [esp+0x810]
        push esi
        push edi
        lea eax, ss:[esp+0x81C]
        push eax
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [public_6d64c58]
        mov edi, dword ptr ss : [esp+0x81C]
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        cmp ecx, eax
        mov dword ptr ss : [esp+8], ecx
        je public_6d5bf14
        mov esi, dword ptr ss : [esp+0x814]
        public_6d5bea1 : nop
        lea ecx, ss:[esp+8]
        call public_6d5c530
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xC]
        push ecx
/*FIXUP push offset public_6d6b9b8 @0x6d5beb1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b9b8
        push ecx
        mov ecx, esp
        push edx
        call public_6d19180
        push esi
        call public_6d18ea0
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x11]
        add esp, 0x10
        test dl, dl
        jne public_6d5beee
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x11]
        test dl, dl
        jne public_6d5bf0b
        public_6d5bee1 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x11]
        test dl, dl
        je public_6d5bee1
        jmp public_6d5bf0b
        public_6d5beee : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6d5bf04
        public_6d5bef6 : nop
        mov eax, ecx
        mov dword ptr ss : [esp+8], eax
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6d5bef6
        public_6d5bf04 : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6d5bf0f
        mov eax, ecx
        public_6d5bf0b : nop
        mov dword ptr ss : [esp+8], eax
        public_6d5bf0f : nop
        cmp eax, dword ptr ds : [edi+0xC]
        jne public_6d5bea1
        public_6d5bf14 : nop
        pop edi
        pop esi
        add esp, 0x804
        ret 
        UNREACHABLE_TRAP(0x6d5be60)
    }
}

#undef public_6d5bea1
#undef public_6d5bee1
#undef public_6d5beee
#undef public_6d5bef6
#undef public_6d5bf04
#undef public_6d5bf0b
#undef public_6d5bf0f
#undef public_6d5bf14
