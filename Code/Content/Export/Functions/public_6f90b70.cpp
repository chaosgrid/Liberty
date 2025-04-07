#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eadeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfc30);
CLANG_FORWARD_PROC_SYMBOL(public_6eeca70);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f7ac90);
CLANG_FORWARD_PROC_SYMBOL(public_6f87a50);
CLANG_FORWARD_PROC_SYMBOL(public_6f8af40);
CLANG_FORWARD_PROC_SYMBOL(public_6f8b030);
CLANG_FORWARD_PROC_SYMBOL(public_6f90b70);
CLANG_FORWARD_PROC_SYMBOL(public_6f931c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1458);

#define public_6f90ba1 _public_6f90ba1
#define public_6f90bb5 _public_6f90bb5
#define public_6f90be0 _public_6f90be0
#define public_6f90bf2 _public_6f90bf2
#define public_6f90bf4 _public_6f90bf4
#define public_6f90d08 _public_6f90d08
#define public_6f90d0f _public_6f90d0f
#define public_6f90da6 _public_6f90da6
#define public_6f90db1 _public_6f90db1
#define public_6f90e15 _public_6f90e15
#define public_6f90e2a _public_6f90e2a
#define public_6f90e2f _public_6f90e2f
#define public_6f90e31 _public_6f90e31
#define public_6f90e40 _public_6f90e40
#define public_6f90e4f _public_6f90e4f
#define public_6f90e51 _public_6f90e51
#define public_6f90e64 _public_6f90e64
#define public_6f90e72 _public_6f90e72
#define public_6f90e74 _public_6f90e74
#define public_6f90f0b _public_6f90f0b

PROC_DECLARE(0x6f90b70, internal_6f90b70, public_6f90b70);
extern "C" NAKED register_t __cdecl internal_6f90b70()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fb1458 @0x6f90b78*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1458
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x48
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx]
        xor bl, bl
        cmp eax, ecx
        push edi
        je public_6f90db1
        public_6f90ba1 : nop
        mov edx, dword ptr ds : [eax+8]
        test byte ptr ds : [edx+0x40], 2
        jne public_6f90bb5
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f90ba1
        jmp public_6f90db1
        public_6f90bb5 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax+0x60]
        xor ecx, ecx
        cmp edx, 1
        mov edx, dword ptr ds : [esi+0x80]
        setne cl
        add ecx, 6
        mov edi, ecx
        mov ecx, dword ptr ds : [esi+0x7C]
        cmp ecx, edx
        mov dword ptr ss : [esp+0x10], edi
        je public_6f90bf2
        lea esp, ss:[esp]
        public_6f90be0 : nop
        mov ebx, dword ptr ds : [ecx]
        cmp dword ptr ds : [ebx+0x34], edi
        je public_6f90d08
        add ecx, 4
        cmp ecx, edx
        jne public_6f90be0
        public_6f90bf2 : nop
        mov ebp, edx
        public_6f90bf4 : nop
        cmp ebp, edx
        jne public_6f90d0f
        mov edx, dword ptr ds : [esi+0x8C]
        mov eax, dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [eax+0x48]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [esi+0x88]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x74]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [esp+0x70]
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x1C], 0
        lea edi, ds:[eax+4]
        call public_6f7ac90
        push eax
        lea eax, ss:[esp+0x4C]
        push eax
        mov ecx, edi
        call public_6f931c0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        sub esp, 0xC
        mov ebx, esp
        lea eax, ds:[esi+0x90]
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+4], ebp
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        push 2
        push eax
        mov eax, dword ptr ss : [esp+0x80]
        push eax
        call dword ptr ds : [edx+0x30]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x24], 0
        call public_6f7ac90
        push eax
        lea eax, ss:[esp+0x44]
        push eax
        mov ecx, edi
        call public_6f931c0
        mov eax, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ds : [eax+0x34], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0x88]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        call dword ptr ds : [edx+0x18]
        mov dword ptr ss : [esp+0x18], eax
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov edx, dword ptr ds : [esi+0x80]
        lea ecx, ds:[esi+0x78]
        lea eax, ss:[esp+0x14]
        push eax
        push edx
        call public_6eb5770
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ds:[esi+0x68]
        call public_6ecfc30
        mov edx, dword ptr ds : [esi]
        mov byte ptr ds : [esi+0x74], 1
        mov ecx, esi
        call dword ptr ds : [edx+0x40]
        jmp public_6f90da6
        public_6f90d08 : nop
        mov ebp, ecx
        jmp public_6f90bf4
        public_6f90d0f : nop
        mov eax, dword ptr ds : [eax+0x60]
        push 2
        push 2
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
        mov ecx, dword ptr ds : [esi+0x5C]
        call public_6f87a50
        mov eax, dword ptr ds : [esi+0x8C]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [edx+0x48]
        mov ecx, dword ptr ds : [esi+0x88]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [edx+0x74]
        mov ecx, dword ptr ss : [ebp]
        sub esp, 0xC
        mov edi, esp
        lea edx, ds:[esi+0x90]
        mov ebx, dword ptr ds : [edx]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        mov dword ptr ss : [esp+0x28], eax
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [ecx]
        push 2
        push edx
        lea edx, ss:[esp+0x60]
        push edx
        call dword ptr ds : [eax+0x30]
        mov eax, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [eax+0x34]
        push eax
        mov ecx, esi
        call public_6f8af40
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x60], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x48], offset public_6fbc7cc
        call public_6f15350
        public_6f90da6 : nop
        push 8
        mov ecx, esi
        call public_6f8b030
        mov bl, 1
        public_6f90db1 : nop
        mov ecx, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx+0x44]
        fcomp dword ptr ds : [public_6fbc29c]
        fnstsw ax
        test ah, 5
        jp public_6f90f0b
        mov ebp, dword ptr ss : [esp+0x6C]
        mov edi, dword ptr ss : [ebp+8]
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x70]
        add ebp, 4
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x24], 8
        call public_6eeca70
        cmp dword ptr ss : [esp+0x6C], edi
        je public_6f90f0b
        test bl, bl
        jne public_6f90f0b
        mov edx, dword ptr ds : [esi+0x7C]
        mov eax, dword ptr ds : [esi+0x80]
        mov ecx, edx
        cmp ecx, eax
        je public_6f90e2a
        public_6f90e15 : nop
        mov ebx, dword ptr ds : [ecx]
        mov edi, 8
        cmp dword ptr ds : [ebx+0x34], edi
        je public_6f90e31
        add ecx, 4
        cmp ecx, eax
        jne public_6f90e15
        jmp public_6f90e2f
        public_6f90e2a : nop
        mov edi, 8
        public_6f90e2f : nop
        mov ecx, eax
        public_6f90e31 : nop
        cmp ecx, eax
        jne public_6f90f0b
        mov ecx, edx
        cmp ecx, eax
        je public_6f90e4f
        nop 
        public_6f90e40 : nop
        mov ebx, dword ptr ds : [ecx]
        cmp dword ptr ds : [ebx+0x34], 6
        je public_6f90e51
        add ecx, 4
        cmp ecx, eax
        jne public_6f90e40
        public_6f90e4f : nop
        mov ecx, eax
        public_6f90e51 : nop
        cmp ecx, eax
        jne public_6f90f0b
        mov ecx, edx
        cmp ecx, eax
        je public_6f90e72
        mov edx, 7
        public_6f90e64 : nop
        mov ebx, dword ptr ds : [ecx]
        cmp dword ptr ds : [ebx+0x34], edx
        je public_6f90e74
        add ecx, 4
        cmp ecx, eax
        jne public_6f90e64
        public_6f90e72 : nop
        mov ecx, eax
        public_6f90e74 : nop
        cmp ecx, eax
        jne public_6f90f0b
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x34], 0
        call public_6eadeb0
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        lea ecx, ss:[esp+0x40]
        call public_6fa6e80
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [edx+0x10]
        mov dword ptr ss : [esp+0x68], eax
        mov dword ptr ds : [eax+0x34], edi
        mov ecx, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ds : [esi+0x88]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edx
        call dword ptr ds : [eax+0x18]
        mov dword ptr ss : [esp+0x20], eax
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov edx, dword ptr ds : [esi+0x80]
        lea ecx, ds:[esi+0x78]
        lea eax, ss:[esp+0x68]
        push eax
        push edx
        call public_6eb5770
        mov eax, dword ptr ds : [esi+0x6C]
        lea ecx, ds:[esi+0x68]
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        lea eax, ss:[esp+0x2C]
        push eax
        call public_6f1e390
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov byte ptr ds : [esi+0x74], 1
        call dword ptr ds : [edx+0x40]
        public_6f90f0b : nop
        mov ecx, dword ptr ss : [esp+0x58]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x54
        ret 8
        UNREACHABLE_TRAP(0x6f90b70)
    }
}

#undef public_6f90ba1
#undef public_6f90bb5
#undef public_6f90be0
#undef public_6f90bf2
#undef public_6f90bf4
#undef public_6f90d08
#undef public_6f90d0f
#undef public_6f90da6
#undef public_6f90db1
#undef public_6f90e15
#undef public_6f90e2a
#undef public_6f90e2f
#undef public_6f90e31
#undef public_6f90e40
#undef public_6f90e4f
#undef public_6f90e51
#undef public_6f90e64
#undef public_6f90e72
#undef public_6f90e74
#undef public_6f90f0b
