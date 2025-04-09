#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418f10);
CLANG_FORWARD_PROC_SYMBOL(public_418f70);
CLANG_FORWARD_PROC_SYMBOL(public_591230);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_591252 _public_591252
#define public_59125a _public_59125a
#define public_591265 _public_591265
#define public_59126d _public_59126d
#define public_591278 _public_591278
#define public_59128c _public_59128c
#define public_591295 _public_591295
#define public_5912a5 _public_5912a5
#define public_5912c1 _public_5912c1
#define public_5912d2 _public_5912d2
#define public_5912dc _public_5912dc
#define public_5912e4 _public_5912e4
#define public_5912ec _public_5912ec
#define public_5912f4 _public_5912f4
#define public_5912fc _public_5912fc
#define public_59130c _public_59130c
#define public_591314 _public_591314
#define public_591320 _public_591320
#define public_591334 _public_591334
#define public_591344 _public_591344
#define public_591358 _public_591358
#define public_591378 _public_591378
#define public_591397 _public_591397
#define public_5913a0 _public_5913a0
#define public_5913ab _public_5913ab
#define public_5913b2 _public_5913b2
#define public_5913c9 _public_5913c9
#define public_5913d1 _public_5913d1
#define public_5913d7 _public_5913d7
#define public_5913f6 _public_5913f6
#define public_59140a _public_59140a

PROC_DECLARE(0x591230, internal_591230, public_591230);
extern "C" NAKED register_t __cdecl internal_591230()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov ebx, ecx
        cmp ebx, ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        je public_5912d2
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_591252
        xor esi, esi
        jmp public_59125a
        public_591252 : nop
        mov esi, dword ptr ss : [ebp+8]
        sub esi, eax
        sar esi, 3
        public_59125a : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_591265
        xor edx, edx
        jmp public_59126d
        public_591265 : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, ecx
        sar edx, 3
        public_59126d : nop
        cmp esi, edx
        ja public_5912dc
        mov edx, dword ptr ss : [ebp+8]
        cmp eax, edx
        je public_59128c
        public_591278 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], esi
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_591278
        public_59128c : nop
        mov edi, dword ptr ds : [ebx+8]
        cmp ecx, edi
        mov esi, ecx
        je public_5912a5
        public_591295 : nop
        push 0
        mov ecx, esi
        call public_418f70
        add esi, 8
        cmp esi, edi
        jne public_591295
        public_5912a5 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        jne public_5912c1
        mov ecx, dword ptr ds : [ebx+4]
        pop edi
        xor eax, eax
        pop esi
        lea edx, ds:[ecx+eax*8]
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        public_5912c1 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        mov ecx, dword ptr ds : [ebx+4]
        sar eax, 3
        lea edx, ds:[ecx+eax*8]
        mov dword ptr ds : [ebx+8], edx
        public_5912d2 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        public_5912dc : nop
        test eax, eax
        jne public_5912e4
        xor esi, esi
        jmp public_5912ec
        public_5912e4 : nop
        mov esi, dword ptr ss : [ebp+8]
        sub esi, eax
        sar esi, 3
        public_5912ec : nop
        test ecx, ecx
        jne public_5912f4
        xor edx, edx
        jmp public_5912fc
        public_5912f4 : nop
        mov edx, dword ptr ds : [ebx+0xC]
        sub edx, ecx
        sar edx, 3
        public_5912fc : nop
        cmp esi, edx
        ja public_591397
        test ecx, ecx
        jne public_59130c
        xor edx, edx
        jmp public_591314
        public_59130c : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, ecx
        sar edx, 3
        public_591314 : nop
        lea edx, ds:[eax+edx*8]
        cmp eax, edx
        je public_591334
        nop 
        lea esp, ss:[esp]
        public_591320 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], esi
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_591320
        public_591334 : nop
        mov ebx, dword ptr ss : [ebp+8]
        cmp edx, ebx
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [eax+8]
        mov esi, edx
        je public_591358
        public_591344 : nop
        push esi
        push edi
        call public_418f10
        add esi, 8
        add esp, 8
        add edi, 8
        cmp esi, ebx
        jne public_591344
        public_591358 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        jne public_591378
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        pop edi
        xor eax, eax
        pop esi
        lea eax, ds:[edx+eax*8]
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        mov eax, ecx
        pop ebx
        pop ecx
        ret 4
        public_591378 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        pop edi
        sar eax, 3
        pop esi
        lea eax, ds:[edx+eax*8]
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        mov eax, ecx
        pop ebx
        pop ecx
        ret 4
        public_591397 : nop
        mov edi, dword ptr ds : [ebx+8]
        mov esi, ecx
        cmp esi, edi
        je public_5913b2
        public_5913a0 : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_5913ab
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_5913ab : nop
        add esi, 8
        cmp esi, edi
        jne public_5913a0
        public_5913b2 : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        test ecx, ecx
        jne public_5913c9
        xor eax, eax
        jmp public_5913d1
        public_5913c9 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 3
        public_5913d1 : nop
        test eax, eax
        jge public_5913d7
        xor eax, eax
        public_5913d7 : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_5b7e84
        mov dword ptr ds : [ebx+4], eax
        mov ebx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ss : [ebp+4]
        add esp, 4
        cmp esi, ebx
        mov edi, eax
        je public_59140a
        public_5913f6 : nop
        push esi
        push edi
        call public_418f10
        add esi, 8
        add esp, 8
        add edi, 8
        cmp esi, ebx
        jne public_5913f6
        public_59140a : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], edi
        mov dword ptr ds : [eax+0xC], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x591230)
    }
}

#undef public_591252
#undef public_59125a
#undef public_591265
#undef public_59126d
#undef public_591278
#undef public_59128c
#undef public_591295
#undef public_5912a5
#undef public_5912c1
#undef public_5912d2
#undef public_5912dc
#undef public_5912e4
#undef public_5912ec
#undef public_5912f4
#undef public_5912fc
#undef public_59130c
#undef public_591314
#undef public_591320
#undef public_591334
#undef public_591344
#undef public_591358
#undef public_591378
#undef public_591397
#undef public_5913a0
#undef public_5913ab
#undef public_5913b2
#undef public_5913c9
#undef public_5913d1
#undef public_5913d7
#undef public_5913f6
#undef public_59140a
