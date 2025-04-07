#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633ba90);
CLANG_FORWARD_PROC_SYMBOL(public_6347c40);
CLANG_FORWARD_PROC_SYMBOL(public_6347c80);
CLANG_FORWARD_PROC_SYMBOL(public_6348c60);
CLANG_FORWARD_PROC_SYMBOL(public_6348d80);
CLANG_FORWARD_PROC_SYMBOL(public_634b0e0);
CLANG_FORWARD_PROC_SYMBOL(public_634b600);
CLANG_FORWARD_PROC_SYMBOL(public_634b900);
CLANG_FORWARD_PROC_SYMBOL(public_634b9a0);
CLANG_FORWARD_PROC_SYMBOL(public_634b9d0);
CLANG_FORWARD_PROC_SYMBOL(public_634cfa0);
CLANG_FORWARD_PROC_SYMBOL(public_63555b0);
CLANG_FORWARD_PROC_SYMBOL(public_63556b0);
CLANG_FORWARD_PROC_SYMBOL(public_63562d0);
CLANG_FORWARD_PROC_SYMBOL(public_6356bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6358c50);
CLANG_FORWARD_PROC_SYMBOL(public_635a1e0);
CLANG_FORWARD_PROC_SYMBOL(public_635a950);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639810c);

#define public_6356c30 _public_6356c30
#define public_6356c93 _public_6356c93
#define public_6356cad _public_6356cad
#define public_6356ce1 _public_6356ce1
#define public_6356cfd _public_6356cfd
#define public_6356d28 _public_6356d28
#define public_6356d3d _public_6356d3d
#define public_6356d5e _public_6356d5e
#define public_6356d7a _public_6356d7a
#define public_6356d7c _public_6356d7c
#define public_6356da1 _public_6356da1
#define public_6356dbf _public_6356dbf
#define public_6356dc3 _public_6356dc3
#define public_6356e06 _public_6356e06
#define public_6356e2e _public_6356e2e
#define public_6356e51 _public_6356e51
#define public_6356e53 _public_6356e53
#define public_6356e9d _public_6356e9d
#define public_6356ef7 _public_6356ef7
#define public_6356f0b _public_6356f0b
#define public_6356f13 _public_6356f13

PROC_DECLARE(0x6356bc0, internal_6356bc0, public_6356bc0);
extern "C" NAKED register_t __cdecl internal_6356bc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639810c @0x6356bc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639810c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x14]
        mov ecx, eax
        shr ecx, 8
        and ecx, 3
        xor eax, 0x100
        shr eax, 8
        lea edx, ds:[ecx*8]
        and eax, 3
        sub edx, ecx
        mov ebx, dword ptr ds : [edi+edx*4+0x28]
        mov ebp, dword ptr ds : [ebx+0x9C]
        lea ecx, ds:[eax*8]
        sub ecx, eax
        mov eax, dword ptr ds : [edi+ecx*4+0x28]
        test byte ptr ss : [ebp], 0xC
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [eax+0x9C]
        mov dword ptr ss : [esp+0x10], eax
        je public_6356c30
        mov ecx, ebp
        mov ebp, eax
        mov dword ptr ss : [esp+0x10], ecx
        public_6356c30 : nop
        mov ecx, ebp
        call public_633ba90
        mov edx, dword ptr ss : [ebp+0xC]
        mov esi, eax
        lea eax, ss:[esp+0x18]
        push eax
        push edi
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x28], edx
        call public_635a950
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 8
        cmp eax, 1
        je public_6356c93
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [eax], 0
        mov eax, dword ptr ss : [esp+0x4C]
        test eax, eax
        je public_6356f13
        mov ecx, edi
        call public_635a1e0
        mov ecx, dword ptr ds : [edi+0x40]
        push ecx
        mov ecx, edi
        call public_6358c50
        jmp public_6356f13
        public_6356c93 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        test eax, eax
        je public_6356cad
        mov ecx, edi
        call public_635a1e0
        mov edx, dword ptr ds : [edi+0x40]
        push edx
        mov ecx, edi
        call public_6358c50
        public_6356cad : nop
        mov esi, dword ptr ds : [ebx+0x18]
        mov eax, dword ptr ds : [edi+0x40]
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], edi
        call public_634cfa0
        mov eax, dword ptr ds : [ebx+0x78]
        test ah, 0x20
        je public_6356ce1
        mov ecx, dword ptr ds : [esi+0xC]
        lea edx, ss:[esp+0x24]
        push edx
        push ebx
        call public_634b0e0
        public_6356ce1 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax+0x78]
        test ch, 0x20
        je public_6356cfd
        mov esi, dword ptr ds : [esi+0xC]
        lea ecx, ss:[esp+0x24]
        push ecx
        push eax
        mov ecx, esi
        call public_634b0e0
        public_6356cfd : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x44]
        xor esi, esi
        cmp eax, esi
        mov dword ptr ds : [edx], 1
        je public_6356da1
        mov esi, dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x10]
        push esi
        call public_6347c40
        mov ebx, eax
        test ebx, ebx
        je public_6356d3d
        public_6356d28 : nop
        push edi
        mov ecx, esi
        call public_634b9a0
        push edi
        mov ecx, esi
        call public_634b900
        jmp public_6356e9d
        public_6356d3d : nop
        mov ecx, dword ptr ss : [esp+0x10]
        test byte ptr ds : [ecx], 0xC
        jne public_6356d5e
        call public_633ba90
        mov ebx, eax
        test ebx, ebx
        je public_6356d5e
        mov eax, dword ptr ds : [ebx+8]
        push eax
        mov ecx, esi
        call public_63555b0
        jmp public_6356d28
        public_6356d5e : nop
        push 0xC
        call public_6391d9c
        add esp, 4
        xor ecx, ecx
        cmp eax, ecx
        je public_6356d7a
        mov word ptr ds : [eax], cx
        mov word ptr ds : [eax+2], cx
        mov dword ptr ds : [eax+4], ecx
        jmp public_6356d7c
        public_6356d7a : nop
        xor eax, eax
        public_6356d7c : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        mov ebx, eax
        mov dword ptr ds : [eax+8], esi
        call public_6347c80
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, esi
        call public_634b9d0
        jmp public_6356d28
        public_6356da1 : nop
        push 0xC
        call public_6391d9c
        add esp, 4
        cmp eax, esi
        je public_6356dbf
        mov word ptr ds : [eax], si
        mov word ptr ds : [eax+2], si
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ss : [esp+0x4C], eax
        jmp public_6356dc3
        public_6356dbf : nop
        mov dword ptr ss : [esp+0x4C], esi
        public_6356dc3 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        test byte ptr ds : [ecx], 0xC
        mov edx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], edx
        jne public_6356e06
        call public_633ba90
        mov ebx, eax
        cmp ebx, esi
        je public_6356e06
        mov eax, dword ptr ss : [esp+0x4C]
        mov esi, dword ptr ds : [ebx+8]
        push eax
        mov ecx, ebp
        mov dword ptr ds : [eax+8], esi
        call public_6347c80
        push ebp
        mov ecx, esi
        call public_634b9d0
        jmp public_6356d28
        public_6356e06 : nop
        push 0x4C
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x44], eax
        cmp eax, esi
        mov dword ptr ss : [esp+0x38], 2
        je public_6356e2e
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        mov ecx, eax
        call public_634b600
        mov esi, eax
        public_6356e2e : nop
        or ebx, 0xFFFFFFFF
        push 0xC
        mov dword ptr ss : [esp+0x3C], ebx
        call public_6391d9c
        add esp, 4
        xor ecx, ecx
        cmp eax, ecx
        je public_6356e51
        mov word ptr ds : [eax], cx
        mov word ptr ds : [eax+2], cx
        mov dword ptr ds : [eax+4], ecx
        jmp public_6356e53
        public_6356e51 : nop
        xor eax, eax
        public_6356e53 : nop
        mov edx, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ds : [edx+8], esi
        push eax
        mov ebx, eax
        mov dword ptr ds : [eax+8], esi
        call public_6347c80
        mov eax, dword ptr ss : [esp+0x4C]
        push eax
        mov ecx, ebp
        call public_6347c80
        push edi
        mov ecx, esi
        call public_634b9a0
        push edi
        mov ecx, esi
        call public_634b900
        push ebp
        mov ecx, esi
        call public_634b9d0
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, esi
        call public_634b9d0
        public_6356e9d : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push edi
        call public_63556b0
        push edi
        mov ecx, ebx
        call public_63556b0
        mov edx, dword ptr ss : [esp+0x40]
        mov ecx, edi
        mov dword ptr ds : [edx], esi
        call public_63562d0
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+0x15C]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp]
        mov ebx, dword ptr ss : [ebp+0x15C]
        or eax, edx
        test al, 0xC
        jne public_6356f13
        cmp ebx, esi
        je public_6356f13
        cmp esi, dword ptr ss : [esp+0x48]
        jne public_6356ef7
        push ebx
        mov ecx, esi
        call public_6348c60
        test ebx, ebx
        je public_6356f13
        mov ecx, ebx
        call public_6348d80
        push ebx
        jmp public_6356f0b
        public_6356ef7 : nop
        push esi
        mov ecx, ebx
        call public_6348c60
        test esi, esi
        je public_6356f13
        mov ecx, esi
        call public_6348d80
        push esi
        public_6356f0b : nop
        call public_6391d5a
        add esp, 4
        public_6356f13 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 0x10
        UNREACHABLE_TRAP(0x6356bc0)
    }
}

#undef public_6356c30
#undef public_6356c93
#undef public_6356cad
#undef public_6356ce1
#undef public_6356cfd
#undef public_6356d28
#undef public_6356d3d
#undef public_6356d5e
#undef public_6356d7a
#undef public_6356d7c
#undef public_6356da1
#undef public_6356dbf
#undef public_6356dc3
#undef public_6356e06
#undef public_6356e2e
#undef public_6356e51
#undef public_6356e53
#undef public_6356e9d
#undef public_6356ef7
#undef public_6356f0b
#undef public_6356f13
