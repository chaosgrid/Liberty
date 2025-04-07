#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6560);
CLANG_FORWARD_PROC_SYMBOL(public_6f6f0d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6f9d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f971e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f98760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f6f122 _public_6f6f122
#define public_6f6f124 _public_6f6f124
#define public_6f6f12c _public_6f6f12c
#define public_6f6f13f _public_6f6f13f
#define public_6f6f14c _public_6f6f14c
#define public_6f6f170 _public_6f6f170
#define public_6f6f188 _public_6f6f188
#define public_6f6f192 _public_6f6f192
#define public_6f6f1b2 _public_6f6f1b2
#define public_6f6f1ca _public_6f6f1ca
#define public_6f6f1d0 _public_6f6f1d0
#define public_6f6f1e3 _public_6f6f1e3
#define public_6f6f1f0 _public_6f6f1f0
#define public_6f6f1fe _public_6f6f1fe
#define public_6f6f23c _public_6f6f23c
#define public_6f6f26a _public_6f6f26a
#define public_6f6f2a5 _public_6f6f2a5
#define public_6f6f2b0 _public_6f6f2b0
#define public_6f6f2c7 _public_6f6f2c7
#define public_6f6f2e7 _public_6f6f2e7
#define public_6f6f2f7 _public_6f6f2f7
#define public_6f6f307 _public_6f6f307
#define public_6f6f320 _public_6f6f320
#define public_6f6f336 _public_6f6f336
#define public_6f6f352 _public_6f6f352
#define public_6f6f36e _public_6f6f36e
#define public_6f6f380 _public_6f6f380
#define public_6f6f3a3 _public_6f6f3a3
#define public_6f6f3b3 _public_6f6f3b3
#define public_6f6f3cf _public_6f6f3cf
#define public_6f6f3d2 _public_6f6f3d2

PROC_DECLARE(0x6f6f0d0, internal_6f6f0d0, public_6f6f0d0);
extern "C" NAKED register_t __cdecl internal_6f6f0d0()
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
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        add edx, eax
        cmp edx, edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6f6f26a
        mov ebx, dword ptr ds : [ecx+4]
        test ebx, ebx
        je public_6f6f122
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edi, edx
        mov ecx, edx
        jb public_6f6f124
        public_6f6f122 : nop
        mov ecx, edi
        public_6f6f124 : nop
        test ebx, ebx
        jne public_6f6f12c
        xor edx, edx
        jmp public_6f6f13f
        public_6f6f12c : nop
        sub esi, ebx
        mov eax, 0x66666667
        imul esi
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f6f13f : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6f6f14c
        xor eax, eax
        public_6f6f14c : nop
        lea ecx, ds:[eax+eax*4]
        shl ecx, 2
        push ecx
        call public_6fa912a
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_6f6f188
        public_6f6f170 : nop
        push esi
        push ebp
        call public_6f6f9d0
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x14
        add esp, 8
        add ebp, 0x14
        cmp esi, eax
        jne public_6f6f170
        public_6f6f188 : nop
        test edi, edi
        mov esi, ebp
        jbe public_6f6f1b2
        mov dword ptr ss : [esp+0x24], edi
        public_6f6f192 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push esi
        call public_6f6f9d0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x14
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6f6f192
        mov eax, dword ptr ss : [esp+0x20]
        public_6f6f1b2 : nop
        lea ecx, ds:[edi+edi*4]
        lea ecx, ss:[ebp+ecx*4]
        mov ebp, dword ptr ds : [ebx+8]
        cmp eax, ebp
        mov esi, eax
        je public_6f6f1e3
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6f6f1d0
        public_6f6f1ca : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_6f6f1d0 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6f6f9d0
        add esi, 0x14
        add esp, 8
        cmp esi, ebp
        jne public_6f6f1ca
        public_6f6f1e3 : nop
        mov ebp, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, ebp
        je public_6f6f1fe
        lea ecx, ds:[ecx]
        public_6f6f1f0 : nop
        mov ecx, esi
        call public_6f98760
        add esi, 0x14
        cmp esi, ebp
        jne public_6f6f1f0
        public_6f6f1fe : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        lea eax, ds:[eax+eax*4]
        lea ecx, ds:[esi+eax*4]
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [ebx+0xC], ecx
        jne public_6f6f23c
        xor edx, edx
        add edi, edx
        lea ecx, ds:[edi+edi*4]
        pop edi
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f6f23c : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edi, edx
        lea ecx, ds:[edi+edi*4]
        pop edi
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f6f26a : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, edi
        jae public_6f6f336
        lea eax, ds:[edi+edi*4]
        shl eax, 2
        mov dword ptr ss : [esp+0x20], eax
        add eax, ebx
        cmp ebx, esi
        mov ebp, ebx
        je public_6f6f2c7
        sub eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_6f6f2b0
        public_6f6f2a5 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_6f6f2b0 : nop
        add eax, ebp
        push ebp
        push eax
        call public_6f6f9d0
        add ebp, 0x14
        add esp, 8
        cmp ebp, esi
        jne public_6f6f2a5
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f6f2c7 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub edi, edx
        je public_6f6f2f7
        public_6f6f2e7 : nop
        push ebp
        push esi
        call public_6f6f9d0
        add esp, 8
        add esi, 0x14
        dec edi
        jne public_6f6f2e7
        public_6f6f2f7 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [eax+8]
        cmp ebx, edi
        mov esi, ebx
        je public_6f6f320
        lea ebx, ss:[ebp+4]
        public_6f6f307 : nop
        mov edx, dword ptr ss : [ebp]
        push ebx
        lea ecx, ds:[esi+4]
        mov dword ptr ds : [esi], edx
        call public_6eb6560
        add esi, 0x14
        cmp esi, edi
        jne public_6f6f307
        mov eax, dword ptr ss : [esp+0x10]
        public_6f6f320 : nop
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
        public_6f6f336 : nop
        test edi, edi
        jbe public_6f6f3d2
        lea eax, ds:[edi+edi*4]
        shl eax, 2
        mov edi, esi
        sub edi, eax
        cmp edi, esi
        mov ebp, esi
        mov dword ptr ss : [esp+0x20], eax
        je public_6f6f36e
        public_6f6f352 : nop
        push edi
        push ebp
        call public_6f6f9d0
        add edi, 0x14
        add esp, 8
        add ebp, 0x14
        cmp edi, esi
        jne public_6f6f352
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_6f6f36e : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, eax
        cmp ebx, esi
        je public_6f6f3a3
        lea esp, ss:[esp]
        public_6f6f380 : nop
        mov edx, dword ptr ds : [esi-0x14]
        sub esi, 0x14
        sub edi, 0x14
        lea eax, ds:[esi+4]
        push eax
        lea ecx, ds:[edi+4]
        mov dword ptr ds : [edi], edx
        call public_6eb6560
        cmp esi, ebx
        jne public_6f6f380
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_6f6f3a3 : nop
        lea edi, ds:[eax+ebx]
        cmp ebx, edi
        mov esi, ebx
        je public_6f6f3cf
        mov ebx, dword ptr ss : [esp+0x28]
        lea ebp, ds:[ebx+4]
        public_6f6f3b3 : nop
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [esi], ecx
        push ebp
        lea ecx, ds:[esi+4]
        call public_6f971e0
        add esi, 0x14
        cmp esi, edi
        jne public_6f6f3b3
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_6f6f3cf : nop
        add dword ptr ds : [ecx+8], eax
        public_6f6f3d2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f6f0d0)
    }
}

#undef public_6f6f122
#undef public_6f6f124
#undef public_6f6f12c
#undef public_6f6f13f
#undef public_6f6f14c
#undef public_6f6f170
#undef public_6f6f188
#undef public_6f6f192
#undef public_6f6f1b2
#undef public_6f6f1ca
#undef public_6f6f1d0
#undef public_6f6f1e3
#undef public_6f6f1f0
#undef public_6f6f1fe
#undef public_6f6f23c
#undef public_6f6f26a
#undef public_6f6f2a5
#undef public_6f6f2b0
#undef public_6f6f2c7
#undef public_6f6f2e7
#undef public_6f6f2f7
#undef public_6f6f307
#undef public_6f6f320
#undef public_6f6f336
#undef public_6f6f352
#undef public_6f6f36e
#undef public_6f6f380
#undef public_6f6f3a3
#undef public_6f6f3b3
#undef public_6f6f3cf
#undef public_6f6f3d2
