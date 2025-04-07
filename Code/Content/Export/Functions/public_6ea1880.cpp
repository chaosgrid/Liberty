#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1880);
CLANG_FORWARD_PROC_SYMBOL(public_6eb75a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb84c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f24280);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9000);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa940a);

#define public_6ea19f7 _public_6ea19f7
#define public_6ea1a08 _public_6ea1a08
#define public_6ea1a19 _public_6ea1a19
#define public_6ea1a3c _public_6ea1a3c
#define public_6ea1a61 _public_6ea1a61
#define public_6ea1a6a _public_6ea1a6a
#define public_6ea1abe _public_6ea1abe
#define public_6ea1ac9 _public_6ea1ac9
#define public_6ea1ad4 _public_6ea1ad4
#define public_6ea1aee _public_6ea1aee
#define public_6ea1b0d _public_6ea1b0d
#define public_6ea1b16 _public_6ea1b16

PROC_DECLARE(0x6ea1880, internal_6ea1880, public_6ea1880);
extern "C" NAKED register_t __cdecl internal_6ea1880()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_6fa940a @0x6ea1888*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa940a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1570
        mov dword ptr fs : [0], esp
        call public_6fa9000
        mov eax, dword ptr ss : [esp+0x1584]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push eax
        lea ecx, ss:[esp+0x1594]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], esi
        call public_6eb75a0
        lea edx, ds:[esi+4]
        push 0x3D088889
        xor ebx, ebx
        push edx
        mov dword ptr ss : [esp+0x1590], ebx
        mov dword ptr ds : [esi], offset public_6fb38a8
        mov dword ptr ds : [esi+0x2B4], 1
        mov dword ptr ds : [esi+0x2B8], 2
        mov dword ptr ds : [esi+0x2C0], 0x5528
        mov dword ptr ds : [esi+0x2C4], 0x7D00
        mov dword ptr ds : [esi+0x14], 0x3D088889
        call dword ptr ds : [public_6fb36a4]
        or ebp, 0xFFFFFFFF
        add esp, 8
        lea ecx, ss:[esp+0x18]
        mov dword ptr ds : [esi+0x2AC], 3
        mov byte ptr ds : [esi+0x43C], bl
        mov byte ptr ds : [esi+0x43D], bl
        mov byte ptr ds : [esi+0x32C], bl
        mov dword ptr ds : [esi+0x334], ebp
        mov dword ptr ds : [esi+0x3B8], ebp
        call dword ptr ds : [public_6fb300c]
        lea eax, ss:[esp+0x18]
        push eax
/*FIXUP push offset public_6fb3890 @0x6ea194a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3890
        mov byte ptr ss : [esp+0x1590], 1
        call public_6f24280
        add esp, 8
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call public_6eb84c0
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6fb3008]
        mov edi, dword ptr ds : [public_6fb36a8]
/*FIXUP push offset public_6fb3880 @0x6ea197b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3880
/*FIXUP push offset public_6fce968 @0x6ea1980*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fce968
        call edi
/*FIXUP push offset public_6fb3870 @0x6ea1987*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3870
/*FIXUP push offset public_6fce964 @0x6ea198c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fce964
        call edi
        add esp, 0x10
        lea edx, ss:[esp+0x1440]
        mov dword ptr ss : [esp+0x10], edx
        mov eax, dword ptr ds : [public_6fb3304]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x1448]
        mov byte ptr ss : [esp+0x1590], 3
        call dword ptr ds : [public_6fb3308]
        cmp dword ptr ss : [esp+0x1450], ebp
        mov edi, dword ptr ds : [public_6fb32a8]
        je public_6ea1a19
        cmp dword ptr ss : [esp+0x1454], ebx
        je public_6ea1a08
        mov eax, dword ptr ss : [esp+0x1458]
        cmp eax, ebx
        je public_6ea19f7
        push eax
        call dword ptr ds : [public_6fb32ac]
        mov dword ptr ss : [esp+0x1458], ebx
        mov dword ptr ss : [esp+0x145C], ebx
        public_6ea19f7 : nop
        mov edx, dword ptr ss : [esp+0x1454]
        push edx
        call edi
        mov dword ptr ss : [esp+0x1454], ebx
        public_6ea1a08 : nop
        mov eax, dword ptr ss : [esp+0x1450]
        push eax
        call edi
        mov dword ptr ss : [esp+0x1450], ebp
        public_6ea1a19 : nop
        mov eax, dword ptr ss : [esp+0x1458]
        cmp eax, ebx
        je public_6ea1a3c
        push eax
        call dword ptr ds : [public_6fb3390]
        add esp, 4
        mov dword ptr ss : [esp+0x1458], ebx
        mov dword ptr ss : [esp+0x145C], ebx
        public_6ea1a3c : nop
        mov eax, dword ptr ss : [esp+0x1444]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1460], ebx
        je public_6ea1a6a
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6ea1a61
        cmp cl, 0xFF
        je public_6ea1a61
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6ea1a6a
        public_6ea1a61 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6ea1a6a : nop
        mov dword ptr ss : [esp+0x1444], ebx
        mov dword ptr ss : [esp+0x1448], ebx
        mov dword ptr ss : [esp+0x144C], ebx
        mov ecx, dword ptr ds : [public_6fb3304]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x1590], 4
        call dword ptr ds : [public_6fb3308]
        cmp dword ptr ss : [esp+0x28], ebp
        je public_6ea1ad4
        cmp dword ptr ss : [esp+0x2C], ebx
        je public_6ea1ac9
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        je public_6ea1abe
        push eax
        call dword ptr ds : [public_6fb32ac]
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        public_6ea1abe : nop
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        call edi
        mov dword ptr ss : [esp+0x2C], ebx
        public_6ea1ac9 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        call edi
        mov dword ptr ss : [esp+0x28], ebp
        public_6ea1ad4 : nop
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        je public_6ea1aee
        push eax
        call dword ptr ds : [public_6fb3390]
        add esp, 4
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        public_6ea1aee : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x38], ebx
        je public_6ea1b16
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6ea1b0d
        cmp cl, 0xFF
        je public_6ea1b0d
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6ea1b16
        public_6ea1b0d : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6ea1b16 : nop
        mov ecx, dword ptr ss : [esp+0x1580]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x157C
        ret 8
        UNREACHABLE_TRAP(0x6ea1880)
    }
}

#undef public_6ea19f7
#undef public_6ea1a08
#undef public_6ea1a19
#undef public_6ea1a3c
#undef public_6ea1a61
#undef public_6ea1a6a
#undef public_6ea1abe
#undef public_6ea1ac9
#undef public_6ea1ad4
#undef public_6ea1aee
#undef public_6ea1b0d
#undef public_6ea1b16
