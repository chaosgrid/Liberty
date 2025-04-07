#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6560);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7d10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa1eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa1f02 _public_6fa1f02
#define public_6fa1f04 _public_6fa1f04
#define public_6fa1f0c _public_6fa1f0c
#define public_6fa1f1f _public_6fa1f1f
#define public_6fa1f2c _public_6fa1f2c
#define public_6fa1f50 _public_6fa1f50
#define public_6fa1f68 _public_6fa1f68
#define public_6fa1f72 _public_6fa1f72
#define public_6fa1f92 _public_6fa1f92
#define public_6fa1faa _public_6fa1faa
#define public_6fa1fb0 _public_6fa1fb0
#define public_6fa1fc3 _public_6fa1fc3
#define public_6fa1fd0 _public_6fa1fd0
#define public_6fa1fde _public_6fa1fde
#define public_6fa201c _public_6fa201c
#define public_6fa204a _public_6fa204a
#define public_6fa2085 _public_6fa2085
#define public_6fa2090 _public_6fa2090
#define public_6fa20a7 _public_6fa20a7
#define public_6fa20c7 _public_6fa20c7
#define public_6fa20d7 _public_6fa20d7
#define public_6fa20e7 _public_6fa20e7
#define public_6fa2106 _public_6fa2106
#define public_6fa211c _public_6fa211c
#define public_6fa2138 _public_6fa2138
#define public_6fa2154 _public_6fa2154
#define public_6fa2160 _public_6fa2160
#define public_6fa2189 _public_6fa2189
#define public_6fa21a0 _public_6fa21a0
#define public_6fa21c2 _public_6fa21c2
#define public_6fa21c5 _public_6fa21c5

PROC_DECLARE(0x6fa1eb0, internal_6fa1eb0, public_6fa1eb0);
extern "C" NAKED register_t __cdecl internal_6fa1eb0()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub edx, esi
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        add edx, eax
        cmp edx, edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6fa204a
        mov ebx, dword ptr ds : [ecx+4]
        test ebx, ebx
        je public_6fa1f02
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edi, edx
        mov ecx, edx
        jb public_6fa1f04
        public_6fa1f02 : nop
        mov ecx, edi
        public_6fa1f04 : nop
        test ebx, ebx
        jne public_6fa1f0c
        xor edx, edx
        jmp public_6fa1f1f
        public_6fa1f0c : nop
        sub esi, ebx
        mov eax, 0x2AAAAAAB
        imul esi
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa1f1f : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6fa1f2c
        xor eax, eax
        public_6fa1f2c : nop
        lea ecx, ds:[eax+eax*2]
        shl ecx, 3
        push ecx
        call public_6fa912a
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_6fa1f68
        public_6fa1f50 : nop
        push esi
        push ebp
        call public_6fa4ed0
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x18
        add esp, 8
        add ebp, 0x18
        cmp esi, eax
        jne public_6fa1f50
        public_6fa1f68 : nop
        test edi, edi
        mov esi, ebp
        jbe public_6fa1f92
        mov dword ptr ss : [esp+0x24], edi
        public_6fa1f72 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push esi
        call public_6fa4ed0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x18
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6fa1f72
        mov eax, dword ptr ss : [esp+0x20]
        public_6fa1f92 : nop
        lea ecx, ds:[edi+edi*2]
        lea ecx, ss:[ebp+ecx*8]
        mov ebp, dword ptr ds : [ebx+8]
        cmp eax, ebp
        mov esi, eax
        je public_6fa1fc3
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6fa1fb0
        public_6fa1faa : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_6fa1fb0 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6fa4ed0
        add esi, 0x18
        add esp, 8
        cmp esi, ebp
        jne public_6fa1faa
        public_6fa1fc3 : nop
        mov ebp, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, ebp
        je public_6fa1fde
        lea ecx, ds:[ecx]
        public_6fa1fd0 : nop
        mov ecx, esi
        call public_6eb7d10
        add esi, 0x18
        cmp esi, ebp
        jne public_6fa1fd0
        public_6fa1fde : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        lea eax, ds:[eax+eax*2]
        lea ecx, ds:[esi+eax*8]
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [ebx+0xC], ecx
        jne public_6fa201c
        xor edx, edx
        add edi, edx
        lea ecx, ds:[edi+edi*2]
        pop edi
        lea edx, ds:[esi+ecx*8]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6fa201c : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edi, edx
        lea ecx, ds:[edi+edi*2]
        pop edi
        lea edx, ds:[esi+ecx*8]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6fa204a : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, edi
        jae public_6fa211c
        lea eax, ds:[edi+edi*2]
        shl eax, 3
        mov dword ptr ss : [esp+0x20], eax
        add eax, ebx
        cmp ebx, esi
        mov ebp, ebx
        je public_6fa20a7
        sub eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_6fa2090
        public_6fa2085 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_6fa2090 : nop
        add eax, ebp
        push ebp
        push eax
        call public_6fa4ed0
        add ebp, 0x18
        add esp, 8
        cmp ebp, esi
        jne public_6fa2085
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa20a7 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub edi, edx
        je public_6fa20d7
        public_6fa20c7 : nop
        push ebp
        push esi
        call public_6fa4ed0
        add esp, 8
        add esi, 0x18
        dec edi
        jne public_6fa20c7
        public_6fa20d7 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [eax+8]
        cmp ebx, edi
        mov esi, ebx
        je public_6fa2106
        lea ebx, ss:[ebp+8]
        public_6fa20e7 : nop
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ss : [ebp+4]
        lea ecx, ds:[esi+8]
        push ebx
        mov dword ptr ds : [ecx-4], eax
        call public_6eb6560
        add esi, 0x18
        cmp esi, edi
        jne public_6fa20e7
        mov eax, dword ptr ss : [esp+0x10]
        public_6fa2106 : nop
        mov edx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        add edx, ecx
        pop ebp
        mov dword ptr ds : [eax+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6fa211c : nop
        test edi, edi
        jbe public_6fa21c5
        lea eax, ds:[edi+edi*2]
        shl eax, 3
        mov edi, esi
        sub edi, eax
        cmp edi, esi
        mov ebp, esi
        mov dword ptr ss : [esp+0x20], eax
        je public_6fa2154
        public_6fa2138 : nop
        push edi
        push ebp
        call public_6fa4ed0
        add edi, 0x18
        add esp, 8
        add ebp, 0x18
        cmp edi, esi
        jne public_6fa2138
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_6fa2154 : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, eax
        cmp ebx, esi
        je public_6fa2189
        nop 
        public_6fa2160 : nop
        mov edx, dword ptr ds : [esi-0x18]
        sub esi, 0x18
        sub edi, 0x18
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+4]
        push ecx
        lea ecx, ds:[edi+8]
        mov dword ptr ds : [edi+4], eax
        call public_6eb6560
        cmp esi, ebx
        jne public_6fa2160
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_6fa2189 : nop
        lea ebp, ds:[eax+ebx]
        cmp ebx, ebp
        mov esi, ebx
        je public_6fa21c2
        mov edi, dword ptr ss : [esp+0x28]
        lea ebx, ds:[edi+8]
        lea esp, ss:[esp]
        public_6fa21a0 : nop
        mov edx, dword ptr ds : [edi]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ds:[esi+8]
        push ebx
        mov dword ptr ds : [ecx-4], eax
        call public_6eb6560
        add esi, 0x18
        cmp esi, ebp
        jne public_6fa21a0
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_6fa21c2 : nop
        add dword ptr ds : [ecx+8], eax
        public_6fa21c5 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6fa1eb0)
    }
}

#undef public_6fa1f02
#undef public_6fa1f04
#undef public_6fa1f0c
#undef public_6fa1f1f
#undef public_6fa1f2c
#undef public_6fa1f50
#undef public_6fa1f68
#undef public_6fa1f72
#undef public_6fa1f92
#undef public_6fa1faa
#undef public_6fa1fb0
#undef public_6fa1fc3
#undef public_6fa1fd0
#undef public_6fa1fde
#undef public_6fa201c
#undef public_6fa204a
#undef public_6fa2085
#undef public_6fa2090
#undef public_6fa20a7
#undef public_6fa20c7
#undef public_6fa20d7
#undef public_6fa20e7
#undef public_6fa2106
#undef public_6fa211c
#undef public_6fa2138
#undef public_6fa2154
#undef public_6fa2160
#undef public_6fa2189
#undef public_6fa21a0
#undef public_6fa21c2
#undef public_6fa21c5
