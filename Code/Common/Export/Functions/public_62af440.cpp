#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62728a0);
CLANG_FORWARD_PROC_SYMBOL(public_6285350);
CLANG_FORWARD_PROC_SYMBOL(public_628b610);
CLANG_FORWARD_PROC_SYMBOL(public_62ae690);
CLANG_FORWARD_PROC_SYMBOL(public_62af440);
CLANG_FORWARD_PROC_SYMBOL(public_62af830);
CLANG_FORWARD_PROC_SYMBOL(public_62af910);
CLANG_FORWARD_PROC_SYMBOL(public_62af980);
CLANG_FORWARD_PROC_SYMBOL(public_62afa20);
CLANG_FORWARD_PROC_SYMBOL(public_62ed730);
CLANG_FORWARD_PROC_SYMBOL(public_62f0d50);
CLANG_FORWARD_PROC_SYMBOL(public_632ca20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6394364);

#define public_62af490 _public_62af490
#define public_62af4b1 _public_62af4b1
#define public_62af4be _public_62af4be
#define public_62af4d4 _public_62af4d4
#define public_62af4e0 _public_62af4e0
#define public_62af4f3 _public_62af4f3
#define public_62af500 _public_62af500
#define public_62af515 _public_62af515
#define public_62af533 _public_62af533
#define public_62af550 _public_62af550
#define public_62af574 _public_62af574
#define public_62af59f _public_62af59f

PROC_DECLARE(0x62af440, internal_62af440, public_62af440);
extern "C" NAKED register_t __cdecl internal_62af440()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394364 @0x62af442*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394364
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_639b66c
        mov eax, dword ptr ds : [esi+0x4C]
        push eax
        mov dword ptr ss : [esp+0x2C], 3
        call public_62ae690
        mov edi, eax
        xor ebp, ebp
        add esp, 4
        cmp edi, ebp
        je public_62af4be
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0xC], eax
        je public_62af4be
        public_62af490 : nop
        cmp dword ptr ds : [eax+8], esi
        je public_62af4b1
        push ebp
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_632ca20
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, ecx
        jne public_62af490
        jmp public_62af4be
        public_62af4b1 : nop
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        call public_62af830
        public_62af4be : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0xFFFFFFFF
        je public_62af4d4
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x60]
        public_62af4d4 : nop
        mov eax, dword ptr ds : [esi+0x90]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_62af4f3
        public_62af4e0 : nop
        mov ecx, dword ptr ds : [edi+8]
        push esi
        call public_62ed730
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+0x90]
        jne public_62af4e0
        public_62af4f3 : nop
        mov ecx, dword ptr ds : [esi+0x7C]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_62af515
        lea esp, ss:[esp]
        public_62af500 : nop
        mov eax, dword ptr ds : [eax+8]
        push eax
        call public_628b610
        mov ecx, dword ptr ds : [esi+0x7C]
        mov eax, dword ptr ds : [ecx]
        add esp, 4
        cmp eax, ecx
        jne public_62af500
        public_62af515 : nop
        push esi
        call public_6285350
        mov ecx, dword ptr ds : [esi+0x88]
        add esp, 4
        cmp ecx, ebp
        je public_62af533
        call public_62f0d50
        mov dword ptr ds : [esi+0x88], ebp
        public_62af533 : nop
        lea edi, ds:[esi+0x8C]
        push ebx
        mov dword ptr ss : [esp+0x18], edi
        mov ebx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x2C], 4
        mov dword ptr ss : [esp+0x10], eax
        je public_62af574
        public_62af550 : nop
        push ebp
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_632ca20
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        call public_62af910
        cmp dword ptr ss : [esp+0x10], ebx
        jne public_62af550
        public_62af574 : nop
        mov eax, dword ptr ds : [edi+4]
        push 1
        push eax
        mov ecx, edi
        call public_62afa20
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], ebp
        mov eax, dword ptr ds : [public_63fc438]
        dec eax
        mov byte ptr ss : [esp+0x2C], 2
        pop ebx
        mov dword ptr ds : [public_63fc438], eax
        jne public_62af59f
        call public_62af980
        public_62af59f : nop
        mov eax, dword ptr ds : [esi+0x7C]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x78]
        push eax
        push ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x34], 1
        call public_62728a0
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_6391d5a
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], ebp
        mov eax, dword ptr ds : [esi+0x68]
        push eax
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 8
        mov dword ptr ds : [esi+0x68], ebp
        mov dword ptr ds : [esi+0x6C], ebp
        mov dword ptr ds : [esi+0x70], ebp
        pop edi
        mov dword ptr ds : [esi], offset public_639b5bc
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x62af440)
    }
}

#undef public_62af490
#undef public_62af4b1
#undef public_62af4be
#undef public_62af4d4
#undef public_62af4e0
#undef public_62af4f3
#undef public_62af500
#undef public_62af515
#undef public_62af533
#undef public_62af550
#undef public_62af574
#undef public_62af59f
