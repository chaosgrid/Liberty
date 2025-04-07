#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2730);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eccc89 _public_6eccc89
#define public_6eccc90 _public_6eccc90
#define public_6ecccfb _public_6ecccfb
#define public_6eccd00 _public_6eccd00
#define public_6eccd08 _public_6eccd08
#define public_6eccd0d _public_6eccd0d
#define public_6eccd19 _public_6eccd19
#define public_6eccd36 _public_6eccd36
#define public_6eccd4a _public_6eccd4a
#define public_6eccdae _public_6eccdae
#define public_6eccdc9 _public_6eccdc9
#define public_6ecce08 _public_6ecce08
#define public_6ecce1e _public_6ecce1e
#define public_6ecce33 _public_6ecce33
#define public_6ecce48 _public_6ecce48
#define public_6ecce50 _public_6ecce50
#define public_6ecce64 _public_6ecce64
#define public_6ecce68 _public_6ecce68
#define public_6ecce85 _public_6ecce85

PROC_DECLARE(0x6eccc50, internal_6eccc50, public_6eccc50);
extern "C" NAKED register_t __cdecl internal_6eccc50()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        push ebp
        push esi
        mov esi, ecx
        push 0
        mov ecx, ebx
        call dword ptr ds : [public_6fb3040]
        mov ebp, 1
        push ebp
        mov ecx, ebx
        mov byte ptr ds : [esi+0xC], al
        mov dword ptr ss : [esp+0x10], ebp
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ecce85
        push edi
        add esi, 0x10
        jmp public_6eccc90
        public_6eccc89 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        lea ecx, ds:[ecx]
        public_6eccc90 : nop
        lea edi, ss:[ebp+1]
        push edi
        mov ecx, ebx
        call dword ptr ds : [public_6fb306c]
        xor eax, eax
        push ebp
        mov ebp, dword ptr ds : [public_6fb3048]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], eax
        call ebp
        push eax
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        push edi
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], eax
        call ebp
        push eax
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 3
        add esp, 4
        cmp ecx, 1
        mov edi, eax
        jae public_6eccdc9
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_6ecccfb
        mov ecx, eax
        sub ecx, edx
        sar ecx, 3
        cmp ecx, 1
        ja public_6eccd00
        public_6ecccfb : nop
        mov ecx, 1
        public_6eccd00 : nop
        test edx, edx
        jne public_6eccd08
        xor eax, eax
        jmp public_6eccd0d
        public_6eccd08 : nop
        sub eax, edx
        sar eax, 3
        public_6eccd0d : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jge public_6eccd19
        xor eax, eax
        public_6eccd19 : nop
        lea edx, ds:[eax*8]
        push edx
        call public_6fa912a
        mov ebp, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x14], eax
        mov ebx, eax
        je public_6eccd4a
        public_6eccd36 : nop
        push ebp
        push ebx
        call public_6f305b0
        add ebp, 8
        add esp, 8
        add ebx, 8
        cmp ebp, edi
        jne public_6eccd36
        public_6eccd4a : nop
        lea eax, ss:[esp+0x1C]
        push eax
        push 1
        push ebx
        mov ecx, esi
        call public_6ed2730
        mov ecx, dword ptr ds : [esi+8]
        add ebx, 8
        push ebx
        push ecx
        push edi
        mov ecx, esi
        call public_6ed2700
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6ea1490
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        lea ecx, ds:[eax+edx*8]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6eccdae
        mov ebx, dword ptr ss : [esp+0x28]
        xor edx, edx
        lea edx, ds:[eax+edx*8+8]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+4], eax
        jmp public_6ecce68
        public_6eccdae : nop
        mov edx, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0x28]
        sub edx, ecx
        sar edx, 3
        lea edx, ds:[eax+edx*8+8]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+4], eax
        jmp public_6ecce68
        public_6eccdc9 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 3
        cmp ecx, 1
        mov ecx, esi
        jae public_6ecce1e
        lea edx, ds:[edi+8]
        push edx
        push eax
        push edi
        call public_6ed2700
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        sub edx, edi
        sar edx, 3
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_6ed2730
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6ecce64
        public_6ecce08 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi], edx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edi+4], ecx
        add edi, 8
        cmp edi, eax
        jne public_6ecce08
        jmp public_6ecce64
        public_6ecce1e : nop
        push eax
        push eax
        add eax, 0xFFFFFFF8
        push eax
        call public_6ed2700
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-8]
        cmp edi, eax
        je public_6ecce48
        public_6ecce33 : nop
        mov edx, dword ptr ds : [eax-8]
        sub eax, 8
        sub ecx, 8
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        jne public_6ecce33
        public_6ecce48 : nop
        lea eax, ds:[edi+8]
        cmp edi, eax
        je public_6ecce64
        nop 
        public_6ecce50 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edi+4], edx
        add edi, 8
        cmp edi, eax
        jne public_6ecce50
        public_6ecce64 : nop
        add dword ptr ds : [esi+8], 8
        public_6ecce68 : nop
        mov eax, dword ptr ss : [esp+0x10]
        add eax, 2
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6eccc89
        pop edi
        public_6ecce85 : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6eccc50)
    }
}

#undef public_6eccc89
#undef public_6eccc90
#undef public_6ecccfb
#undef public_6eccd00
#undef public_6eccd08
#undef public_6eccd0d
#undef public_6eccd19
#undef public_6eccd36
#undef public_6eccd4a
#undef public_6eccdae
#undef public_6eccdc9
#undef public_6ecce08
#undef public_6ecce1e
#undef public_6ecce33
#undef public_6ecce48
#undef public_6ecce50
#undef public_6ecce64
#undef public_6ecce68
#undef public_6ecce85
