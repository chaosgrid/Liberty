#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b7180);
CLANG_FORWARD_PROC_SYMBOL(public_62b95d0);
CLANG_FORWARD_PROC_SYMBOL(public_62ff600);
CLANG_FORWARD_PROC_SYMBOL(public_63018c0);
CLANG_FORWARD_PROC_SYMBOL(public_6301b90);
CLANG_FORWARD_PROC_SYMBOL(public_6301ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6301d20);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_632ca20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);
CLANG_FORWARD_JUMP_SYMBOL(public_6395d6d);

#define public_62ff6d2 _public_62ff6d2
#define public_62ff6f6 _public_62ff6f6
#define public_62ff720 _public_62ff720
#define public_62ff744 _public_62ff744

PROC_DECLARE(0x62ff600, internal_62ff600, public_62ff600);
extern "C" NAKED register_t __cdecl internal_62ff600()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395d6d @0x62ff602*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395d6d
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
        mov dword ptr ss : [esp+0x14], esi
        mov eax, dword ptr ds : [esi+0x98]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x94]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x34], 5
        call public_6301b90
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ds : [edi+8]
        xor ebx, ebx
        push eax
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x10], ebx
        call public_6391d5a
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x84]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea edi, ds:[esi+0x80]
        push eax
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x34], 4
        call public_63018c0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x10], ebx
        call public_6391d5a
        add esp, 8
/*FIXUP push offset _public_62b7180 @0x62ff6a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62b7180
        push 4
        push 0x14
        lea edx, ds:[esi+0x30]
        push edx
        mov dword ptr ds : [edi+8], ebx
        mov byte ptr ss : [esp+0x38], 3
        call public_6391dfc
        mov ebp, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebp
        lea edi, ds:[esi+0x24]
        mov byte ptr ss : [esp+0x28], 2
        mov dword ptr ss : [esp+0x10], eax
        je public_62ff6f6
        public_62ff6d2 : nop
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_632ca20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_6301d20
        cmp dword ptr ss : [esp+0x10], ebp
        jne public_62ff6d2
        public_62ff6f6 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov ebp, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ss : [ebp]
        lea edi, ds:[esi+0x18]
        add esp, 4
        cmp eax, ebp
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x10], eax
        je public_62ff744
        mov edi, edi
        public_62ff720 : nop
        push ebx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_632ca20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        call public_6301ca0
        cmp dword ptr ss : [esp+0x10], ebp
        jne public_62ff720
        public_62ff744 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        lea edi, ds:[esi+0xC]
        push eax
        push ecx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x34], bl
        call public_62b95d0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        add esp, 4
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov edi, dword ptr ds : [esi+4]
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call public_632c410
        mov edx, dword ptr ds : [eax]
        push edi
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call public_62b95d0
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x62ff600)
    }
}

#undef public_62ff6d2
#undef public_62ff6f6
#undef public_62ff720
#undef public_62ff744
