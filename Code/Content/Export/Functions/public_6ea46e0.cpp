#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea46e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb75a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb84c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f24280);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9000);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa96da);

#define public_6ea47f3 _public_6ea47f3
#define public_6ea4804 _public_6ea4804
#define public_6ea4819 _public_6ea4819
#define public_6ea483f _public_6ea483f
#define public_6ea4864 _public_6ea4864
#define public_6ea486d _public_6ea486d
#define public_6ea48c1 _public_6ea48c1
#define public_6ea48cc _public_6ea48cc
#define public_6ea48db _public_6ea48db
#define public_6ea48f1 _public_6ea48f1
#define public_6ea4911 _public_6ea4911
#define public_6ea491a _public_6ea491a

PROC_DECLARE(0x6ea46e0, internal_6ea46e0, public_6ea46e0);
extern "C" NAKED register_t __cdecl internal_6ea46e0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fa96da @0x6ea46e8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa96da
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
        mov dword ptr ds : [esi], offset public_6fb3f18
        mov dword ptr ds : [esi+0x2B4], 0x1C
        mov dword ptr ds : [esi+0x2B8], 0x1D
        mov dword ptr ds : [esi+0x2C0], 0x5C30
        mov dword ptr ds : [esi+0x2C4], 0x8084
        call dword ptr ds : [public_6fb300c]
        lea edx, ss:[esp+0x14]
        push edx
/*FIXUP push offset public_6fb3f00 @0x6ea4765*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3f00
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
        je public_6ea4819
        cmp dword ptr ss : [esp+0x1450], ebx
        je public_6ea4804
        mov eax, dword ptr ss : [esp+0x1454]
        cmp eax, ebx
        je public_6ea47f3
        push eax
        call dword ptr ds : [public_6fb32ac]
        mov dword ptr ss : [esp+0x1454], ebx
        mov dword ptr ss : [esp+0x1458], ebx
        public_6ea47f3 : nop
        mov ecx, dword ptr ss : [esp+0x1450]
        push ecx
        call edi
        mov dword ptr ss : [esp+0x1450], ebx
        public_6ea4804 : nop
        mov edx, dword ptr ss : [esp+0x144C]
        push edx
        call edi
        mov dword ptr ss : [esp+0x144C], 0xFFFFFFFF
        public_6ea4819 : nop
        mov eax, dword ptr ss : [esp+0x1454]
        cmp eax, ebx
        push ebp
        mov ebp, dword ptr ds : [public_6fb3390]
        je public_6ea483f
        push eax
        call ebp
        add esp, 4
        mov dword ptr ss : [esp+0x1458], ebx
        mov dword ptr ss : [esp+0x145C], ebx
        public_6ea483f : nop
        mov eax, dword ptr ss : [esp+0x1444]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1460], ebx
        je public_6ea486d
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6ea4864
        cmp cl, 0xFF
        je public_6ea4864
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6ea486d
        public_6ea4864 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6ea486d : nop
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
        je public_6ea48db
        cmp dword ptr ss : [esp+0x2C], ebx
        je public_6ea48cc
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        je public_6ea48c1
        push eax
        call dword ptr ds : [public_6fb32ac]
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        public_6ea48c1 : nop
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        call edi
        mov dword ptr ss : [esp+0x2C], ebx
        public_6ea48cc : nop
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        call edi
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        public_6ea48db : nop
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        je public_6ea48f1
        push eax
        call ebp
        add esp, 4
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        public_6ea48f1 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x38], ebx
        pop ebp
        je public_6ea491a
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6ea4911
        cmp cl, 0xFF
        je public_6ea4911
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6ea491a
        public_6ea4911 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6ea491a : nop
        mov ecx, dword ptr ss : [esp+0x157C]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x157C
        ret 8
        UNREACHABLE_TRAP(0x6ea46e0)
    }
}

#undef public_6ea47f3
#undef public_6ea4804
#undef public_6ea4819
#undef public_6ea483f
#undef public_6ea4864
#undef public_6ea486d
#undef public_6ea48c1
#undef public_6ea48cc
#undef public_6ea48db
#undef public_6ea48f1
#undef public_6ea4911
#undef public_6ea491a
