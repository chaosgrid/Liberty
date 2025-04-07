#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1baa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d318b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea20);

#define public_6d318ef _public_6d318ef
#define public_6d318f1 _public_6d318f1
#define public_6d318f9 _public_6d318f9
#define public_6d318fe _public_6d318fe
#define public_6d31920 _public_6d31920
#define public_6d31928 _public_6d31928
#define public_6d31932 _public_6d31932
#define public_6d31940 _public_6d31940
#define public_6d31949 _public_6d31949
#define public_6d31955 _public_6d31955
#define public_6d31960 _public_6d31960
#define public_6d31969 _public_6d31969
#define public_6d31973 _public_6d31973
#define public_6d3199d _public_6d3199d
#define public_6d319b7 _public_6d319b7
#define public_6d319e0 _public_6d319e0
#define public_6d319e8 _public_6d319e8
#define public_6d319f2 _public_6d319f2
#define public_6d31a10 _public_6d31a10
#define public_6d31a18 _public_6d31a18
#define public_6d31a26 _public_6d31a26
#define public_6d31a40 _public_6d31a40
#define public_6d31a4c _public_6d31a4c
#define public_6d31a5e _public_6d31a5e
#define public_6d31a77 _public_6d31a77
#define public_6d31a8e _public_6d31a8e
#define public_6d31aa0 _public_6d31aa0
#define public_6d31aaf _public_6d31aaf
#define public_6d31ac0 _public_6d31ac0
#define public_6d31acc _public_6d31acc
#define public_6d31acf _public_6d31acf

PROC_DECLARE(0x6d318b0, internal_6d318b0, public_6d318b0);
extern "C" NAKED register_t __cdecl internal_6d318b0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov edx, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx+0xC]
        push esi
        mov esi, dword ptr ds : [edx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        sub edi, ecx
        sub eax, esi
        sar edi, 2
        sar eax, 2
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], edx
        jae public_6d319b7
        mov ecx, dword ptr ds : [edx+4]
        test ecx, ecx
        je public_6d318ef
        mov eax, esi
        sub eax, ecx
        sar eax, 2
        cmp edi, eax
        jb public_6d318f1
        public_6d318ef : nop
        mov eax, edi
        public_6d318f1 : nop
        test ecx, ecx
        jne public_6d318f9
        xor esi, esi
        jmp public_6d318fe
        public_6d318f9 : nop
        sub esi, ecx
        sar esi, 2
        public_6d318fe : nop
        mov ecx, dword ptr ds : [edx]
        add eax, esi
        shl eax, 2
        push eax
        mov dword ptr ss : [esp+0x18], eax
        call public_6d1baa0
        mov ebx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ebx+4]
        mov ebp, dword ptr ss : [esp+0x1C]
        cmp edx, ebp
        mov ecx, eax
        je public_6d31932
        public_6d31920 : nop
        test ecx, ecx
        je public_6d31928
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], esi
        public_6d31928 : nop
        add edx, 4
        add ecx, 4
        cmp edx, ebp
        jne public_6d31920
        public_6d31932 : nop
        mov edx, dword ptr ss : [esp+0x20]
        cmp edx, dword ptr ss : [esp+0x24]
        je public_6d31955
        sub edx, ecx
        mov edi, edi
        public_6d31940 : nop
        test ecx, ecx
        je public_6d31949
        mov esi, dword ptr ds : [edx+ecx]
        mov dword ptr ds : [ecx], esi
        public_6d31949 : nop
        add ecx, 4
        lea esi, ds:[edx+ecx]
        cmp esi, dword ptr ss : [esp+0x24]
        jne public_6d31940
        public_6d31955 : nop
        mov esi, dword ptr ds : [ebx+8]
        cmp ebp, esi
        je public_6d31973
        mov edx, ebp
        sub edx, ecx
        public_6d31960 : nop
        test ecx, ecx
        je public_6d31969
        mov ebp, dword ptr ds : [edx+ecx]
        mov dword ptr ds : [ecx], ebp
        public_6d31969 : nop
        add ecx, 4
        lea ebp, ds:[edx+ecx]
        cmp ebp, esi
        jne public_6d31960
        public_6d31973 : nop
        mov esi, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+8]
        add esi, eax
        test edx, edx
        mov dword ptr ds : [ebx+0xC], esi
        jne public_6d3199d
        xor ecx, ecx
        mov ecx, edi
        pop edi
        pop esi
        lea ecx, ds:[eax+ecx*4]
        pop ebp
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+4], eax
        pop ebx
        add esp, 8
        ret 0xC
        public_6d3199d : nop
        sub ecx, edx
        sar ecx, 2
        add ecx, edi
        pop edi
        pop esi
        lea ecx, ds:[eax+ecx*4]
        pop ebp
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+4], eax
        pop ebx
        add esp, 8
        ret 0xC
        public_6d319b7 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        mov eax, esi
        sub eax, ebx
        sar eax, 2
        cmp eax, edi
        jae public_6d31a5e
        cmp ebx, esi
        lea ebp, ds:[edi*4]
        mov dword ptr ss : [esp+0x1C], ebp
        lea ecx, ds:[ebx+ebp]
        mov eax, ebx
        je public_6d319f2
        mov edi, edi
        public_6d319e0 : nop
        test ecx, ecx
        je public_6d319e8
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        public_6d319e8 : nop
        add eax, 4
        add ecx, 4
        cmp eax, esi
        jne public_6d319e0
        public_6d319f2 : nop
        mov ecx, dword ptr ds : [edx+8]
        mov esi, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x24]
        mov eax, ecx
        sub eax, ebx
        sar eax, 2
        lea eax, ds:[esi+eax*4]
        cmp eax, edi
        je public_6d31a26
        nop 
        lea esp, ss:[esp]
        public_6d31a10 : nop
        test ecx, ecx
        je public_6d31a18
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebp
        public_6d31a18 : nop
        add eax, 4
        add ecx, 4
        cmp eax, edi
        jne public_6d31a10
        mov ebp, dword ptr ss : [esp+0x1C]
        public_6d31a26 : nop
        mov ecx, dword ptr ds : [edx+8]
        sub ecx, ebx
        sar ecx, 2
        lea ecx, ds:[esi+ecx*4]
        cmp esi, ecx
        mov eax, esi
        je public_6d31a4c
        sub ebx, esi
        lea esp, ss:[esp]
        public_6d31a40 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ebx+eax], esi
        add eax, 4
        cmp eax, ecx
        jne public_6d31a40
        public_6d31a4c : nop
        mov eax, dword ptr ds : [edx+8]
        pop edi
        pop esi
        add eax, ebp
        pop ebp
        mov dword ptr ds : [edx+8], eax
        pop ebx
        add esp, 8
        ret 0xC
        public_6d31a5e : nop
        test edi, edi
        jbe public_6d31acf
        lea eax, ds:[edi*4]
        mov edi, esi
        sub edi, eax
        cmp edi, esi
        mov ebp, esi
        mov dword ptr ss : [esp+0x1C], eax
        je public_6d31a8e
        public_6d31a77 : nop
        push edi
        push ebp
        mov ecx, edx
        call public_6d3ea20
        mov edx, dword ptr ss : [esp+0x10]
        add edi, 4
        add ebp, 4
        cmp edi, esi
        jne public_6d31a77
        public_6d31a8e : nop
        mov ecx, dword ptr ds : [edx+8]
        mov esi, dword ptr ss : [esp+0x1C]
        mov eax, ecx
        sub eax, esi
        cmp ebx, eax
        je public_6d31aaf
        lea ecx, ds:[ecx]
        public_6d31aa0 : nop
        mov edi, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, ebx
        mov dword ptr ds : [ecx], edi
        jne public_6d31aa0
        public_6d31aaf : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        cmp eax, ecx
        je public_6d31acc
        sub ebx, eax
        lea ecx, ds:[ecx]
        public_6d31ac0 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ebx+eax], edi
        add eax, 4
        cmp eax, ecx
        jne public_6d31ac0
        public_6d31acc : nop
        add dword ptr ds : [edx+8], esi
        public_6d31acf : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6d318b0)
    }
}

#undef public_6d318ef
#undef public_6d318f1
#undef public_6d318f9
#undef public_6d318fe
#undef public_6d31920
#undef public_6d31928
#undef public_6d31932
#undef public_6d31940
#undef public_6d31949
#undef public_6d31955
#undef public_6d31960
#undef public_6d31969
#undef public_6d31973
#undef public_6d3199d
#undef public_6d319b7
#undef public_6d319e0
#undef public_6d319e8
#undef public_6d319f2
#undef public_6d31a10
#undef public_6d31a18
#undef public_6d31a26
#undef public_6d31a40
#undef public_6d31a4c
#undef public_6d31a5e
#undef public_6d31a77
#undef public_6d31a8e
#undef public_6d31aa0
#undef public_6d31aaf
#undef public_6d31ac0
#undef public_6d31acc
#undef public_6d31acf
