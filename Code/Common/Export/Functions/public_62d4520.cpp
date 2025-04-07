#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6280b40);
CLANG_FORWARD_PROC_SYMBOL(public_62d4520);
CLANG_FORWARD_PROC_SYMBOL(public_62d4750);
CLANG_FORWARD_PROC_SYMBOL(public_62d4d60);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6395170);

#define public_62d45b9 _public_62d45b9
#define public_62d45dd _public_62d45dd
#define public_62d45df _public_62d45df
#define public_62d45ef _public_62d45ef
#define public_62d45ff _public_62d45ff
#define public_62d4630 _public_62d4630
#define public_62d4671 _public_62d4671
#define public_62d468b _public_62d468b
#define public_62d46b4 _public_62d46b4
#define public_62d46c7 _public_62d46c7
#define public_62d46cc _public_62d46cc

PROC_DECLARE(0x62d4520, internal_62d4520, public_62d4520);
extern "C" NAKED register_t __cdecl internal_62d4520()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_6399408]
        push 0xFFFFFFFF
/*FIXUP push public_6395170 @0x62d4532*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395170
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x60
        fnstsw ax
        push ebx
        test ah, 0x41
        push ebp
        push esi
        push edi
        mov ebx, ecx
        jne public_62d468b
        xor ebp, ebp
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x1C], ebp
        push ebp
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x7C], ebp
        call public_6280b40
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x78], 1
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x24], ebp
        push ebp
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x7C], 2
        call public_6280b40
        push ebp
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x7C], 3
        call public_6280b40
        cmp dword ptr ss : [esp+0x20], ebp
        je public_62d45b9
        push ebp
        lea ecx, ss:[esp+0x24]
        call public_6341610
        public_62d45b9 : nop
        mov dword ptr ss : [esp+0x2C], 0
        mov eax, dword ptr ss : [esp+0x80]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x78], 4
        mov dword ptr ss : [esp+0x14], ebp
        je public_62d45dd
        add eax, 8
        jmp public_62d45df
        public_62d45dd : nop
        xor eax, eax
        public_62d45df : nop
        cmp eax, dword ptr ss : [esp+0x18]
        je public_62d45ef
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_6341610
        public_62d45ef : nop
        cmp dword ptr ss : [esp+0x20], ebp
        je public_62d45ff
        push ebp
        lea ecx, ss:[esp+0x24]
        call public_6341610
        public_62d45ff : nop
        mov edx, dword ptr ss : [esp+0x84]
        mov eax, dword ptr ss : [esp+0x88]
        mov esi, dword ptr ds : [ebx+0x15C]
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x2C], eax
        mov edi, dword ptr ds : [esi+4]
        push 0x24
        call public_6391d9c
        add esp, 4
        cmp edi, ebp
        mov dword ptr ds : [eax], esi
        jne public_62d4630
        mov edi, eax
        public_62d4630 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x14]
        push ecx
        add eax, 8
        push eax
        call public_62d4d60
        mov ecx, dword ptr ds : [ebx+0x160]
        add esp, 8
        inc ecx
        mov dword ptr ds : [ebx+0x160], ecx
        cmp dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x78], 5
        je public_62d4671
        push ebp
        lea ecx, ss:[esp+0x24]
        call public_6341610
        public_62d4671 : nop
        cmp dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x78], 0xFFFFFFFF
        je public_62d46cc
        push ebp
        lea ecx, ss:[esp+0x1C]
        call public_6341610
        jmp public_62d46cc
        public_62d468b : nop
        mov ecx, dword ptr ss : [esp+0x80]
        test ecx, ecx
        je public_62d46cc
        mov edx, dword ptr ds : [ecx]
        push 0x10
        lea eax, ss:[esp+0x34]
        push eax
        call dword ptr ds : [edx+0x14C]
        mov edi, eax
        xor esi, esi
        test edi, edi
        jle public_62d46cc
        mov ebp, dword ptr ss : [esp+0x84]
        public_62d46b4 : nop
        mov eax, dword ptr ss : [esp+esi*4+0x30]
        test eax, eax
        je public_62d46c7
        push 0
        push ebp
        push eax
        mov ecx, ebx
        call public_62d4750
        public_62d46c7 : nop
        inc esi
        cmp esi, edi
        jl public_62d46b4
        public_62d46cc : nop
        mov ecx, dword ptr ss : [esp+0x70]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x6C
        ret 0xC
        UNREACHABLE_TRAP(0x62d4520)
    }
}

#undef public_62d45b9
#undef public_62d45dd
#undef public_62d45df
#undef public_62d45ef
#undef public_62d45ff
#undef public_62d4630
#undef public_62d4671
#undef public_62d468b
#undef public_62d46b4
#undef public_62d46c7
#undef public_62d46cc
