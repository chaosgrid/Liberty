#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_473970);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57b470);
CLANG_FORWARD_JUMP_SYMBOL(public_5bbb74);

#define public_473a25 _public_473a25
#define public_473ab9 _public_473ab9
#define public_473abe _public_473abe

PROC_DECLARE(0x473970, internal_473970, public_473970);
extern "C" NAKED register_t __cdecl internal_473970()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bbb74 @0x473978*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bbb74
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        test eax, eax
        push esi
        jne public_473a25
        mov esi, dword ptr ds : [ecx+0x350]
        mov eax, dword ptr ds : [esi+0x394]
        mov ecx, dword ptr ds : [eax]
        call public_57b370
        push 0x828B
        lea ecx, ss:[esp+8]
        call dword ptr ds : [public_5c62b8]
        mov ecx, dword ptr ds : [esi+0x394]
        mov ecx, dword ptr ds : [ecx]
        push eax
        mov dword ptr ss : [esp+0x20], 0
        call public_57b470
        lea ecx, ss:[esp+4]
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [public_5c62b4]
        push 1
        lea ecx, ss:[esp+8]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [esi+0x394]
        mov ecx, dword ptr ds : [edx]
        push eax
        mov dword ptr ss : [esp+0x20], 1
        call public_57b470
        lea ecx, ss:[esp+4]
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [public_5c62bc]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [esi+0x394]
        mov ecx, dword ptr ds : [ecx]
        push eax
        jmp public_473ab9
        public_473a25 : nop
        cmp eax, 1
        jne public_473abe
        mov esi, dword ptr ds : [ecx+0x34C]
        mov edx, dword ptr ds : [esi+0x394]
        mov ecx, dword ptr ds : [edx]
        call public_57b370
        push 0x828B
        lea ecx, ss:[esp+8]
        call dword ptr ds : [public_5c62b8]
        push eax
        mov eax, dword ptr ds : [esi+0x394]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], 2
        call public_57b470
        lea ecx, ss:[esp+4]
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [public_5c62b4]
        push 1
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_5c62c0]
        mov ecx, dword ptr ds : [esi+0x394]
        mov ecx, dword ptr ds : [ecx]
        push eax
        mov dword ptr ss : [esp+0x20], 3
        call public_57b470
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [public_5c62bc]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi+0x394]
        mov ecx, dword ptr ds : [eax]
        push edx
        public_473ab9 : nop
        call public_57b3e0
        public_473abe : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 8
        UNREACHABLE_TRAP(0x473970)
    }
}

#undef public_473a25
#undef public_473ab9
#undef public_473abe
