#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57eec0);
CLANG_FORWARD_PROC_SYMBOL(public_57fc60);
CLANG_FORWARD_PROC_SYMBOL(public_57fcb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_57ef10 _public_57ef10
#define public_57ef12 _public_57ef12
#define public_57ef1a _public_57ef1a
#define public_57ef2c _public_57ef2c
#define public_57ef39 _public_57ef39
#define public_57ef60 _public_57ef60
#define public_57ef78 _public_57ef78
#define public_57ef82 _public_57ef82
#define public_57efa2 _public_57efa2
#define public_57efb9 _public_57efb9
#define public_57efc0 _public_57efc0
#define public_57efd3 _public_57efd3
#define public_57f011 _public_57f011
#define public_57f03e _public_57f03e
#define public_57f078 _public_57f078
#define public_57f080 _public_57f080
#define public_57f097 _public_57f097
#define public_57f0b6 _public_57f0b6
#define public_57f0c6 _public_57f0c6
#define public_57f0d7 _public_57f0d7
#define public_57f0f0 _public_57f0f0
#define public_57f112 _public_57f112
#define public_57f128 _public_57f128
#define public_57f146 _public_57f146
#define public_57f16a _public_57f16a
#define public_57f175 _public_57f175
#define public_57f194 _public_57f194
#define public_57f1b0 _public_57f1b0
#define public_57f1c0 _public_57f1c0
#define public_57f1cf _public_57f1cf
#define public_57f1d6 _public_57f1d6

PROC_DECLARE(0x57eec0, internal_57eec0, public_57eec0);
extern "C" NAKED register_t __cdecl internal_57eec0()
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
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        add edx, eax
        cmp edx, edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_57f03e
        mov ebx, dword ptr ds : [ecx+4]
        test ebx, ebx
        je public_57ef10
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edi, edx
        mov ecx, edx
        jb public_57ef12
        public_57ef10 : nop
        mov ecx, edi
        public_57ef12 : nop
        test ebx, ebx
        jne public_57ef1a
        xor edx, edx
        jmp public_57ef2c
        public_57ef1a : nop
        sub esi, ebx
        mov eax, 0x2AAAAAAB
        imul esi
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_57ef2c : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_57ef39
        xor eax, eax
        public_57ef39 : nop
        lea ecx, ds:[eax+eax*2]
        shl ecx, 2
        push ecx
        call public_5b7e84
        mov ebp, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_57ef78
        lea ecx, ds:[ecx]
        public_57ef60 : nop
        push esi
        push ebx
        call public_57fc60
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0xC
        add esp, 8
        add ebx, 0xC
        cmp esi, eax
        jne public_57ef60
        public_57ef78 : nop
        test edi, edi
        mov esi, ebx
        jbe public_57efa2
        mov dword ptr ss : [esp+0x24], edi
        public_57ef82 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push esi
        call public_57fc60
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0xC
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_57ef82
        mov eax, dword ptr ss : [esp+0x20]
        public_57efa2 : nop
        lea ecx, ds:[edi+edi*2]
        lea ecx, ds:[ebx+ecx*4]
        mov ebx, dword ptr ss : [ebp+8]
        cmp eax, ebx
        mov esi, eax
        je public_57efd3
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_57efc0
        public_57efb9 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        lea ecx, ds:[ecx]
        public_57efc0 : nop
        add ecx, esi
        push esi
        push ecx
        call public_57fc60
        add esi, 0xC
        add esp, 8
        cmp esi, ebx
        jne public_57efb9
        public_57efd3 : nop
        mov edx, dword ptr ss : [ebp+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        lea eax, ds:[eax+eax*2]
        lea ecx, ds:[esi+eax*4]
        mov eax, dword ptr ss : [ebp+4]
        add esp, 4
        test eax, eax
        mov dword ptr ss : [ebp+0xC], ecx
        jne public_57f011
        xor edx, edx
        add edi, edx
        lea ecx, ds:[edi+edi*2]
        pop edi
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ss : [ebp+4], esi
        pop esi
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_57f011 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edi, edx
        lea ecx, ds:[edi+edi*2]
        pop edi
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ss : [ebp+4], esi
        pop esi
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_57f03e : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, edi
        jae public_57f128
        lea eax, ds:[edi+edi*2]
        shl eax, 2
        mov dword ptr ss : [esp+0x24], eax
        add eax, ebx
        cmp ebx, esi
        mov ebp, ebx
        je public_57f097
        sub eax, ebx
        mov dword ptr ss : [esp+0x20], eax
        jmp public_57f080
        public_57f078 : nop
        mov eax, dword ptr ss : [esp+0x20]
        lea esp, ss:[esp]
        public_57f080 : nop
        add eax, ebp
        push ebp
        push eax
        call public_57fc60
        add ebp, 0xC
        add esp, 8
        cmp ebp, esi
        jne public_57f078
        mov ecx, dword ptr ss : [esp+0x10]
        public_57f097 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub edi, edx
        je public_57f0c6
        public_57f0b6 : nop
        push ebp
        push esi
        call public_57fc60
        add esp, 8
        add esi, 0xC
        dec edi
        jne public_57f0b6
        public_57f0c6 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax+8]
        cmp ebx, edx
        mov ecx, ebx
        je public_57f112
        mov edi, ebp
        sub edi, ebx
        public_57f0d7 : nop
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [ecx], eax
        mov ax, word ptr ss : [ebp]
        mov esi, 0xFFFFFFFE
        mov word ptr ds : [ecx], ax
        lea eax, ds:[ecx+2]
        sub esi, ecx
        lea ecx, ds:[ecx]
        public_57f0f0 : nop
        mov bl, byte ptr ds : [edi+eax]
        mov byte ptr ds : [eax], bl
        inc eax
        lea ebx, ds:[esi+eax]
        cmp ebx, 2
        jb public_57f0f0
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ecx+4], eax
        add ecx, 0xC
        sub edi, 0xC
        cmp ecx, edx
        jne public_57f0d7
        mov eax, dword ptr ss : [esp+0x10]
        public_57f112 : nop
        mov edx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        add edx, ecx
        pop ebp
        mov dword ptr ds : [eax+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_57f128 : nop
        test edi, edi
        jbe public_57f1d6
        lea ebp, ds:[edi+edi*2]
        shl ebp, 2
        mov edi, esi
        sub edi, ebp
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x24], ebp
        je public_57f16a
        public_57f146 : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edi
        push edx
        call public_57fc60
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0xC
        add edi, 0xC
        add esp, 8
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_57f146
        mov ecx, dword ptr ss : [esp+0x10]
        public_57f16a : nop
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, eax
        sub ecx, ebp
        cmp ebx, ecx
        je public_57f1b0
        public_57f175 : nop
        mov edx, dword ptr ds : [ecx-0xC]
        sub ecx, 0xC
        sub eax, 0xC
        mov dword ptr ds : [eax], edx
        mov dx, word ptr ds : [ecx]
        mov edi, ecx
        mov ebp, 0xFFFFFFFE
        sub edi, eax
        mov word ptr ds : [eax], dx
        lea esi, ds:[eax+2]
        sub ebp, eax
        public_57f194 : nop
        mov dl, byte ptr ds : [edi+esi]
        mov byte ptr ds : [esi], dl
        inc esi
        lea edx, ds:[esi+ebp]
        cmp edx, 2
        jb public_57f194
        cmp ecx, ebx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        jne public_57f175
        mov ebp, dword ptr ss : [esp+0x24]
        public_57f1b0 : nop
        lea esi, ds:[ebx+ebp]
        cmp ebx, esi
        je public_57f1cf
        mov edi, dword ptr ss : [esp+0x28]
        nop 
        lea esp, ss:[esp]
        public_57f1c0 : nop
        push edi
        mov ecx, ebx
        call public_57fcb0
        add ebx, 0xC
        cmp ebx, esi
        jne public_57f1c0
        public_57f1cf : nop
        mov eax, dword ptr ss : [esp+0x10]
        add dword ptr ds : [eax+8], ebp
        public_57f1d6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x57eec0)
    }
}

#undef public_57ef10
#undef public_57ef12
#undef public_57ef1a
#undef public_57ef2c
#undef public_57ef39
#undef public_57ef60
#undef public_57ef78
#undef public_57ef82
#undef public_57efa2
#undef public_57efb9
#undef public_57efc0
#undef public_57efd3
#undef public_57f011
#undef public_57f03e
#undef public_57f078
#undef public_57f080
#undef public_57f097
#undef public_57f0b6
#undef public_57f0c6
#undef public_57f0d7
#undef public_57f0f0
#undef public_57f112
#undef public_57f128
#undef public_57f146
#undef public_57f16a
#undef public_57f175
#undef public_57f194
#undef public_57f1b0
#undef public_57f1c0
#undef public_57f1cf
#undef public_57f1d6
