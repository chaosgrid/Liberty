#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f12e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f202f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);

#define public_6f12e40 _public_6f12e40
#define public_6f12eb9 _public_6f12eb9
#define public_6f12ecf _public_6f12ecf
#define public_6f12ef0 _public_6f12ef0
#define public_6f12efb _public_6f12efb
#define public_6f12efd _public_6f12efd
#define public_6f12f33 _public_6f12f33
#define public_6f12f42 _public_6f12f42
#define public_6f12f4b _public_6f12f4b
#define public_6f12f7d _public_6f12f7d
#define public_6f12f95 _public_6f12f95
#define public_6f12fb7 _public_6f12fb7
#define public_6f12fd6 _public_6f12fd6
#define public_6f12fe1 _public_6f12fe1
#define public_6f12fe3 _public_6f12fe3
#define public_6f13010 _public_6f13010
#define public_6f1301b _public_6f1301b
#define public_6f1301d _public_6f1301d
#define public_6f1302d _public_6f1302d
#define public_6f1303c _public_6f1303c
#define public_6f13045 _public_6f13045
#define public_6f1308a _public_6f1308a
#define public_6f1309d _public_6f1309d

PROC_DECLARE(0x6f12e10, internal_6f12e10, public_6f12e10);
extern "C" NAKED register_t __cdecl internal_6f12e10()
{
    __asm
    {
        sub esp, 0xA4
        push ebp
        mov ebp, dword ptr ss : [esp+0xAC]
        mov dword ptr ss : [esp+8], ecx
        mov ecx, ebp
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f1309d
        push ebx
        mov ebx, dword ptr ds : [public_6fb3020]
        push esi
        push edi
        nop 
        lea esp, ss:[esp]
/*FIXUP public_6f12e40 : nop
        push offset public_6fb8abc @0x6f12e40*/
  FIXUP public_6f12e40 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8abc
        mov ecx, ebp
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6f1308a
        mov edi, dword ptr ds : [public_6fb3048]
        xor esi, esi
        or eax, 0xFFFFFFFF
/*FIXUP push offset public_6fb8668 @0x6f12e60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8668
        push esi
        mov ecx, ebp
        mov dword ptr ss : [esp+0x48], esi
        mov byte ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x7C], esi
        mov byte ptr ss : [esp+0x80], 0
        mov dword ptr ss : [esp+0xB0], eax
        mov dword ptr ss : [esp+0xB4], eax
        mov dword ptr ss : [esp+0xB8], esi
        call edi
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        mov ecx, ebp
        je public_6f12ecf
        push esi
        call edi
        cmp eax, esi
        jne public_6f12eb9
        mov dword ptr ss : [esp+0x40], esi
        mov byte ptr ss : [esp+0x44], 0
        jmp public_6f12f4b
        public_6f12eb9 : nop
        push eax
        lea eax, ss:[esp+0x48]
        push 0x30
        push eax
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [esp+0x40], eax
        jmp public_6f12f4b
        public_6f12ecf : nop
        push 2
        call ebx
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx+0x17C]
        lea esi, ds:[ecx+0x174]
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, edx
        mov dword ptr ss : [esp+0x18], eax
        je public_6f12efb
        mov edi, edi
        public_6f12ef0 : nop
        cmp dword ptr ds : [ecx], eax
        je public_6f12efd
        add ecx, 4
        cmp ecx, edx
        jne public_6f12ef0
        public_6f12efb : nop
        mov ecx, edx
        public_6f12efd : nop
        cmp ecx, edx
        mov dword ptr ss : [esp+0x20], ecx
        jne public_6f12f33
        lea eax, ss:[esp+0x18]
        push eax
        push edx
        mov ecx, esi
        call public_6eb5770
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x17], 1
        call public_6eb5f30
        lea edx, ss:[esp+0x13]
        mov dword ptr ss : [esp+0x2C], eax
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        jmp public_6f12f42
        public_6f12f33 : nop
        lea ecx, ss:[esp+0x13]
        push ecx
        lea edx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x17], 0
        push edx
        public_6f12f42 : nop
        lea ecx, ss:[esp+0x38]
        call public_6fa6e80
/*FIXUP public_6f12f4b : nop
        push offset public_6fb8668 @0x6f12f4b*/
  FIXUP public_6f12f4b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8668
        push 1
        mov ecx, ebp
        call edi
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        mov ecx, ebp
        je public_6f12fb7
        push 1
        call edi
        mov esi, eax
        test esi, esi
        jne public_6f12f7d
        mov dword ptr ss : [esp+0x74], eax
        mov byte ptr ss : [esp+0x78], al
        jmp public_6f13045
        public_6f12f7d : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6f12f95
        mov eax, 0x2F
        public_6f12f95 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x78]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x78], 0
        mov dword ptr ss : [esp+0x74], eax
        jmp public_6f13045
        public_6f12fb7 : nop
        push 3
        call ebx
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx+0x17C]
        lea esi, ds:[ecx+0x174]
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, edx
        mov dword ptr ss : [esp+0x1C], eax
        je public_6f12fe1
        public_6f12fd6 : nop
        cmp dword ptr ds : [ecx], eax
        je public_6f12fe3
        add ecx, 4
        cmp ecx, edx
        jne public_6f12fd6
        public_6f12fe1 : nop
        mov ecx, edx
        public_6f12fe3 : nop
        cmp ecx, edx
        mov dword ptr ss : [esp+0x24], ecx
        jne public_6f1302d
        lea eax, ss:[esp+0x1C]
        push eax
        push edx
        mov ecx, esi
        call public_6eb5770
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        mov byte ptr ss : [esp+0x13], 1
        je public_6f1301b
        mov ecx, dword ptr ss : [esp+0x1C]
        nop 
        lea esp, ss:[esp]
        public_6f13010 : nop
        cmp dword ptr ds : [eax], ecx
        je public_6f1301d
        add eax, 4
        cmp eax, esi
        jne public_6f13010
        public_6f1301b : nop
        mov eax, esi
        public_6f1301d : nop
        lea ecx, ss:[esp+0x13]
        push ecx
        lea edx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x2C], eax
        push edx
        jmp public_6f1303c
        public_6f1302d : nop
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x17], 0
        push ecx
        public_6f1303c : nop
        lea ecx, ss:[esp+0x40]
        call public_6fa6e80
        public_6f13045 : nop
        push 2
        mov ecx, ebp
        call ebx
        push 3
        mov ecx, ebp
        mov dword ptr ss : [esp+0xAC], eax
        call ebx
        push 4
        mov ecx, ebp
        mov dword ptr ss : [esp+0xB0], eax
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0xB0]
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x40]
        lea ecx, ds:[edx+0x164]
        mov edx, dword ptr ds : [ecx+8]
        push eax
        push 1
        push edx
        call public_6f202f0
        public_6f1308a : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f12e40
        pop edi
        pop esi
        pop ebx
        public_6f1309d : nop
        pop ebp
        add esp, 0xA4
        ret 4
        UNREACHABLE_TRAP(0x6f12e10)
    }
}

#undef public_6f12e40
#undef public_6f12eb9
#undef public_6f12ecf
#undef public_6f12ef0
#undef public_6f12efb
#undef public_6f12efd
#undef public_6f12f33
#undef public_6f12f42
#undef public_6f12f4b
#undef public_6f12f7d
#undef public_6f12f95
#undef public_6f12fb7
#undef public_6f12fd6
#undef public_6f12fe1
#undef public_6f12fe3
#undef public_6f13010
#undef public_6f1301b
#undef public_6f1301d
#undef public_6f1302d
#undef public_6f1303c
#undef public_6f13045
#undef public_6f1308a
#undef public_6f1309d
