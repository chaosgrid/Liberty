#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_43a460);
CLANG_FORWARD_PROC_SYMBOL(public_441b90);
CLANG_FORWARD_PROC_SYMBOL(public_441c40);
CLANG_FORWARD_PROC_SYMBOL(public_454eb0);
CLANG_FORWARD_PROC_SYMBOL(public_454f80);
CLANG_FORWARD_PROC_SYMBOL(public_456540);

#define public_441c2f _public_441c2f

PROC_DECLARE(0x441b90, internal_441b90, public_441b90);
extern "C" NAKED register_t __cdecl internal_441b90()
{
    __asm
    {
        sub esp, 0x30
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x3CC]
        test al, al
        jne public_441c2f
        push esi
        mov ecx, offset public_668708
        mov byte ptr ds : [edi+0x3CC], 1
        call public_43a460
        push 0
        push eax
        mov ecx, offset public_66d2d0
        call public_456540
        lea ecx, ss:[esp+8]
        mov esi, eax
        call dword ptr ds : [public_5c6184]
        mov ecx, dword ptr ss : [esp+0x3C]
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        push 0
        push ecx
        mov ecx, esi
        call public_454eb0
        mov dl, byte ptr ss : [esp+0x44]
        mov al, byte ptr ss : [esp+0x40]
        test dl, dl
        setne dl
        mov ecx, esi
        mov dword ptr ds : [esi], 0
        mov byte ptr ds : [esi+6], dl
        mov byte ptr ds : [esi+7], al
        mov byte ptr ds : [esi+8], 1
        mov byte ptr ds : [esi+9], 0
        mov dword ptr ds : [esi+0x10], 1
        mov dword ptr ds : [esi+0x18], offset _public_441c40
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x20], 0
        call public_454f80
        push 0
        call public_41dda0
        add esp, 4
        pop esi
        public_441c2f : nop
        pop edi
        add esp, 0x30
        ret 0xC
        UNREACHABLE_TRAP(0x441b90)
    }
}

#undef public_441c2f
