#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1f50);
CLANG_FORWARD_PROC_SYMBOL(public_6eb75a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb84c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f24280);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9000);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa945a);

#define public_6ea2072 _public_6ea2072
#define public_6ea2083 _public_6ea2083
#define public_6ea2098 _public_6ea2098
#define public_6ea20be _public_6ea20be
#define public_6ea20e3 _public_6ea20e3
#define public_6ea20ec _public_6ea20ec
#define public_6ea2140 _public_6ea2140
#define public_6ea214b _public_6ea214b
#define public_6ea215a _public_6ea215a
#define public_6ea2170 _public_6ea2170
#define public_6ea2190 _public_6ea2190
#define public_6ea2199 _public_6ea2199

PROC_DECLARE(0x6ea1f50, internal_6ea1f50, public_6ea1f50);
extern "C" NAKED register_t __cdecl internal_6ea1f50()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fa945a @0x6ea1f58*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa945a
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
        mov eax, 4
        xor ebx, ebx
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x1584], ebx
        mov dword ptr ds : [esi], offset public_6fb3998
        mov dword ptr ds : [esi+0x2A8], eax
        mov dword ptr ds : [esi+0x2AC], eax
        mov byte ptr ds : [esi+0x32C], bl
        mov dword ptr ds : [esi+0x2B4], eax
        mov dword ptr ds : [esi+0x2B8], eax
        mov dword ptr ds : [esi+0x2C0], 0x55F0
        mov dword ptr ds : [esi+0x2C4], 0x7D64
        call dword ptr ds : [public_6fb300c]
        lea edx, ss:[esp+0x14]
        push edx
/*FIXUP push offset public_6fb397c @0x6ea1fe4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb397c
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
        je public_6ea2098
        cmp dword ptr ss : [esp+0x1450], ebx
        je public_6ea2083
        mov eax, dword ptr ss : [esp+0x1454]
        cmp eax, ebx
        je public_6ea2072
        push eax
        call dword ptr ds : [public_6fb32ac]
        mov dword ptr ss : [esp+0x1454], ebx
        mov dword ptr ss : [esp+0x1458], ebx
        public_6ea2072 : nop
        mov ecx, dword ptr ss : [esp+0x1450]
        push ecx
        call edi
        mov dword ptr ss : [esp+0x1450], ebx
        public_6ea2083 : nop
        mov edx, dword ptr ss : [esp+0x144C]
        push edx
        call edi
        mov dword ptr ss : [esp+0x144C], 0xFFFFFFFF
        public_6ea2098 : nop
        mov eax, dword ptr ss : [esp+0x1454]
        cmp eax, ebx
        push ebp
        mov ebp, dword ptr ds : [public_6fb3390]
        je public_6ea20be
        push eax
        call ebp
        add esp, 4
        mov dword ptr ss : [esp+0x1458], ebx
        mov dword ptr ss : [esp+0x145C], ebx
        public_6ea20be : nop
        mov eax, dword ptr ss : [esp+0x1444]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1460], ebx
        je public_6ea20ec
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6ea20e3
        cmp cl, 0xFF
        je public_6ea20e3
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6ea20ec
        public_6ea20e3 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6ea20ec : nop
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
        je public_6ea215a
        cmp dword ptr ss : [esp+0x2C], ebx
        je public_6ea214b
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        je public_6ea2140
        push eax
        call dword ptr ds : [public_6fb32ac]
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        public_6ea2140 : nop
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        call edi
        mov dword ptr ss : [esp+0x2C], ebx
        public_6ea214b : nop
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        call edi
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        public_6ea215a : nop
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        je public_6ea2170
        push eax
        call ebp
        add esp, 4
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        public_6ea2170 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x38], ebx
        pop ebp
        je public_6ea2199
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6ea2190
        cmp cl, 0xFF
        je public_6ea2190
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6ea2199
        public_6ea2190 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6ea2199 : nop
        mov ecx, dword ptr ss : [esp+0x157C]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x157C
        ret 8
        UNREACHABLE_TRAP(0x6ea1f50)
    }
}

#undef public_6ea2072
#undef public_6ea2083
#undef public_6ea2098
#undef public_6ea20be
#undef public_6ea20e3
#undef public_6ea20ec
#undef public_6ea2140
#undef public_6ea214b
#undef public_6ea215a
#undef public_6ea2170
#undef public_6ea2190
#undef public_6ea2199
