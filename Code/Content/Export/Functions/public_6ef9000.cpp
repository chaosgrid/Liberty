#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3950);
CLANG_FORWARD_PROC_SYMBOL(public_6ef39a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6640);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6b50);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9000);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9e10);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9e50);
CLANG_FORWARD_PROC_SYMBOL(public_6efa050);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f78ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac60e);

#define public_6ef90d4 _public_6ef90d4
#define public_6ef90f6 _public_6ef90f6
#define public_6ef9165 _public_6ef9165
#define public_6ef9175 _public_6ef9175
#define public_6ef91ae _public_6ef91ae
#define public_6ef9280 _public_6ef9280
#define public_6ef9286 _public_6ef9286
#define public_6ef92a0 _public_6ef92a0
#define public_6ef92f0 _public_6ef92f0
#define public_6ef9318 _public_6ef9318
#define public_6ef9337 _public_6ef9337
#define public_6ef935a _public_6ef935a
#define public_6ef9377 _public_6ef9377
#define public_6ef93af _public_6ef93af

PROC_DECLARE(0x6ef9000, internal_6ef9000, public_6ef9000);
extern "C" NAKED register_t __cdecl internal_6ef9000()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fac60e @0x6ef9008*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac60e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        sub esp, 0xCCC
        push ebx
        mov ebx, dword ptr ds : [public_6fb3014]
        push esi
        mov esi, dword ptr ss : [esp+0xCE4]
        push edi
        mov edi, ecx
/*FIXUP push offset public_6fb7acc @0x6ef9031*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7acc
        mov ecx, esi
        mov dword ptr ds : [edi+0x40], eax
        call ebx
        test al, al
        mov ecx, esi
        je public_6ef92a0
        push ebp
        push 0
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        push 1
        mov ecx, esi
        mov ebp, eax
        call dword ptr ds : [public_6fb3044]
        call public_6fa9130
        push 2
        mov ecx, esi
        mov ebx, eax
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x38]
        call public_6ef3950
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, dword ptr ss : [esp+0xCF4]
        push ebp
        mov dword ptr ss : [esp+0xCEC], 0
        call public_6f78ef0
        mov edx, dword ptr ss : [esp+0xCF4]
        mov eax, dword ptr ds : [edx]
        push ebx
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x44], eax
        call public_6ef39a0
        mov ecx, dword ptr ss : [esp+0x78]
        xor ebx, ebx
        cmp ecx, ebx
        pop ebp
        je public_6ef90d4
        mov eax, dword ptr ss : [esp+0x78]
        sub eax, ecx
        sar eax, 3
        cmp eax, ebx
        jne public_6ef91ae
        public_6ef90d4 : nop
        mov cl, byte ptr ss : [esp+0xF]
        mov byte ptr ss : [esp+0x18], cl
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov ebx, dword ptr ds : [public_6fb361c]
        mov byte ptr ss : [esp+0xCE0], 1
        public_6ef90f6 : nop
        lea edx, ss:[esp+0xD0]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6fb302c]
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6ef9175
/*FIXUP push offset public_6fb44fc @0x6ef9112*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb44fc
        mov ecx, esi
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6ef9165
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        call ebx
        add esp, 8
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+0x2C]
        push edx
        push 1
        mov dword ptr ss : [esp+0x34], ecx
        push eax
        lea ecx, ss:[esp+0x24]
        call public_6f96770
        jmp public_6ef90f6
        public_6ef9165 : nop
        lea ecx, ss:[esp+0xD0]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6fb3010]
        public_6ef9175 : nop
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x74]
        call dword ptr ds : [public_6fb3144]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        push eax
        push ecx
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0xCE8], 0
        call public_6ea1490
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        call public_6fa8fe0
        add esp, 4
        xor ebx, ebx
        public_6ef91ae : nop
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x84]
        call public_6ef9e50
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0xCC], ecx
        mov eax, dword ptr ds : [edi+0x28]
        lea edx, ss:[esp+0x80]
        push edx
        lea ecx, ds:[edi+0x20]
        push 1
        push eax
        mov byte ptr ss : [esp+0xCEC], 2
        call public_6efa050
        lea ecx, ss:[esp+0xBC]
        mov byte ptr ss : [esp+0xCE0], 4
        call public_6eec8d0
        lea ecx, ss:[esp+0xAC]
        mov byte ptr ss : [esp+0xCE0], 3
        call public_6ef6640
        lea ecx, ss:[esp+0x98]
        mov byte ptr ss : [esp+0xCE0], 0
        call public_6ef9e10
        lea ecx, ss:[esp+0x70]
        mov dword ptr ss : [esp+0xCE0], 6
        call public_6eec8d0
        mov eax, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ss : [esp+0x64]
        push eax
        push ecx
        lea ecx, ss:[esp+0x68]
        mov byte ptr ss : [esp+0xCE8], 5
        call public_6ef6b50
        mov edx, dword ptr ss : [esp+0x64]
        push edx
        call public_6fa8fe0
        add esp, 4
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x64], ebx
        mov dword ptr ss : [esp+0x68], ebx
        mov dword ptr ss : [esp+0x6C], ebx
        mov dword ptr ss : [esp+0xCE0], 0xFFFFFFFF
        call public_6ef9e10
        public_6ef9280 : nop
        mov byte ptr ds : [edi+9], 1
        mov al, 1
        public_6ef9286 : nop
        mov ecx, dword ptr ss : [esp+0xCD8]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xCD8
        ret 0xC
/*FIXUP public_6ef92a0 : nop
        push offset public_6fb7ab8 @0x6ef92a0*/
  FIXUP public_6ef92a0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7ab8
        call ebx
        test al, al
        je public_6ef9318
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6fb3030]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3020]
        push 1
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov esi, dword ptr ds : [edi+0x14]
        mov dword ptr ss : [esp+0x18], eax
        mov ebx, dword ptr ds : [esi+4]
        push 0x10
        call public_6fa912a
        add esp, 8
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_6ef92f0
        mov ebx, eax
        public_6ef92f0 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x10]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6f305b0
        mov eax, dword ptr ds : [edi+0x18]
        add esp, 8
        inc eax
        mov dword ptr ds : [edi+0x18], eax
        jmp public_6ef9280
/*FIXUP public_6ef9318 : nop
        push offset public_6fb7aa4 @0x6ef9318*/
  FIXUP public_6ef9318 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7aa4
        mov ecx, esi
        call ebx
        test al, al
        mov ecx, esi
        je public_6ef9337
        push 0
        call dword ptr ds : [public_6fb3040]
        mov byte ptr ds : [edi+0x34], al
        jmp public_6ef9280
/*FIXUP public_6ef9337 : nop
        push offset public_6fb7a90 @0x6ef9337*/
  FIXUP public_6ef9337 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7a90
        call ebx
        test al, al
        mov ecx, esi
        je public_6ef935a
        push 0
        call dword ptr ds : [public_6fb3044]
        fmul qword ptr ds : [public_6fb7a88]
        fstp dword ptr ds : [edi+0xC]
        jmp public_6ef9280
/*FIXUP public_6ef935a : nop
        push offset public_6fb7a78 @0x6ef935a*/
  FIXUP public_6ef935a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7a78
        call ebx
        test al, al
        mov ecx, esi
        je public_6ef9377
        push 0
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [edi+0x38], eax
        jmp public_6ef9280
/*FIXUP public_6ef9377 : nop
        push offset public_6fb7a6c @0x6ef9377*/
  FIXUP public_6ef9377 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7a6c
        call ebx
        test al, al
        je public_6ef93af
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [edi+0x3C]
        fld dword ptr ds : [edi+4]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 5
        jp public_6ef9280
        mov dword ptr ds : [edi+0x3C], 0
        jmp public_6ef9280
        public_6ef93af : nop
        xor al, al
        jmp public_6ef9286
        UNREACHABLE_TRAP(0x6ef9000)
    }
}

#undef public_6ef90d4
#undef public_6ef90f6
#undef public_6ef9165
#undef public_6ef9175
#undef public_6ef91ae
#undef public_6ef9280
#undef public_6ef9286
#undef public_6ef92a0
#undef public_6ef92f0
#undef public_6ef9318
#undef public_6ef9337
#undef public_6ef935a
#undef public_6ef9377
#undef public_6ef93af
