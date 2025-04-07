#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6ed8ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab4ab);

#define public_6ed8b9d _public_6ed8b9d
#define public_6ed8bc0 _public_6ed8bc0
#define public_6ed8bd8 _public_6ed8bd8
#define public_6ed8c0f _public_6ed8c0f
#define public_6ed8cf3 _public_6ed8cf3
#define public_6ed8cf6 _public_6ed8cf6

PROC_DECLARE(0x6ed8ac0, internal_6ed8ac0, public_6ed8ac0);
extern "C" NAKED register_t __cdecl internal_6ed8ac0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab4ab @0x6ed8ac2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab4ab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x120
        mov eax, dword ptr ss : [esp+0x134]
        mov dl, byte ptr ss : [esp+7]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x13C]
        push ebp
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ss : [esp+0x13C]
        lea ebp, ds:[ebx+0x14]
        push edi
        xor edi, edi
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+0xC], edi
        mov dword ptr ds : [ebx+0x10], edi
        lea esi, ds:[ebx+0xC]
        mov byte ptr ss : [ebp], dl
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x2C], edi
        lea ecx, ss:[esp+0x144]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x140], edi
        mov dword ptr ds : [ebx], offset public_6fb65b4
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6ed8cf3
        push 0x80
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6ed8cf3
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6ed8cf6
        mov dword ptr ds : [ebx+0x28], 0x4A3A
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, edi
        je public_6ed8b9d
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 2
        jae public_6ed8c0f
        public_6ed8b9d : nop
        push 8
        call public_6fa912a
        mov esi, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x14], eax
        mov edi, eax
        mov eax, dword ptr ss : [ebp+8]
        add esp, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_6ed8bd8
        nop 
        lea esp, ss:[esp]
        public_6ed8bc0 : nop
        push esi
        push edi
        call public_6eb6740
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, eax
        jne public_6ed8bc0
        public_6ed8bd8 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+4]
        push edx
        push eax
        mov ecx, ebp
        call public_6ea1490
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        call public_6fa8fe0
        mov esi, dword ptr ss : [esp+0x14]
        lea edx, ds:[esi+8]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], edx
        call public_6fa3db0
        lea eax, ds:[esi+eax*4]
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+4], esi
        xor edi, edi
/*FIXUP public_6ed8c0f : nop
        push offset public_6fb6594 @0x6ed8c0f*/
  FIXUP public_6ed8c0f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6594
        lea ecx, ss:[esp+0x6C]
        push 0x40
        push ecx
        mov dword ptr ss : [esp+0x70], edi
        mov byte ptr ss : [esp+0x74], 0
        call public_6ea9f40
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
        mov dword ptr ss : [esp+0x74], eax
/*FIXUP push offset public_6fb6064 @0x6ed8c31*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea eax, ss:[esp+0x7C]
        push eax
        lea ecx, ss:[esp+0x104]
        push ecx
        call public_6eeaf10
        lea edx, ss:[esp+0x40]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x3C]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x20
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ecx
        mov ecx, ebp
        call public_6f937c0
        mov eax, dword ptr ss : [esp+0x14C]
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        mov dword ptr ss : [esp+0x28], 0
        mov byte ptr ss : [esp+0x2C], 0
        call dword ptr ds : [public_6fb3448]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, 0x40
/*FIXUP push offset public_6fb6064 @0x6ed8ca2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        sub ecx, eax
        push ecx
        lea edx, ss:[esp+eax+0x34]
        push edx
        call public_6ea9f40
        add dword ptr ss : [esp+0x34], eax
        lea eax, ss:[esp+0xC0]
        mov ecx, 0x11
        lea esi, ss:[esp+0x34]
        lea edi, ss:[esp+0xBC]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x18
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f937c0
        jmp public_6ed8cf6
        public_6ed8cf3 : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6ed8cf6 : nop
        mov ecx, dword ptr ss : [esp+0x130]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x12C
        ret 0x10
        UNREACHABLE_TRAP(0x6ed8ac0)
    }
}

#undef public_6ed8b9d
#undef public_6ed8bc0
#undef public_6ed8bd8
#undef public_6ed8c0f
#undef public_6ed8cf3
#undef public_6ed8cf6
