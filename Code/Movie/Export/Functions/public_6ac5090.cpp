#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac5090);
CLANG_FORWARD_PROC_SYMBOL(public_6ac52f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac54d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac85c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8630);

#define public_6ac50b5 _public_6ac50b5
#define public_6ac50c2 _public_6ac50c2
#define public_6ac50d0 _public_6ac50d0
#define public_6ac50e3 _public_6ac50e3
#define public_6ac5101 _public_6ac5101
#define public_6ac511e _public_6ac511e
#define public_6ac5124 _public_6ac5124
#define public_6ac5132 _public_6ac5132
#define public_6ac513b _public_6ac513b
#define public_6ac5156 _public_6ac5156
#define public_6ac51a4 _public_6ac51a4
#define public_6ac51a7 _public_6ac51a7
#define public_6ac51b8 _public_6ac51b8
#define public_6ac51c3 _public_6ac51c3
#define public_6ac51db _public_6ac51db
#define public_6ac51f1 _public_6ac51f1
#define public_6ac51fc _public_6ac51fc
#define public_6ac51ff _public_6ac51ff
#define public_6ac5262 _public_6ac5262
#define public_6ac529d _public_6ac529d
#define public_6ac52a2 _public_6ac52a2
#define public_6ac52ae _public_6ac52ae
#define public_6ac52cc _public_6ac52cc

PROC_DECLARE(0x6ac5090, internal_6ac5090, public_6ac5090);
extern "C" NAKED register_t __cdecl internal_6ac5090()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        push ebx
        mov ebx, dword ptr ss : [ebp+0x14]
        push esi
        push edi
        test ebx, ebx
        jne public_6ac50b5
        pop edi
        pop esi
        mov dword ptr ds : [public_6ae097c], 0xB
        xor eax, eax
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x1C
        public_6ac50b5 : nop
        mov esi, dword ptr ss : [ebp+0xC]
        cmp esi, ebx
        jae public_6ac50e3
        mov eax, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+8]
        public_6ac50c2 : nop
        test eax, eax
        je public_6ac50d0
        mov ecx, dword ptr ds : [edx+eax*4-4]
        dec eax
        test ecx, ecx
        je public_6ac50c2
        inc eax
        public_6ac50d0 : nop
        mov edi, dword ptr ss : [ebp+0x20]
        mov ecx, esi
        mov esi, dword ptr ss : [ebp+8]
        rep movsd
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x1C
        public_6ac50e3 : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [ecx+ebx*4-4]
        test eax, eax
        jne public_6ac5101
        pop edi
        pop esi
        mov dword ptr ds : [public_6ae097c], 0xC
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x1C
        public_6ac5101 : nop
        cmp ebx, 1
        jne public_6ac513b
        mov ecx, dword ptr ss : [ebp+0x1C]
        mov edx, dword ptr ss : [ebp+0x18]
        push esi
        push ecx
        push edx
        push eax
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6ac52f0
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [ecx], eax
        public_6ac511e : nop
        mov eax, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ss : [ebp+0x20]
        public_6ac5124 : nop
        test eax, eax
        je public_6ac5132
        mov ecx, dword ptr ds : [edx+eax*4-4]
        dec eax
        test ecx, ecx
        je public_6ac5124
        inc eax
        public_6ac5132 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x1C
        public_6ac513b : nop
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        mov dword ptr ss : [ebp+0x18], eax
        jne public_6ac5156
        lea edx, ss:[ebp-0x1C]
        push edx
        push ebx
        push ecx
        call public_6ac54d0
        lea eax, ss:[ebp-0x1C]
        mov dword ptr ss : [ebp+0x18], eax
        public_6ac5156 : nop
        mov eax, dword ptr ss : [ebp+0x20]
        mov edx, esi
        mov esi, dword ptr ss : [ebp+8]
        sub edx, ebx
        lea ecx, ds:[ebx*4-4]
        mov dword ptr ss : [ebp+0xC], edx
        lea esi, ds:[esi+edx*4+4]
        mov edx, ecx
        mov edi, eax
        mov dword ptr ds : [eax+ebx*4-4], 0
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+0xC]
        cmp ecx, 0xFFFFFFFF
        mov dword ptr ss : [ebp-4], ecx
        je public_6ac511e
        mov edx, dword ptr ss : [ebp+0x1C]
        lea ecx, ds:[edx+ecx*4]
        mov dword ptr ss : [ebp+0xC], ecx
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        mov dword ptr ss : [ebp-8], ecx
        jmp public_6ac51a7
        public_6ac51a4 : nop
        mov eax, dword ptr ss : [ebp+0x20]
        public_6ac51a7 : nop
        mov esi, dword ptr ds : [eax+ebx*4-4]
        lea edx, ds:[ebx-1]
        test edx, edx
        mov dword ptr ss : [ebp+8], esi
        je public_6ac51c3
        lea ecx, ds:[eax+edx*4]
        public_6ac51b8 : nop
        mov edi, dword ptr ds : [ecx-4]
        mov dword ptr ds : [ecx], edi
        add ecx, 0xFFFFFFFC
        dec edx
        jne public_6ac51b8
        public_6ac51c3 : nop
        mov edx, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ss : [ebp+0xC]
        test esi, esi
        mov edx, dword ptr ds : [edx+ecx]
        mov dword ptr ds : [eax], edx
        jne public_6ac51ff
        mov eax, dword ptr ss : [ebp+0x14]
        mov esi, dword ptr ss : [ebp+0x20]
        mov edi, dword ptr ss : [ebp+0x10]
        public_6ac51db : nop
        test eax, eax
        je public_6ac51f1
        mov ecx, dword ptr ds : [esi+eax*4-4]
        mov edx, dword ptr ds : [edi+eax*4-4]
        dec eax
        cmp ecx, edx
        je public_6ac51db
        sbb eax, eax
        or eax, 1
        public_6ac51f1 : nop
        test eax, eax
        jge public_6ac51fc
        xor esi, esi
        jmp public_6ac52a2
        public_6ac51fc : nop
        mov eax, dword ptr ss : [ebp+0x20]
        public_6ac51ff : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ds : [eax+ebx*4-4]
        mov edi, dword ptr ss : [ebp+8]
        mov ebx, 0x1F
        mov edx, dword ptr ds : [ecx+4]
        mov esi, eax
        sub ebx, edx
        mov dword ptr ss : [ebp-0x10], 0
        shr esi, 1
        mov ecx, ebx
        shr esi, cl
        mov ecx, edx
        shl edi, cl
        mov ecx, dword ptr ss : [ebp+0x20]
        or esi, edi
        mov edi, dword ptr ss : [ebp+0x14]
        mov edi, dword ptr ds : [ecx+edi*4-8]
        mov ecx, ebx
        shr edi, 1
        shr edi, cl
        mov ecx, edx
        shl eax, cl
        or edi, eax
        mov dword ptr ss : [ebp-0x10], esi
        mov edx, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0xC], ecx
        mov eax, dword ptr ss : [ebp-0xC]
        mul dword ptr ss : [ebp-0x10]
        add eax, edi
        adc edx, esi
        test edi, 0x80000000
        je public_6ac5262
        shr ecx, 1
        add eax, ecx
        adc edx, 0
        public_6ac5262 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        mov ebx, dword ptr ss : [ebp+0x20]
        mov ecx, dword ptr ss : [ebp+0x10]
        cmp edx, 0xFFFFFFFF
        sbb esi, esi
        push eax
        neg esi
        add esi, edx
        push ebx
        push esi
        push ecx
        call public_6ac8630
        mov edi, eax
        mov eax, dword ptr ss : [ebp+8]
        cmp edi, eax
        jbe public_6ac529d
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp+0x10]
        push edx
        push ebx
        push eax
        push ebx
        dec esi
        call public_6ac85c0
        sub edi, eax
        mov eax, dword ptr ss : [ebp+8]
        cmp edi, eax
        public_6ac529d : nop
        jne public_6ac52cc
        mov ebx, dword ptr ss : [ebp+0x14]
        public_6ac52a2 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6ac52ae
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], esi
        public_6ac52ae : nop
        mov eax, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp+0xC]
        dec eax
        sub edx, 4
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [ebp-4], eax
        mov dword ptr ss : [ebp+0xC], edx
        jne public_6ac51a4
        jmp public_6ac511e
        public_6ac52cc : nop
        pop edi
        pop esi
        mov dword ptr ds : [public_6ae097c], 0xA
        xor eax, eax
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x1C
        UNREACHABLE_TRAP(0x6ac5090)
    }
}

#undef public_6ac50b5
#undef public_6ac50c2
#undef public_6ac50d0
#undef public_6ac50e3
#undef public_6ac5101
#undef public_6ac511e
#undef public_6ac5124
#undef public_6ac5132
#undef public_6ac513b
#undef public_6ac5156
#undef public_6ac51a4
#undef public_6ac51a7
#undef public_6ac51b8
#undef public_6ac51c3
#undef public_6ac51db
#undef public_6ac51f1
#undef public_6ac51fc
#undef public_6ac51ff
#undef public_6ac5262
#undef public_6ac529d
#undef public_6ac52a2
#undef public_6ac52ae
#undef public_6ac52cc
