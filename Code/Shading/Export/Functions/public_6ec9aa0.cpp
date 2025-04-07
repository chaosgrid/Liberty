#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb22b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec8ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecaaf0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecc2d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c70);

#define public_6ec9b4d _public_6ec9b4d
#define public_6ec9b50 _public_6ec9b50
#define public_6ec9b63 _public_6ec9b63
#define public_6ec9c6c _public_6ec9c6c
#define public_6ec9c74 _public_6ec9c74
#define public_6ec9cbb _public_6ec9cbb
#define public_6ec9ccd _public_6ec9ccd
#define public_6ec9cdf _public_6ec9cdf
#define public_6ec9ced _public_6ec9ced
#define public_6ec9cfc _public_6ec9cfc

PROC_DECLARE(0x6ec9aa0, internal_6ec9aa0, public_6ec9aa0);
extern "C" NAKED register_t __cdecl internal_6ec9aa0()
{
    __asm
    {
        mov eax, 0x21BC
        call public_6ed0c70
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x21C8]
        push esi
        xor ebx, ebx
        push edi
        push ebp
        mov esi, ecx
        xor edi, edi
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x28], 0x14
        call dword ptr ds : [public_6ed1000]
        push 0x40
        mov dword ptr ss : [esp+0x24], eax
        push ebp
        mov ebp, dword ptr ds : [public_6ed1028]
        lea eax, ss:[esp+0x54]
        push eax
        call ebp
        lea ecx, ss:[esp+0x58]
        push ecx
        mov byte ptr ss : [esp+0x9B], bl
        call dword ptr ds : [public_6ed1084]
        mov edx, dword ptr ss : [esp+0x21E8]
        push 0x40
        push edx
        lea eax, ss:[esp+0xA4]
        push eax
        call ebp
        mov al, byte ptr ss : [esp+0x21F8]
        add esp, 0x20
        cmp al, bl
        mov byte ptr ss : [esp+0xC7], bl
        je public_6ec9b4d
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0xC8]
        push edx
        push 0x104
        lea eax, ss:[esp+0x90]
        push eax
        lea edx, ss:[esp+0x54]
        push edx
        push esi
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        jge public_6ec9b63
        public_6ec9b4d : nop
        xor eax, eax
        nop 
        public_6ec9b50 : nop
        mov cl, byte ptr ss : [esp+eax+0x88]
        mov byte ptr ss : [esp+eax+0xC8], cl
        inc eax
        cmp cl, bl
        jne public_6ec9b50
        public_6ec9b63 : nop
        lea eax, ss:[esp+0xC8]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea ecx, ds:[esi-4]
        call public_6ec8ed0
        test al, al
        mov edx, dword ptr ss : [esp+0x21DC]
        je public_6ec9cfc
        lea eax, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x28], offset public_6ed427c
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x30], eax
        call dword ptr ds : [public_6ed1008]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jl public_6ec9ced
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
/*FIXUP push offset public_6ed4268 @0x6ec9bc4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4268
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jl public_6ec9cdf
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
/*FIXUP push offset public_6ed428c @0x6ec9bdf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed428c
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jl public_6ec9ccd
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC8]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jl public_6ec9c74
        mov edx, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jl public_6ec9cbb
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov edx, dword ptr ss : [esp+0x1C]
        xor eax, eax
        xor ecx, ecx
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x40], ecx
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ds:[esi+0x14]
        mov dword ptr ss : [esp+0x40], edx
        call public_6ecaaf0
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x10]
        lea edi, ds:[edx+0x10]
        mov dword ptr ds : [edi+4], eax
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        je public_6ec9c6c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6ec9c6c : nop
        mov dword ptr ds : [edi], 1
        jmp public_6ec9cbb
        public_6ec9c74 : nop
        lea edx, ss:[esp+0xC8]
        push edx
        lea eax, ss:[esp+0x8C]
        push eax
        lea ecx, ss:[esp+0x50]
        push ecx
        lea edx, ss:[esp+0x1D8]
/*FIXUP push offset public_6ed4f4c @0x6ec9c90*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4f4c
        push edx
        call public_6eb22b0
        push eax
        mov eax, dword ptr ds : [public_6ed1004]
        push 0x441
/*FIXUP push offset public_6ed4eb0 @0x6ec9ca6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4eb0
        mov ecx, 0x100003
/*FIXUP push offset public_6ed40a0 @0x6ec9cb0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed40a0
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x28
        public_6ec9cbb : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebx
        je public_6ec9ccd
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x18], ebx
        public_6ec9ccd : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        je public_6ec9cdf
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x10], ebx
        public_6ec9cdf : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        je public_6ec9ced
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6ec9ced : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x21BC
        ret 0x10
        public_6ec9cfc : nop
        push edx
        push ebx
        lea eax, ss:[esp+0xD0]
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
        mov ecx, esi
        call public_6ecc2d0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x21BC
        ret 0x10
        UNREACHABLE_TRAP(0x6ec9aa0)
    }
}

#undef public_6ec9b4d
#undef public_6ec9b50
#undef public_6ec9b63
#undef public_6ec9c6c
#undef public_6ec9c74
#undef public_6ec9cbb
#undef public_6ec9ccd
#undef public_6ec9cdf
#undef public_6ec9ced
#undef public_6ec9cfc
