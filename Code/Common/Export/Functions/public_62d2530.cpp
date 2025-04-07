#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6280b40);
CLANG_FORWARD_PROC_SYMBOL(public_62d2530);
CLANG_FORWARD_PROC_SYMBOL(public_62d4c50);
CLANG_FORWARD_PROC_SYMBOL(public_62d4c90);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63950c0);

#define public_62d2573 _public_62d2573
#define public_62d259b _public_62d259b
#define public_62d25b6 _public_62d25b6
#define public_62d25bf _public_62d25bf
#define public_62d2665 _public_62d2665
#define public_62d2673 _public_62d2673
#define public_62d2681 _public_62d2681
#define public_62d26a0 _public_62d26a0
#define public_62d26b5 _public_62d26b5
#define public_62d26eb _public_62d26eb

PROC_DECLARE(0x62d2530, internal_62d2530, public_62d2530);
extern "C" NAKED register_t __cdecl internal_62d2530()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63950c0 @0x62d2532*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63950c0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ds : [ebx], offset public_63a037c
        mov ecx, dword ptr ds : [ebx+0xC0]
        or eax, 0xFFFFFFFF
        cmp ecx, eax
        mov dword ptr ss : [esp+0x24], 1
        je public_62d2573
        mov dword ptr ds : [ebx+0xC0], eax
        public_62d2573 : nop
        mov esi, dword ptr ds : [ebx+0xC]
        xor ebp, ebp
        cmp esi, ebp
        mov dword ptr ss : [esp+0x14], esi
        je public_62d25bf
        mov eax, dword ptr ds : [esi+0x218]
        cmp eax, ebp
        lea ecx, ds:[esi+0x218]
        mov byte ptr ss : [esp+0x24], 2
        je public_62d259b
        push ebp
        call public_6341610
        public_62d259b : nop
        mov eax, dword ptr ds : [esi+0x1C8]
        cmp eax, ebp
        lea ecx, ds:[esi+0x1C8]
        mov byte ptr ss : [esp+0x24], 1
        je public_62d25b6
        push ebp
        call public_6341610
        public_62d25b6 : nop
        push esi
        call public_6391d5a
        add esp, 4
        public_62d25bf : nop
        mov esi, dword ptr ds : [ebx+8]
        cmp esi, ebp
        mov dword ptr ds : [ebx+0xC], ebp
        mov dword ptr ss : [esp+0x14], esi
        je public_62d2665
        lea ecx, ds:[esi+0x149C]
        push ebp
        mov byte ptr ss : [esp+0x28], 6
        call public_6280b40
        lea edi, ds:[esi+0x1364]
        mov dword ptr ss : [esp+0x18], edi
        lea ecx, ds:[edi+0x14]
        push ebp
        mov byte ptr ss : [esp+0x28], 7
        call public_6280b40
        lea ecx, ds:[edi+0xC]
        push ebp
        mov byte ptr ss : [esp+0x28], 5
        call public_6280b40
        lea ecx, ds:[esi+0x134]
        push ebp
        mov byte ptr ss : [esp+0x28], 4
        call public_6280b40
        lea edi, ds:[esi+0x34]
        mov dword ptr ss : [esp+0x18], edi
        lea ecx, ds:[edi+0xE8]
        push ebp
        mov byte ptr ss : [esp+0x28], 9
        call public_6280b40
        lea ecx, ds:[edi+0xDC]
        mov byte ptr ss : [esp+0x24], 8
        call public_62d4c90
        lea ecx, ds:[edi+0xC]
        mov byte ptr ss : [esp+0x24], 3
        call public_6269110
        lea ecx, ds:[esi+8]
        push ebp
        mov byte ptr ss : [esp+0x28], 1
        call public_6280b40
        push esi
        call public_6391d5a
        add esp, 4
        public_62d2665 : nop
        mov dword ptr ds : [ebx+8], ebp
        lea esi, ds:[ebx+0x174]
        mov edi, 0x15
        public_62d2673 : nop
        mov ecx, dword ptr ds : [esi]
        cmp ecx, ebp
        je public_62d2681
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi], ebp
        public_62d2681 : nop
        add esi, 4
        dec edi
        jne public_62d2673
        mov ebp, dword ptr ds : [ebx+0x15C]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea edi, ds:[ebx+0x158]
        mov byte ptr ss : [esp+0x24], 0
        je public_62d26b5
        nop 
        public_62d26a0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        call public_62d4c50
        cmp esi, ebp
        jne public_62d26a0
        public_62d26b5 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov edx, dword ptr ds : [ebx+0xF0]
        cmp edx, eax
        pop edi
        lea ecx, ds:[ebx+0xF0]
        pop esi
        pop ebp
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        pop ebx
        je public_62d26eb
        push eax
        call public_6341610
        public_62d26eb : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x62d2530)
    }
}

#undef public_62d2573
#undef public_62d259b
#undef public_62d25b6
#undef public_62d25bf
#undef public_62d2665
#undef public_62d2673
#undef public_62d2681
#undef public_62d26a0
#undef public_62d26b5
#undef public_62d26eb
