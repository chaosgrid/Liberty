#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed34e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa1760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4a60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa5010);
CLANG_FORWARD_PROC_SYMBOL(public_6fa5ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa5b30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa17b6 _public_6fa17b6
#define public_6fa17b8 _public_6fa17b8
#define public_6fa17c0 _public_6fa17c0
#define public_6fa17d5 _public_6fa17d5
#define public_6fa17e2 _public_6fa17e2
#define public_6fa1806 _public_6fa1806
#define public_6fa1824 _public_6fa1824
#define public_6fa1830 _public_6fa1830
#define public_6fa1853 _public_6fa1853
#define public_6fa186f _public_6fa186f
#define public_6fa1873 _public_6fa1873
#define public_6fa1889 _public_6fa1889
#define public_6fa1893 _public_6fa1893
#define public_6fa18a5 _public_6fa18a5
#define public_6fa18cf _public_6fa18cf
#define public_6fa18e7 _public_6fa18e7
#define public_6fa1901 _public_6fa1901
#define public_6fa1940 _public_6fa1940
#define public_6fa1944 _public_6fa1944
#define public_6fa195e _public_6fa195e
#define public_6fa1980 _public_6fa1980
#define public_6fa1993 _public_6fa1993
#define public_6fa19b0 _public_6fa19b0
#define public_6fa1a06 _public_6fa1a06
#define public_6fa1a1c _public_6fa1a1c
#define public_6fa1a36 _public_6fa1a36
#define public_6fa1a60 _public_6fa1a60
#define public_6fa1a70 _public_6fa1a70
#define public_6fa1ad4 _public_6fa1ad4
#define public_6fa1ae0 _public_6fa1ae0
#define public_6fa1af6 _public_6fa1af6
#define public_6fa1af9 _public_6fa1af9

PROC_DECLARE(0x6fa1760, internal_6fa1760, public_6fa1760);
extern "C" NAKED register_t __cdecl internal_6fa1760()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        push edi
        mov edi, dword ptr ds : [ecx+0xC]
        sub edi, esi
        mov eax, 0x88888889
        imul edi
        add edx, edi
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6fa1901
        mov edi, dword ptr ds : [ecx+4]
        test edi, edi
        je public_6fa17b6
        mov ecx, esi
        sub ecx, edi
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 7
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp ebp, edx
        mov ecx, edx
        jb public_6fa17b8
        public_6fa17b6 : nop
        mov ecx, ebp
        public_6fa17b8 : nop
        test edi, edi
        jne public_6fa17c0
        xor edx, edx
        jmp public_6fa17d5
        public_6fa17c0 : nop
        sub esi, edi
        mov eax, 0x88888889
        imul esi
        add edx, esi
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa17d5 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6fa17e2
        xor eax, eax
        public_6fa17e2 : nop
        imul eax, 0xF0
        push eax
        call public_6fa912a
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_6fa1824
        public_6fa1806 : nop
        push esi
        push edi
        call public_6fa4a60
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0xF0
        add esp, 8
        add edi, 0xF0
        cmp esi, eax
        jne public_6fa1806
        public_6fa1824 : nop
        test ebp, ebp
        mov esi, edi
        jbe public_6fa1853
        mov dword ptr ss : [esp+0x24], ebp
        mov edi, edi
        public_6fa1830 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        push esi
        call public_6fa4a60
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0xF0
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6fa1830
        mov eax, dword ptr ss : [esp+0x20]
        public_6fa1853 : nop
        mov edx, ebp
        imul edx, 0xF0
        lea ecx, ds:[edx+edi]
        mov edi, dword ptr ds : [ebx+8]
        cmp eax, edi
        mov esi, eax
        je public_6fa1889
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6fa1873
        public_6fa186f : nop
        mov ecx, dword ptr ss : [esp+0x20]
        public_6fa1873 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6fa4a60
        add esi, 0xF0
        add esp, 8
        cmp esi, edi
        jne public_6fa186f
        public_6fa1889 : nop
        mov edi, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, edi
        je public_6fa18a5
        public_6fa1893 : nop
        mov eax, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [eax]
        add esi, 0xF0
        cmp esi, edi
        jne public_6fa1893
        public_6fa18a5 : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        imul eax, 0xF0
        add eax, esi
        mov dword ptr ds : [ebx+0xC], eax
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        test eax, eax
        jne public_6fa18cf
        xor edx, edx
        jmp public_6fa18e7
        public_6fa18cf : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa18e7 : nop
        add edx, ebp
        imul edx, 0xF0
        pop edi
        add edx, esi
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6fa1901 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edi, esi
        sub edi, ebx
        mov eax, 0x88888889
        imul edi
        add edx, edi
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_6fa1a1c
        mov eax, ebp
        imul eax, 0xF0
        mov dword ptr ss : [esp+0x24], eax
        add eax, ebx
        cmp ebx, esi
        mov edi, ebx
        je public_6fa195e
        sub eax, ebx
        mov dword ptr ss : [esp+0x20], eax
        jmp public_6fa1944
        public_6fa1940 : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_6fa1944 : nop
        add eax, edi
        push edi
        push eax
        call public_6fa4a60
        add edi, 0xF0
        add esp, 8
        cmp edi, esi
        jne public_6fa1940
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa195e : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edi, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 7
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub ebp, edx
        je public_6fa1993
        public_6fa1980 : nop
        push edi
        push esi
        call public_6fa4a60
        add esp, 8
        add esi, 0xF0
        dec ebp
        jne public_6fa1980
        public_6fa1993 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+8]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_6fa1a06
        lea ebp, ds:[edi+0x88]
        lea esi, ds:[ebx+0xD4]
        mov edi, edi
        public_6fa19b0 : nop
        push edi
        lea ecx, ds:[esi-0xD4]
        call public_6ed34e0
        push ebp
        lea ecx, ds:[esi-0x4C]
        call public_6fa5ab0
        mov edx, dword ptr ds : [edi+0xD4]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+0xD8]
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+0xDC]
        lea eax, ds:[edi+0xE0]
        mov dword ptr ds : [esi+8], ecx
        push eax
        lea ecx, ds:[esi+0xC]
        call public_6fa5b30
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 0xF0
        lea edx, ds:[esi-0xD4]
        cmp edx, eax
        jne public_6fa19b0
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa1a06 : nop
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        add edx, eax
        pop ebp
        mov dword ptr ds : [ecx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6fa1a1c : nop
        test ebp, ebp
        jbe public_6fa1af9
        imul ebp, 0xF0
        mov edi, esi
        sub edi, ebp
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], esi
        je public_6fa1a60
        public_6fa1a36 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push edi
        push ecx
        call public_6fa4a60
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0xF0
        add edi, 0xF0
        add esp, 8
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_6fa1a36
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa1a60 : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, ebp
        cmp ebx, esi
        je public_6fa1ad4
        nop 
        lea esp, ss:[esp]
        public_6fa1a70 : nop
        sub esi, 0xF0
        sub edi, 0xF0
        push esi
        mov ecx, edi
        call public_6ed34e0
        lea edx, ds:[esi+0x88]
        push edx
        lea ecx, ds:[edi+0x88]
        call public_6fa5ab0
        mov eax, dword ptr ds : [esi+0xD4]
        mov dword ptr ds : [edi+0xD4], eax
        mov ecx, dword ptr ds : [esi+0xD8]
        mov dword ptr ds : [edi+0xD8], ecx
        mov edx, dword ptr ds : [esi+0xDC]
        lea eax, ds:[esi+0xE0]
        push eax
        lea ecx, ds:[edi+0xE0]
        mov dword ptr ds : [edi+0xDC], edx
        call public_6fa5b30
        cmp esi, ebx
        jne public_6fa1a70
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa1ad4 : nop
        lea esi, ds:[ebx+ebp]
        cmp ebx, esi
        je public_6fa1af6
        mov edi, dword ptr ss : [esp+0x28]
        nop 
        public_6fa1ae0 : nop
        push edi
        mov ecx, ebx
        call public_6fa5010
        add ebx, 0xF0
        cmp ebx, esi
        jne public_6fa1ae0
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa1af6 : nop
        add dword ptr ds : [ecx+8], ebp
        public_6fa1af9 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6fa1760)
    }
}

#undef public_6fa17b6
#undef public_6fa17b8
#undef public_6fa17c0
#undef public_6fa17d5
#undef public_6fa17e2
#undef public_6fa1806
#undef public_6fa1824
#undef public_6fa1830
#undef public_6fa1853
#undef public_6fa186f
#undef public_6fa1873
#undef public_6fa1889
#undef public_6fa1893
#undef public_6fa18a5
#undef public_6fa18cf
#undef public_6fa18e7
#undef public_6fa1901
#undef public_6fa1940
#undef public_6fa1944
#undef public_6fa195e
#undef public_6fa1980
#undef public_6fa1993
#undef public_6fa19b0
#undef public_6fa1a06
#undef public_6fa1a1c
#undef public_6fa1a36
#undef public_6fa1a60
#undef public_6fa1a70
#undef public_6fa1ad4
#undef public_6fa1ae0
#undef public_6fa1af6
#undef public_6fa1af9
