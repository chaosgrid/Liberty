#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eae440);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4780);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6b80);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f061b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f33500);
CLANG_FORWARD_PROC_SYMBOL(public_6f348f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac2a0);

#define public_6ef47bc _public_6ef47bc
#define public_6ef47c7 _public_6ef47c7
#define public_6ef480a _public_6ef480a
#define public_6ef4826 _public_6ef4826
#define public_6ef483e _public_6ef483e
#define public_6ef4874 _public_6ef4874
#define public_6ef488f _public_6ef488f
#define public_6ef48e0 _public_6ef48e0
#define public_6ef48fd _public_6ef48fd
#define public_6ef490a _public_6ef490a
#define public_6ef4935 _public_6ef4935
#define public_6ef4940 _public_6ef4940
#define public_6ef4951 _public_6ef4951
#define public_6ef495c _public_6ef495c
#define public_6ef495e _public_6ef495e
#define public_6ef4989 _public_6ef4989
#define public_6ef49a1 _public_6ef49a1
#define public_6ef49ab _public_6ef49ab
#define public_6ef49f2 _public_6ef49f2
#define public_6ef4a8c _public_6ef4a8c

PROC_DECLARE(0x6ef4780, internal_6ef4780, public_6ef4780);
extern "C" NAKED register_t __cdecl internal_6ef4780()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac2a0 @0x6ef4782*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac2a0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x51C
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x538]
        mov ebx, dword ptr ds : [edi+0x2C]
        mov eax, dword ptr ds : [edi+0x30]
        xor ebp, ebp
        cmp ebx, eax
        mov dword ptr ss : [esp+0x14], ebp
        je public_6ef4a8c
        push esi
        jmp public_6ef47c7
        public_6ef47bc : nop
        mov ebp, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x53C]
        public_6ef47c7 : nop
        lea ecx, ss:[esp+0x28]
        call public_6f33500
        mov eax, dword ptr ss : [esp+0x548]
        xor esi, esi
        push 0x64
        mov dword ptr ss : [esp+0x538], esi
        mov dword ptr ss : [esp+0x98], eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        cmp eax, esi
        mov byte ptr ss : [esp+0x534], 1
        je public_6ef480a
        mov ecx, eax
        call public_6f061b0
        mov esi, eax
        public_6ef480a : nop
        mov ecx, dword ptr ss : [esp+0x124]
        cmp ecx, esi
        mov byte ptr ss : [esp+0x534], 0
        je public_6ef483e
        test ecx, ecx
        je public_6ef4826
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_6ef4826 : nop
        test esi, esi
        mov ecx, esi
        mov dword ptr ss : [esp+0x124], ecx
        je public_6ef483e
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x124]
        public_6ef483e : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        test ebp, ebp
        mov eax, dword ptr ds : [ebx+0x14]
        mov ecx, dword ptr ds : [eax+0x24]
        mov dword ptr ss : [esp+0x528], ecx
        jne public_6ef4874
        mov edx, dword ptr ss : [esp+0x124]
        mov eax, dword ptr ss : [esp+0x544]
        mov dword ptr ds : [edx+0x48], eax
        mov ecx, dword ptr ds : [edi+0x40]
        mov edx, dword ptr ss : [esp+0x124]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ef488f
        public_6ef4874 : nop
        mov ecx, dword ptr ss : [esp+0x124]
        test ecx, ecx
        je public_6ef488f
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x124], 0
        public_6ef488f : nop
        fild dword ptr ds : [edi+0x7C]
        mov ecx, dword ptr ds : [edi+0x2C]
        mov eax, ebp
        imul eax, 0x38
        fst dword ptr ss : [esp+0x12C]
        fadd st(0), st
        fstp dword ptr ss : [esp+0x130]
        mov esi, dword ptr ds : [eax+ecx+0x20]
        mov edi, dword ptr ds : [eax+ecx+0x1C]
        call dword ptr ds : [public_6fb3370]
        sub esi, edi
        inc esi
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        mov ebp, eax
        sar ebp, 0xF
        add ebp, edi
        test ebp, ebp
        mov dword ptr ss : [esp+0x14], 0
        jle public_6ef49f2
        mov edi, edi
        public_6ef48e0 : nop
        lea esi, ds:[ebx+0x18]
        mov ecx, esi
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6ef48fd
        mov ecx, dword ptr ds : [ebx+0x14]
        push esi
        push 0
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        jmp public_6ef490a
        public_6ef48fd : nop
        mov eax, dword ptr ds : [ebx+0x14]
        push 0
        push 0
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        public_6ef490a : nop
        call public_6f348f0
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 0x10
        test eax, eax
        jle public_6ef4935
        mov ecx, dword ptr ss : [esp+0x124]
        test ecx, ecx
        je public_6ef4935
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x124], 0
        public_6ef4935 : nop
        mov esi, dword ptr ds : [ebx+0x28]
        cmp esi, dword ptr ds : [ebx+0x2C]
        je public_6ef49ab
        lea ecx, ds:[ecx]
        public_6ef4940 : nop
        mov eax, dword ptr ss : [esp+0x7C]
        mov ecx, dword ptr ss : [esp+0x80]
        cmp eax, ecx
        je public_6ef495c
        mov edx, dword ptr ds : [esi]
        public_6ef4951 : nop
        cmp dword ptr ds : [eax], edx
        je public_6ef495e
        add eax, 4
        cmp eax, ecx
        jne public_6ef4951
        public_6ef495c : nop
        mov eax, ecx
        public_6ef495e : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6ef4989
        push esi
        push ecx
        lea ecx, ss:[esp+0x80]
        call public_6eae440
        push esi
        lea ecx, ss:[esp+0x7C]
        call public_6eb5f30
        mov dword ptr ss : [esp+0x20], eax
        mov byte ptr ss : [esp+0x24], 1
        jmp public_6ef49a1
        public_6ef4989 : nop
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x1B], 0
        call public_6fa6e80
        public_6ef49a1 : nop
        mov eax, dword ptr ds : [ebx+0x2C]
        add esi, 4
        cmp esi, eax
        jne public_6ef4940
        public_6ef49ab : nop
        mov edi, dword ptr ss : [esp+0x540]
        mov esi, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [esi+4]
        push edx
        push esi
        mov ecx, edi
        call public_6ef6b80
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x28]
        push ecx
        add eax, 8
        push eax
        call public_6ef7bd0
        mov esi, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 8
        inc esi
        inc eax
        cmp eax, ebp
        mov dword ptr ds : [edi+8], esi
        mov dword ptr ss : [esp+0x14], eax
        jl public_6ef48e0
        public_6ef49f2 : nop
        lea ecx, ss:[esp+0x140]
        mov dword ptr ss : [esp+0x534], 4
        call public_6f15350
        lea ecx, ss:[esp+0x124]
        mov byte ptr ss : [esp+0x534], 3
        call public_6f28e10
        lea ecx, ss:[esp+0xA8]
        mov byte ptr ss : [esp+0x534], 2
        call public_6eec8d0
        lea ecx, ss:[esp+0x88]
        mov dword ptr ss : [esp+0x534], 6
        call public_6ecfa90
        lea ecx, ss:[esp+0x78]
        mov byte ptr ss : [esp+0x534], 5
        call public_6eec8d0
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x534], 0xFFFFFFFF
        call public_6f28e10
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x53C]
        mov eax, dword ptr ds : [edx+0x30]
        add ebx, 0x38
        inc ecx
        cmp ebx, eax
        mov dword ptr ss : [esp+0x18], ecx
        jne public_6ef47bc
        pop esi
        public_6ef4a8c : nop
        mov ecx, dword ptr ss : [esp+0x528]
        pop edi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x528
        ret 0x10
        UNREACHABLE_TRAP(0x6ef4780)
    }
}

#undef public_6ef47bc
#undef public_6ef47c7
#undef public_6ef480a
#undef public_6ef4826
#undef public_6ef483e
#undef public_6ef4874
#undef public_6ef488f
#undef public_6ef48e0
#undef public_6ef48fd
#undef public_6ef490a
#undef public_6ef4935
#undef public_6ef4940
#undef public_6ef4951
#undef public_6ef495c
#undef public_6ef495e
#undef public_6ef4989
#undef public_6ef49a1
#undef public_6ef49ab
#undef public_6ef49f2
#undef public_6ef4a8c
