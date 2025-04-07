#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eae680);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2060);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eae6d4 _public_6eae6d4
#define public_6eae6d6 _public_6eae6d6
#define public_6eae6de _public_6eae6de
#define public_6eae6f1 _public_6eae6f1
#define public_6eae6fe _public_6eae6fe
#define public_6eae720 _public_6eae720
#define public_6eae733 _public_6eae733
#define public_6eae741 _public_6eae741
#define public_6eae750 _public_6eae750
#define public_6eae765 _public_6eae765
#define public_6eae76b _public_6eae76b
#define public_6eae790 _public_6eae790
#define public_6eae7a7 _public_6eae7a7
#define public_6eae7b1 _public_6eae7b1
#define public_6eae7f0 _public_6eae7f0
#define public_6eae81f _public_6eae81f
#define public_6eae856 _public_6eae856
#define public_6eae86d _public_6eae86d
#define public_6eae877 _public_6eae877
#define public_6eae8a0 _public_6eae8a0
#define public_6eae8b7 _public_6eae8b7
#define public_6eae8bd _public_6eae8bd
#define public_6eae8c4 _public_6eae8c4
#define public_6eae8d3 _public_6eae8d3
#define public_6eae8e9 _public_6eae8e9
#define public_6eae902 _public_6eae902
#define public_6eae919 _public_6eae919
#define public_6eae923 _public_6eae923
#define public_6eae930 _public_6eae930
#define public_6eae942 _public_6eae942
#define public_6eae950 _public_6eae950
#define public_6eae95f _public_6eae95f
#define public_6eae966 _public_6eae966

PROC_DECLARE(0x6eae680, internal_6eae680, public_6eae680);
extern "C" NAKED register_t __cdecl internal_6eae680()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        mov esi, ecx
        mov ebx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, ebx
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        push edi
        mov dword ptr ss : [esp+0x10], esi
        jae public_6eae81f
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        je public_6eae6d4
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp ebp, edx
        mov ecx, edx
        jb public_6eae6d6
        public_6eae6d4 : nop
        mov ecx, ebp
        public_6eae6d6 : nop
        test edi, edi
        jne public_6eae6de
        xor edx, edx
        jmp public_6eae6f1
        public_6eae6de : nop
        sub ebx, edi
        mov eax, 0x38E38E39
        imul ebx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6eae6f1 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_6eae6fe
        xor eax, eax
        public_6eae6fe : nop
        lea ecx, ds:[eax+eax*8]
        shl ecx, 2
        push ecx
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], eax
        mov edx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, ecx
        je public_6eae741
        mov edi, edi
        public_6eae720 : nop
        test edx, edx
        je public_6eae733
        mov ecx, 9
        mov esi, eax
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x10]
        public_6eae733 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, 0x24
        add edx, 0x24
        cmp eax, ecx
        jne public_6eae720
        public_6eae741 : nop
        test ebp, ebp
        mov eax, edx
        jbe public_6eae76b
        mov ebx, ebp
        lea esp, ss:[esp]
        public_6eae750 : nop
        test eax, eax
        je public_6eae765
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, 9
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x10]
        public_6eae765 : nop
        add eax, 0x24
        dec ebx
        jne public_6eae750
        public_6eae76b : nop
        mov edi, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x1C]
        lea ecx, ss:[ebp+ebp*8]
        shl ecx, 2
        cmp eax, edi
        lea ebx, ds:[ecx+edx]
        mov dword ptr ss : [esp+0x24], edi
        je public_6eae7b1
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        sub eax, edx
        add eax, ecx
        public_6eae790 : nop
        test ebx, ebx
        je public_6eae7a7
        mov ecx, 9
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x24]
        public_6eae7a7 : nop
        add eax, 0x24
        add ebx, 0x24
        cmp eax, edi
        jne public_6eae790
        public_6eae7b1 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x18]
        lea eax, ds:[eax+eax*8]
        lea ecx, ds:[edi+eax*4]
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+0xC], ecx
        jne public_6eae7f0
        xor edx, edx
        add ebp, edx
        lea ecx, ss:[ebp+ebp*8]
        lea edx, ds:[edi+ecx*4]
        mov dword ptr ds : [esi+4], edi
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6eae7f0 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add ebp, edx
        lea ecx, ss:[ebp+ebp*8]
        lea edx, ds:[edi+ecx*4]
        mov dword ptr ds : [esi+4], edi
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6eae81f : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_6eae8e9
        lea ecx, ss:[ebp+ebp*8]
        shl ecx, 2
        cmp edi, ebx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ds:[ecx+edi]
        je public_6eae877
        mov edx, eax
        sub edx, ecx
        public_6eae856 : nop
        test eax, eax
        je public_6eae86d
        mov ecx, 9
        mov esi, edx
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x10]
        public_6eae86d : nop
        add edx, 0x24
        add eax, 0x24
        cmp edx, ebx
        jne public_6eae856
        public_6eae877 : nop
        mov ebx, dword ptr ds : [esi+8]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub ebp, edx
        mov eax, ebp
        mov ebp, dword ptr ss : [esp+0x24]
        je public_6eae8bd
        lea esp, ss:[esp]
        public_6eae8a0 : nop
        test ebx, ebx
        je public_6eae8b7
        mov ecx, 9
        mov esi, ebp
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x10]
        public_6eae8b7 : nop
        add ebx, 0x24
        dec eax
        jne public_6eae8a0
        public_6eae8bd : nop
        mov ebx, dword ptr ds : [esi+8]
        cmp edi, ebx
        je public_6eae8d3
        public_6eae8c4 : nop
        push ebp
        mov ecx, edi
        call public_6eb2060
        add edi, 0x24
        cmp edi, ebx
        jne public_6eae8c4
        public_6eae8d3 : nop
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+0x20]
        pop edi
        add eax, edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6eae8e9 : nop
        test ebp, ebp
        jbe public_6eae966
        lea ebp, ss:[ebp+ebp*8]
        shl ebp, 2
        mov eax, ebx
        sub eax, ebp
        cmp eax, ebx
        mov edx, ebx
        je public_6eae923
        public_6eae902 : nop
        test edx, edx
        je public_6eae919
        mov ecx, 9
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x10]
        public_6eae919 : nop
        add eax, 0x24
        add edx, 0x24
        cmp eax, ebx
        jne public_6eae902
        public_6eae923 : nop
        mov ebx, dword ptr ds : [esi+8]
        mov esi, ebx
        sub esi, ebp
        cmp edi, esi
        je public_6eae942
        mov edi, edi
        public_6eae930 : nop
        sub esi, 0x24
        sub ebx, 0x24
        push esi
        mov ecx, ebx
        call public_6eb2060
        cmp esi, edi
        jne public_6eae930
        public_6eae942 : nop
        lea ebx, ds:[edi+ebp]
        cmp edi, ebx
        mov esi, edi
        je public_6eae95f
        mov edi, dword ptr ss : [esp+0x24]
        nop 
        public_6eae950 : nop
        push edi
        mov ecx, esi
        call public_6eb2060
        add esi, 0x24
        cmp esi, ebx
        jne public_6eae950
        public_6eae95f : nop
        mov eax, dword ptr ss : [esp+0x10]
        add dword ptr ds : [eax+8], ebp
        public_6eae966 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6eae680)
    }
}

#undef public_6eae6d4
#undef public_6eae6d6
#undef public_6eae6de
#undef public_6eae6f1
#undef public_6eae6fe
#undef public_6eae720
#undef public_6eae733
#undef public_6eae741
#undef public_6eae750
#undef public_6eae765
#undef public_6eae76b
#undef public_6eae790
#undef public_6eae7a7
#undef public_6eae7b1
#undef public_6eae7f0
#undef public_6eae81f
#undef public_6eae856
#undef public_6eae86d
#undef public_6eae877
#undef public_6eae8a0
#undef public_6eae8b7
#undef public_6eae8bd
#undef public_6eae8c4
#undef public_6eae8d3
#undef public_6eae8e9
#undef public_6eae902
#undef public_6eae919
#undef public_6eae923
#undef public_6eae930
#undef public_6eae942
#undef public_6eae950
#undef public_6eae95f
#undef public_6eae966
