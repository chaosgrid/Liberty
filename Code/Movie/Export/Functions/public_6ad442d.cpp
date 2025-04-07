#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad442d);
CLANG_FORWARD_PROC_SYMBOL(public_6ad4736);
CLANG_FORWARD_PROC_SYMBOL(public_6ad47e7);

#define public_6ad446d _public_6ad446d
#define public_6ad447d _public_6ad447d
#define public_6ad448b _public_6ad448b
#define public_6ad44a4 _public_6ad44a4
#define public_6ad44ab _public_6ad44ab
#define public_6ad44c5 _public_6ad44c5
#define public_6ad44c7 _public_6ad44c7
#define public_6ad44c9 _public_6ad44c9
#define public_6ad44dc _public_6ad44dc
#define public_6ad44df _public_6ad44df
#define public_6ad44e3 _public_6ad44e3
#define public_6ad44f5 _public_6ad44f5
#define public_6ad44f7 _public_6ad44f7
#define public_6ad4507 _public_6ad4507
#define public_6ad451b _public_6ad451b
#define public_6ad4522 _public_6ad4522
#define public_6ad4549 _public_6ad4549
#define public_6ad4566 _public_6ad4566
#define public_6ad457d _public_6ad457d
#define public_6ad4580 _public_6ad4580
#define public_6ad45a9 _public_6ad45a9
#define public_6ad45b2 _public_6ad45b2
#define public_6ad45cf _public_6ad45cf
#define public_6ad460f _public_6ad460f
#define public_6ad463d _public_6ad463d
#define public_6ad4640 _public_6ad4640
#define public_6ad46a0 _public_6ad46a0
#define public_6ad46b2 _public_6ad46b2
#define public_6ad46cb _public_6ad46cb
#define public_6ad46e1 _public_6ad46e1
#define public_6ad46e4 _public_6ad46e4
#define public_6ad46f0 _public_6ad46f0
#define public_6ad46f3 _public_6ad46f3
#define public_6ad4729 _public_6ad4729
#define public_6ad4731 _public_6ad4731

PROC_DECLARE(0x6ad442d, internal_6ad442d, public_6ad442d);
extern "C" NAKED register_t __cdecl internal_6ad442d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov eax, dword ptr ds : [public_6ae2454]
        mov edx, dword ptr ds : [public_6ae2458]
        push ebx
        push esi
        lea eax, ds:[eax+eax*4]
        push edi
        lea edi, ds:[edx+eax*4]
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-4], edi
        lea ecx, ds:[eax+0x17]
        and ecx, 0xFFFFFFF0
        mov dword ptr ss : [ebp-0x10], ecx
        sar ecx, 4
        dec ecx
        cmp ecx, 0x20
        jge public_6ad446d
        or esi, 0xFFFFFFFF
        shr esi, cl
        or dword ptr ss : [ebp-8], 0xFFFFFFFF
        mov dword ptr ss : [ebp-0xC], esi
        jmp public_6ad447d
        public_6ad446d : nop
        add ecx, 0xFFFFFFE0
        or eax, 0xFFFFFFFF
        xor esi, esi
        shr eax, cl
        mov dword ptr ss : [ebp-0xC], esi
        mov dword ptr ss : [ebp-8], eax
        public_6ad447d : nop
        mov eax, dword ptr ds : [public_6ae244c]
        mov ebx, eax
        cmp ebx, edi
        mov dword ptr ss : [ebp+8], ebx
        jae public_6ad44a4
        public_6ad448b : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        and ecx, dword ptr ss : [ebp-8]
        and edi, esi
        or ecx, edi
        jne public_6ad44a4
        add ebx, 0x14
        cmp ebx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+8], ebx
        jb public_6ad448b
        public_6ad44a4 : nop
        cmp ebx, dword ptr ss : [ebp-4]
        jne public_6ad4522
        mov ebx, edx
        public_6ad44ab : nop
        cmp ebx, eax
        mov dword ptr ss : [ebp+8], ebx
        jae public_6ad44c7
        mov ecx, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        and ecx, dword ptr ss : [ebp-8]
        and edi, esi
        or ecx, edi
        jne public_6ad44c5
        add ebx, 0x14
        jmp public_6ad44ab
        public_6ad44c5 : nop
        cmp ebx, eax
        public_6ad44c7 : nop
        jne public_6ad4522
        public_6ad44c9 : nop
        cmp ebx, dword ptr ss : [ebp-4]
        jae public_6ad44df
        cmp dword ptr ds : [ebx+8], 0
        jne public_6ad44dc
        add ebx, 0x14
        mov dword ptr ss : [ebp+8], ebx
        jmp public_6ad44c9
        public_6ad44dc : nop
        cmp ebx, dword ptr ss : [ebp-4]
        public_6ad44df : nop
        jne public_6ad4507
        mov ebx, edx
        public_6ad44e3 : nop
        cmp ebx, eax
        mov dword ptr ss : [ebp+8], ebx
        jae public_6ad44f7
        cmp dword ptr ds : [ebx+8], 0
        jne public_6ad44f5
        add ebx, 0x14
        jmp public_6ad44e3
        public_6ad44f5 : nop
        cmp ebx, eax
        public_6ad44f7 : nop
        jne public_6ad4507
        call public_6ad4736
        mov ebx, eax
        test ebx, ebx
        mov dword ptr ss : [ebp+8], ebx
        je public_6ad451b
        public_6ad4507 : nop
        push ebx
        call public_6ad47e7
        pop ecx
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [ebx+0x10]
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        jne public_6ad4522
        public_6ad451b : nop
        xor eax, eax
        jmp public_6ad4731
        public_6ad4522 : nop
        mov dword ptr ds : [public_6ae244c], ebx
        mov eax, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ds : [eax]
        cmp edx, 0xFFFFFFFF
        mov dword ptr ss : [ebp-4], edx
        je public_6ad4549
        mov ecx, dword ptr ds : [eax+edx*4+0xC4]
        mov edi, dword ptr ds : [eax+edx*4+0x44]
        and ecx, dword ptr ss : [ebp-8]
        and edi, esi
        or ecx, edi
        jne public_6ad4580
        public_6ad4549 : nop
        mov edx, dword ptr ds : [eax+0xC4]
        mov esi, dword ptr ds : [eax+0x44]
        and edx, dword ptr ss : [ebp-8]
        and esi, dword ptr ss : [ebp-0xC]
        and dword ptr ss : [ebp-4], 0
        lea ecx, ds:[eax+0x44]
        or edx, esi
        mov esi, dword ptr ss : [ebp-0xC]
        jne public_6ad457d
        public_6ad4566 : nop
        mov edx, dword ptr ds : [ecx+0x84]
        inc dword ptr ss : [ebp-4]
        and edx, dword ptr ss : [ebp-8]
        add ecx, 4
        mov edi, esi
        and edi, dword ptr ds : [ecx]
        or edx, edi
        je public_6ad4566
        public_6ad457d : nop
        mov edx, dword ptr ss : [ebp-4]
        public_6ad4580 : nop
        mov ecx, edx
        xor edi, edi
        imul ecx, 0x204
        lea ecx, ds:[ecx+eax+0x144]
        mov dword ptr ss : [ebp-0xC], ecx
        mov ecx, dword ptr ds : [eax+edx*4+0x44]
        and ecx, esi
        jne public_6ad45a9
        mov ecx, dword ptr ds : [eax+edx*4+0xC4]
        push 0x20
        and ecx, dword ptr ss : [ebp-8]
        pop edi
        public_6ad45a9 : nop
        test ecx, ecx
        jl public_6ad45b2
        shl ecx, 1
        inc edi
        jmp public_6ad45a9
        public_6ad45b2 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+edi*8+4]
        mov ecx, dword ptr ds : [edx]
        sub ecx, dword ptr ss : [ebp-0x10]
        mov esi, ecx
        mov dword ptr ss : [ebp-8], ecx
        sar esi, 4
        dec esi
        cmp esi, 0x3F
        jle public_6ad45cf
        push 0x3F
        pop esi
        public_6ad45cf : nop
        cmp esi, edi
        je public_6ad46e4
        mov ecx, dword ptr ds : [edx+4]
        cmp ecx, dword ptr ds : [edx+8]
        jne public_6ad4640
        cmp edi, 0x20
        jge public_6ad460f
        mov ebx, 0x80000000
        mov ecx, edi
        shr ebx, cl
        mov ecx, dword ptr ss : [ebp-4]
        lea edi, ds:[eax+edi+4]
        not ebx
        mov dword ptr ss : [ebp-0x14], ebx
        and ebx, dword ptr ds : [eax+ecx*4+0x44]
        mov dword ptr ds : [eax+ecx*4+0x44], ebx
        dec byte ptr ds : [edi]
        jne public_6ad463d
        mov ebx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp-0x14]
        and dword ptr ds : [ebx], ecx
        jmp public_6ad4640
        public_6ad460f : nop
        lea ecx, ds:[edi-0x20]
        mov ebx, 0x80000000
        shr ebx, cl
        mov ecx, dword ptr ss : [ebp-4]
        lea edi, ds:[eax+edi+4]
        lea ecx, ds:[eax+ecx*4+0xC4]
        not ebx
        and dword ptr ds : [ecx], ebx
        dec byte ptr ds : [edi]
        mov dword ptr ss : [ebp-0x14], ebx
        jne public_6ad463d
        mov ebx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp-0x14]
        and dword ptr ds : [ebx+4], ecx
        jmp public_6ad4640
        public_6ad463d : nop
        mov ebx, dword ptr ss : [ebp+8]
        public_6ad4640 : nop
        mov ecx, dword ptr ds : [edx+8]
        mov edi, dword ptr ds : [edx+4]
        cmp dword ptr ss : [ebp-8], 0
        mov dword ptr ds : [ecx+4], edi
        mov ecx, dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edi
        je public_6ad46f0
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edi, dword ptr ds : [ecx+esi*8+4]
        lea ecx, ds:[ecx+esi*8]
        mov dword ptr ds : [edx+4], edi
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ds : [edx+4]
        cmp ecx, dword ptr ds : [edx+8]
        jne public_6ad46e1
        mov cl, byte ptr ds : [esi+eax+4]
        cmp esi, 0x20
        mov byte ptr ss : [ebp+0xB], cl
        jge public_6ad46b2
        inc cl
        cmp byte ptr ss : [ebp+0xB], 0
        mov byte ptr ds : [esi+eax+4], cl
        jne public_6ad46a0
        mov edi, 0x80000000
        mov ecx, esi
        shr edi, cl
        or dword ptr ds : [ebx], edi
        public_6ad46a0 : nop
        mov edi, 0x80000000
        mov ecx, esi
        shr edi, cl
        mov ecx, dword ptr ss : [ebp-4]
        or dword ptr ds : [eax+ecx*4+0x44], edi
        jmp public_6ad46e1
        public_6ad46b2 : nop
        inc cl
        cmp byte ptr ss : [ebp+0xB], 0
        mov byte ptr ds : [esi+eax+4], cl
        jne public_6ad46cb
        lea ecx, ds:[esi-0x20]
        mov edi, 0x80000000
        shr edi, cl
        or dword ptr ds : [ebx+4], edi
        public_6ad46cb : nop
        mov ecx, dword ptr ss : [ebp-4]
        lea edi, ds:[eax+ecx*4+0xC4]
        lea ecx, ds:[esi-0x20]
        mov esi, 0x80000000
        shr esi, cl
        or dword ptr ds : [edi], esi
        public_6ad46e1 : nop
        mov ecx, dword ptr ss : [ebp-8]
        public_6ad46e4 : nop
        test ecx, ecx
        je public_6ad46f3
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+edx-4], ecx
        jmp public_6ad46f3
        public_6ad46f0 : nop
        mov ecx, dword ptr ss : [ebp-8]
        public_6ad46f3 : nop
        mov esi, dword ptr ss : [ebp-0x10]
        add edx, ecx
        lea ecx, ds:[esi+1]
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [edx+esi-4], ecx
        mov esi, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        lea edi, ds:[ecx+1]
        mov dword ptr ds : [esi], edi
        jne public_6ad4729
        cmp ebx, dword ptr ds : [public_6ae2450]
        jne public_6ad4729
        mov ecx, dword ptr ss : [ebp-4]
        cmp ecx, dword ptr ds : [public_6ae2448]
        jne public_6ad4729
        and dword ptr ds : [public_6ae2450], 0
        public_6ad4729 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax], ecx
        lea eax, ds:[edx+4]
        public_6ad4731 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad442d)
    }
}

#undef public_6ad446d
#undef public_6ad447d
#undef public_6ad448b
#undef public_6ad44a4
#undef public_6ad44ab
#undef public_6ad44c5
#undef public_6ad44c7
#undef public_6ad44c9
#undef public_6ad44dc
#undef public_6ad44df
#undef public_6ad44e3
#undef public_6ad44f5
#undef public_6ad44f7
#undef public_6ad4507
#undef public_6ad451b
#undef public_6ad4522
#undef public_6ad4549
#undef public_6ad4566
#undef public_6ad457d
#undef public_6ad4580
#undef public_6ad45a9
#undef public_6ad45b2
#undef public_6ad45cf
#undef public_6ad460f
#undef public_6ad463d
#undef public_6ad4640
#undef public_6ad46a0
#undef public_6ad46b2
#undef public_6ad46cb
#undef public_6ad46e1
#undef public_6ad46e4
#undef public_6ad46f0
#undef public_6ad46f3
#undef public_6ad4729
#undef public_6ad4731
