#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421ba0);
CLANG_FORWARD_PROC_SYMBOL(public_421ca0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_4220a0);
CLANG_FORWARD_PROC_SYMBOL(public_425640);
CLANG_FORWARD_PROC_SYMBOL(public_561f20);
CLANG_FORWARD_PROC_SYMBOL(public_5962c0);

#define public_596337 _public_596337
#define public_596346 _public_596346
#define public_5963b7 _public_5963b7
#define public_596413 _public_596413
#define public_596420 _public_596420
#define public_59643b _public_59643b

PROC_DECLARE(0x5962c0, internal_5962c0, public_5962c0);
extern "C" NAKED register_t __cdecl internal_5962c0()
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
        je public_596420
        mov al, byte ptr ds : [esi+0x10]
        test al, al
        je public_596337
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
        jmp public_596346
        public_596337 : nop
        lea ecx, ds:[edi+0x410]
        push ecx
        call public_421ba0
        add esp, 4
        public_596346 : nop
        push 4
        call public_421670
        mov al, byte ptr ss : [esp+0x18]
        add esp, 4
        test al, al
        je public_5963b7
        push 0x3F800000
        push 0x3F800000
        call public_421ca0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+8]
        push 0
        push edx
        push eax
        call public_421cc0
        push 0x3F800000
        push 0
        call public_421ca0
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+8]
        push 0
        push ecx
        push edx
        call public_421cc0
        push 0
        push 0x3F800000
        call public_421ca0
        fld dword ptr ds : [esi+4]
        fadd dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [esi]
        add esp, 0x30
        push 0
        fmul dword ptr ds : [public_5c75e0]
        push ecx
        fstp dword ptr ss : [esp]
        push eax
        jmp public_596413
        public_5963b7 : nop
        push 0
        push 0x3F800000
        call public_421ca0
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        push 0
        push ecx
        push edx
        call public_421cc0
        push 0x3F800000
        push 0x3F800000
        call public_421ca0
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi]
        push 0
        push eax
        push ecx
        call public_421cc0
        push 0x3F800000
        push 0
        call public_421ca0
        fld dword ptr ds : [esi+4]
        fadd dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+8]
        add esp, 0x30
        push 0
        fmul dword ptr ds : [public_5c75e0]
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        public_596413 : nop
        call public_421cc0
        add esp, 0xC
        call public_421690
        public_596420 : nop
        mov al, byte ptr ds : [esi+0x10]
        test al, al
        je public_59643b
        add edi, 0x414
        push edi
        call public_421ba0
        add esp, 4
        pop edi
        pop esi
        ret 0xC
        public_59643b : nop
        add edi, 0x40C
        push edi
        call public_421ba0
        add esp, 4
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x5962c0)
    }
}

#undef public_596337
#undef public_596346
#undef public_5963b7
#undef public_596413
#undef public_596420
#undef public_59643b
