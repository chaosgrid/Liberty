#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6efc7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f481e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f877c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0c8d);

#define public_6f87019 _public_6f87019
#define public_6f872b0 _public_6f872b0
#define public_6f872fd _public_6f872fd
#define public_6f87304 _public_6f87304
#define public_6f87347 _public_6f87347
#define public_6f8737e _public_6f8737e
#define public_6f8739b _public_6f8739b
#define public_6f87417 _public_6f87417
#define public_6f8741e _public_6f8741e
#define public_6f87591 _public_6f87591
#define public_6f87598 _public_6f87598
#define public_6f87600 _public_6f87600
#define public_6f8768e _public_6f8768e
#define public_6f876b0 _public_6f876b0
#define public_6f876cb _public_6f876cb
#define public_6f876d4 _public_6f876d4
#define public_6f876db _public_6f876db
#define public_6f87750 _public_6f87750
#define public_6f87762 _public_6f87762
#define public_6f8778f _public_6f8778f
#define public_6f8779c _public_6f8779c
#define public_6f8779e _public_6f8779e

PROC_DECLARE(0x6f86fb0, internal_6f86fb0, public_6f86fb0);
extern "C" NAKED register_t __cdecl internal_6f86fb0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fb0c8d @0x6f86fb8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0c8d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        mov eax, dword ptr ds : [eax]
        sub esp, 0x108
        push ebx
        push ebp
        push esi
        xor ebx, ebx
        cmp eax, ebx
        push edi
        mov esi, ecx
        jl public_6f8779c
        jne public_6f8779c
        mov ebp, dword ptr ss : [esp+0x128]
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx]
        cmp eax, 3
        jne public_6f872b0
        mov eax, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [eax+0x10]
        cmp edi, 0xFFFFFFFF
        je public_6f87019
        mov ecx, esi
        call dword ptr ds : [public_6fb3124]
        cmp eax, edi
        jne public_6f872b0
        public_6f87019 : nop
        mov edi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edi+4]
        cmp dword ptr ds : [public_6fd3b6c], eax
        jne public_6f872b0
        lea eax, ds:[edi+0x20]
        push eax
        mov dword ptr ss : [esp+0x18], eax
        call public_6f49bc0
        mov edi, dword ptr ds : [edi+0x1C]
        mov edx, dword ptr ds : [esi+0x20]
        add esp, 4
        lea ecx, ds:[esi+0x20]
        push edi
        mov ebp, eax
        call dword ptr ds : [edx+8]
        mov edi, eax
        xor ecx, ecx
        mov cx, word ptr ds : [edi+0x74]
        push 1
        lea eax, ds:[edi+0x70]
        push ecx
        push eax
        call dword ptr ds : [public_6fb3414]
        add esp, 0xC
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0xB0]
        mov dword ptr ss : [esp+0x94], ebx
        mov dword ptr ss : [esp+0x98], ebx
        mov dword ptr ss : [esp+0x9C], ebx
        mov dword ptr ss : [esp+0xA0], ebx
        mov dword ptr ss : [esp+0xA4], 0
        mov dword ptr ss : [esp+0xA8], 0
        mov dword ptr ss : [esp+0xAC], 0
        call public_6eb7810
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0xE0]
        call public_6eb7810
        lea ecx, ss:[esp+0xB0]
        mov dword ptr ss : [esp+0xE0], ebx
        mov dword ptr ss : [esp+0xE4], 0
        mov byte ptr ss : [esp+0xE8], 1
        mov byte ptr ss : [esp+0xE9], bl
        mov dword ptr ss : [esp+0xEC], ebx
        call public_6efc7a0
        mov ecx, ebp
        call public_6f478c0
        mov eax, dword ptr ds : [eax+0x48]
        lea edx, ss:[esp+0x8C]
        mov dword ptr ss : [esp+0x88], eax
        push edx
        lea eax, ds:[edi+0x78]
        push eax
        call dword ptr ds : [public_6fb3540]
        add esp, 8
        mov ecx, ebp
        call public_6f481e0
        lea ecx, ss:[esp+0x7C]
        push ecx
        lea edx, ss:[esp+0x74]
        push edx
        push eax
        mov dword ptr ss : [esp+0xA0], eax
        call dword ptr ds : [public_6fb3660]
        mov ebp, dword ptr ss : [ebp+0x10]
        add esp, 0xC
        lea eax, ss:[esp+0x30]
        push eax
        mov ecx, ebp
        call public_6eb70f0
        fld dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax+8]
        fadd dword ptr ds : [public_6fb4438]
        mov edx, dword ptr ds : [eax]
        push ecx
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        lea ecx, ss:[esp+0x70]
        call public_6eb7810
        mov eax, dword ptr ss : [esp+0x64]
        mov dword ptr ss : [esp+0xA4], eax
        mov ecx, dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x74]
        mov eax, dword ptr ss : [esp+0x78]
        fadd dword ptr ds : [public_6fb4438]
        mov edx, dword ptr ss : [esp+0x6C]
        push eax
        push ecx
        mov dword ptr ss : [esp+0xB0], ecx
        fstp dword ptr ss : [esp]
        mov ecx, dword ptr ss : [esp+0x78]
        push ecx
        lea ecx, ss:[esp+0x70]
        mov dword ptr ss : [esp+0xB8], edx
        call public_6eb7810
        mov edx, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x98], edx
        mov edx, dword ptr ss : [esp+0x7C]
        mov dword ptr ss : [esp+0x9C], eax
        mov eax, dword ptr ss : [esp+0x80]
        mov dword ptr ss : [esp+0xA0], ecx
        mov ecx, dword ptr ss : [esp+0x84]
        mov dword ptr ss : [esp+0xD4], edx
        mov dword ptr ss : [esp+0xD8], eax
        mov dword ptr ss : [esp+0xDC], ecx
        mov dword ptr ss : [esp+0xE0], 1
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x88]
        push edx
        lea ebp, ds:[edi+0x48]
        fmul dword ptr ds : [public_6fb4448]
        push ebp
        mov byte ptr ss : [esp+0xF0], bl
        mov byte ptr ss : [esp+0xF1], 1
        fmul qword ptr ds : [public_6fb74e0]
        fadd qword ptr ds : [public_6fb74e0]
        fstp dword ptr ss : [esp+0xEC]
        call dword ptr ds : [public_6fb34dc]
        mov ebp, dword ptr ss : [ebp]
        mov dword ptr ds : [edi+0x3C], 2
        mov eax, dword ptr ss : [esp+0xE8]
        mov dword ptr ds : [edi+0x64], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi+0x70], ebx
        mov ecx, dword ptr ds : [public_6fb30b0]
        mov dx, word ptr ds : [ecx]
        mov word ptr ds : [edi+0x74], dx
        mov ecx, dword ptr ds : [public_6fd3b84]
        mov edi, dword ptr ds : [eax]
        add esp, 8
        push ecx
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_6fb3118]
        mov dword ptr ss : [esp+0x5C], ebp
        mov dword ptr ss : [esp+0x60], edi
        mov dword ptr ss : [esp+0x40], offset public_6fbc80c
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [esi+0x10]
        push eax
        lea ecx, ds:[esi+0x10]
        lea eax, ss:[esp+0x44]
        push eax
        mov dword ptr ss : [esp+0x128], ebx
        call dword ptr ds : [edx+8]
        mov al, 1
        jmp public_6f8779e
        public_6f872b0 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx]
        cmp eax, 4
        jne public_6f8741e
        cmp dword ptr ss : [ebp+8], 0x39
        jne public_6f8741e
        mov ebp, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [esi+0x20]
        lea ecx, ds:[esi+0x20]
        push eax
        mov dword ptr ss : [esp+0x1C], ebp
        call dword ptr ds : [edx+8]
        mov edi, eax
        cmp edi, ebx
        je public_6f87417
        mov eax, dword ptr ss : [ebp+0x10]
        cmp eax, 1
        je public_6f872fd
        cmp eax, ebx
        je public_6f872fd
        mov dword ptr ds : [edi+0x3C], 4
        jmp public_6f87304
        public_6f872fd : nop
        mov dword ptr ds : [edi+0x3C], 3
        public_6f87304 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        cmp eax, 1
        mov ebp, dword ptr ds : [public_6fb3118]
        jne public_6f87347
        mov ecx, dword ptr ds : [public_6fd3b94]
        mov eax, dword ptr ds : [edi+0x48]
        push ecx
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x18], eax
        call ebp
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x5C], edx
        mov dword ptr ss : [esp+0x60], ebx
        mov dword ptr ss : [esp+0x40], offset public_6fbc80c
        mov dword ptr ss : [esp+0x120], 1
        jmp public_6f8737e
        public_6f87347 : nop
        cmp eax, ebx
        jne public_6f8739b
        mov ecx, dword ptr ds : [public_6fd3b80]
        mov eax, dword ptr ds : [edi+0x48]
        push ecx
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x18], eax
        call ebp
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x5C], edx
        mov dword ptr ss : [esp+0x60], ebx
        mov dword ptr ss : [esp+0x40], offset public_6fbc80c
        mov dword ptr ss : [esp+0x120], 2
        public_6f8737e : nop
        mov edx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [esi+0x10]
        push edx
        lea ecx, ds:[esi+0x10]
        lea edx, ss:[esp+0x44]
        push edx
        call dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x120], 0xFFFFFFFF
        public_6f8739b : nop
        cmp dword ptr ds : [edi+0x68], 2
        jne public_6f87417
        push ebx
        push 2
        push ebx
        push 2
        push ebx
        lea eax, ss:[esp+0x44]
        push eax
        mov ecx, esi
        call public_6f877c0
        cmp dword ptr ds : [eax+0xC], ebx
        lea ecx, ss:[esp+0x34]
        sete byte ptr ss : [esp+0x13]
        mov dword ptr ss : [esp+0x30], offset public_6fbc7cc
        call public_6f15350
        cmp byte ptr ss : [esp+0x13], bl
        je public_6f87417
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [public_6fd3b8c]
        mov ebx, dword ptr ds : [ecx+4]
        mov edi, dword ptr ds : [edi+0x48]
        push edx
        lea ecx, ss:[esp+0x44]
        call ebp
        mov dword ptr ss : [esp+0x5C], edi
        mov dword ptr ss : [esp+0x60], ebx
        mov dword ptr ss : [esp+0x40], offset public_6fbc80c
        mov edx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [esi+0x10]
        push edx
        lea ecx, ds:[esi+0x10]
        lea edx, ss:[esp+0x44]
        push edx
        mov dword ptr ss : [esp+0x128], 3
        call dword ptr ds : [eax+8]
        public_6f87417 : nop
        mov al, 1
        jmp public_6f8779e
        public_6f8741e : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax]
        cmp eax, 4
        jne public_6f87598
        cmp dword ptr ss : [ebp+8], 0x18
        jne public_6f87598
        mov ebp, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [esi+0x20]
        lea ecx, ds:[esi+0x20]
        push eax
        call dword ptr ds : [edx+8]
        mov edi, eax
        cmp edi, ebx
        je public_6f87591
        mov eax, dword ptr ss : [ebp+0x10]
        sub dword ptr ds : [edi+0x64], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edi+0x78], ecx
        mov dx, word ptr ss : [ebp+8]
        add ebp, 4
        push ebp
        mov word ptr ds : [edi+0x74], dx
        mov dword ptr ss : [esp+0x1C], ebp
        call public_6f49bc0
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edi+0x70], eax
        mov eax, dword ptr ds : [edi+0x64]
        add esp, 4
        cmp eax, ebx
        jne public_6f87591
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [public_6fd3b90]
        mov ebp, dword ptr ds : [edi+0x48]
        mov dword ptr ss : [esp+0x14], ecx
        push edx
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_6fb3118]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x5C], ebp
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x40], offset public_6fbc80c
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [esi+0x10]
        push eax
        lea ecx, ss:[esp+0x44]
        lea ebp, ds:[esi+0x10]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x128], 4
        call dword ptr ds : [edx+8]
        cmp dword ptr ds : [edi+0x68], 2
        jne public_6f87591
        push ebx
        push 2
        push ebx
        push 2
        push ebx
        lea edx, ss:[esp+0x30]
        push edx
        mov ecx, esi
        call public_6f877c0
        mov edx, dword ptr ds : [eax+0xC]
        lea eax, ss:[esp+0x2C]
        cmp edx, ebx
        push eax
        lea ecx, ss:[esp+0x24]
        sete byte ptr ss : [esp+0x17]
        mov dword ptr ss : [esp+0x20], offset public_6fbc7cc
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_6fa8370
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        call public_6fa8fe0
        mov al, byte ptr ss : [esp+0x17]
        add esp, 4
        cmp al, bl
        je public_6f87591
        mov eax, dword ptr ds : [public_6fd3b8c]
        mov edx, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [edi+0x48]
        mov ebx, dword ptr ds : [edx]
        push eax
        lea ecx, ss:[esp+0xF4]
        call dword ptr ds : [public_6fb3118]
        mov dword ptr ss : [esp+0x10C], edi
        mov dword ptr ss : [esp+0x110], ebx
        mov dword ptr ss : [esp+0xF0], offset public_6fbc80c
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ss : [ebp]
        push eax
        lea ecx, ss:[esp+0xF4]
        push ecx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x128], 5
        call dword ptr ds : [edx+8]
        public_6f87591 : nop
        mov al, 1
        jmp public_6f8779e
        public_6f87598 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx]
        cmp eax, 4
        jne public_6f876db
        cmp dword ptr ss : [ebp+8], 0x27
        jne public_6f876db
        mov ebp, dword ptr ss : [ebp+0xC]
        push ebp
        call public_6f49bc0
        add esp, 4
        cmp eax, ebx
        je public_6f876d4
        mov eax, dword ptr ds : [eax+0xC]
        push eax
        push 4
        push ebx
        push 2
        push ebx
        lea eax, ss:[esp+0x44]
        push eax
        mov ecx, esi
        call public_6f877c0
        cmp dword ptr ss : [esp+0x3C], ebx
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x120], 6
        je public_6f8768e
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f8768e
        nop 
        public_6f87600 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov ebx, dword ptr ds : [ecx+0x48]
        mov ecx, dword ptr ds : [public_6fd3b88]
        mov edx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [ebp]
        push ecx
        lea ecx, ss:[esp+0xF4]
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_6fb3118]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x10C], ebx
        mov dword ptr ss : [esp+0x110], edx
        mov dword ptr ss : [esp+0x114], eax
        mov dword ptr ss : [esp+0xF0], offset public_6fbc814
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [esi+0x10]
        push eax
        lea ecx, ds:[esi+0x10]
        lea eax, ss:[esp+0xF4]
        push eax
        mov byte ptr ss : [esp+0x128], 7
        call dword ptr ds : [edx+8]
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x38]
        cmp edi, eax
        mov byte ptr ss : [esp+0x120], 6
        mov dword ptr ss : [esp+0xF0], offset public_6fb7730
        jne public_6f87600
        public_6f8768e : nop
        mov dword ptr ss : [esp+0x30], offset public_6fbc7cc
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x120], 0xFFFFFFFF
        mov edi, eax
        je public_6f876cb
        lea esp, ss:[esp]
        public_6f876b0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x3C]
        call public_6ecfe80
        cmp esi, edi
        jne public_6f876b0
        mov eax, dword ptr ss : [esp+0x38]
        public_6f876cb : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f876d4 : nop
        mov al, 1
        jmp public_6f8779e
        public_6f876db : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx]
        cmp eax, 4
        jne public_6f8779c
        cmp dword ptr ss : [ebp+8], 0x3D
        jne public_6f8779c
        mov ebp, dword ptr ss : [ebp+0xC]
        push ebx
        push 2
        push ebx
        push 2
        push ebx
        lea eax, ss:[esp+0x30]
        push eax
        mov ecx, esi
        call public_6f877c0
        cmp dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x120], 8
        je public_6f87750
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [esi+0x48]
        lea eax, ss:[esp+0x2C]
        push eax
        push ecx
        call dword ptr ds : [public_6fb362c]
        mov edx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [esp+0x34]
        add esp, 8
        cmp edx, eax
        jne public_6f87750
        mov eax, dword ptr ds : [esi+0x48]
        push ebx
        push eax
        call dword ptr ds : [public_6fb33c8]
        add esp, 8
        public_6f87750 : nop
        mov edi, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], offset public_6fbc7cc
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6f8778f
        public_6f87762 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x28], ecx
        jne public_6f87762
        mov edi, dword ptr ss : [esp+0x24]
        public_6f8778f : nop
        push edi
        call public_6fa8fe0
        add esp, 4
        mov al, 1
        jmp public_6f8779e
        public_6f8779c : nop
        xor al, al
        public_6f8779e : nop
        mov ecx, dword ptr ss : [esp+0x118]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x114
        ret 8
        UNREACHABLE_TRAP(0x6f86fb0)
    }
}

#undef public_6f87019
#undef public_6f872b0
#undef public_6f872fd
#undef public_6f87304
#undef public_6f87347
#undef public_6f8737e
#undef public_6f8739b
#undef public_6f87417
#undef public_6f8741e
#undef public_6f87591
#undef public_6f87598
#undef public_6f87600
#undef public_6f8768e
#undef public_6f876b0
#undef public_6f876cb
#undef public_6f876d4
#undef public_6f876db
#undef public_6f87750
#undef public_6f87762
#undef public_6f8778f
#undef public_6f8779c
#undef public_6f8779e
