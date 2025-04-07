#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea58e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb75a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb84c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f24280);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9000);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa981a);

#define public_6ea59f3 _public_6ea59f3
#define public_6ea5a04 _public_6ea5a04
#define public_6ea5a19 _public_6ea5a19
#define public_6ea5a3f _public_6ea5a3f
#define public_6ea5a64 _public_6ea5a64
#define public_6ea5a6d _public_6ea5a6d
#define public_6ea5ac1 _public_6ea5ac1
#define public_6ea5acc _public_6ea5acc
#define public_6ea5adb _public_6ea5adb
#define public_6ea5af1 _public_6ea5af1
#define public_6ea5b11 _public_6ea5b11
#define public_6ea5b1a _public_6ea5b1a

PROC_DECLARE(0x6ea58e0, internal_6ea58e0, public_6ea58e0);
extern "C" NAKED register_t __cdecl internal_6ea58e0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fa981a @0x6ea58e8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa981a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1570
        mov dword ptr fs : [0], esp
        call public_6fa9000
        mov eax, dword ptr ss : [esp+0x1584]
        push ebx
        push esi
        push edi
        mov esi, ecx
        push eax
        lea ecx, ss:[esp+0x1590]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], esi
        call public_6eb75a0
        xor ebx, ebx
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x1584], ebx
        mov dword ptr ds : [esi], offset public_6fb4198
        mov dword ptr ds : [esi+0x2B4], 0x28
        mov dword ptr ds : [esi+0x2B8], 0x29
        mov dword ptr ds : [esi+0x2C0], 0x5F50
        mov dword ptr ds : [esi+0x2C4], 0x8214
        call dword ptr ds : [public_6fb300c]
        lea edx, ss:[esp+0x14]
        push edx
/*FIXUP push offset public_6fb4180 @0x6ea5965*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4180
        mov byte ptr ss : [esp+0x158C], 1
        call public_6f24280
        add esp, 8
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6eb84c0
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6fb3008]
        lea ecx, ss:[esp+0x143C]
        mov dword ptr ss : [esp+0xC], ecx
        mov edx, dword ptr ds : [public_6fb3304]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x1444]
        mov byte ptr ss : [esp+0x158C], 3
        call dword ptr ds : [public_6fb3308]
        cmp dword ptr ss : [esp+0x144C], 0xFFFFFFFF
        mov edi, dword ptr ds : [public_6fb32a8]
        je public_6ea5a19
        cmp dword ptr ss : [esp+0x1450], ebx
        je public_6ea5a04
        mov eax, dword ptr ss : [esp+0x1454]
        cmp eax, ebx
        je public_6ea59f3
        push eax
        call dword ptr ds : [public_6fb32ac]
        mov dword ptr ss : [esp+0x1454], ebx
        mov dword ptr ss : [esp+0x1458], ebx
        public_6ea59f3 : nop
        mov ecx, dword ptr ss : [esp+0x1450]
        push ecx
        call edi
        mov dword ptr ss : [esp+0x1450], ebx
        public_6ea5a04 : nop
        mov edx, dword ptr ss : [esp+0x144C]
        push edx
        call edi
        mov dword ptr ss : [esp+0x144C], 0xFFFFFFFF
        public_6ea5a19 : nop
        mov eax, dword ptr ss : [esp+0x1454]
        cmp eax, ebx
        push ebp
        mov ebp, dword ptr ds : [public_6fb3390]
        je public_6ea5a3f
        push eax
        call ebp
        add esp, 4
        mov dword ptr ss : [esp+0x1458], ebx
        mov dword ptr ss : [esp+0x145C], ebx
        public_6ea5a3f : nop
        mov eax, dword ptr ss : [esp+0x1444]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1460], ebx
        je public_6ea5a6d
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6ea5a64
        cmp cl, 0xFF
        je public_6ea5a64
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6ea5a6d
        public_6ea5a64 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6ea5a6d : nop
        mov dword ptr ss : [esp+0x1444], ebx
        mov dword ptr ss : [esp+0x1448], ebx
        mov dword ptr ss : [esp+0x144C], ebx
        mov eax, dword ptr ds : [public_6fb3304]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x1590], 4
        call dword ptr ds : [public_6fb3308]
        cmp dword ptr ss : [esp+0x28], 0xFFFFFFFF
        je public_6ea5adb
        cmp dword ptr ss : [esp+0x2C], ebx
        je public_6ea5acc
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        je public_6ea5ac1
        push eax
        call dword ptr ds : [public_6fb32ac]
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        public_6ea5ac1 : nop
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        call edi
        mov dword ptr ss : [esp+0x2C], ebx
        public_6ea5acc : nop
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        call edi
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        public_6ea5adb : nop
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        je public_6ea5af1
        push eax
        call ebp
        add esp, 4
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        public_6ea5af1 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x38], ebx
        pop ebp
        je public_6ea5b1a
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6ea5b11
        cmp cl, 0xFF
        je public_6ea5b11
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6ea5b1a
        public_6ea5b11 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6ea5b1a : nop
        mov ecx, dword ptr ss : [esp+0x157C]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x157C
        ret 8
        UNREACHABLE_TRAP(0x6ea58e0)
    }
}

#undef public_6ea59f3
#undef public_6ea5a04
#undef public_6ea5a19
#undef public_6ea5a3f
#undef public_6ea5a64
#undef public_6ea5a6d
#undef public_6ea5ac1
#undef public_6ea5acc
#undef public_6ea5adb
#undef public_6ea5af1
#undef public_6ea5b11
#undef public_6ea5b1a
