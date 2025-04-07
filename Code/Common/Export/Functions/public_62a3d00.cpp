#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62728a0);
CLANG_FORWARD_PROC_SYMBOL(public_62a3560);
CLANG_FORWARD_PROC_SYMBOL(public_62a3d00);
CLANG_FORWARD_PROC_SYMBOL(public_62a4920);
CLANG_FORWARD_PROC_SYMBOL(public_62a5600);
CLANG_FORWARD_PROC_SYMBOL(public_62a6820);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_62a7100);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_632ca20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6393d89);

#define public_62a3d43 _public_62a3d43
#define public_62a3d47 _public_62a3d47
#define public_62a3da5 _public_62a3da5
#define public_62a3de0 _public_62a3de0
#define public_62a3dee _public_62a3dee
#define public_62a3e00 _public_62a3e00
#define public_62a3e15 _public_62a3e15
#define public_62a3e30 _public_62a3e30
#define public_62a3e54 _public_62a3e54

PROC_DECLARE(0x62a3d00, internal_62a3d00, public_62a3d00);
extern "C" NAKED register_t __cdecl internal_62a3d00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393d89 @0x62a3d02*/
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
        lea edi, ds:[ecx+4]
        mov dword ptr ss : [esp+0x18], edi
        mov ecx, dword ptr ds : [edi+0xC]
        xor ebp, ebp
        mov dword ptr ds : [edi+4], ebp
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x30], ebp
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_62a3dee
        jmp public_62a3d47
        public_62a3d43 : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_62a3d47 : nop
        mov esi, dword ptr ds : [eax+8]
        mov ebx, dword ptr ds : [esi+0x10]
        dec ebx
        mov edx, ebx
        cmp edx, ebp
        mov dword ptr ds : [esi+0x10], ebx
        ja public_62a3de0
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
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_62a3da5
        push 1
        call public_62a4920
        public_62a3da5 : nop
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
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x1C]
        add esp, 4
        xor ebp, ebp
        public_62a3de0 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jne public_62a3d43
        public_62a3dee : nop
        mov ebx, dword ptr ds : [edi+0xC]
        mov esi, dword ptr ds : [ebx]
        add edi, 8
        cmp esi, ebx
        je public_62a3e15
        lea ebx, ds:[ebx]
        public_62a3e00 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, edi
        call public_6271cc0
        cmp esi, ebx
        jne public_62a3e00
        public_62a3e15 : nop
        mov esi, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], eax
        je public_62a3e54
        lea ebx, ds:[ebx]
        public_62a3e30 : nop
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_632ca20
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        call public_6271cc0
        cmp dword ptr ss : [esp+0x10], esi
        jne public_62a3e30
        public_62a3e54 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
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
        UNREACHABLE_TRAP(0x62a3d00)
    }
}

#undef public_62a3d43
#undef public_62a3d47
#undef public_62a3da5
#undef public_62a3de0
#undef public_62a3dee
#undef public_62a3e00
#undef public_62a3e15
#undef public_62a3e30
#undef public_62a3e54
