#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_425640);
CLANG_FORWARD_PROC_SYMBOL(public_49b600);
CLANG_FORWARD_PROC_SYMBOL(public_49c260);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bcadb);

#define public_49c30c _public_49c30c
#define public_49c3a3 _public_49c3a3
#define public_49c41d _public_49c41d
#define public_49c43b _public_49c43b
#define public_49c46c _public_49c46c
#define public_49c51d _public_49c51d
#define public_49c540 _public_49c540
#define public_49c58d _public_49c58d
#define public_49c5ad _public_49c5ad
#define public_49c5c9 _public_49c5c9
#define public_49c5e0 _public_49c5e0
#define public_49c635 _public_49c635
#define public_49c660 _public_49c660
#define public_49c6bb _public_49c6bb
#define public_49c6e0 _public_49c6e0
#define public_49c71a _public_49c71a

PROC_DECLARE(0x49c260, internal_49c260, public_49c260);
extern "C" NAKED register_t __cdecl internal_49c260()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bcadb @0x49c262*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bcadb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x124
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        call public_49b600
        mov byte ptr ss : [esp+0x13], al
        mov eax, dword ptr ss : [ebp+0xD74]
        xor ebx, ebx
        cmp eax, ebx
        je public_49c71a
        lea eax, ss:[ebp+0x3D4]
        mov esi, eax
        mov ecx, 9
        lea edi, ss:[esp+0xB0]
        rep movsd
        mov ecx, ebx
        mov dword ptr ss : [esp+0xD4], ecx
        mov dword ptr ss : [esp+0x28], 0xBF0CCCCC
        mov ecx, dword ptr ss : [esp+0x28]
        mov esi, eax
        mov eax, dword ptr ds : [public_67209c]
        cmp eax, ebx
        mov dword ptr ss : [esp+0xDC], ecx
        mov edx, ebx
        mov ecx, 9
        lea edi, ss:[esp+0x110]
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0xD8], edx
        rep movsd
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        jne public_49c30c
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_49c30c : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0xB4]
        push ecx
        lea ecx, ss:[esp+0x3C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, 9
        lea esi, ss:[esp+0x110]
        lea edi, ss:[esp+0xE0]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x104], edx
        lea edx, ss:[esp+0xE0]
        push edx
        push ebx
        mov dword ptr ss : [esp+0x110], eax
        mov dword ptr ss : [esp+0x114], ecx
        call public_422690
        push 0xB71
        call public_421ed0
        push 0xB44
        call public_421ed0
        push 0xBE2
        call public_421dd0
        push 6
        push 5
        call public_4220c0
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        add esp, 0x1C
        mov esi, offset public_5d2e34
        mov eax, 0x8D
        public_49c3a3 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        cmp eax, ebx
        jne public_49c3a3
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        push 0x89
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], 0x89
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        mov dword ptr ss : [esp+0x13C], ebx
        jne public_49c41d
        mov edx, dword ptr ds : [public_6720b8]
        mov eax, dword ptr ds : [public_6720ac]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        test eax, eax
        je public_49c540
        public_49c41d : nop
        cmp dword ptr ds : [public_6720b8], ebx
        je public_49c43b
        mov eax, dword ptr ds : [public_6720ac]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6720b8 @0x49c42c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6720b8
        push eax
        call dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [public_6720b8], ebx
        public_49c43b : nop
        mov ecx, dword ptr ss : [ebp+0xD74]
        mov eax, dword ptr ds : [public_6720ac]
        mov edx, dword ptr ds : [eax]
        push ebx
/*FIXUP push offset public_6720b8 @0x49c449*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6720b8
        push ecx
        push 0x142
        push eax
        call dword ptr ds : [edx+0xC]
        test eax, eax
        je public_49c46c
        mov dword ptr ss : [esp+0x13C], 0xFFFFFFFF
        jmp public_49c5ad
        public_49c46c : nop
        xor eax, eax
        mov ecx, 0x1C
        lea edi, ss:[esp+0x40]
        rep stosd
        mov eax, 0x18
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x74], eax
        mov dword ptr ss : [esp+0x88], eax
        mov eax, dword ptr ss : [ebp+0xD6C]
        lea edx, ds:[eax+0xC]
        mov dword ptr ss : [esp+0x44], eax
        add eax, 0x10
        mov dword ptr ss : [esp+0x80], eax
        mov eax, dword ptr ss : [ebp+0xD74]
        push eax
        push ebx
        mov dword ptr ss : [esp+0xB4], eax
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[ebp+0xEC8]
        mov dword ptr ds : [ecx], ebx
        push ecx
        mov ecx, dword ptr ds : [public_6720b8]
        mov dword ptr ss : [esp+0x7C], edx
        mov edx, dword ptr ds : [public_6720ac]
        push ecx
        mov dword ptr ss : [esp+0x54], 2
        mov dword ptr ss : [esp+0x5C], 0xC
        mov dword ptr ss : [esp+0x84], 4
        mov dword ptr ss : [esp+0x98], 8
        mov dword ptr ss : [esp+0xBC], 0x142
        mov esi, dword ptr ds : [edx]
        push edx
        call dword ptr ds : [esi+0x18]
        test eax, eax
        je public_49c51d
        mov dword ptr ss : [esp+0x13C], 0xFFFFFFFF
        jmp public_49c5ad
        public_49c51d : nop
        mov ecx, dword ptr ds : [public_6720b8]
        mov eax, dword ptr ds : [public_6720ac]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        test eax, eax
        je public_49c540
        mov dword ptr ss : [esp+0x13C], 0xFFFFFFFF
        jmp public_49c5ad
        public_49c540 : nop
        mov ecx, dword ptr ss : [ebp+0xEBC]
        mov eax, dword ptr ds : [public_6720b0]
        push ecx
        mov ecx, dword ptr ss : [ebp+0xD70]
        push ecx
        lea ecx, ss:[esp+0x34]
        push ecx
        or esi, 0xFFFFFFFF
        push esi
        mov dword ptr ss : [esp+0x3C], ebx
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x18]
        test eax, eax
        je public_49c58d
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push eax
        mov dword ptr ss : [esp+0x148], esi
        call dword ptr ds : [edx+0xF0]
        jmp public_49c71a
        public_49c58d : nop
        mov ecx, dword ptr ss : [ebp+0xEC8]
        mov eax, dword ptr ds : [public_6720b0]
        mov edx, dword ptr ds : [eax]
        push ebx
        push ebx
        push ecx
        push esi
        push eax
        call dword ptr ds : [edx+0x24]
        test eax, eax
        je public_49c5c9
        mov dword ptr ss : [esp+0x13C], esi
        public_49c5ad : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push eax
        call dword ptr ds : [edx+0xF0]
        jmp public_49c71a
        public_49c5c9 : nop
        cmp dword ptr ss : [ebp+0xEB8], ebx
        mov dword ptr ss : [esp+0x30], ebx
        jle public_49c6bb
        lea ebx, ss:[ebp+0xE38]
        nop 
        public_49c5e0 : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov ecx, dword ptr ds : [edx]
        mov eax, dword ptr ds : [ebx+0x40]
        mov esi, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [ebp+eax*4+0xB68]
        push 0
        call public_425640
        mov edx, dword ptr ds : [public_5c6de0]
        push eax
        mov eax, dword ptr ds : [edx]
        push 0
        push eax
        call dword ptr ds : [esi+0x108]
        mov ecx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0xB
        push 0
        push eax
        call dword ptr ds : [edx+0xF8]
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5d2e5c
        mov eax, 1
        public_49c635 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 0
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_49c635
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5d2e94
        mov eax, 1
        public_49c660 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 1
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_49c660
        mov edx, dword ptr ds : [ebx]
        mov edi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [public_6720b4]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [ebx-0x40]
        add edx, edi
        push edx
        mov edx, dword ptr ds : [ebx-0x80]
        push edx
        mov edx, dword ptr ds : [ebx-0xC0]
        push edx
        push 4
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [ebp+0xEB8]
        inc eax
        add ebx, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x30], eax
        jl public_49c5e0
        xor ebx, ebx
        public_49c6bb : nop
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebx
        push eax
        call dword ptr ds : [ecx+0x108]
        mov edx, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [edx]
        mov esi, offset public_5d2e4c
        mov eax, 0x8D
        nop 
        public_49c6e0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        cmp eax, ebx
        jne public_49c6e0
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        mov dword ptr ss : [esp+0x148], 0xFFFFFFFF
        call dword ptr ds : [ecx+0xF0]
        public_49c71a : nop
        mov ecx, dword ptr ss : [esp+0x134]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x130
        ret 
        UNREACHABLE_TRAP(0x49c260)
    }
}

#undef public_49c30c
#undef public_49c3a3
#undef public_49c41d
#undef public_49c43b
#undef public_49c46c
#undef public_49c51d
#undef public_49c540
#undef public_49c58d
#undef public_49c5ad
#undef public_49c5c9
#undef public_49c5e0
#undef public_49c635
#undef public_49c660
#undef public_49c6bb
#undef public_49c6e0
#undef public_49c71a
