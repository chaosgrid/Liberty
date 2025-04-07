#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eae970);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eae9c4 _public_6eae9c4
#define public_6eae9c6 _public_6eae9c6
#define public_6eae9ce _public_6eae9ce
#define public_6eae9e1 _public_6eae9e1
#define public_6eae9ee _public_6eae9ee
#define public_6eaea10 _public_6eaea10
#define public_6eaea27 _public_6eaea27
#define public_6eaea31 _public_6eaea31
#define public_6eaea40 _public_6eaea40
#define public_6eaea57 _public_6eaea57
#define public_6eaea5d _public_6eaea5d
#define public_6eaea80 _public_6eaea80
#define public_6eaea97 _public_6eaea97
#define public_6eaeaa1 _public_6eaeaa1
#define public_6eaeadd _public_6eaeadd
#define public_6eaeb0a _public_6eaeb0a
#define public_6eaeb40 _public_6eaeb40
#define public_6eaeb57 _public_6eaeb57
#define public_6eaeb61 _public_6eaeb61
#define public_6eaeb83 _public_6eaeb83
#define public_6eaeb96 _public_6eaeb96
#define public_6eaeb9c _public_6eaeb9c
#define public_6eaeba5 _public_6eaeba5
#define public_6eaebbb _public_6eaebbb
#define public_6eaebd1 _public_6eaebd1
#define public_6eaebf0 _public_6eaebf0
#define public_6eaec07 _public_6eaec07
#define public_6eaec11 _public_6eaec11
#define public_6eaec20 _public_6eaec20
#define public_6eaec3d _public_6eaec3d
#define public_6eaec48 _public_6eaec48
#define public_6eaec62 _public_6eaec62
#define public_6eaec65 _public_6eaec65

PROC_DECLARE(0x6eae970, internal_6eae970, public_6eae970);
extern "C" NAKED register_t __cdecl internal_6eae970()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, ebx
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, esi
        mov dword ptr ss : [esp+0x10], edi
        jae public_6eaeb0a
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        je public_6eae9c4
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp esi, edx
        mov ecx, edx
        jb public_6eae9c6
        public_6eae9c4 : nop
        mov ecx, esi
        public_6eae9c6 : nop
        test ebp, ebp
        jne public_6eae9ce
        xor edx, edx
        jmp public_6eae9e1
        public_6eae9ce : nop
        sub ebx, ebp
        mov eax, 0x2E8BA2E9
        imul ebx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6eae9e1 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6eae9ee
        xor eax, eax
        public_6eae9ee : nop
        imul eax, 0x2C
        push eax
        call public_6fa912a
        mov ebx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_6eaea31
        nop 
        lea esp, ss:[esp]
        public_6eaea10 : nop
        test edx, edx
        je public_6eaea27
        mov ecx, 0xB
        mov esi, eax
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6eaea27 : nop
        add eax, 0x2C
        add edx, 0x2C
        cmp eax, ebx
        jne public_6eaea10
        public_6eaea31 : nop
        test esi, esi
        mov eax, edx
        jbe public_6eaea5d
        mov ebp, dword ptr ss : [esp+0x28]
        mov ebx, esi
        lea ecx, ds:[ecx]
        public_6eaea40 : nop
        test eax, eax
        je public_6eaea57
        mov ecx, 0xB
        mov esi, ebp
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6eaea57 : nop
        add eax, 0x2C
        dec ebx
        jne public_6eaea40
        public_6eaea5d : nop
        mov ebp, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, esi
        imul ecx, 0x2C
        cmp eax, ebp
        lea ebx, ds:[ecx+edx]
        je public_6eaeaa1
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        sub eax, edx
        add eax, ecx
        lea esp, ss:[esp]
        public_6eaea80 : nop
        test ebx, ebx
        je public_6eaea97
        mov ecx, 0xB
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6eaea97 : nop
        add eax, 0x2C
        add ebx, 0x2C
        cmp eax, ebp
        jne public_6eaea80
        public_6eaeaa1 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x1C]
        imul eax, 0x2C
        add eax, ebx
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_6eaeadd
        xor edx, edx
        mov edx, esi
        imul edx, 0x2C
        add edx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6eaeadd : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edx, esi
        imul edx, 0x2C
        add edx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6eaeb0a : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, esi
        jae public_6eaebd1
        mov ecx, esi
        imul ecx, 0x2C
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ds:[ecx+ebp]
        je public_6eaeb61
        mov edx, eax
        sub edx, ecx
        nop 
        public_6eaeb40 : nop
        test eax, eax
        je public_6eaeb57
        mov ecx, 0xB
        mov esi, edx
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6eaeb57 : nop
        add edx, 0x2C
        add eax, 0x2C
        cmp edx, ebx
        jne public_6eaeb40
        public_6eaeb61 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        sub esi, edx
        mov edx, dword ptr ss : [esp+0x28]
        je public_6eaeb9c
        mov eax, esi
        public_6eaeb83 : nop
        test ebx, ebx
        je public_6eaeb96
        mov ecx, 0xB
        mov esi, edx
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_6eaeb96 : nop
        add ebx, 0x2C
        dec eax
        jne public_6eaeb83
        public_6eaeb9c : nop
        mov ebx, dword ptr ds : [edi+8]
        cmp ebp, ebx
        mov eax, ebp
        je public_6eaebbb
        public_6eaeba5 : nop
        mov edi, eax
        add eax, 0x2C
        cmp eax, ebx
        mov ecx, 0xB
        mov esi, edx
        rep movsd
        jne public_6eaeba5
        mov edi, dword ptr ss : [esp+0x10]
        public_6eaebbb : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [esp+0x20]
        add eax, ecx
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6eaebd1 : nop
        test esi, esi
        jbe public_6eaec65
        imul esi, 0x2C
        mov eax, ebx
        sub eax, esi
        cmp eax, ebx
        mov edx, ebx
        mov dword ptr ss : [esp+0x20], esi
        je public_6eaec11
        lea ebx, ds:[ebx]
        public_6eaebf0 : nop
        test edx, edx
        je public_6eaec07
        mov ecx, 0xB
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_6eaec07 : nop
        add eax, 0x2C
        add edx, 0x2C
        cmp eax, ebx
        jne public_6eaebf0
        public_6eaec11 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov eax, ebx
        sub eax, esi
        cmp ebp, eax
        je public_6eaec3d
        lea esp, ss:[esp]
        public_6eaec20 : nop
        sub eax, 0x2C
        sub ebx, 0x2C
        cmp eax, ebp
        mov ecx, 0xB
        mov esi, eax
        mov edi, ebx
        rep movsd
        jne public_6eaec20
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_6eaec3d : nop
        lea eax, ds:[esi+ebp]
        cmp ebp, eax
        je public_6eaec62
        mov edx, dword ptr ss : [esp+0x28]
        public_6eaec48 : nop
        mov edi, ebp
        add ebp, 0x2C
        cmp ebp, eax
        mov ecx, 0xB
        mov esi, edx
        rep movsd
        jne public_6eaec48
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_6eaec62 : nop
        add dword ptr ds : [edi+8], esi
        public_6eaec65 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6eae970)
    }
}

#undef public_6eae9c4
#undef public_6eae9c6
#undef public_6eae9ce
#undef public_6eae9e1
#undef public_6eae9ee
#undef public_6eaea10
#undef public_6eaea27
#undef public_6eaea31
#undef public_6eaea40
#undef public_6eaea57
#undef public_6eaea5d
#undef public_6eaea80
#undef public_6eaea97
#undef public_6eaeaa1
#undef public_6eaeadd
#undef public_6eaeb0a
#undef public_6eaeb40
#undef public_6eaeb57
#undef public_6eaeb61
#undef public_6eaeb83
#undef public_6eaeb96
#undef public_6eaeb9c
#undef public_6eaeba5
#undef public_6eaebbb
#undef public_6eaebd1
#undef public_6eaebf0
#undef public_6eaec07
#undef public_6eaec11
#undef public_6eaec20
#undef public_6eaec3d
#undef public_6eaec48
#undef public_6eaec62
#undef public_6eaec65
