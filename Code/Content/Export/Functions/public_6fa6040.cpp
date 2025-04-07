#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa5580);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6040);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa6062 _public_6fa6062
#define public_6fa607a _public_6fa607a
#define public_6fa6085 _public_6fa6085
#define public_6fa609b _public_6fa609b
#define public_6fa60a8 _public_6fa60a8
#define public_6fa60ba _public_6fa60ba
#define public_6fa60c5 _public_6fa60c5
#define public_6fa60db _public_6fa60db
#define public_6fa60f3 _public_6fa60f3
#define public_6fa60fb _public_6fa60fb
#define public_6fa6113 _public_6fa6113
#define public_6fa611b _public_6fa611b
#define public_6fa6131 _public_6fa6131
#define public_6fa6141 _public_6fa6141
#define public_6fa6157 _public_6fa6157
#define public_6fa6163 _public_6fa6163
#define public_6fa617d _public_6fa617d
#define public_6fa6190 _public_6fa6190
#define public_6fa61a3 _public_6fa61a3
#define public_6fa61ad _public_6fa61ad
#define public_6fa61cc _public_6fa61cc
#define public_6fa61f8 _public_6fa61f8
#define public_6fa620c _public_6fa620c
#define public_6fa6222 _public_6fa6222
#define public_6fa622a _public_6fa622a
#define public_6fa6248 _public_6fa6248
#define public_6fa625b _public_6fa625b
#define public_6fa6265 _public_6fa6265
#define public_6fa626b _public_6fa626b

PROC_DECLARE(0x6fa6040, internal_6fa6040, public_6fa6040);
extern "C" NAKED register_t __cdecl internal_6fa6040()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, ecx
        cmp edi, ebp
        mov dword ptr ss : [esp+0x10], edi
        je public_6fa626b
        mov esi, dword ptr ss : [ebp+4]
        test esi, esi
        jne public_6fa6062
        xor ebx, ebx
        jmp public_6fa607a
        public_6fa6062 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, esi
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ebx, edx
        public_6fa607a : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_6fa6085
        xor edx, edx
        jmp public_6fa609b
        public_6fa6085 : nop
        mov edx, dword ptr ds : [edi+8]
        sub edx, ecx
        mov eax, 0x38E38E39
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa609b : nop
        cmp ebx, edx
        ja public_6fa60f3
        mov ebx, dword ptr ss : [ebp+8]
        cmp esi, ebx
        mov edi, ecx
        je public_6fa60ba
        public_6fa60a8 : nop
        push esi
        mov ecx, edi
        call public_6fa5580
        add esi, 0x48
        add edi, 0x48
        cmp esi, ebx
        jne public_6fa60a8
        public_6fa60ba : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6fa60c5
        xor edx, edx
        jmp public_6fa60db
        public_6fa60c5 : nop
        mov ebp, dword ptr ss : [ebp+8]
        sub ebp, eax
        mov eax, 0x38E38E39
        imul ebp
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6fa60db : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+4]
        pop edi
        pop esi
        lea edx, ds:[edx+edx*8]
        lea edx, ds:[ecx+edx*8]
        pop ebp
        mov dword ptr ds : [eax+8], edx
        pop ebx
        pop ecx
        ret 4
        public_6fa60f3 : nop
        test esi, esi
        jne public_6fa60fb
        xor ebx, ebx
        jmp public_6fa6113
        public_6fa60fb : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, esi
        mov eax, 0x38E38E39
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ebx, edx
        public_6fa6113 : nop
        test ecx, ecx
        jne public_6fa611b
        xor edx, edx
        jmp public_6fa6131
        public_6fa611b : nop
        mov edx, dword ptr ds : [edi+0xC]
        sub edx, ecx
        mov eax, 0x38E38E39
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa6131 : nop
        cmp ebx, edx
        ja public_6fa61f8
        test ecx, ecx
        jne public_6fa6141
        xor edx, edx
        jmp public_6fa6157
        public_6fa6141 : nop
        mov edx, dword ptr ds : [edi+8]
        sub edx, ecx
        mov eax, 0x38E38E39
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa6157 : nop
        lea edx, ds:[edx+edx*8]
        lea edi, ds:[esi+edx*8]
        cmp esi, edi
        mov ebx, ecx
        je public_6fa617d
        public_6fa6163 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ds:[esi+8]
        push ecx
        lea ecx, ds:[ebx+4]
        mov dword ptr ds : [ebx], eax
        call public_6ead640
        add esi, 0x48
        add ebx, 0x48
        cmp esi, edi
        jne public_6fa6163
        public_6fa617d : nop
        mov ebx, dword ptr ss : [ebp+8]
        cmp edi, ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+8]
        mov eax, edi
        je public_6fa61ad
        lea ecx, ds:[ecx]
        public_6fa6190 : nop
        test edx, edx
        je public_6fa61a3
        mov ecx, 0x12
        mov esi, eax
        mov edi, edx
        rep movsd
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa61a3 : nop
        add eax, 0x48
        add edx, 0x48
        cmp eax, ebx
        jne public_6fa6190
        public_6fa61ad : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6fa61cc
        mov eax, dword ptr ds : [ecx+4]
        pop edi
        xor edx, edx
        pop esi
        lea edx, ds:[edx+edx*8]
        lea edx, ds:[eax+edx*8]
        pop ebp
        mov dword ptr ds : [ecx+8], edx
        mov eax, ecx
        pop ebx
        pop ecx
        ret 4
        public_6fa61cc : nop
        mov ebp, dword ptr ss : [ebp+8]
        sub ebp, eax
        mov eax, 0x38E38E39
        imul ebp
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, dword ptr ds : [ecx+4]
        pop edi
        pop esi
        lea edx, ds:[edx+edx*8]
        lea edx, ds:[eax+edx*8]
        pop ebp
        mov dword ptr ds : [ecx+8], edx
        mov eax, ecx
        pop ebx
        pop ecx
        ret 4
        public_6fa61f8 : nop
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [ebp+4]
        add esp, 4
        test eax, eax
        jne public_6fa620c
        xor edx, edx
        jmp public_6fa6222
        public_6fa620c : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa6222 : nop
        test edx, edx
        mov eax, edx
        jge public_6fa622a
        xor eax, eax
        public_6fa622a : nop
        lea ecx, ds:[eax+eax*8]
        shl ecx, 3
        push ecx
        call public_6fa912a
        mov dword ptr ds : [edi+4], eax
        mov ebx, dword ptr ss : [ebp+8]
        mov edx, eax
        mov eax, dword ptr ss : [ebp+4]
        add esp, 4
        cmp eax, ebx
        je public_6fa6265
        public_6fa6248 : nop
        test edx, edx
        je public_6fa625b
        mov ecx, 0x12
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_6fa625b : nop
        add eax, 0x48
        add edx, 0x48
        cmp eax, ebx
        jne public_6fa6248
        public_6fa6265 : nop
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edi+0xC], edx
        public_6fa626b : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6fa6040)
    }
}

#undef public_6fa6062
#undef public_6fa607a
#undef public_6fa6085
#undef public_6fa609b
#undef public_6fa60a8
#undef public_6fa60ba
#undef public_6fa60c5
#undef public_6fa60db
#undef public_6fa60f3
#undef public_6fa60fb
#undef public_6fa6113
#undef public_6fa611b
#undef public_6fa6131
#undef public_6fa6141
#undef public_6fa6157
#undef public_6fa6163
#undef public_6fa617d
#undef public_6fa6190
#undef public_6fa61a3
#undef public_6fa61ad
#undef public_6fa61cc
#undef public_6fa61f8
#undef public_6fa620c
#undef public_6fa6222
#undef public_6fa622a
#undef public_6fa6248
#undef public_6fa625b
#undef public_6fa6265
#undef public_6fa626b
