#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f495f0);

#define public_6f49616 _public_6f49616
#define public_6f4963b _public_6f4963b
#define public_6f49648 _public_6f49648
#define public_6f4966e _public_6f4966e
#define public_6f49680 _public_6f49680
#define public_6f496a6 _public_6f496a6
#define public_6f496b3 _public_6f496b3
#define public_6f496d9 _public_6f496d9
#define public_6f49708 _public_6f49708
#define public_6f49721 _public_6f49721
#define public_6f49730 _public_6f49730
#define public_6f49749 _public_6f49749
#define public_6f49754 _public_6f49754
#define public_6f49770 _public_6f49770

PROC_DECLARE(0x6f495f0, internal_6f495f0, public_6f495f0);
extern "C" NAKED register_t __cdecl internal_6f495f0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        mov esi, ecx
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ds : [public_6fb3380]
        je public_6f4963b
        public_6f49616 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [eax+0xC]
        push ecx
        push edx
/*FIXUP push offset public_6fbb150 @0x6f4961e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb150
        push edi
        call ebx
        add esp, 0x10
        lea ecx, ss:[esp+0x10]
        call public_6f1fa00
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+4]
        jne public_6f49616
        public_6f4963b : nop
        mov ecx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_6f4966e
        public_6f49648 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        movzx edx, byte ptr ds : [eax+0xC]
        push ecx
        push edx
/*FIXUP push offset public_6fbb138 @0x6f49651*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb138
        push edi
        call ebx
        add esp, 0x10
        lea ecx, ss:[esp+0x14]
        call public_6f1fa00
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [esi+0x18]
        jne public_6f49648
        public_6f4966e : nop
        mov ecx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        je public_6f496a6
        nop 
        lea esp, ss:[esp]
        public_6f49680 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        movzx edx, byte ptr ds : [eax+0xC]
        push ecx
        push edx
/*FIXUP push offset public_6fbb120 @0x6f49689*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb120
        push edi
        call ebx
        add esp, 0x10
        lea ecx, ss:[esp+0x18]
        call public_6f1fa00
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+0x2C]
        jne public_6f49680
        public_6f496a6 : nop
        mov ecx, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        je public_6f496d9
        public_6f496b3 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        movzx edx, byte ptr ds : [eax+0xC]
        push ecx
        push edx
/*FIXUP push offset public_6fbb10c @0x6f496bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb10c
        push edi
        call ebx
        add esp, 0x10
        lea ecx, ss:[esp+0x1C]
        call public_6f1fa00
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [esi+0x40]
        jne public_6f496b3
        public_6f496d9 : nop
        fld dword ptr ds : [esi+0x50]
        sub esp, 8
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6fbb0f4 @0x6f496e2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb0f4
        push edi
        call ebx
        fld dword ptr ds : [esi+0x54]
        add esp, 8
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6fbb0dc @0x6f496f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb0dc
        push edi
        call ebx
        mov ebp, dword ptr ds : [esi+0x5C]
        mov eax, dword ptr ds : [esi+0x60]
        add esp, 0x10
        cmp ebp, eax
        je public_6f49721
        public_6f49708 : nop
        mov eax, dword ptr ss : [ebp]
        push eax
/*FIXUP push offset public_6fbb0c8 @0x6f4970c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb0c8
        push edi
        call ebx
        mov eax, dword ptr ds : [esi+0x60]
        add ebp, 4
        add esp, 0xC
        cmp ebp, eax
        jne public_6f49708
        public_6f49721 : nop
        mov ebp, dword ptr ds : [esi+0x6C]
        cmp ebp, dword ptr ds : [esi+0x70]
        je public_6f49749
        lea esp, ss:[esp]
        public_6f49730 : nop
        mov ecx, dword ptr ss : [ebp]
        push ecx
/*FIXUP push offset public_6fbb0b4 @0x6f49734*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb0b4
        push edi
        call ebx
        mov eax, dword ptr ds : [esi+0x70]
        add ebp, 4
        add esp, 0xC
        cmp ebp, eax
        jne public_6f49730
        public_6f49749 : nop
        mov ebp, dword ptr ds : [esi+0x7C]
        cmp ebp, dword ptr ds : [esi+0x80]
        je public_6f49770
        public_6f49754 : nop
        mov edx, dword ptr ss : [ebp]
        push edx
/*FIXUP push offset public_6fbb0a0 @0x6f49758*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb0a0
        push edi
        call ebx
        mov eax, dword ptr ds : [esi+0x80]
        add ebp, 4
        add esp, 0xC
        cmp ebp, eax
        jne public_6f49754
        public_6f49770 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f495f0)
    }
}

#undef public_6f49616
#undef public_6f4963b
#undef public_6f49648
#undef public_6f4966e
#undef public_6f49680
#undef public_6f496a6
#undef public_6f496b3
#undef public_6f496d9
#undef public_6f49708
#undef public_6f49721
#undef public_6f49730
#undef public_6f49749
#undef public_6f49754
#undef public_6f49770
