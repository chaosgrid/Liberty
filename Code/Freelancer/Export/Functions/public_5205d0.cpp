#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_425a20);
CLANG_FORWARD_PROC_SYMBOL(public_509ca0);
CLANG_FORWARD_PROC_SYMBOL(public_5205d0);
CLANG_FORWARD_PROC_SYMBOL(public_525760);
CLANG_FORWARD_PROC_SYMBOL(public_527310);
CLANG_FORWARD_PROC_SYMBOL(public_527820);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_54c600);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0041);

#define public_52060c _public_52060c
#define public_520622 _public_520622
#define public_520670 _public_520670
#define public_520690 _public_520690
#define public_520697 _public_520697
#define public_5206e0 _public_5206e0
#define public_520700 _public_520700
#define public_520707 _public_520707
#define public_520727 _public_520727
#define public_520741 _public_520741

PROC_DECLARE(0x5205d0, internal_5205d0, public_5205d0);
extern "C" NAKED register_t __cdecl internal_5205d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0041 @0x5205d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0041
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x18], esi
        mov ecx, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x24], 5
        je public_52060c
        call dword ptr ds : [public_5c6660]
        mov dword ptr ds : [esi+4], ebx
        public_52060c : nop
        mov eax, dword ptr ds : [esi+0xA0]
        cmp eax, ebx
        je public_520622
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xA0], ebx
        public_520622 : nop
        mov eax, dword ptr ds : [esi+0xA4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+0xA8]
        push eax
        mov dword ptr ds : [esi+0xA4], ebx
        call public_5b7e1d
        lea ebp, ds:[esi+0xE0]
        add esp, 8
        mov ecx, ebp
        mov dword ptr ds : [esi+0xA8], ebx
        call public_425a20
        mov eax, dword ptr ds : [esi+0x18C]
        mov edi, dword ptr ds : [esi+0x188]
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_520697
        lea ebx, ds:[ebx]
        public_520670 : nop
        mov ecx, dword ptr ds : [edi]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x14], ecx
        je public_520690
        call public_54c600
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 4
        public_520690 : nop
        add edi, 4
        cmp edi, eax
        jne public_520670
        public_520697 : nop
        mov ecx, dword ptr ds : [esi+0x188]
        mov eax, dword ptr ds : [esi+0x18C]
        lea edi, ds:[esi+0x184]
        push ecx
        push eax
        push eax
        call public_527820
        mov ecx, dword ptr ds : [edi+8]
        add esp, 0xC
        push ecx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], eax
        call public_53aaa0
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [esi+0x228]
        mov edi, dword ptr ds : [esi+0x224]
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_520707
        nop 
        public_5206e0 : nop
        mov ecx, dword ptr ds : [edi]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x14], ecx
        je public_520700
        call public_525760
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 4
        public_520700 : nop
        add edi, 4
        cmp edi, eax
        jne public_5206e0
        public_520707 : nop
        mov ecx, dword ptr ds : [esi+0x228]
        cmp ecx, ecx
        mov eax, dword ptr ds : [esi+0x224]
        lea edi, ds:[esi+0x220]
        mov edx, ecx
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], edx
        je public_520741
        public_520727 : nop
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x10]
        add edx, 4
        add eax, 4
        cmp edx, ecx
        mov dword ptr ss : [esp+0x10], edx
        jne public_520727
        mov dword ptr ss : [esp+0x14], eax
        public_520741 : nop
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        push eax
        mov ecx, edi
        call public_53aaa0
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [esi+0xDC], ebx
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov eax, dword ptr ds : [esi+0x1A8]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x1AC], ebx
        mov dword ptr ds : [esi+0x1B4], ebx
        mov eax, dword ptr ds : [esi+0x188]
        push eax
        call public_5b7e1d
        add esp, 0xC
        lea ecx, ds:[esi+0xFC]
        mov dword ptr ds : [esi+0x188], ebx
        mov dword ptr ds : [esi+0x18C], ebx
        mov dword ptr ds : [esi+0x190], ebx
        mov byte ptr ss : [esp+0x24], 1
        call public_54c600
        mov edi, dword ptr ss : [ebp+4]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x28], bl
        call public_53e430
        mov edx, dword ptr ds : [eax]
        push edi
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebp
        call public_509ca0
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [ebp+8]
        push eax
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+0x10], ebx
        call public_5b7e1d
        add esp, 8
        mov dword ptr ss : [ebp+8], ebx
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        add esi, 8
        push eax
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        call public_527310
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x5205d0)
    }
}

#undef public_52060c
#undef public_520622
#undef public_520670
#undef public_520690
#undef public_520697
#undef public_5206e0
#undef public_520700
#undef public_520707
#undef public_520727
#undef public_520741
