#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);
CLANG_FORWARD_PROC_SYMBOL(public_6d23fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d315e0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62c5b);

#define public_6d3161b _public_6d3161b
#define public_6d31634 _public_6d31634
#define public_6d31641 _public_6d31641
#define public_6d31648 _public_6d31648
#define public_6d31660 _public_6d31660
#define public_6d31685 _public_6d31685
#define public_6d316a5 _public_6d316a5
#define public_6d316c0 _public_6d316c0
#define public_6d316e5 _public_6d316e5
#define public_6d31710 _public_6d31710

PROC_DECLARE(0x6d315e0, internal_6d315e0, public_6d315e0);
extern "C" NAKED register_t __cdecl internal_6d315e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62c5b @0x6d315e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62c5b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], esi
        mov al, byte ptr ds : [esi+0x30]
        test al, al
        mov dword ptr ss : [esp+0x1C], 0
        je public_6d3161b
        mov ecx, dword ptr ds : [esi+0x34]
        test ecx, ecx
        je public_6d3161b
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6d3161b : nop
        push ebp
        push edi
        mov dword ptr ds : [esi], offset public_6d68c58
        mov eax, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x24], 2
        je public_6d31648
        public_6d31634 : nop
        mov ecx, dword ptr ds : [edi+8]
        test ecx, ecx
        je public_6d31641
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6d31641 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+0xC]
        jne public_6d31634
        public_6d31648 : nop
        mov ebp, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebp
        lea edi, ds:[esi+8]
        mov dword ptr ss : [esp+0xC], eax
        je public_6d31685
        lea esp, ss:[esp]
        public_6d31660 : nop
        push 0
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x14]
        call public_6d1b490
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        call public_6d23fd0
        cmp dword ptr ss : [esp+0xC], ebp
        jne public_6d31660
        public_6d31685 : nop
        lea ebp, ds:[esi+0x24]
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [ebp], offset public_6d68d00
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        mov byte ptr ss : [esp+0x24], 3
        je public_6d316a5
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6d316a5 : nop
        mov dword ptr ss : [ebp], offset public_6d68d28
        mov dword ptr ds : [esi], offset public_6d68e7c
        mov ebp, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebp
        mov dword ptr ss : [esp+0xC], eax
        je public_6d316e5
        public_6d316c0 : nop
        push 0
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_6d1b490
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6d23fd0
        cmp dword ptr ss : [esp+0xC], ebp
        jne public_6d316c0
        public_6d316e5 : nop
        mov dword ptr ds : [edi+4], 0
        mov dword ptr ds : [edi+8], 0
        mov dword ptr ds : [esi], offset public_6d68d00
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        pop edi
        mov dword ptr ss : [esp+0x20], 4
        pop ebp
        je public_6d31710
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6d31710 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi], offset public_6d68d28
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6d315e0)
    }
}

#undef public_6d3161b
#undef public_6d31634
#undef public_6d31641
#undef public_6d31648
#undef public_6d31660
#undef public_6d31685
#undef public_6d316a5
#undef public_6d316c0
#undef public_6d316e5
#undef public_6d31710
