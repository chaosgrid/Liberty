#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_4544e4 _public_4544e4
#define public_4544f2 _public_4544f2

PROC_DECLARE(0x454480, internal_454480, public_454480);
extern "C" NAKED register_t __cdecl internal_454480()
{
    __asm
    {
        push ecx
        mov al, byte ptr ds : [public_66d2a8]
        test al, al
        je public_4544e4
        push 0x25
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4544e4
        push 0x27
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4544e4
        mov ecx, dword ptr ds : [public_66d2bc]
        test ecx, ecx
        mov al, 1
        je public_4544f2
        mov edx, dword ptr ds : [public_5c6de0]
        mov dword ptr ss : [esp], 0
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp]
        push edx
        push 0xD
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp]
        mov ecx, dword ptr ss : [esp+0xC]
        test eax, eax
        setne al
        mov byte ptr ds : [ecx], al
        xor eax, eax
        pop ecx
        ret 8
        public_4544e4 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        xor al, al
        mov byte ptr ds : [ecx], al
        xor eax, eax
        pop ecx
        ret 8
        public_4544f2 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [edx], al
        xor eax, eax
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x454480)
    }
}

#undef public_4544e4
#undef public_4544f2
