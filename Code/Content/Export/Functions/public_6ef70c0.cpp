#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef70c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8060);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8910);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ef7112 _public_6ef7112
#define public_6ef7114 _public_6ef7114
#define public_6ef711c _public_6ef711c
#define public_6ef712f _public_6ef712f
#define public_6ef713c _public_6ef713c
#define public_6ef7160 _public_6ef7160
#define public_6ef7178 _public_6ef7178
#define public_6ef7182 _public_6ef7182
#define public_6ef71a2 _public_6ef71a2
#define public_6ef71ba _public_6ef71ba
#define public_6ef71c0 _public_6ef71c0
#define public_6ef71d3 _public_6ef71d3
#define public_6ef71e0 _public_6ef71e0
#define public_6ef71ee _public_6ef71ee
#define public_6ef722c _public_6ef722c
#define public_6ef725a _public_6ef725a
#define public_6ef7295 _public_6ef7295
#define public_6ef72a0 _public_6ef72a0
#define public_6ef72b7 _public_6ef72b7
#define public_6ef72d7 _public_6ef72d7
#define public_6ef72e7 _public_6ef72e7
#define public_6ef72f2 _public_6ef72f2
#define public_6ef7307 _public_6ef7307
#define public_6ef731d _public_6ef731d
#define public_6ef7337 _public_6ef7337
#define public_6ef735b _public_6ef735b
#define public_6ef7366 _public_6ef7366
#define public_6ef7382 _public_6ef7382
#define public_6ef7390 _public_6ef7390
#define public_6ef73a9 _public_6ef73a9
#define public_6ef73ac _public_6ef73ac

PROC_DECLARE(0x6ef70c0, internal_6ef70c0, public_6ef70c0);
extern "C" NAKED register_t __cdecl internal_6ef70c0()
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
        jae public_6ef725a
        mov ebx, dword ptr ds : [ecx+4]
        test ebx, ebx
        je public_6ef7112
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
        jb public_6ef7114
        public_6ef7112 : nop
        mov ecx, edi
        public_6ef7114 : nop
        test ebx, ebx
        jne public_6ef711c
        xor edx, edx
        jmp public_6ef712f
        public_6ef711c : nop
        sub esi, ebx
        mov eax, 0x66666667
        imul esi
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ef712f : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6ef713c
        xor eax, eax
        public_6ef713c : nop
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
        je public_6ef7178
        public_6ef7160 : nop
        push esi
        push ebp
        call public_6ef8060
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x14
        add esp, 8
        add ebp, 0x14
        cmp esi, eax
        jne public_6ef7160
        public_6ef7178 : nop
        test edi, edi
        mov esi, ebp
        jbe public_6ef71a2
        mov dword ptr ss : [esp+0x24], edi
        public_6ef7182 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push esi
        call public_6ef8060
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x14
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6ef7182
        mov eax, dword ptr ss : [esp+0x20]
        public_6ef71a2 : nop
        lea ecx, ds:[edi+edi*4]
        lea ecx, ss:[ebp+ecx*4]
        mov ebp, dword ptr ds : [ebx+8]
        cmp eax, ebp
        mov esi, eax
        je public_6ef71d3
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6ef71c0
        public_6ef71ba : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_6ef71c0 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6ef8060
        add esi, 0x14
        add esp, 8
        cmp esi, ebp
        jne public_6ef71ba
        public_6ef71d3 : nop
        mov ebp, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, ebp
        je public_6ef71ee
        lea ecx, ds:[ecx]
        public_6ef71e0 : nop
        mov ecx, esi
        call public_6eec8d0
        add esi, 0x14
        cmp esi, ebp
        jne public_6ef71e0
        public_6ef71ee : nop
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
        jne public_6ef722c
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
        public_6ef722c : nop
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
        public_6ef725a : nop
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
        jae public_6ef731d
        lea eax, ds:[edi+edi*4]
        shl eax, 2
        mov dword ptr ss : [esp+0x24], eax
        add eax, ebx
        cmp ebx, esi
        mov ebp, ebx
        je public_6ef72b7
        sub eax, ebx
        mov dword ptr ss : [esp+0x20], eax
        jmp public_6ef72a0
        public_6ef7295 : nop
        mov eax, dword ptr ss : [esp+0x20]
        lea esp, ss:[esp]
        public_6ef72a0 : nop
        add eax, ebp
        push ebp
        push eax
        call public_6ef8060
        add ebp, 0x14
        add esp, 8
        cmp ebp, esi
        jne public_6ef7295
        mov ecx, dword ptr ss : [esp+0x10]
        public_6ef72b7 : nop
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
        je public_6ef72e7
        public_6ef72d7 : nop
        push ebp
        push esi
        call public_6ef8060
        add esp, 8
        add esi, 0x14
        dec edi
        jne public_6ef72d7
        public_6ef72e7 : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [edi+8]
        cmp ebx, esi
        je public_6ef7307
        public_6ef72f2 : nop
        push ebp
        mov ecx, ebx
        call public_6ef8910
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ebx+0x10], edx
        add ebx, 0x14
        cmp ebx, esi
        jne public_6ef72f2
        public_6ef7307 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x24]
        add ecx, eax
        mov dword ptr ds : [edi+8], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6ef731d : nop
        test edi, edi
        jbe public_6ef73ac
        lea ebp, ds:[edi+edi*4]
        shl ebp, 2
        mov edi, esi
        sub edi, ebp
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], esi
        je public_6ef735b
        public_6ef7337 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push edi
        push ecx
        call public_6ef8060
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0x14
        add edi, 0x14
        add esp, 8
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_6ef7337
        mov ecx, dword ptr ss : [esp+0x10]
        public_6ef735b : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, ebp
        cmp ebx, esi
        je public_6ef7382
        public_6ef7366 : nop
        sub esi, 0x14
        sub edi, 0x14
        push esi
        mov ecx, edi
        call public_6ef8910
        cmp esi, ebx
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], edx
        jne public_6ef7366
        mov ecx, dword ptr ss : [esp+0x10]
        public_6ef7382 : nop
        lea edi, ds:[ebx+ebp]
        cmp ebx, edi
        je public_6ef73a9
        mov esi, dword ptr ss : [esp+0x28]
        lea ecx, ds:[ecx]
        public_6ef7390 : nop
        push esi
        mov ecx, ebx
        call public_6ef8910
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [ebx+0x10], eax
        add ebx, 0x14
        cmp ebx, edi
        jne public_6ef7390
        mov ecx, dword ptr ss : [esp+0x10]
        public_6ef73a9 : nop
        add dword ptr ds : [ecx+8], ebp
        public_6ef73ac : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6ef70c0)
    }
}

#undef public_6ef7112
#undef public_6ef7114
#undef public_6ef711c
#undef public_6ef712f
#undef public_6ef713c
#undef public_6ef7160
#undef public_6ef7178
#undef public_6ef7182
#undef public_6ef71a2
#undef public_6ef71ba
#undef public_6ef71c0
#undef public_6ef71d3
#undef public_6ef71e0
#undef public_6ef71ee
#undef public_6ef722c
#undef public_6ef725a
#undef public_6ef7295
#undef public_6ef72a0
#undef public_6ef72b7
#undef public_6ef72d7
#undef public_6ef72e7
#undef public_6ef72f2
#undef public_6ef7307
#undef public_6ef731d
#undef public_6ef7337
#undef public_6ef735b
#undef public_6ef7366
#undef public_6ef7382
#undef public_6ef7390
#undef public_6ef73a9
#undef public_6ef73ac
