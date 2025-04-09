#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415a80);
CLANG_FORWARD_PROC_SYMBOL(public_417800);
CLANG_FORWARD_PROC_SYMBOL(public_417c50);
CLANG_FORWARD_PROC_SYMBOL(public_417ca0);
CLANG_FORWARD_PROC_SYMBOL(public_417d50);
CLANG_FORWARD_PROC_SYMBOL(public_417e20);
CLANG_FORWARD_PROC_SYMBOL(public_418550);
CLANG_FORWARD_PROC_SYMBOL(public_418bc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8915);

#define public_4178a0 _public_4178a0
#define public_4178f0 _public_4178f0
#define public_41791c _public_41791c
#define public_417935 _public_417935
#define public_417962 _public_417962
#define public_417981 _public_417981
#define public_41799e _public_41799e
#define public_4179b3 _public_4179b3
#define public_417a60 _public_417a60
#define public_417a85 _public_417a85
#define public_417a9a _public_417a9a
#define public_417b0a _public_417b0a
#define public_417b1b _public_417b1b
#define public_417b30 _public_417b30
#define public_417b55 _public_417b55
#define public_417bc4 _public_417bc4
#define public_417bd5 _public_417bd5
#define public_417bea _public_417bea
#define public_417c09 _public_417c09

PROC_DECLARE(0x417800, internal_417800, public_417800);
extern "C" NAKED register_t __cdecl internal_417800()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5b8915 @0x417808*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8915
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x18FC
        mov dword ptr fs : [0], esp
        call public_5b7e90
        mov eax, dword ptr ss : [esp+0x1910]
        mov ecx, dword ptr ss : [esp+0x190C]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        push ecx
        lea edx, ss:[esp+0x1810]
        xor ebx, ebx
        push edx
        mov dword ptr ss : [esp+0x1C], ebx
        call dword ptr ds : [public_5c6068]
        add esp, 0xC
        lea ecx, ss:[esp+0x2A0]
        call dword ptr ds : [public_5c605c]
        push ebx
        lea eax, ss:[esp+0x180C]
        push eax
        lea ecx, ss:[esp+0x2A8]
        mov dword ptr ss : [esp+0x191C], ebx
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_417a9a
        lea ecx, ss:[esp+0x2A0]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_417a9a
        mov edi, dword ptr ds : [public_5c6cf4]
        mov ebp, dword ptr ds : [public_5c6698]
        lea ecx, ds:[ecx]
/*FIXUP public_4178a0 : nop
        push offset public_5c8e8c @0x4178a0*/
  FIXUP public_4178a0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8e8c
        lea ecx, ss:[esp+0x2A4]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_417a85
        lea ecx, ss:[esp+0x2A0]
        mov dword ptr ss : [esp+0x28], ebx
        mov byte ptr ss : [esp+0x2C], bl
        mov dword ptr ss : [esp+0xAC], ebx
        mov byte ptr ss : [esp+0xB0], bl
        mov dword ptr ss : [esp+0x14], 0
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_4179b3
        lea ecx, ds:[ecx]
/*FIXUP public_4178f0 : nop
        push offset public_5c866c @0x4178f0*/
  FIXUP public_4178f0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c866c
        lea ecx, ss:[esp+0x2A4]
        call edi
        test al, al
        lea ecx, ss:[esp+0x2A0]
        je public_417935
        call ebp
        cmp eax, ebx
        jne public_41791c
        mov dword ptr ss : [esp+0x28], ebx
        mov byte ptr ss : [esp+0x2C], bl
        jmp public_41799e
        public_41791c : nop
        push eax
        lea ecx, ss:[esp+0x30]
        push 0x80
        push ecx
        call public_417c50
        add esp, 0xC
        mov dword ptr ss : [esp+0x28], eax
        jmp public_41799e
/*FIXUP public_417935 : nop
        push offset public_5c8bcc @0x417935*/
  FIXUP public_417935 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bcc
        call edi
        test al, al
        lea ecx, ss:[esp+0x2A0]
        je public_417981
        push ebx
        call dword ptr ds : [public_5c6024]
        cmp eax, ebx
        jne public_417962
        mov dword ptr ss : [esp+0xAC], ebx
        mov byte ptr ss : [esp+0xB0], bl
        jmp public_41799e
        public_417962 : nop
        push eax
        lea edx, ss:[esp+0xB4]
        push 0x80
        push edx
        call public_417c50
        add esp, 0xC
        mov dword ptr ss : [esp+0xAC], eax
        jmp public_41799e
/*FIXUP public_417981 : nop
        push offset public_5c8e7c @0x417981*/
  FIXUP public_417981 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8e7c
        call edi
        test al, al
        je public_41799e
        push ebx
        lea ecx, ss:[esp+0x2A4]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x14]
        public_41799e : nop
        lea ecx, ss:[esp+0x2A0]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_4178f0
        public_4179b3 : nop
        lea ecx, ss:[esp+0x130]
        call public_417d50
        push eax
        mov eax, dword ptr ds : [public_61651c]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, offset public_616518
        mov byte ptr ss : [esp+0x1920], 1
        call public_418bc0
        mov dword ptr ss : [esp+0x130], offset public_5c8dec
        lea ecx, ss:[esp+0x130]
        mov byte ptr ss : [esp+0x1914], 2
        call public_417e20
        lea ecx, ss:[esp+0x28C]
        mov byte ptr ss : [esp+0x1914], bl
        call public_418550
        mov edx, dword ptr ds : [public_61651c]
        mov eax, dword ptr ds : [edx+4]
        lea esi, ds:[eax+8]
        lea eax, ss:[esp+0x2C]
        push eax
        mov ecx, esi
        call public_417ca0
        cmp esi, ebx
        je public_417a85
        mov edx, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0xB0]
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x1C], ecx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], edx
        mov byte ptr ss : [esp+0x28], bl
        mov byte ptr ss : [esp+0x2A], bl
        mov byte ptr ss : [esp+0x29], bl
        call public_415a80
        test al, al
        je public_417a60
        inc dword ptr ss : [esp+0x10]
        jmp public_417a85
        public_417a60 : nop
        mov edx, dword ptr ds : [public_5c6d18]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push 0xAE4
/*FIXUP push offset public_5c8bf0 @0x417a70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bf0
        mov eax, 0x100001
/*FIXUP push offset public_5c8e48 @0x417a7a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8e48
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_417a85 : nop
        lea ecx, ss:[esp+0x2A0]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_4178a0
        public_417a9a : nop
        lea eax, ss:[esp+0x16C8]
        mov dword ptr ss : [esp+0x1914], 3
        mov dword ptr ss : [esp+0x18], eax
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea ecx, ss:[esp+0x16D0]
        mov byte ptr ss : [esp+0x191C], 4
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x16D8], 0xFFFFFFFF
        mov ebp, dword ptr ds : [public_5c6efc]
        mov esi, dword ptr ds : [public_5c6ef8]
        je public_417b30
        cmp dword ptr ss : [esp+0x16DC], ebx
        je public_417b1b
        mov eax, dword ptr ss : [esp+0x16E0]
        cmp eax, ebx
        je public_417b0a
        push eax
        call ebp
        mov dword ptr ss : [esp+0x16E0], ebx
        mov dword ptr ss : [esp+0x16E4], ebx
        public_417b0a : nop
        mov eax, dword ptr ss : [esp+0x16DC]
        push eax
        call esi
        mov dword ptr ss : [esp+0x16DC], ebx
        public_417b1b : nop
        mov ecx, dword ptr ss : [esp+0x16D8]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x16D8], 0xFFFFFFFF
        public_417b30 : nop
        mov eax, dword ptr ss : [esp+0x16E0]
        cmp eax, ebx
        mov edi, dword ptr ds : [public_5c71d8]
        je public_417b55
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x16E0], ebx
        mov dword ptr ss : [esp+0x16E4], ebx
        public_417b55 : nop
        push 1
        lea ecx, ss:[esp+0x16CC]
        mov dword ptr ss : [esp+0x16EC], ebx
        mov byte ptr ss : [esp+0x1918], 3
        call dword ptr ds : [public_5c7084]
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x2A8]
        mov dword ptr ss : [esp+0x191C], 5
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x2B0], 0xFFFFFFFF
        je public_417bea
        cmp dword ptr ss : [esp+0x2B4], ebx
        je public_417bd5
        mov eax, dword ptr ss : [esp+0x2B8]
        cmp eax, ebx
        je public_417bc4
        push eax
        call ebp
        mov dword ptr ss : [esp+0x2B8], ebx
        mov dword ptr ss : [esp+0x2BC], ebx
        public_417bc4 : nop
        mov ecx, dword ptr ss : [esp+0x2B4]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x2B4], ebx
        public_417bd5 : nop
        mov edx, dword ptr ss : [esp+0x2B0]
        push edx
        call esi
        mov dword ptr ss : [esp+0x2B0], 0xFFFFFFFF
        public_417bea : nop
        mov eax, dword ptr ss : [esp+0x2B8]
        cmp eax, ebx
        je public_417c09
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x2B8], ebx
        mov dword ptr ss : [esp+0x2BC], ebx
        public_417c09 : nop
        push 1
        lea ecx, ss:[esp+0x2A4]
        mov dword ptr ss : [esp+0x2C4], ebx
        mov dword ptr ss : [esp+0x1918], 0xFFFFFFFF
        call dword ptr ds : [public_5c7084]
        mov ecx, dword ptr ss : [esp+0x190C]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1908
        ret 
        UNREACHABLE_TRAP(0x417800)
    }
}

#undef public_4178a0
#undef public_4178f0
#undef public_41791c
#undef public_417935
#undef public_417962
#undef public_417981
#undef public_41799e
#undef public_4179b3
#undef public_417a60
#undef public_417a85
#undef public_417a9a
#undef public_417b0a
#undef public_417b1b
#undef public_417b30
#undef public_417b55
#undef public_417bc4
#undef public_417bd5
#undef public_417bea
#undef public_417c09
