#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecb170);
CLANG_FORWARD_PROC_SYMBOL(public_6ecc670);
CLANG_FORWARD_PROC_SYMBOL(public_6ecde00);
CLANG_FORWARD_PROC_SYMBOL(public_6ece190);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ecc6c8 _public_6ecc6c8
#define public_6ecc6d2 _public_6ecc6d2
#define public_6ecc6e8 _public_6ecc6e8
#define public_6ecc6f0 _public_6ecc6f0
#define public_6ecc6fb _public_6ecc6fb
#define public_6ecc703 _public_6ecc703
#define public_6ecc710 _public_6ecc710
#define public_6ecc71e _public_6ecc71e
#define public_6ecc73c _public_6ecc73c
#define public_6ecc759 _public_6ecc759
#define public_6ecc761 _public_6ecc761
#define public_6ecc769 _public_6ecc769
#define public_6ecc771 _public_6ecc771
#define public_6ecc779 _public_6ecc779
#define public_6ecc785 _public_6ecc785
#define public_6ecc78d _public_6ecc78d
#define public_6ecc794 _public_6ecc794
#define public_6ecc7a2 _public_6ecc7a2
#define public_6ecc7d0 _public_6ecc7d0
#define public_6ecc7ed _public_6ecc7ed
#define public_6ecc812 _public_6ecc812
#define public_6ecc83b _public_6ecc83b

PROC_DECLARE(0x6ecc670, internal_6ecc670, public_6ecc670);
extern "C" NAKED register_t __cdecl internal_6ecc670()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+8]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+4]
        mov byte ptr ds : [esi], al
        xor eax, eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [edi], eax
        mov ebp, dword ptr ds : [ebx]
        push eax
        mov dword ptr ss : [esp+0x14], edi
        call public_6ed0c50
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [edi], 0
        je public_6ecc6d2
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        push ecx
        call public_6ed0c5c
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], eax
        add esp, 4
        mov ecx, ebp
        mov edx, eax
        public_6ecc6c8 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_6ecc6c8
        public_6ecc6d2 : nop
        lea edi, ds:[ebx+4]
        cmp esi, edi
        je public_6ecc83b
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6ecc6e8
        xor ebp, ebp
        jmp public_6ecc6f0
        public_6ecc6e8 : nop
        mov ebp, dword ptr ds : [edi+8]
        sub ebp, eax
        sar ebp, 2
        public_6ecc6f0 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6ecc6fb
        xor edx, edx
        jmp public_6ecc703
        public_6ecc6fb : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        sar edx, 2
        public_6ecc703 : nop
        cmp ebp, edx
        ja public_6ecc759
        mov edx, dword ptr ds : [edi+8]
        cmp eax, edx
        je public_6ecc71e
        mov edi, edi
        public_6ecc710 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6ecc710
        public_6ecc71e : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6ecc73c
        mov edx, dword ptr ds : [esi+4]
        xor edi, edi
        lea eax, ds:[edx+edi*4]
        pop edi
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0xC]
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6ecc73c : nop
        mov edi, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [esi+4]
        sub edi, eax
        sar edi, 2
        lea eax, ds:[edx+edi*4]
        pop edi
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0xC]
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6ecc759 : nop
        test eax, eax
        jne public_6ecc761
        xor ebp, ebp
        jmp public_6ecc769
        public_6ecc761 : nop
        mov ebp, dword ptr ds : [edi+8]
        sub ebp, eax
        sar ebp, 2
        public_6ecc769 : nop
        test ecx, ecx
        jne public_6ecc771
        xor edx, edx
        jmp public_6ecc779
        public_6ecc771 : nop
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, ecx
        sar edx, 2
        public_6ecc779 : nop
        cmp ebp, edx
        ja public_6ecc7ed
        test ecx, ecx
        jne public_6ecc785
        xor edx, edx
        jmp public_6ecc78d
        public_6ecc785 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        sar edx, 2
        public_6ecc78d : nop
        lea edx, ds:[eax+edx*4]
        cmp eax, edx
        je public_6ecc7a2
        public_6ecc794 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6ecc794
        public_6ecc7a2 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edi+8]
        push ecx
        push eax
        push edx
        mov ecx, esi
        call public_6ece190
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6ecc7d0
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x10]
        xor edi, edi
        lea edx, ds:[ecx+edi*4]
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6ecc7d0 : nop
        mov edi, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [esi+4]
        sub edi, eax
        mov eax, dword ptr ss : [esp+0x10]
        sar edi, 2
        lea edx, ds:[ecx+edi*4]
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6ecc7ed : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        push ecx
        mov ecx, esi
        call public_6ecb170
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6ed0c50
        add esp, 4
        mov ecx, edi
        call public_6ecde00
        test eax, eax
        jge public_6ecc812
        xor eax, eax
        public_6ecc812 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6ed0c5c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6ece190
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+8], eax
        public_6ecc83b : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6ecc670)
    }
}

#undef public_6ecc6c8
#undef public_6ecc6d2
#undef public_6ecc6e8
#undef public_6ecc6f0
#undef public_6ecc6fb
#undef public_6ecc703
#undef public_6ecc710
#undef public_6ecc71e
#undef public_6ecc73c
#undef public_6ecc759
#undef public_6ecc761
#undef public_6ecc769
#undef public_6ecc771
#undef public_6ecc779
#undef public_6ecc785
#undef public_6ecc78d
#undef public_6ecc794
#undef public_6ecc7a2
#undef public_6ecc7d0
#undef public_6ecc7ed
#undef public_6ecc812
#undef public_6ecc83b
