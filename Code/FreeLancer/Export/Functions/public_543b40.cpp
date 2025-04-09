#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412070);
CLANG_FORWARD_PROC_SYMBOL(public_542b70);
CLANG_FORWARD_PROC_SYMBOL(public_543b40);
CLANG_FORWARD_PROC_SYMBOL(public_548ef0);
CLANG_FORWARD_PROC_SYMBOL(public_549e30);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_54bb90);
CLANG_FORWARD_PROC_SYMBOL(public_54bbd0);
CLANG_FORWARD_PROC_SYMBOL(public_54bca0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0e6f);

#define public_543bba _public_543bba
#define public_543bbc _public_543bbc
#define public_543bc7 _public_543bc7
#define public_543bc9 _public_543bc9
#define public_543cc7 _public_543cc7
#define public_543cd8 _public_543cd8
#define public_543d11 _public_543d11
#define public_543d26 _public_543d26
#define public_543d32 _public_543d32

PROC_DECLARE(0x543b40, internal_543b40, public_543b40);
extern "C" NAKED register_t __cdecl internal_543b40()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c0e6f @0x543b48*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0e6f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x80
        push esi
        mov esi, ecx
        mov cl, byte ptr ds : [esi+0x18C]
        push edi
        mov edi, dword ptr ss : [esp+0x98]
        or cl, 8
        test edi, edi
        mov byte ptr ds : [esi+0x18C], cl
        je public_543cd8
        push 0x50
        call dword ptr ds : [public_5c69b8]
        add esp, 4
        mov dword ptr ss : [esp+8], eax
        test eax, eax
        mov dword ptr ss : [esp+0x90], 0
        je public_543bc7
        lea edx, ds:[edi+0xC]
        test edx, edx
        je public_543bba
        mov edx, dword ptr ds : [edx+4]
        test edx, edx
        je public_543bba
        mov ecx, dword ptr ds : [edx+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_543bbc
        public_543bba : nop
        xor edx, edx
        public_543bbc : nop
        push edx
        push esi
        mov ecx, eax
        call public_542b70
        jmp public_543bc9
        public_543bc7 : nop
        xor eax, eax
        public_543bc9 : nop
        push eax
        lea ecx, ds:[esi+0x20]
        mov dword ptr ss : [esp+0x94], 0xFFFFFFFF
        call dword ptr ds : [public_5c67f4]
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+4]
        lea eax, ss:[esp+0xC]
        push eax
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [edx+4]
        call public_54baf0
        cmp esi, eax
        jne public_543d32
        call public_54bca0
        test al, al
        jne public_543cc7
        push 0x41
/*FIXUP push offset public_5dffb0 @0x543c20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dffb0
        lea ecx, ss:[esp+0x50]
/*FIXUP push offset public_5dffa8 @0x543c29*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dffa8
        push ecx
        mov dword ptr ss : [esp+0x48], 0x3F800000
        mov dword ptr ss : [esp+0x38], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        call dword ptr ds : [public_5c71ec]
        mov edx, dword ptr ds : [edi]
        add esp, 0x10
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        lea eax, ss:[esp+0x50]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0xC0]
        test eax, eax
        jne public_543cc7
        call public_549e30
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_54bb90
        add esp, 4
        public_543cc7 : nop
        mov edx, dword ptr ds : [public_5dfb34]
        push edx
        call public_54bbd0
        add esp, 4
        jmp public_543d32
        public_543cd8 : nop
        call public_54baf0
        cmp esi, eax
        jne public_543d26
        mov esi, dword ptr ss : [esp+0x9C]
        cmp dword ptr ds : [esi], 0
        jne public_543d11
/*FIXUP push offset public_5dff8c @0x543ced*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dff8c
        push 0x2A8
/*FIXUP push offset public_5dff40 @0x543cf7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dff40
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x543d01*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_543d11 : nop
        push esi
        call public_548ef0
        push 0x3F800000
        call public_412070
        add esp, 8
        jmp public_543d32
        public_543d26 : nop
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x15C]
        public_543d32 : nop
        mov ecx, dword ptr ss : [esp+0x88]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x8C
        ret 8
        UNREACHABLE_TRAP(0x543b40)
    }
}

#undef public_543bba
#undef public_543bbc
#undef public_543bc7
#undef public_543bc9
#undef public_543cc7
#undef public_543cd8
#undef public_543d11
#undef public_543d26
#undef public_543d32
