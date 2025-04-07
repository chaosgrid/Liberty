#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ee2b70);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f84790);
CLANG_FORWARD_PROC_SYMBOL(public_6f849f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9e770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa02a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1b5b);

#define public_6f9e7bd _public_6f9e7bd
#define public_6f9e7d7 _public_6f9e7d7
#define public_6f9e876 _public_6f9e876
#define public_6f9e89b _public_6f9e89b
#define public_6f9e89d _public_6f9e89d
#define public_6f9e8bf _public_6f9e8bf
#define public_6f9e8d4 _public_6f9e8d4
#define public_6f9e8f8 _public_6f9e8f8
#define public_6f9e8fc _public_6f9e8fc
#define public_6f9e911 _public_6f9e911
#define public_6f9e934 _public_6f9e934
#define public_6f9e937 _public_6f9e937
#define public_6f9e961 _public_6f9e961
#define public_6f9e969 _public_6f9e969
#define public_6f9e980 _public_6f9e980
#define public_6f9e995 _public_6f9e995

PROC_DECLARE(0x6f9e770, internal_6f9e770, public_6f9e770);
extern "C" NAKED register_t __cdecl internal_6f9e770()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1b5b @0x6f9e772*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1b5b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x48
        push ebx
        push ebp
        push esi
        push edi
        lea esi, ds:[ecx+0x1C]
        add ecx, 8
        push ecx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x30], esi
        call public_6f7b0f0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x68]
        mov eax, dword ptr ds : [edx+8]
        lea edi, ds:[ecx+0x10]
        mov dword ptr ss : [esp+0x10], edi
        public_6f9e7bd : nop
        mov ebp, dword ptr ds : [edi+0x100]
        mov ebx, dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x68], eax
        cmp ebp, dword ptr ds : [edi+0x104]
        je public_6f9e911
        public_6f9e7d7 : nop
        lea ecx, ss:[esp+0x34]
        call public_6f849f0
        mov ecx, dword ptr ds : [ebx+0xCC]
        lea edx, ds:[ebx+0xC8]
        push eax
        push ecx
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, edx
        mov byte ptr ss : [esp+0x6C], 1
        call public_6fa02a0
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x60], 0
        call public_6ee2b70
        mov eax, dword ptr ds : [ebx+0xCC]
        mov eax, dword ptr ds : [eax+4]
        lea esi, ds:[eax+8]
        test esi, esi
        je public_6f9e8fc
        mov eax, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x1C]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x14], edx
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x20], eax
        fild dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        push ecx
        fmul dword ptr ds : [public_6fb4448]
        mov ecx, esi
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x18]
        fmulp 
        fadd dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        call dword ptr ds : [eax+0x2C]
        mov edi, dword ptr ss : [ebp+0x18]
        cmp edi, dword ptr ss : [ebp+0x1C]
        je public_6f9e8f8
        lea ebx, ds:[esi+4]
        public_6f9e876 : nop
        push 0x90
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        test eax, eax
        mov byte ptr ss : [esp+0x60], 2
        je public_6f9e89b
        mov ecx, eax
        call public_6f84790
        mov esi, eax
        jmp public_6f9e89d
        public_6f9e89b : nop
        xor esi, esi
        public_6f9e89d : nop
        cmp edi, 0xFFFFFFF8
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [esi+0x44], ecx
        mov edx, dword ptr ds : [edi]
        mov byte ptr ss : [esp+0x60], 0
        mov dword ptr ds : [esi+0x40], edx
        jne public_6f9e8bf
        mov dword ptr ds : [esi+0x48], 0
        mov byte ptr ds : [esi+0x4C], 0
        jmp public_6f9e8d4
        public_6f9e8bf : nop
        lea eax, ds:[edi+8]
        push eax
        lea ecx, ds:[esi+0x4C]
        push 0x40
        push ecx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [esi+0x48], eax
        public_6f9e8d4 : nop
        mov eax, dword ptr ds : [ebx+8]
        lea edx, ss:[esp+0x20]
        push edx
        push 1
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x2C], esi
        call public_6f937c0
        mov eax, dword ptr ss : [ebp+0x1C]
        add edi, 0x48
        cmp edi, eax
        jne public_6f9e876
        mov ebx, dword ptr ss : [esp+0x6C]
        public_6f9e8f8 : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_6f9e8fc : nop
        mov eax, dword ptr ds : [edi+0x104]
        add ebp, 0x24
        cmp ebp, eax
        jne public_6f9e7d7
        mov esi, dword ptr ss : [esp+0x28]
        public_6f9e911 : nop
        mov ecx, dword ptr ds : [edi+0x20]
        test ecx, ecx
        je public_6f9e980
        mov eax, dword ptr ds : [edi+0x24]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6f9e980
        mov eax, dword ptr ss : [esp+0x68]
        cmp byte ptr ds : [eax], 1
        mov edi, dword ptr ds : [edi+0x20]
        jne public_6f9e934
        mov eax, dword ptr ds : [edi]
        jmp public_6f9e937
        public_6f9e934 : nop
        mov eax, dword ptr ds : [edi+4]
        public_6f9e937 : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], eax
        call public_6fa7200
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        je public_6f9e961
        mov edx, dword ptr ss : [esp+0x18]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6f9e961
        lea eax, ss:[esp+0x20]
        jmp public_6f9e969
        public_6f9e961 : nop
        mov dword ptr ss : [esp+0x2C], ecx
        lea eax, ss:[esp+0x2C]
        public_6f9e969 : nop
        mov eax, dword ptr ds : [eax]
        add eax, 0x10
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x68]
        mov edi, dword ptr ss : [esp+0x10]
        inc eax
        jmp public_6f9e7bd
        public_6f9e980 : nop
        test ebx, ebx
        mov dword ptr ss : [esp+0x60], 0xFFFFFFFF
        je public_6f9e995
        mov eax, dword ptr ds : [ebx+4]
        lea ecx, ds:[ebx+4]
        call dword ptr ds : [eax+4]
        public_6f9e995 : nop
        mov ecx, dword ptr ss : [esp+0x58]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 8
        UNREACHABLE_TRAP(0x6f9e770)
    }
}

#undef public_6f9e7bd
#undef public_6f9e7d7
#undef public_6f9e876
#undef public_6f9e89b
#undef public_6f9e89d
#undef public_6f9e8bf
#undef public_6f9e8d4
#undef public_6f9e8f8
#undef public_6f9e8fc
#undef public_6f9e911
#undef public_6f9e934
#undef public_6f9e937
#undef public_6f9e961
#undef public_6f9e969
#undef public_6f9e980
#undef public_6f9e995
