#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62728a0);
CLANG_FORWARD_PROC_SYMBOL(public_62a3560);
CLANG_FORWARD_PROC_SYMBOL(public_62a42b0);
CLANG_FORWARD_PROC_SYMBOL(public_62a5600);
CLANG_FORWARD_PROC_SYMBOL(public_62a6820);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_62a7100);
CLANG_FORWARD_PROC_SYMBOL(public_62bbd70);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6393d89);

#define public_62a42f0 _public_62a42f0
#define public_62a42f4 _public_62a42f4
#define public_62a435b _public_62a435b
#define public_62a4396 _public_62a4396
#define public_62a43a4 _public_62a43a4
#define public_62a43b0 _public_62a43b0
#define public_62a43c5 _public_62a43c5
#define public_62a43d6 _public_62a43d6
#define public_62a43eb _public_62a43eb

PROC_DECLARE(0x62a42b0, internal_62a42b0, public_62a42b0);
extern "C" NAKED register_t __cdecl internal_62a42b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393d89 @0x62a42b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393d89
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x18], ecx
        mov edx, dword ptr ds : [ecx+0xC]
        xor ebp, ebp
        mov dword ptr ds : [ecx+4], ebp
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        mov dword ptr ss : [esp+0x30], ebp
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x10], eax
        je public_62a43a4
        jmp public_62a42f4
        public_62a42f0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_62a42f4 : nop
        mov esi, dword ptr ds : [eax+8]
        mov ebx, dword ptr ds : [esi+0x10]
        dec ebx
        mov edi, ebx
        cmp edi, ebp
        mov dword ptr ds : [esi+0x10], ebx
        ja public_62a4396
        mov dword ptr ss : [esp+0x1C], esi
        lea ebp, ds:[esi+0x14]
        mov ecx, ebp
        mov byte ptr ss : [esp+0x30], 3
        call public_62a7100
        mov ebx, dword ptr ds : [esi+0x38]
        lea edi, ds:[esi+0x34]
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call public_632c410
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, edi
        call public_62728a0
        mov ecx, esi
        call public_62a5600
        mov ebx, dword ptr ds : [esi+0x30]
        test ebx, ebx
        je public_62a435b
        mov ecx, ebx
        call public_62bbd70
        push ebx
        call public_6391d5a
        add esp, 4
        public_62a435b : nop
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 2
        call public_62a68e0
        mov ecx, ebp
        mov byte ptr ss : [esp+0x30], 1
        call public_62a6820
        mov ecx, esi
        mov byte ptr ss : [esp+0x30], 0
        call public_62a3560
        push esi
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        xor ebp, ebp
        public_62a4396 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        mov dword ptr ss : [esp+0x10], eax
        jne public_62a42f0
        public_62a43a4 : nop
        mov ebx, dword ptr ds : [ecx+0xC]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea edi, ds:[ecx+8]
        je public_62a43c5
        public_62a43b0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, edi
        call public_6271cc0
        cmp esi, ebx
        jne public_62a43b0
        public_62a43c5 : nop
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        je public_62a43eb
        public_62a43d6 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6271cc0
        cmp esi, ebx
        jne public_62a43d6
        public_62a43eb : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 4
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x62a42b0)
    }
}

#undef public_62a42f0
#undef public_62a42f4
#undef public_62a435b
#undef public_62a4396
#undef public_62a43a4
#undef public_62a43b0
#undef public_62a43c5
#undef public_62a43d6
#undef public_62a43eb
