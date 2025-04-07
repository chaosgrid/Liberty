#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef70c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f38b20);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac1d0);

#define public_6ef3f40 _public_6ef3f40
#define public_6ef3fa0 _public_6ef3fa0
#define public_6ef3fab _public_6ef3fab
#define public_6ef3fe0 _public_6ef3fe0
#define public_6ef3ff2 _public_6ef3ff2
#define public_6ef3ff6 _public_6ef3ff6
#define public_6ef4001 _public_6ef4001
#define public_6ef4006 _public_6ef4006
#define public_6ef4021 _public_6ef4021
#define public_6ef402a _public_6ef402a
#define public_6ef4030 _public_6ef4030
#define public_6ef4034 _public_6ef4034
#define public_6ef4064 _public_6ef4064
#define public_6ef4094 _public_6ef4094
#define public_6ef40a6 _public_6ef40a6
#define public_6ef40af _public_6ef40af
#define public_6ef40b5 _public_6ef40b5
#define public_6ef4147 _public_6ef4147
#define public_6ef414b _public_6ef414b
#define public_6ef415d _public_6ef415d

PROC_DECLARE(0x6ef3ef0, internal_6ef3ef0, public_6ef3ef0);
extern "C" NAKED register_t __cdecl internal_6ef3ef0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac1d0 @0x6ef3ef2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac1d0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        mov al, byte ptr ss : [esp+0x44]
        push ebx
        xor ebx, ebx
        push edi
        mov dword ptr ss : [esp+8], ecx
        mov byte ptr ss : [esp+0x18], al
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov edi, dword ptr ss : [esp+0x4C]
        mov ecx, edi
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6ef415d
        push ebp
        push esi
        mov edi, edi
        public_6ef3f40 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x28]
        push ecx
        push eax
        push eax
        call public_6f38b20
        mov edx, dword ptr ss : [esp+0x34]
        add esp, 0xC
        mov esi, eax
        push edx
        push esi
        lea ecx, ss:[esp+0x28]
        call public_6ea1490
/*FIXUP push offset public_6fb78c4 @0x6ef3f64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb78c4
        mov ecx, edi
        mov dword ptr ss : [esp+0x2C], esi
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6ef414b
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_6fb3048]
        mov ebp, eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        xor esi, esi
        mov edi, ebp
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        cmp edi, ebx
        jle public_6ef3fab
        lea esp, ss:[esp]
        public_6ef3fa0 : nop
        cmp byte ptr ds : [esi+ebp], 0x20
        jne public_6ef3fab
        inc esi
        cmp esi, edi
        jl public_6ef3fa0
        public_6ef3fab : nop
        lea eax, ds:[esi+ebp]
        push eax
        mov byte ptr ss : [esp+0x20], bl
        call dword ptr ds : [public_6fb313c]
        add esp, 4
        call public_6fa9130
        mov edx, dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x18]
        push ecx
        push 1
        push edx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x24], eax
        call public_6f96770
        cmp esi, edi
        jge public_6ef4034
        mov edi, edi
        public_6ef3fe0 : nop
        mov al, byte ptr ds : [esi+ebp]
        cmp al, 0x30
        jl public_6ef3ff2
        cmp al, 0x39
        jg public_6ef3ff2
        inc esi
        cmp esi, edi
        jl public_6ef3fe0
        jmp public_6ef4034
        public_6ef3ff2 : nop
        cmp esi, edi
        jge public_6ef4034
        public_6ef3ff6 : nop
        mov al, byte ptr ds : [esi+ebp]
        cmp al, 0x20
        je public_6ef4001
        cmp al, 0x2B
        jne public_6ef4006
        public_6ef4001 : nop
        inc esi
        cmp esi, edi
        jl public_6ef3ff6
        public_6ef4006 : nop
        cmp esi, edi
        je public_6ef4034
        mov cl, byte ptr ds : [esi+ebp]
        cmp cl, 0x2A
        lea eax, ds:[esi+ebp]
        jne public_6ef4064
        mov ecx, dword ptr ss : [esp+0x24]
        cmp ecx, ebx
        jne public_6ef4021
        xor eax, eax
        jmp public_6ef402a
        public_6ef4021 : nop
        mov eax, dword ptr ss : [esp+0x28]
        sub eax, ecx
        sar eax, 3
        public_6ef402a : nop
        mov byte ptr ds : [ecx+eax*8-4], 1
        inc esi
        public_6ef4030 : nop
        cmp esi, edi
        jl public_6ef3ff6
        public_6ef4034 : nop
        mov esi, dword ptr ss : [esp+0x54]
        mov edi, dword ptr ds : [public_6fb3020]
        push 1
        mov ecx, esi
        call edi
        mov ecx, dword ptr ss : [esp+0x24]
        cmp ecx, ebx
        mov dl, byte ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        mov byte ptr ss : [esp+0x30], dl
        fstp dword ptr ss : [esp+0x14]
        jne public_6ef40a6
        xor eax, eax
        jmp public_6ef40af
        public_6ef4064 : nop
        push eax
        call dword ptr ds : [public_6fb313c]
        add esp, 4
        call public_6fa9130
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        push 1
        push ecx
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x28], bl
        call public_6f96770
        cmp esi, edi
        jge public_6ef4034
        public_6ef4094 : nop
        mov al, byte ptr ds : [esi+ebp]
        cmp al, 0x30
        jl public_6ef4030
        cmp al, 0x39
        jg public_6ef4030
        inc esi
        cmp esi, edi
        jl public_6ef4094
        jmp public_6ef4034
        public_6ef40a6 : nop
        mov eax, dword ptr ss : [esp+0x28]
        sub eax, ecx
        sar eax, 3
        public_6ef40af : nop
        cmp eax, ebx
        jge public_6ef40b5
        xor eax, eax
        public_6ef40b5 : nop
        shl eax, 3
        push eax
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        add esp, 4
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x40], eax
        call public_6ed2700
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x40], eax
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+0x20]
        lea edx, ss:[esp+0x30]
        push edx
        add ecx, 0x18
        push 1
        push eax
        mov byte ptr ss : [esp+0x58], 1
        call public_6ef70c0
        mov eax, dword ptr ss : [esp+0x34]
        push eax
        mov byte ptr ss : [esp+0x50], bl
        call public_6fa8fe0
        add esp, 4
        push 2
        mov ecx, esi
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ef4147
        mov ecx, dword ptr ss : [esp+0x54]
        push 2
        call edi
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [ecx+0xC]
        public_6ef4147 : nop
        mov edi, dword ptr ss : [esp+0x54]
        public_6ef414b : nop
        mov ecx, edi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6ef3f40
        pop esi
        pop ebp
        public_6ef415d : nop
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x40]
        add esp, 4
        pop edi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 4
        UNREACHABLE_TRAP(0x6ef3ef0)
    }
}

#undef public_6ef3f40
#undef public_6ef3fa0
#undef public_6ef3fab
#undef public_6ef3fe0
#undef public_6ef3ff2
#undef public_6ef3ff6
#undef public_6ef4001
#undef public_6ef4006
#undef public_6ef4021
#undef public_6ef402a
#undef public_6ef4030
#undef public_6ef4034
#undef public_6ef4064
#undef public_6ef4094
#undef public_6ef40a6
#undef public_6ef40af
#undef public_6ef40b5
#undef public_6ef4147
#undef public_6ef414b
#undef public_6ef415d
