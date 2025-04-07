#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7730);
CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6ed5080);
CLANG_FORWARD_PROC_SYMBOL(public_6fa5580);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ed50d2 _public_6ed50d2
#define public_6ed50d4 _public_6ed50d4
#define public_6ed50dc _public_6ed50dc
#define public_6ed50ef _public_6ed50ef
#define public_6ed50fc _public_6ed50fc
#define public_6ed5120 _public_6ed5120
#define public_6ed5133 _public_6ed5133
#define public_6ed5141 _public_6ed5141
#define public_6ed5150 _public_6ed5150
#define public_6ed5165 _public_6ed5165
#define public_6ed516b _public_6ed516b
#define public_6ed5190 _public_6ed5190
#define public_6ed51a7 _public_6ed51a7
#define public_6ed51b1 _public_6ed51b1
#define public_6ed51f0 _public_6ed51f0
#define public_6ed521f _public_6ed521f
#define public_6ed5256 _public_6ed5256
#define public_6ed526d _public_6ed526d
#define public_6ed5277 _public_6ed5277
#define public_6ed52a0 _public_6ed52a0
#define public_6ed52b7 _public_6ed52b7
#define public_6ed52bd _public_6ed52bd
#define public_6ed52d0 _public_6ed52d0
#define public_6ed52e9 _public_6ed52e9
#define public_6ed52ff _public_6ed52ff
#define public_6ed5316 _public_6ed5316
#define public_6ed533a _public_6ed533a
#define public_6ed5345 _public_6ed5345
#define public_6ed535b _public_6ed535b
#define public_6ed5366 _public_6ed5366
#define public_6ed5379 _public_6ed5379
#define public_6ed537c _public_6ed537c

PROC_DECLARE(0x6ed5080, internal_6ed5080, public_6ed5080);
extern "C" NAKED register_t __cdecl internal_6ed5080()
{
    __asm
    {
        sub esp, 8
        mov edx, dword ptr ds : [ecx+0xC]
        push ebx
        mov ebx, dword ptr ds : [ecx+8]
        sub edx, ebx
        mov eax, 0x38E38E39
        imul edx
        sar edx, 4
        mov eax, edx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6ed521f
        mov esi, dword ptr ds : [ecx+4]
        test esi, esi
        je public_6ed50d2
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp ebp, edx
        mov ecx, edx
        jb public_6ed50d4
        public_6ed50d2 : nop
        mov ecx, ebp
        public_6ed50d4 : nop
        test esi, esi
        jne public_6ed50dc
        xor edx, edx
        jmp public_6ed50ef
        public_6ed50dc : nop
        sub ebx, esi
        mov eax, 0x38E38E39
        imul ebx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ed50ef : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_6ed50fc
        xor eax, eax
        public_6ed50fc : nop
        lea ecx, ds:[eax+eax*8]
        shl ecx, 3
        push ecx
        call public_6fa912a
        mov esi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], eax
        mov edx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, ecx
        je public_6ed5141
        public_6ed5120 : nop
        test edx, edx
        je public_6ed5133
        mov ecx, 0x12
        mov esi, eax
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x10]
        public_6ed5133 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, 0x48
        add edx, 0x48
        cmp eax, ecx
        jne public_6ed5120
        public_6ed5141 : nop
        test ebp, ebp
        mov eax, edx
        jbe public_6ed516b
        mov ebx, ebp
        lea esp, ss:[esp]
        public_6ed5150 : nop
        test eax, eax
        je public_6ed5165
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, 0x12
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x10]
        public_6ed5165 : nop
        add eax, 0x48
        dec ebx
        jne public_6ed5150
        public_6ed516b : nop
        mov edi, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x1C]
        lea ecx, ss:[ebp+ebp*8]
        shl ecx, 3
        cmp eax, edi
        lea ebx, ds:[ecx+edx]
        mov dword ptr ss : [esp+0x24], edi
        je public_6ed51b1
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        sub eax, edx
        add eax, ecx
        public_6ed5190 : nop
        test ebx, ebx
        je public_6ed51a7
        mov ecx, 0x12
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x24]
        public_6ed51a7 : nop
        add eax, 0x48
        add ebx, 0x48
        cmp eax, edi
        jne public_6ed5190
        public_6ed51b1 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x18]
        lea eax, ds:[eax+eax*8]
        lea ecx, ds:[edi+eax*8]
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+0xC], ecx
        jne public_6ed51f0
        xor edx, edx
        add ebp, edx
        lea ecx, ss:[ebp+ebp*8]
        lea edx, ds:[edi+ecx*8]
        mov dword ptr ds : [esi+4], edi
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6ed51f0 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add ebp, edx
        lea ecx, ss:[ebp+ebp*8]
        lea edx, ds:[edi+ecx*8]
        mov dword ptr ds : [esi+4], edi
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6ed521f : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov edx, ebx
        sub edx, edi
        mov eax, 0x38E38E39
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_6ed52ff
        lea esi, ss:[ebp+ebp*8]
        shl esi, 3
        cmp edi, ebx
        mov dword ptr ss : [esp+0x20], esi
        lea eax, ds:[esi+edi]
        je public_6ed5277
        mov edx, eax
        sub edx, esi
        public_6ed5256 : nop
        test eax, eax
        je public_6ed526d
        mov ecx, 0x12
        mov esi, edx
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6ed526d : nop
        add edx, 0x48
        add eax, 0x48
        cmp edx, ebx
        jne public_6ed5256
        public_6ed5277 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edx, esi
        sub edx, edi
        mov eax, 0x38E38E39
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        sub ebp, edx
        mov edx, ebp
        mov ebp, dword ptr ss : [esp+0x24]
        mov eax, esi
        je public_6ed52bd
        nop 
        lea esp, ss:[esp]
        public_6ed52a0 : nop
        test eax, eax
        je public_6ed52b7
        mov ecx, 0x12
        mov esi, ebp
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6ed52b7 : nop
        add eax, 0x48
        dec edx
        jne public_6ed52a0
        public_6ed52bd : nop
        mov ebx, dword ptr ds : [ecx+8]
        cmp edi, ebx
        mov esi, edi
        je public_6ed52e9
        lea edi, ss:[ebp+8]
        lea esp, ss:[esp]
        public_6ed52d0 : nop
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ds : [esi], ecx
        push edi
        lea ecx, ds:[esi+4]
        call public_6ead640
        add esi, 0x48
        cmp esi, ebx
        jne public_6ed52d0
        mov ecx, dword ptr ss : [esp+0x10]
        public_6ed52e9 : nop
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        add esp, 8
        ret 0xC
        public_6ed52ff : nop
        test ebp, ebp
        jbe public_6ed537c
        lea ebp, ss:[ebp+ebp*8]
        shl ebp, 3
        mov esi, ebx
        sub esi, ebp
        cmp esi, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        je public_6ed533a
        public_6ed5316 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push esi
        push eax
        call public_6ea7730
        mov edx, dword ptr ss : [esp+0x24]
        add edx, 0x48
        add esi, 0x48
        add esp, 8
        cmp esi, ebx
        mov dword ptr ss : [esp+0x1C], edx
        jne public_6ed5316
        mov ecx, dword ptr ss : [esp+0x10]
        public_6ed533a : nop
        mov ebx, dword ptr ds : [ecx+8]
        mov esi, ebx
        sub esi, ebp
        cmp edi, esi
        je public_6ed535b
        public_6ed5345 : nop
        sub esi, 0x48
        sub ebx, 0x48
        push esi
        mov ecx, ebx
        call public_6fa5580
        cmp esi, edi
        jne public_6ed5345
        mov ecx, dword ptr ss : [esp+0x10]
        public_6ed535b : nop
        lea esi, ds:[edi+ebp]
        cmp edi, esi
        je public_6ed5379
        mov ebx, dword ptr ss : [esp+0x24]
        public_6ed5366 : nop
        push ebx
        mov ecx, edi
        call public_6fa5580
        add edi, 0x48
        cmp edi, esi
        jne public_6ed5366
        mov ecx, dword ptr ss : [esp+0x10]
        public_6ed5379 : nop
        add dword ptr ds : [ecx+8], ebp
        public_6ed537c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6ed5080)
    }
}

#undef public_6ed50d2
#undef public_6ed50d4
#undef public_6ed50dc
#undef public_6ed50ef
#undef public_6ed50fc
#undef public_6ed5120
#undef public_6ed5133
#undef public_6ed5141
#undef public_6ed5150
#undef public_6ed5165
#undef public_6ed516b
#undef public_6ed5190
#undef public_6ed51a7
#undef public_6ed51b1
#undef public_6ed51f0
#undef public_6ed521f
#undef public_6ed5256
#undef public_6ed526d
#undef public_6ed5277
#undef public_6ed52a0
#undef public_6ed52b7
#undef public_6ed52bd
#undef public_6ed52d0
#undef public_6ed52e9
#undef public_6ed52ff
#undef public_6ed5316
#undef public_6ed533a
#undef public_6ed5345
#undef public_6ed535b
#undef public_6ed5366
#undef public_6ed5379
#undef public_6ed537c
