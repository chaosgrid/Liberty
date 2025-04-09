#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4058b0);
CLANG_FORWARD_PROC_SYMBOL(public_4058e0);
CLANG_FORWARD_PROC_SYMBOL(public_405b10);
CLANG_FORWARD_PROC_SYMBOL(public_405f80);
CLANG_FORWARD_PROC_SYMBOL(public_405fb0);
CLANG_FORWARD_PROC_SYMBOL(public_406200);
CLANG_FORWARD_PROC_SYMBOL(public_406880);
CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);
CLANG_FORWARD_PROC_SYMBOL(public_5b7fba);
CLANG_FORWARD_JUMP_SYMBOL(public_5b848a);

#define public_405b42 _public_405b42
#define public_405b6a _public_405b6a
#define public_405c52 _public_405c52
#define public_405c73 _public_405c73
#define public_405cb4 _public_405cb4
#define public_405cb6 _public_405cb6
#define public_405d47 _public_405d47
#define public_405d7c _public_405d7c
#define public_405d8d _public_405d8d
#define public_405de0 _public_405de0
#define public_405e4b _public_405e4b
#define public_405e84 _public_405e84
#define public_405e95 _public_405e95
#define public_405eef _public_405eef
#define public_405f56 _public_405f56
#define public_405f66 _public_405f66

PROC_DECLARE(0x405b10, internal_405b10, public_405b10);
extern "C" NAKED register_t __cdecl internal_405b10()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b848a @0x405b18*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b848a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xA0
        push ebx
        mov ebx, dword ptr ss : [esp+0xB4]
        cmp ebx, 0xFFFFFFFF
        push ebp
        mov ebp, ecx
        jne public_405b42
        xor al, al
        jmp public_405f66
        public_405b42 : nop
        mov eax, dword ptr ss : [ebp]
        push esi
        xor esi, esi
        cmp eax, esi
        push edi
        je public_405b6a
        mov ecx, dword ptr ds : [eax-4]
        lea edi, ds:[eax-4]
/*FIXUP push offset _public_4058b0 @0x405b53*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4058b0
        push ecx
        push 0x1C
        push eax
        call public_5b7ec6
        push edi
        call public_5b7e1d
        add esp, 4
        public_405b6a : nop
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov dword ptr ss : [ebp], esi
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+0xC], esi
        call public_5b7e1d
        mov dword ptr ss : [ebp+0x10], esi
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        push ebx
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov edx, dword ptr ds : [public_5c6d90]
        mov esi, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x80]
        rep movsd
        mov dword ptr ss : [esp+0x40], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x20]
        push edx
        push ebx
        push eax
        call dword ptr ds : [ecx+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push ebx
        push eax
        call dword ptr ds : [ecx+0x6C]
        push 0xFFFFFFFF
        mov dword ptr ss : [ebp+4], 1
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push ebx
        push eax
        call dword ptr ds : [ecx+0xD8]
        cmp eax, 0xFFFFFFFF
        je public_405c73
        public_405c52 : nop
        mov edi, dword ptr ss : [ebp+4]
        push eax
        inc edi
        mov dword ptr ss : [ebp+4], edi
        mov edx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        push 0
        push ebx
        push ecx
        call dword ptr ds : [edx+0xD8]
        cmp eax, 0xFFFFFFFF
        jne public_405c52
        public_405c73 : nop
        mov esi, dword ptr ss : [ebp+4]
        mov eax, esi
        imul eax, 0x1C
        add eax, 4
        push eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        test eax, eax
        mov dword ptr ss : [esp+0xB8], 0
        je public_405cb4
/*FIXUP push offset _public_4058b0 @0x405c9a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4058b0
/*FIXUP push offset _public_405f80 @0x405c9f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_405f80
        push esi
        lea ebx, ds:[eax+4]
        push 0x1C
        push ebx
        mov dword ptr ds : [eax], esi
        call public_5b7fba
        jmp public_405cb6
        public_405cb4 : nop
        xor ebx, ebx
        public_405cb6 : nop
        mov edx, dword ptr ss : [esp+0xC4]
        mov dword ptr ss : [ebp], ebx
        xor eax, eax
        mov dword ptr ss : [ebp+0xC], eax
        mov dword ptr ss : [ebp+8], eax
        mov ecx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0xC0]
        push ecx
        mov dword ptr ds : [ebx+0x14], edx
        mov dword ptr ds : [ebx+0x10], ecx
        mov byte ptr ds : [ebx+0x1B], 0
        mov edx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0xC0], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x24], eax
        call dword ptr ds : [edx+0xA0]
        mov ecx, 0xC
        mov esi, eax
        lea edi, ss:[esp+0x20]
        rep movsd
        xor edi, edi
        mov dword ptr ss : [esp+0x14], edi
        mov edx, dword ptr ds : [ebx+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x14]
        push ecx
/*FIXUP push offset public_5c7710 @0x405d1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7710
        push edx
        push esi
        mov dword ptr ss : [esp+0xC8], 1
        call dword ptr ds : [eax+0x78]
        test eax, eax
        jl public_405d47
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x20]
        push eax
        push ecx
        mov ecx, ebx
        call public_405fb0
        jmp public_405d8d
        public_405d47 : nop
        mov dword ptr ss : [esp+0x10], edi
        mov ecx, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x10]
        push eax
/*FIXUP push offset public_5c7704 @0x405d55*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7704
        push ecx
        push esi
        mov byte ptr ss : [esp+0xC8], 2
        call dword ptr ds : [edx+0x78]
        test eax, eax
        jl public_405d7c
        mov eax, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        mov ecx, ebx
        call public_406200
        public_405d7c : nop
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0xB8], 1
        call public_526a20
        public_405d8d : nop
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0xB8], 0xFFFFFFFF
        call public_526a20
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [ebp+8]
        mov esi, dword ptr ss : [ebp+0xC]
        add eax, ecx
        mov dword ptr ss : [ebp+8], eax
        mov edx, dword ptr ds : [ebx]
        add esi, edx
        mov dword ptr ss : [ebp+0xC], esi
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push edi
        lea esi, ds:[ebx+0x1C]
        mov ebx, dword ptr ss : [esp+0xC8]
        push ebx
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_405eef
        nop 
        public_405de0 : nop
        mov edx, dword ptr ds : [public_5c6d90]
        mov ebx, dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0xC4]
        push edi
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x10], edi
        mov byte ptr ds : [esi+0x1B], 0
        mov ecx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [ecx+0xA0]
        push eax
        lea ecx, ss:[esp+0x54]
        call public_406880
        mov dword ptr ss : [esp+0x18], 0
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x18]
        push eax
/*FIXUP push offset public_5c7710 @0x405e1f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7710
        push ecx
        push ebx
        mov dword ptr ss : [esp+0xC8], 3
        call dword ptr ds : [edx+0x78]
        test eax, eax
        jl public_405e4b
        mov eax, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x50]
        push edx
        push eax
        mov ecx, esi
        call public_405fb0
        jmp public_405e95
        public_405e4b : nop
        mov dword ptr ss : [esp+0x10], 0
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [ebx]
        lea edx, ss:[esp+0x10]
        push edx
/*FIXUP push offset public_5c7704 @0x405e5d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7704
        push eax
        push ebx
        mov byte ptr ss : [esp+0xC8], 4
        call dword ptr ds : [ecx+0x78]
        test eax, eax
        jl public_405e84
        mov edx, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x50]
        push ecx
        push edx
        mov ecx, esi
        call public_406200
        public_405e84 : nop
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0xB8], 3
        call public_526a20
        public_405e95 : nop
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0xB8], 0xFFFFFFFF
        call public_526a20
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, eax
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], ecx
        mov ecx, dword ptr ds : [esi]
        add eax, ecx
        mov dword ptr ss : [ebp+0xC], eax
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0xC0]
        mov ecx, dword ptr ds : [eax]
        push edi
        push 0
        push edx
        push eax
        add esi, 0x1C
        call dword ptr ds : [ecx+0xD8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jne public_405de0
        mov ebx, dword ptr ss : [esp+0xC0]
        public_405eef : nop
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x80]
        push edx
        push ebx
        push eax
        call dword ptr ds : [ecx+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push ebx
        push eax
        call dword ptr ds : [ecx+0x6C]
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, 0x3E80
        pop edi
        pop esi
        jle public_405f56
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5c76d4 @0x405f2c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c76d4
        push 0xE0
/*FIXUP push offset public_5c76a4 @0x405f36*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c76a4
        mov eax, 0x100004
/*FIXUP push offset public_5c7688 @0x405f40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7688
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        mov ecx, ebp
        call public_4058e0
        xor al, al
        jmp public_405f66
        public_405f56 : nop
        add eax, eax
        push eax
        call public_5b7e84
        mov dword ptr ss : [ebp+0x10], eax
        add esp, 4
        mov al, 1
        public_405f66 : nop
        mov ecx, dword ptr ss : [esp+0xA8]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xAC
        ret 8
        UNREACHABLE_TRAP(0x405b10)
    }
}

#undef public_405b42
#undef public_405b6a
#undef public_405c52
#undef public_405c73
#undef public_405cb4
#undef public_405cb6
#undef public_405d47
#undef public_405d7c
#undef public_405d8d
#undef public_405de0
#undef public_405e4b
#undef public_405e84
#undef public_405e95
#undef public_405eef
#undef public_405f56
#undef public_405f66
