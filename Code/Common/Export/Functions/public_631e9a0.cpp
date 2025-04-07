#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6306020);
CLANG_FORWARD_PROC_SYMBOL(public_630e510);
CLANG_FORWARD_PROC_SYMBOL(public_630f660);
CLANG_FORWARD_PROC_SYMBOL(public_630f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6310070);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_63103c0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_631e9a0);
CLANG_FORWARD_PROC_SYMBOL(public_6321d80);
CLANG_FORWARD_PROC_SYMBOL(public_6322070);
CLANG_FORWARD_PROC_SYMBOL(public_6322280);
CLANG_FORWARD_PROC_SYMBOL(public_63225b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_6396cb4);

#define public_631ea10 _public_631ea10
#define public_631ea57 _public_631ea57
#define public_631ea6b _public_631ea6b
#define public_631eb66 _public_631eb66
#define public_631eb69 _public_631eb69
#define public_631eba1 _public_631eba1
#define public_631eba4 _public_631eba4
#define public_631ebb8 _public_631ebb8
#define public_631ebbd _public_631ebbd
#define public_631ec2e _public_631ec2e
#define public_631ec3f _public_631ec3f
#define public_631ec54 _public_631ec54
#define public_631ec79 _public_631ec79
#define public_631ece7 _public_631ece7
#define public_631ecf8 _public_631ecf8
#define public_631ed0d _public_631ed0d
#define public_631ed2d _public_631ed2d

PROC_DECLARE(0x631e9a0, internal_631e9a0, public_631e9a0);
extern "C" NAKED register_t __cdecl internal_631e9a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6396cb4 @0x631e9a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396cb4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x15F8
        mov dword ptr fs : [0], esp
        call public_6391dc0
        push ebx
        push esi
        xor ebx, ebx
        push edi
        lea ecx, ss:[esp+0x9C]
        mov byte ptr ss : [esp+0xE], bl
        call public_630f660
        mov eax, dword ptr ss : [esp+0x1614]
        push ebx
        push eax
        lea ecx, ss:[esp+0xA4]
        mov dword ptr ss : [esp+0x1614], ebx
        call public_630f9b0
        test al, al
        je public_631ebbd
        lea ecx, ss:[esp+0x9C]
        call public_6310070
        test al, al
        je public_631ebb8
        lea esp, ss:[esp]
/*FIXUP public_631ea10 : nop
        push offset public_63a3d00 @0x631ea10*/
  FIXUP public_631ea10 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3d00
        lea ecx, ss:[esp+0xA0]
        call public_63103c0
        test al, al
        je public_631eba4
        lea ecx, ss:[esp+0x9C]
        mov dword ptr ss : [esp+0x10], ebx
        mov byte ptr ss : [esp+0x14], bl
        call public_6310170
        lea ecx, ss:[esp+0x9C]
        call public_6310b70
        cmp eax, ebx
        jne public_631ea57
        mov dword ptr ss : [esp+0x10], ebx
        mov byte ptr ss : [esp+0x14], bl
        jmp public_631ea6b
        public_631ea57 : nop
        push eax
        lea ecx, ss:[esp+0x18]
        push 0x10
        push ecx
        call public_6306020
        add esp, 0xC
        mov dword ptr ss : [esp+0x10], eax
        public_631ea6b : nop
        lea edx, ss:[esp+0x14]
        push edx
        call public_630e510
        add esp, 4
        xor esi, esi
        mov si, ax
        lea eax, ss:[esp+0xE]
        push eax
        push ebx
        lea ecx, ss:[esp+0x17]
        push ecx
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x3C], ebx
        mov byte ptr ss : [esp+0x40], bl
        call public_6322280
        lea edx, ss:[esp+0x30]
        push edx
        lea ecx, ss:[esp+0x6C]
        mov byte ptr ss : [esp+0x1610], 1
        mov dword ptr ss : [esp+0x68], esi
        call public_6322070
        lea eax, ss:[esp+0x64]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, offset public_64018ec
        mov byte ptr ss : [esp+0x1614], 2
        call public_63225b0
        lea ecx, ss:[esp+0x88]
        mov byte ptr ss : [esp+0x160C], 1
        call public_6321d80
        lea ecx, ss:[esp+0x50]
        mov byte ptr ss : [esp+0x160C], bl
        call public_6321d80
        mov esi, dword ptr ss : [esp+0x24]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ds:[esi+0x14]
        push 0x10
        push eax
        call public_6306020
        add esp, 0xC
        lea ecx, ss:[esp+0x9C]
        mov dword ptr ds : [esi+0x10], eax
        call public_6310170
        push ebx
        lea ecx, ss:[esp+0xA0]
        call public_63108f0
        call public_6391dae
        lea ecx, ss:[esp+0x9C]
        mov dword ptr ds : [esi+0x24], eax
        call public_6310170
/*FIXUP push offset public_6399f04 @0x631eb3a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399f04
        lea ecx, ss:[esp+0xA0]
        call public_6310410
        test al, al
        je public_631eb66
        push ebx
        lea ecx, ss:[esp+0xA0]
        call public_63108f0
        call public_6391dae
        mov dword ptr ds : [esi+0x28], eax
        jmp public_631eb69
        public_631eb66 : nop
        mov dword ptr ds : [esi+0x28], ebx
        public_631eb69 : nop
        lea ecx, ss:[esp+0x9C]
        call public_6310170
/*FIXUP push offset public_63a3cf0 @0x631eb75*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3cf0
        lea ecx, ss:[esp+0xA0]
        call public_6310410
        test al, al
        je public_631eba1
        push ebx
        lea ecx, ss:[esp+0xA0]
        call public_63108f0
        call public_6391dae
        mov dword ptr ds : [esi+0x2C], eax
        jmp public_631eba4
        public_631eba1 : nop
        mov dword ptr ds : [esi+0x2C], ebx
        public_631eba4 : nop
        lea ecx, ss:[esp+0x9C]
        call public_6310070
        test al, al
        jne public_631ea10
        public_631ebb8 : nop
        mov byte ptr ss : [esp+0xE], 1
        public_631ebbd : nop
        push ebp
        lea ecx, ss:[esp+0x14C8]
        mov dword ptr ss : [esp+0x1610], 3
        mov dword ptr ss : [esp+0x30], ecx
        mov edx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x14D0]
        mov byte ptr ss : [esp+0x1618], 4
        call dword ptr ds : [public_6399198]
        cmp dword ptr ss : [esp+0x14D8], 0xFFFFFFFF
        mov ebp, dword ptr ds : [public_6399138]
        mov esi, dword ptr ds : [public_639913c]
        je public_631ec54
        cmp dword ptr ss : [esp+0x14DC], ebx
        je public_631ec3f
        mov eax, dword ptr ss : [esp+0x14E0]
        cmp eax, ebx
        je public_631ec2e
        push eax
        call ebp
        mov dword ptr ss : [esp+0x14E0], ebx
        mov dword ptr ss : [esp+0x14E4], ebx
        public_631ec2e : nop
        mov ecx, dword ptr ss : [esp+0x14DC]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x14DC], ebx
        public_631ec3f : nop
        mov edx, dword ptr ss : [esp+0x14D8]
        push edx
        call esi
        mov dword ptr ss : [esp+0x14D8], 0xFFFFFFFF
        public_631ec54 : nop
        mov eax, dword ptr ss : [esp+0x14E0]
        cmp eax, ebx
        mov edi, dword ptr ds : [public_639932c]
        je public_631ec79
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x14E0], ebx
        mov dword ptr ss : [esp+0x14E4], ebx
        public_631ec79 : nop
        push 1
        lea ecx, ss:[esp+0x14CC]
        mov dword ptr ss : [esp+0x14EC], ebx
        mov byte ptr ss : [esp+0x1614], 3
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ds : [public_63991c0]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea ecx, ss:[esp+0xA8]
        mov dword ptr ss : [esp+0x1618], 5
        call dword ptr ds : [public_6399198]
        cmp dword ptr ss : [esp+0xB0], 0xFFFFFFFF
        je public_631ed0d
        cmp dword ptr ss : [esp+0xB4], ebx
        je public_631ecf8
        mov eax, dword ptr ss : [esp+0xB8]
        cmp eax, ebx
        je public_631ece7
        push eax
        call ebp
        mov dword ptr ss : [esp+0xB8], ebx
        mov dword ptr ss : [esp+0xBC], ebx
        public_631ece7 : nop
        mov edx, dword ptr ss : [esp+0xB4]
        push edx
        call esi
        mov dword ptr ss : [esp+0xB4], ebx
        public_631ecf8 : nop
        mov eax, dword ptr ss : [esp+0xB0]
        push eax
        call esi
        mov dword ptr ss : [esp+0xB0], 0xFFFFFFFF
        public_631ed0d : nop
        mov eax, dword ptr ss : [esp+0xB8]
        cmp eax, ebx
        pop ebp
        je public_631ed2d
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0xB4], ebx
        mov dword ptr ss : [esp+0xB8], ebx
        public_631ed2d : nop
        push 1
        lea ecx, ss:[esp+0xA0]
        mov dword ptr ss : [esp+0xC0], ebx
        mov dword ptr ss : [esp+0x1610], 0xFFFFFFFF
        call dword ptr ds : [public_63991b8]
        mov ecx, dword ptr ss : [esp+0x1604]
        mov al, byte ptr ss : [esp+0xE]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1604
        ret 
        UNREACHABLE_TRAP(0x631e9a0)
    }
}

#undef public_631ea10
#undef public_631ea57
#undef public_631ea6b
#undef public_631eb66
#undef public_631eb69
#undef public_631eba1
#undef public_631eba4
#undef public_631ebb8
#undef public_631ebbd
#undef public_631ec2e
#undef public_631ec3f
#undef public_631ec54
#undef public_631ec79
#undef public_631ece7
#undef public_631ecf8
#undef public_631ed0d
#undef public_631ed2d
