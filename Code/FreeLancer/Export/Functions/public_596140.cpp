#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421ba0);
CLANG_FORWARD_PROC_SYMBOL(public_421ca0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_4220a0);
CLANG_FORWARD_PROC_SYMBOL(public_425640);
CLANG_FORWARD_PROC_SYMBOL(public_561f20);
CLANG_FORWARD_PROC_SYMBOL(public_596140);

#define public_5961b7 _public_5961b7
#define public_5961c6 _public_5961c6
#define public_596227 _public_596227
#define public_59626f _public_59626f
#define public_59628b _public_59628b
#define public_5962a6 _public_5962a6

PROC_DECLARE(0x596140, internal_596140, public_596140);
extern "C" NAKED register_t __cdecl internal_596140()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [public_67d9e4]
        push 0
        call public_425640
        push eax
        call public_4220a0
        mov al, byte ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x10]
        add esp, 4
        test al, al
        je public_59628b
        mov al, byte ptr ds : [esi+0x10]
        test al, al
        je public_5961b7
        mov al, byte ptr ds : [edi+0x418]
        mov cl, byte ptr ds : [edi+0x419]
        mov dl, byte ptr ds : [edi+0x41A]
        mov byte ptr ss : [esp+0x10], al
        mov al, byte ptr ds : [edi+0x41B]
        mov byte ptr ss : [esp+0x12], dl
        mov byte ptr ss : [esp+0x11], cl
        mov byte ptr ss : [esp+0x13], al
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        call public_561f20
        lea eax, ss:[esp+0x18]
        push eax
        call public_421ba0
        add esp, 0xC
        jmp public_5961c6
        public_5961b7 : nop
        lea ecx, ds:[edi+0x410]
        push ecx
        call public_421ba0
        add esp, 4
        public_5961c6 : nop
        push 4
        call public_421670
        mov al, byte ptr ss : [esp+0x18]
        add esp, 4
        test al, al
        push 0x3F800000
        je public_596227
        push 0x3F800000
        call public_421ca0
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [esi+8]
        push 0
        push edx
        push eax
        call public_421cc0
        push 0x3F800000
        push 0
        call public_421ca0
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi]
        push 0
        push ecx
        push edx
        call public_421cc0
        push 0
        push 0x3F800000
        call public_421ca0
        mov eax, dword ptr ds : [esi+4]
        add esp, 0x30
        push 0
        push eax
        jmp public_59626f
        public_596227 : nop
        push 0
        call public_421ca0
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        push 0
        push ecx
        push edx
        call public_421cc0
        push 0
        push 0x3F800000
        call public_421ca0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        push 0
        push eax
        push ecx
        call public_421cc0
        push 0x3F800000
        push 0x3F800000
        call public_421ca0
        mov edx, dword ptr ds : [esi+0xC]
        add esp, 0x30
        push 0
        push edx
        public_59626f : nop
        fld dword ptr ds : [esi+8]
        push ecx
        fadd dword ptr ds : [esi]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp]
        call public_421cc0
        add esp, 0xC
        call public_421690
        public_59628b : nop
        mov al, byte ptr ds : [esi+0x10]
        test al, al
        je public_5962a6
        add edi, 0x414
        push edi
        call public_421ba0
        add esp, 4
        pop edi
        pop esi
        ret 0xC
        public_5962a6 : nop
        add edi, 0x40C
        push edi
        call public_421ba0
        add esp, 4
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x596140)
    }
}

#undef public_5961b7
#undef public_5961c6
#undef public_596227
#undef public_59626f
#undef public_59628b
#undef public_5962a6
