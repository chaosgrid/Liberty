#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec38e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec3b60);
CLANG_FORWARD_PROC_SYMBOL(public_6ec3fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec5270);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb170);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ec38f2 _public_6ec38f2
#define public_6ec3908 _public_6ec3908
#define public_6ec391c _public_6ec391c
#define public_6ec3932 _public_6ec3932
#define public_6ec3974 _public_6ec3974
#define public_6ec3976 _public_6ec3976
#define public_6ec3987 _public_6ec3987
#define public_6ec3a13 _public_6ec3a13
#define public_6ec3a72 _public_6ec3a72
#define public_6ec3a8a _public_6ec3a8a
#define public_6ec3a9a _public_6ec3a9a
#define public_6ec3ac3 _public_6ec3ac3
#define public_6ec3adc _public_6ec3adc
#define public_6ec3ae7 _public_6ec3ae7
#define public_6ec3afd _public_6ec3afd
#define public_6ec3b0d _public_6ec3b0d
#define public_6ec3b40 _public_6ec3b40
#define public_6ec3b55 _public_6ec3b55
#define public_6ec3b58 _public_6ec3b58

PROC_DECLARE(0x6ec38e0, internal_6ec38e0, public_6ec38e0);
extern "C" NAKED register_t __cdecl internal_6ec38e0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr ds : [ebx+4]
        test edi, edi
        jne public_6ec38f2
        xor edx, edx
        jmp public_6ec3908
        public_6ec38f2 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ec3908 : nop
        mov esi, dword ptr ss : [esp+0x18]
        cmp edx, esi
        jae public_6ec3b0d
        test edi, edi
        jne public_6ec391c
        xor edx, edx
        jmp public_6ec3932
        public_6ec391c : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6ec3932 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub esi, edx
        mov edx, dword ptr ds : [ebx+0xC]
        sub edx, ecx
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, esi
        mov ebp, ecx
        jae public_6ec3a13
        test edi, edi
        je public_6ec3974
        sub ecx, edi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp esi, edx
        mov edi, edx
        jb public_6ec3976
        public_6ec3974 : nop
        mov edi, esi
        public_6ec3976 : nop
        mov ecx, ebx
        call public_6ec3b60
        add eax, edi
        mov dword ptr ss : [esp+0x10], eax
        jns public_6ec3987
        xor eax, eax
        public_6ec3987 : nop
        lea edx, ds:[eax+eax*4]
        shl edx, 2
        push edx
        call public_6ed0c5c
        add esp, 4
        mov edi, eax
        mov eax, dword ptr ds : [ebx+4]
        push edi
        push ebp
        push eax
        mov ecx, ebx
        call public_6ec3fa0
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push esi
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x24], eax
        call public_6ec5270
        mov eax, dword ptr ss : [esp+0x18]
        lea edx, ds:[esi+esi*4]
        lea ecx, ds:[eax+edx*4]
        mov edx, dword ptr ds : [ebx+8]
        push ecx
        push edx
        push ebp
        mov ecx, ebx
        call public_6ec3fa0
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        mov ecx, ebx
        call public_6ecb170
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_6ed0c50
        mov eax, dword ptr ss : [esp+0x14]
        lea eax, ds:[eax+eax*4]
        lea ecx, ds:[edi+eax*4]
        mov dword ptr ds : [ebx+0xC], ecx
        add esp, 4
        mov ecx, ebx
        call public_6ec3b60
        add eax, esi
        lea edx, ds:[eax+eax*4]
        lea eax, ds:[edi+edx*4]
        mov dword ptr ds : [ebx+4], edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        pop ecx
        ret 8
        public_6ec3a13 : nop
        mov edx, ecx
        sub edx, ebp
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, esi
        jae public_6ec3a9a
        lea edi, ds:[esi+esi*4]
        shl edi, 2
        lea edx, ds:[edi+ebp]
        push edx
        push ecx
        push ebp
        mov ecx, ebx
        mov dword ptr ss : [esp+0x24], edi
        call public_6ec3fa0
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        mov edx, ecx
        sub edx, ebp
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        sub esi, edx
        push esi
        push ecx
        mov ecx, ebx
        call public_6ec5270
        mov eax, dword ptr ds : [ebx+8]
        cmp ebp, eax
        je public_6ec3a8a
        public_6ec3a72 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov edi, ebp
        add ebp, 0x14
        cmp ebp, eax
        mov ecx, 5
        rep movsd
        jne public_6ec3a72
        mov edi, dword ptr ss : [esp+0x18]
        public_6ec3a8a : nop
        mov eax, dword ptr ds : [ebx+8]
        add eax, edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        pop ecx
        ret 8
        public_6ec3a9a : nop
        test esi, esi
        jbe public_6ec3b58
        push ecx
        lea esi, ds:[esi+esi*4]
        push ecx
        shl esi, 2
        sub ecx, esi
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x24], esi
        call public_6ec3fa0
        mov edx, dword ptr ds : [ebx+8]
        mov eax, edx
        sub eax, esi
        cmp ebp, eax
        je public_6ec3adc
        public_6ec3ac3 : nop
        sub eax, 0x14
        sub edx, 0x14
        cmp eax, ebp
        mov ecx, 5
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_6ec3ac3
        mov esi, dword ptr ss : [esp+0x18]
        public_6ec3adc : nop
        lea eax, ds:[esi+ebp]
        cmp ebp, eax
        je public_6ec3afd
        mov edx, dword ptr ss : [esp+0x1C]
        public_6ec3ae7 : nop
        mov edi, ebp
        add ebp, 0x14
        cmp ebp, eax
        mov ecx, 5
        mov esi, edx
        rep movsd
        jne public_6ec3ae7
        mov esi, dword ptr ss : [esp+0x18]
        public_6ec3afd : nop
        mov eax, dword ptr ds : [ebx+8]
        pop edi
        add eax, esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        pop ecx
        ret 8
        public_6ec3b0d : nop
        test edi, edi
        je public_6ec3b58
        mov ebp, dword ptr ds : [ebx+8]
        mov ecx, ebp
        sub ecx, edi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp esi, edx
        jae public_6ec3b58
        mov eax, ebp
        cmp eax, ebp
        lea edx, ds:[esi+esi*4]
        lea edx, ds:[edi+edx*4]
        je public_6ec3b55
        lea esp, ss:[esp]
        public_6ec3b40 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x14
        mov ecx, 5
        add edx, 0x14
        cmp eax, ebp
        rep movsd
        jne public_6ec3b40
        public_6ec3b55 : nop
        mov dword ptr ds : [ebx+8], edx
        public_6ec3b58 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ec38e0)
    }
}

#undef public_6ec38f2
#undef public_6ec3908
#undef public_6ec391c
#undef public_6ec3932
#undef public_6ec3974
#undef public_6ec3976
#undef public_6ec3987
#undef public_6ec3a13
#undef public_6ec3a72
#undef public_6ec3a8a
#undef public_6ec3a9a
#undef public_6ec3ac3
#undef public_6ec3adc
#undef public_6ec3ae7
#undef public_6ec3afd
#undef public_6ec3b0d
#undef public_6ec3b40
#undef public_6ec3b55
#undef public_6ec3b58
