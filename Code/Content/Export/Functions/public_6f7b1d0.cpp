#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31040);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b1d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7e600);
CLANG_FORWARD_PROC_SYMBOL(public_6f7eb80);
CLANG_FORWARD_PROC_SYMBOL(public_6f98760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7b222 _public_6f7b222
#define public_6f7b224 _public_6f7b224
#define public_6f7b22c _public_6f7b22c
#define public_6f7b23f _public_6f7b23f
#define public_6f7b24c _public_6f7b24c
#define public_6f7b270 _public_6f7b270
#define public_6f7b288 _public_6f7b288
#define public_6f7b292 _public_6f7b292
#define public_6f7b2b2 _public_6f7b2b2
#define public_6f7b2ca _public_6f7b2ca
#define public_6f7b2d0 _public_6f7b2d0
#define public_6f7b2e3 _public_6f7b2e3
#define public_6f7b2f0 _public_6f7b2f0
#define public_6f7b2fe _public_6f7b2fe
#define public_6f7b33c _public_6f7b33c
#define public_6f7b36a _public_6f7b36a
#define public_6f7b3a5 _public_6f7b3a5
#define public_6f7b3b0 _public_6f7b3b0
#define public_6f7b3c7 _public_6f7b3c7
#define public_6f7b3e7 _public_6f7b3e7
#define public_6f7b3f7 _public_6f7b3f7
#define public_6f7b402 _public_6f7b402
#define public_6f7b417 _public_6f7b417
#define public_6f7b42d _public_6f7b42d
#define public_6f7b447 _public_6f7b447
#define public_6f7b46b _public_6f7b46b
#define public_6f7b476 _public_6f7b476
#define public_6f7b49b _public_6f7b49b
#define public_6f7b4a6 _public_6f7b4a6
#define public_6f7b4bf _public_6f7b4bf
#define public_6f7b4c2 _public_6f7b4c2

PROC_DECLARE(0x6f7b1d0, internal_6f7b1d0, public_6f7b1d0);
extern "C" NAKED register_t __cdecl internal_6f7b1d0()
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
        jae public_6f7b36a
        mov ebx, dword ptr ds : [ecx+4]
        test ebx, ebx
        je public_6f7b222
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
        jb public_6f7b224
        public_6f7b222 : nop
        mov ecx, edi
        public_6f7b224 : nop
        test ebx, ebx
        jne public_6f7b22c
        xor edx, edx
        jmp public_6f7b23f
        public_6f7b22c : nop
        sub esi, ebx
        mov eax, 0x2AAAAAAB
        imul esi
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f7b23f : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6f7b24c
        xor eax, eax
        public_6f7b24c : nop
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
        je public_6f7b288
        public_6f7b270 : nop
        push esi
        push ebp
        call public_6f31040
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x18
        add esp, 8
        add ebp, 0x18
        cmp esi, eax
        jne public_6f7b270
        public_6f7b288 : nop
        test edi, edi
        mov esi, ebp
        jbe public_6f7b2b2
        mov dword ptr ss : [esp+0x24], edi
        public_6f7b292 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push esi
        call public_6f31040
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x18
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6f7b292
        mov eax, dword ptr ss : [esp+0x20]
        public_6f7b2b2 : nop
        lea ecx, ds:[edi+edi*2]
        lea ecx, ss:[ebp+ecx*8]
        mov ebp, dword ptr ds : [ebx+8]
        cmp eax, ebp
        mov esi, eax
        je public_6f7b2e3
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6f7b2d0
        public_6f7b2ca : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_6f7b2d0 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6f31040
        add esi, 0x18
        add esp, 8
        cmp esi, ebp
        jne public_6f7b2ca
        public_6f7b2e3 : nop
        mov ebp, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, ebp
        je public_6f7b2fe
        lea ecx, ds:[ecx]
        public_6f7b2f0 : nop
        mov ecx, esi
        call public_6f98760
        add esi, 0x18
        cmp esi, ebp
        jne public_6f7b2f0
        public_6f7b2fe : nop
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
        jne public_6f7b33c
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
        public_6f7b33c : nop
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
        public_6f7b36a : nop
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
        jae public_6f7b42d
        lea eax, ds:[edi+edi*2]
        shl eax, 3
        mov dword ptr ss : [esp+0x24], eax
        add eax, ebx
        cmp ebx, esi
        mov ebp, ebx
        je public_6f7b3c7
        sub eax, ebx
        mov dword ptr ss : [esp+0x20], eax
        jmp public_6f7b3b0
        public_6f7b3a5 : nop
        mov eax, dword ptr ss : [esp+0x20]
        lea esp, ss:[esp]
        public_6f7b3b0 : nop
        add eax, ebp
        push ebp
        push eax
        call public_6f31040
        add ebp, 0x18
        add esp, 8
        cmp ebp, esi
        jne public_6f7b3a5
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f7b3c7 : nop
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
        je public_6f7b3f7
        public_6f7b3e7 : nop
        push ebp
        push esi
        call public_6f31040
        add esp, 8
        add esi, 0x18
        dec edi
        jne public_6f7b3e7
        public_6f7b3f7 : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [edi+8]
        cmp ebx, esi
        je public_6f7b417
        public_6f7b402 : nop
        push ebp
        mov ecx, ebx
        call public_6f7e600
        mov edx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [ebx+0x14], edx
        add ebx, 0x18
        cmp ebx, esi
        jne public_6f7b402
        public_6f7b417 : nop
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
        public_6f7b42d : nop
        test edi, edi
        jbe public_6f7b4c2
        lea ebp, ds:[edi+edi*2]
        shl ebp, 3
        mov edi, esi
        sub edi, ebp
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], esi
        je public_6f7b46b
        public_6f7b447 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push edi
        push ecx
        call public_6f31040
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0x18
        add edi, 0x18
        add esp, 8
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_6f7b447
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f7b46b : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, ebp
        cmp ebx, esi
        je public_6f7b49b
        public_6f7b476 : nop
        mov edx, dword ptr ds : [esi-0x18]
        sub esi, 0x18
        sub edi, 0x18
        lea eax, ds:[esi+4]
        push eax
        lea ecx, ds:[edi+4]
        mov dword ptr ds : [edi], edx
        call public_6f7eb80
        cmp esi, ebx
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+0x14], ecx
        jne public_6f7b476
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f7b49b : nop
        lea edi, ds:[ebx+ebp]
        cmp ebx, edi
        je public_6f7b4bf
        mov esi, dword ptr ss : [esp+0x28]
        public_6f7b4a6 : nop
        push esi
        mov ecx, ebx
        call public_6f7e600
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [ebx+0x14], edx
        add ebx, 0x18
        cmp ebx, edi
        jne public_6f7b4a6
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f7b4bf : nop
        add dword ptr ds : [ecx+8], ebp
        public_6f7b4c2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f7b1d0)
    }
}

#undef public_6f7b222
#undef public_6f7b224
#undef public_6f7b22c
#undef public_6f7b23f
#undef public_6f7b24c
#undef public_6f7b270
#undef public_6f7b288
#undef public_6f7b292
#undef public_6f7b2b2
#undef public_6f7b2ca
#undef public_6f7b2d0
#undef public_6f7b2e3
#undef public_6f7b2f0
#undef public_6f7b2fe
#undef public_6f7b33c
#undef public_6f7b36a
#undef public_6f7b3a5
#undef public_6f7b3b0
#undef public_6f7b3c7
#undef public_6f7b3e7
#undef public_6f7b3f7
#undef public_6f7b402
#undef public_6f7b417
#undef public_6f7b42d
#undef public_6f7b447
#undef public_6f7b46b
#undef public_6f7b476
#undef public_6f7b49b
#undef public_6f7b4a6
#undef public_6f7b4bf
#undef public_6f7b4c2
