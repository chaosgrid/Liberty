#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_6290530);
CLANG_FORWARD_PROC_SYMBOL(public_62b54f0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62b5524 _public_62b5524
#define public_62b5526 _public_62b5526
#define public_62b552e _public_62b552e
#define public_62b5533 _public_62b5533
#define public_62b553f _public_62b553f
#define public_62b5564 _public_62b5564
#define public_62b5578 _public_62b5578
#define public_62b5582 _public_62b5582
#define public_62b559e _public_62b559e
#define public_62b55b6 _public_62b55b6
#define public_62b55c0 _public_62b55c0
#define public_62b55d3 _public_62b55d3
#define public_62b55e1 _public_62b55e1
#define public_62b55ef _public_62b55ef
#define public_62b562f _public_62b562f
#define public_62b564c _public_62b564c
#define public_62b567a _public_62b567a
#define public_62b5680 _public_62b5680
#define public_62b5697 _public_62b5697
#define public_62b56b0 _public_62b56b0
#define public_62b56c4 _public_62b56c4
#define public_62b56d0 _public_62b56d0
#define public_62b56e7 _public_62b56e7
#define public_62b56e9 _public_62b56e9
#define public_62b56f9 _public_62b56f9
#define public_62b5700 _public_62b5700
#define public_62b5716 _public_62b5716
#define public_62b5730 _public_62b5730
#define public_62b5754 _public_62b5754
#define public_62b5760 _public_62b5760
#define public_62b577d _public_62b577d
#define public_62b577f _public_62b577f
#define public_62b578f _public_62b578f
#define public_62b5793 _public_62b5793
#define public_62b57a0 _public_62b57a0
#define public_62b57b6 _public_62b57b6
#define public_62b57b8 _public_62b57b8
#define public_62b57c8 _public_62b57c8
#define public_62b57cf _public_62b57cf
#define public_62b57d2 _public_62b57d2

PROC_DECLARE(0x62b54f0, internal_62b54f0, public_62b54f0);
extern "C" NAKED register_t __cdecl internal_62b54f0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub eax, esi
        sar eax, 3
        cmp eax, ebp
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_62b564c
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_62b5524
        mov eax, esi
        sub eax, ecx
        sar eax, 3
        cmp ebp, eax
        jb public_62b5526
        public_62b5524 : nop
        mov eax, ebp
        public_62b5526 : nop
        test ecx, ecx
        jne public_62b552e
        xor esi, esi
        jmp public_62b5533
        public_62b552e : nop
        sub esi, ecx
        sar esi, 3
        public_62b5533 : nop
        add eax, esi
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_62b553f
        xor eax, eax
        public_62b553f : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6391d9c
        mov edx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edx+4]
        mov ebx, dword ptr ss : [esp+0x20]
        add esp, 4
        cmp esi, ebx
        mov dword ptr ss : [esp+0x20], eax
        mov edi, eax
        je public_62b5578
        public_62b5564 : nop
        push esi
        push edi
        call public_6290530
        add esi, 8
        add esp, 8
        add edi, 8
        cmp esi, ebx
        jne public_62b5564
        public_62b5578 : nop
        test ebp, ebp
        mov esi, edi
        jbe public_62b559e
        mov dword ptr ss : [esp+0x1C], ebp
        public_62b5582 : nop
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        push esi
        call public_6290530
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        add esi, 8
        dec eax
        mov dword ptr ss : [esp+0x1C], eax
        jne public_62b5582
        public_62b559e : nop
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edi+ebp*8]
        mov edi, dword ptr ds : [ecx+8]
        cmp ebx, edi
        mov esi, ebx
        je public_62b55d3
        sub eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_62b55c0
        public_62b55b6 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea ebx, ds:[ebx]
        public_62b55c0 : nop
        add eax, esi
        push esi
        push eax
        call public_6290530
        add esi, 8
        add esp, 8
        cmp esi, edi
        jne public_62b55b6
        public_62b55d3 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [eax+8]
        mov esi, dword ptr ds : [eax+4]
        cmp esi, edi
        je public_62b55ef
        public_62b55e1 : nop
        mov ecx, esi
        call public_62881d0
        add esi, 8
        cmp esi, edi
        jne public_62b55e1
        public_62b55ef : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_6391d5a
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ds:[esi+ecx*8]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [eax+4]
        add esp, 4
        test edx, edx
        jne public_62b562f
        xor ecx, ecx
        mov ecx, ebp
        pop edi
        lea ecx, ds:[esi+ecx*8]
        mov dword ptr ds : [eax+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        add esp, 8
        ret 0xC
        public_62b562f : nop
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, edx
        sar ecx, 3
        add ecx, ebp
        pop edi
        lea ecx, ds:[esi+ecx*8]
        mov dword ptr ds : [eax+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        add esp, 8
        ret 0xC
        public_62b564c : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        mov edx, esi
        sub edx, ebx
        sar edx, 3
        cmp edx, ebp
        jae public_62b5716
        lea eax, ds:[ebp*8]
        mov dword ptr ss : [esp+0x20], eax
        add eax, ebx
        cmp ebx, esi
        mov edi, ebx
        je public_62b5697
        sub eax, ebx
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_62b5680
        public_62b567a : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edi, edi
        public_62b5680 : nop
        add eax, edi
        push edi
        push eax
        call public_6290530
        add edi, 8
        add esp, 8
        cmp edi, esi
        jne public_62b567a
        mov ecx, dword ptr ss : [esp+0x10]
        public_62b5697 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov eax, esi
        sub eax, ebx
        sar eax, 3
        sub ebp, eax
        mov edi, ebp
        mov ebp, dword ptr ss : [esp+0x24]
        je public_62b56c4
        nop 
        lea esp, ss:[esp]
        public_62b56b0 : nop
        push ebp
        push esi
        call public_6290530
        add esp, 8
        add esi, 8
        dec edi
        jne public_62b56b0
        mov ecx, dword ptr ss : [esp+0x10]
        public_62b56c4 : nop
        mov esi, dword ptr ds : [ecx+8]
        cmp ebx, esi
        je public_62b5700
        nop 
        lea esp, ss:[esp]
        public_62b56d0 : nop
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        je public_62b56e7
        add eax, 0xFFFFFF64
        test eax, eax
        je public_62b56e7
        add eax, 0x9C
        jmp public_62b56e9
        public_62b56e7 : nop
        xor eax, eax
        public_62b56e9 : nop
        cmp eax, dword ptr ds : [ebx]
        je public_62b56f9
        push eax
        mov ecx, ebx
        call public_6341610
        mov ecx, dword ptr ss : [esp+0x10]
        public_62b56f9 : nop
        add ebx, 8
        cmp ebx, esi
        jne public_62b56d0
        public_62b5700 : nop
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        add esp, 8
        ret 0xC
        public_62b5716 : nop
        test ebp, ebp
        jbe public_62b57d2
        shl ebp, 3
        mov edi, esi
        sub edi, ebp
        cmp edi, esi
        mov dword ptr ss : [esp+0x1C], esi
        je public_62b5754
        lea ecx, ds:[ecx]
        public_62b5730 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push edi
        push eax
        call public_6290530
        mov edx, dword ptr ss : [esp+0x24]
        add edx, 8
        add edi, 8
        add esp, 8
        cmp edi, esi
        mov dword ptr ss : [esp+0x1C], edx
        jne public_62b5730
        mov ecx, dword ptr ss : [esp+0x10]
        public_62b5754 : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, ebp
        cmp ebx, esi
        je public_62b5793
        nop 
        public_62b5760 : nop
        mov eax, dword ptr ds : [esi-8]
        sub esi, 8
        sub edi, 8
        test eax, eax
        je public_62b577d
        add eax, 0xFFFFFF64
        test eax, eax
        je public_62b577d
        add eax, 0x9C
        jmp public_62b577f
        public_62b577d : nop
        xor eax, eax
        public_62b577f : nop
        cmp eax, dword ptr ds : [edi]
        je public_62b578f
        push eax
        mov ecx, edi
        call public_6341610
        mov ecx, dword ptr ss : [esp+0x10]
        public_62b578f : nop
        cmp esi, ebx
        jne public_62b5760
        public_62b5793 : nop
        lea esi, ds:[ebx+ebp]
        cmp ebx, esi
        je public_62b57cf
        mov edi, dword ptr ss : [esp+0x24]
        mov edi, edi
        public_62b57a0 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_62b57b6
        add eax, 0xFFFFFF64
        test eax, eax
        je public_62b57b6
        add eax, 0x9C
        jmp public_62b57b8
        public_62b57b6 : nop
        xor eax, eax
        public_62b57b8 : nop
        cmp eax, dword ptr ds : [ebx]
        je public_62b57c8
        push eax
        mov ecx, ebx
        call public_6341610
        mov ecx, dword ptr ss : [esp+0x10]
        public_62b57c8 : nop
        add ebx, 8
        cmp ebx, esi
        jne public_62b57a0
        public_62b57cf : nop
        add dword ptr ds : [ecx+8], ebp
        public_62b57d2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x62b54f0)
    }
}

#undef public_62b5524
#undef public_62b5526
#undef public_62b552e
#undef public_62b5533
#undef public_62b553f
#undef public_62b5564
#undef public_62b5578
#undef public_62b5582
#undef public_62b559e
#undef public_62b55b6
#undef public_62b55c0
#undef public_62b55d3
#undef public_62b55e1
#undef public_62b55ef
#undef public_62b562f
#undef public_62b564c
#undef public_62b567a
#undef public_62b5680
#undef public_62b5697
#undef public_62b56b0
#undef public_62b56c4
#undef public_62b56d0
#undef public_62b56e7
#undef public_62b56e9
#undef public_62b56f9
#undef public_62b5700
#undef public_62b5716
#undef public_62b5730
#undef public_62b5754
#undef public_62b5760
#undef public_62b577d
#undef public_62b577f
#undef public_62b578f
#undef public_62b5793
#undef public_62b57a0
#undef public_62b57b6
#undef public_62b57b8
#undef public_62b57c8
#undef public_62b57cf
#undef public_62b57d2
