#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea3de0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb75a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb84c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f24280);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9000);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa963a);

#define public_6ea3ef3 _public_6ea3ef3
#define public_6ea3f04 _public_6ea3f04
#define public_6ea3f19 _public_6ea3f19
#define public_6ea3f3f _public_6ea3f3f
#define public_6ea3f64 _public_6ea3f64
#define public_6ea3f6d _public_6ea3f6d
#define public_6ea3fc1 _public_6ea3fc1
#define public_6ea3fcc _public_6ea3fcc
#define public_6ea3fdb _public_6ea3fdb
#define public_6ea3ff1 _public_6ea3ff1
#define public_6ea4011 _public_6ea4011
#define public_6ea401a _public_6ea401a

PROC_DECLARE(0x6ea3de0, internal_6ea3de0, public_6ea3de0);
extern "C" NAKED register_t __cdecl internal_6ea3de0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fa963a @0x6ea3de8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa963a
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
        mov dword ptr ds : [esi], offset public_6fb3dd8
        mov dword ptr ds : [esi+0x2B4], 0x16
        mov dword ptr ds : [esi+0x2B8], 0x17
        mov dword ptr ds : [esi+0x2C0], 0x5AA0
        mov dword ptr ds : [esi+0x2C4], 0x7FBC
        call dword ptr ds : [public_6fb300c]
        lea edx, ss:[esp+0x14]
        push edx
/*FIXUP push offset public_6fb3dc0 @0x6ea3e65*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3dc0
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
        je public_6ea3f19
        cmp dword ptr ss : [esp+0x1450], ebx
        je public_6ea3f04
        mov eax, dword ptr ss : [esp+0x1454]
        cmp eax, ebx
        je public_6ea3ef3
        push eax
        call dword ptr ds : [public_6fb32ac]
        mov dword ptr ss : [esp+0x1454], ebx
        mov dword ptr ss : [esp+0x1458], ebx
        public_6ea3ef3 : nop
        mov ecx, dword ptr ss : [esp+0x1450]
        push ecx
        call edi
        mov dword ptr ss : [esp+0x1450], ebx
        public_6ea3f04 : nop
        mov edx, dword ptr ss : [esp+0x144C]
        push edx
        call edi
        mov dword ptr ss : [esp+0x144C], 0xFFFFFFFF
        public_6ea3f19 : nop
        mov eax, dword ptr ss : [esp+0x1454]
        cmp eax, ebx
        push ebp
        mov ebp, dword ptr ds : [public_6fb3390]
        je public_6ea3f3f
        push eax
        call ebp
        add esp, 4
        mov dword ptr ss : [esp+0x1458], ebx
        mov dword ptr ss : [esp+0x145C], ebx
        public_6ea3f3f : nop
        mov eax, dword ptr ss : [esp+0x1444]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1460], ebx
        je public_6ea3f6d
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6ea3f64
        cmp cl, 0xFF
        je public_6ea3f64
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6ea3f6d
        public_6ea3f64 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6ea3f6d : nop
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
        je public_6ea3fdb
        cmp dword ptr ss : [esp+0x2C], ebx
        je public_6ea3fcc
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        je public_6ea3fc1
        push eax
        call dword ptr ds : [public_6fb32ac]
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        public_6ea3fc1 : nop
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        call edi
        mov dword ptr ss : [esp+0x2C], ebx
        public_6ea3fcc : nop
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        call edi
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        public_6ea3fdb : nop
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        je public_6ea3ff1
        push eax
        call ebp
        add esp, 4
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        public_6ea3ff1 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x38], ebx
        pop ebp
        je public_6ea401a
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6ea4011
        cmp cl, 0xFF
        je public_6ea4011
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6ea401a
        public_6ea4011 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6ea401a : nop
        mov ecx, dword ptr ss : [esp+0x157C]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x157C
        ret 8
        UNREACHABLE_TRAP(0x6ea3de0)
    }
}

#undef public_6ea3ef3
#undef public_6ea3f04
#undef public_6ea3f19
#undef public_6ea3f3f
#undef public_6ea3f64
#undef public_6ea3f6d
#undef public_6ea3fc1
#undef public_6ea3fcc
#undef public_6ea3fdb
#undef public_6ea3ff1
#undef public_6ea4011
#undef public_6ea401a
