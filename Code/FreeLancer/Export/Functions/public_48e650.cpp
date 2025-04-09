#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_425a20);
CLANG_FORWARD_PROC_SYMBOL(public_48e650);
CLANG_FORWARD_PROC_SYMBOL(public_48eb80);
CLANG_FORWARD_PROC_SYMBOL(public_4a2c70);
CLANG_FORWARD_PROC_SYMBOL(public_4a2f80);
CLANG_FORWARD_PROC_SYMBOL(public_4a3f50);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59eee0);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc7d9);

#define public_48e724 _public_48e724
#define public_48e737 _public_48e737
#define public_48e74a _public_48e74a
#define public_48e75d _public_48e75d
#define public_48e770 _public_48e770
#define public_48e780 _public_48e780
#define public_48e7a0 _public_48e7a0
#define public_48e7d5 _public_48e7d5
#define public_48e7e5 _public_48e7e5
#define public_48e803 _public_48e803
#define public_48e81c _public_48e81c
#define public_48e86a _public_48e86a
#define public_48e888 _public_48e888
#define public_48e8a6 _public_48e8a6
#define public_48e8b2 _public_48e8b2
#define public_48e8c7 _public_48e8c7
#define public_48e8dc _public_48e8dc
#define public_48e8f1 _public_48e8f1
#define public_48e900 _public_48e900
#define public_48e936 _public_48e936
#define public_48e945 _public_48e945

PROC_DECLARE(0x48e650, internal_48e650, public_48e650);
extern "C" NAKED register_t __cdecl internal_48e650()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bc7d9 @0x48e652*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc7d9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ds : [esi], offset public_5d2f84
        mov dword ptr ds : [esi+0x7C], offset public_5d2f74
        mov dword ptr ds : [esi+0x32C], offset public_5d2f6c
        mov dword ptr ds : [esi+0x330], offset public_5d2f60
        mov eax, dword ptr ds : [esi+0xD6C]
        push eax
        mov dword ptr ss : [esp+0x2C], 0x14
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+0xD70]
        xor ebx, ebx
        push eax
        mov dword ptr ds : [esi+0xD6C], ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+0xEE0]
        push eax
        mov dword ptr ds : [esi+0xD70], ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+0xEE4]
        push eax
        mov dword ptr ds : [esi+0xEE0], ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+0xD40]
        push eax
        mov dword ptr ds : [esi+0xEE4], ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+0xD44]
        push eax
        mov dword ptr ds : [esi+0xD40], ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+0x354]
        or edi, 0xFFFFFFFF
        add esp, 0x18
        cmp eax, edi
        mov dword ptr ds : [esi+0xD44], ebx
        je public_48e724
        lea ecx, ds:[esi+0x350]
        call public_59eee0
        public_48e724 : nop
        cmp dword ptr ds : [esi+0x37C], edi
        je public_48e737
        lea ecx, ds:[esi+0x378]
        call public_59eee0
        public_48e737 : nop
        cmp dword ptr ds : [esi+0x3A4], edi
        je public_48e74a
        lea ecx, ds:[esi+0x3A0]
        call public_59eee0
        public_48e74a : nop
        cmp dword ptr ds : [esi+0x8A0], edi
        je public_48e75d
        lea ecx, ds:[esi+0x89C]
        call public_59eee0
        public_48e75d : nop
        cmp dword ptr ds : [esi+0xC20], edi
        je public_48e770
        lea ecx, ds:[esi+0xC1C]
        call public_59eee0
        public_48e770 : nop
        lea edi, ds:[esi+0x930]
        mov ebp, 0xA
        nop 
        lea esp, ss:[esp]
        public_48e780 : nop
        mov ecx, edi
        call public_59eee0
        add edi, 0x28
        dec ebp
        jne public_48e780
        cmp dword ptr ds : [esi+0x814], ebx
        je public_48e7d5
        lea edi, ds:[esi+0x80C]
        nop 
        lea esp, ss:[esp]
        public_48e7a0 : nop
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call public_53e430
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+8]
        push eax
        call public_5b7e1d
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 4
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call public_516f70
        cmp dword ptr ds : [esi+0x814], ebx
        jne public_48e7a0
        public_48e7d5 : nop
        mov eax, dword ptr ds : [esi+0x404]
        cmp eax, ebx
        je public_48e81c
        lea edi, ds:[esi+0x3FC]
        public_48e7e5 : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        call public_53e430
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edx+8]
        cmp ecx, ebx
        je public_48e803
        push 1
        call public_48eb80
        public_48e803 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        call public_516f70
        cmp dword ptr ds : [esi+0x404], ebx
        jne public_48e7e5
        public_48e81c : nop
        xor eax, eax
        mov ecx, 0x63
        lea edi, ds:[esi+0x4B8]
        rep stosd
        mov ecx, 0x63
        lea edi, ds:[esi+0x644]
        rep stosd
        lea ecx, ds:[esi+0x880]
        call public_425a20
        mov eax, dword ptr ds : [public_6720ac]
        cmp eax, ebx
        je public_48e8b2
        cmp dword ptr ds : [public_6720b8], ebx
        je public_48e86a
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_6720b8 @0x48e856*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6720b8
        push eax
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [public_6720ac]
        mov dword ptr ds : [public_6720b8], ebx
        public_48e86a : nop
        cmp dword ptr ds : [public_6720bc], ebx
        je public_48e888
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6720bc @0x48e874*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6720bc
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [public_6720ac]
        mov dword ptr ds : [public_6720bc], ebx
        public_48e888 : nop
        cmp dword ptr ds : [public_6720c0], ebx
        je public_48e8a6
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_6720c0 @0x48e892*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6720c0
        push eax
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [public_6720ac]
        mov dword ptr ds : [public_6720c0], ebx
        public_48e8a6 : nop
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_6720ac], ebx
        public_48e8b2 : nop
        mov eax, dword ptr ds : [public_6720b0]
        cmp eax, ebx
        je public_48e8c7
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [public_6720b0], ebx
        public_48e8c7 : nop
        mov eax, dword ptr ds : [public_6720b4]
        cmp eax, ebx
        je public_48e8dc
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_6720b4], ebx
        public_48e8dc : nop
        mov ebp, dword ptr ds : [esi+0xFFC]
        mov edi, dword ptr ds : [esi+0xFF8]
        cmp edi, ebp
        mov byte ptr ss : [esp+0x28], 0x13
        je public_48e900
        public_48e8f1 : nop
        push ebx
        mov ecx, edi
        call public_4a3f50
        add edi, 8
        cmp edi, ebp
        jne public_48e8f1
        public_48e900 : nop
        mov eax, dword ptr ds : [esi+0xFF8]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0xFF8], ebx
        mov dword ptr ds : [esi+0xFFC], ebx
        mov dword ptr ds : [esi+0x1000], ebx
        mov ebp, dword ptr ds : [esi+0xFEC]
        mov edi, dword ptr ds : [esi+0xFE8]
        add esp, 4
        cmp edi, ebp
        mov byte ptr ss : [esp+0x28], 0x12
        je public_48e945
        public_48e936 : nop
        push ebx
        mov ecx, edi
        call public_4a3f50
        add edi, 8
        cmp edi, ebp
        jne public_48e936
        public_48e945 : nop
        mov eax, dword ptr ds : [esi+0xFE8]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0xFE8], ebx
        mov dword ptr ds : [esi+0xFEC], ebx
        mov dword ptr ds : [esi+0xFF0], ebx
        mov eax, dword ptr ds : [esi+0xFD8]
        push eax
        call public_5b7e1d
        lea ecx, ds:[esi+0xC80]
        mov dword ptr ds : [esi+0xFD8], ebx
        mov dword ptr ds : [esi+0xFDC], ebx
        mov dword ptr ds : [esi+0xFE0], ebx
        add esp, 8
        mov byte ptr ss : [esp+0x28], 0x10
        mov dword ptr ds : [ecx], offset public_5c8944
        call public_401e90
        lea ecx, ds:[esi+0xC1C]
        mov byte ptr ss : [esp+0x28], 0xF
        call public_59ef20
        mov eax, dword ptr ds : [esi+0xB90]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0xB90], ebx
        mov dword ptr ds : [esi+0xB94], ebx
        mov dword ptr ds : [esi+0xB98], ebx
        mov eax, dword ptr ds : [esi+0xB5C]
        push eax
        call public_5b7e1d
        add esp, 8
/*FIXUP push offset _public_59ef20 @0x48e9d7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_59ef20
        push 0xA
        push 0x28
        lea eax, ds:[esi+0x930]
        push eax
        mov dword ptr ds : [esi+0xB5C], ebx
        mov dword ptr ds : [esi+0xB60], ebx
        mov dword ptr ds : [esi+0xB64], ebx
        mov byte ptr ss : [esp+0x38], 0xC
        call public_5b7ec6
        lea ecx, ds:[esi+0x89C]
        mov byte ptr ss : [esp+0x28], 0xB
        call public_59ef20
        lea ecx, ds:[esi+0x880]
        mov byte ptr ss : [esp+0x28], 0xA
        call public_4a2c70
        mov eax, dword ptr ds : [esi+0x86C]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x86C], ebx
        mov dword ptr ds : [esi+0x870], ebx
        mov dword ptr ds : [esi+0x874], ebx
        mov eax, dword ptr ds : [esi+0x85C]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x85C], ebx
        mov dword ptr ds : [esi+0x860], ebx
        mov dword ptr ds : [esi+0x864], ebx
        mov eax, dword ptr ds : [esi+0x84C]
        push eax
        call public_5b7e1d
        add esp, 0xC
        mov dword ptr ds : [esi+0x84C], ebx
        mov dword ptr ds : [esi+0x850], ebx
        mov dword ptr ds : [esi+0x854], ebx
        mov eax, dword ptr ds : [esi+0x810]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x80C]
        push eax
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x34], 6
        call public_4a2f80
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x400]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x3FC]
        push eax
        push ecx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x34], 5
        call public_4a2f80
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        add esp, 4
        lea ecx, ds:[esi+0x3A0]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov byte ptr ss : [esp+0x28], 4
        call public_59ef20
        lea ecx, ds:[esi+0x378]
        mov byte ptr ss : [esp+0x28], 3
        call public_59ef20
        lea ecx, ds:[esi+0x350]
        mov byte ptr ss : [esp+0x28], 2
        call public_59ef20
        mov ecx, dword ptr ds : [esi+0x33C]
        mov edx, dword ptr ds : [esi+0x338]
        lea edi, ds:[esi+0x334]
        push ecx
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 1
        call public_53aaa0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        add esp, 4
        lea ecx, ds:[esi+0x32C]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov byte ptr ss : [esp+0x28], bl
        call public_576010
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x48e650)
    }
}

#undef public_48e724
#undef public_48e737
#undef public_48e74a
#undef public_48e75d
#undef public_48e770
#undef public_48e780
#undef public_48e7a0
#undef public_48e7d5
#undef public_48e7e5
#undef public_48e803
#undef public_48e81c
#undef public_48e86a
#undef public_48e888
#undef public_48e8a6
#undef public_48e8b2
#undef public_48e8c7
#undef public_48e8dc
#undef public_48e8f1
#undef public_48e900
#undef public_48e936
#undef public_48e945
