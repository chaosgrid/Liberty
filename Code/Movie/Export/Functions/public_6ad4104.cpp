#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf910);
CLANG_FORWARD_PROC_SYMBOL(public_6ad4104);

#define public_6ad4168 _public_6ad4168
#define public_6ad4193 _public_6ad4193
#define public_6ad41b4 _public_6ad41b4
#define public_6ad41bc _public_6ad41bc
#define public_6ad41bf _public_6ad41bf
#define public_6ad41da _public_6ad41da
#define public_6ad41e8 _public_6ad41e8
#define public_6ad420d _public_6ad420d
#define public_6ad421f _public_6ad421f
#define public_6ad424f _public_6ad424f
#define public_6ad426e _public_6ad426e
#define public_6ad4286 _public_6ad4286
#define public_6ad428b _public_6ad428b
#define public_6ad428e _public_6ad428e
#define public_6ad429c _public_6ad429c
#define public_6ad42e3 _public_6ad42e3
#define public_6ad42f4 _public_6ad42f4
#define public_6ad430a _public_6ad430a
#define public_6ad431d _public_6ad431d
#define public_6ad43ab _public_6ad43ab
#define public_6ad4410 _public_6ad4410
#define public_6ad441a _public_6ad441a
#define public_6ad4428 _public_6ad4428

PROC_DECLARE(0x6ad4104, internal_6ad4104, public_6ad4104);
extern "C" NAKED register_t __cdecl internal_6ad4104()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov ecx, dword ptr ss : [ebp+8]
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [ecx+0x10]
        push edi
        mov edi, esi
        add esi, 0xFFFFFFFC
        sub edi, dword ptr ds : [ecx+0xC]
        shr edi, 0xF
        mov ecx, edi
        imul ecx, 0x204
        lea ecx, ds:[ecx+eax+0x144]
        mov dword ptr ss : [ebp-0x10], ecx
        mov ecx, dword ptr ds : [esi]
        dec ecx
        test cl, 1
        mov dword ptr ss : [ebp-4], ecx
        jne public_6ad4428
        mov edx, dword ptr ds : [ecx+esi]
        lea ebx, ds:[ecx+esi]
        mov dword ptr ss : [ebp-0xC], edx
        mov edx, dword ptr ds : [esi-4]
        mov dword ptr ss : [ebp-8], edx
        mov edx, dword ptr ss : [ebp-0xC]
        test dl, 1
        mov dword ptr ss : [ebp+0xC], ebx
        jne public_6ad41da
        sar edx, 4
        dec edx
        cmp edx, 0x3F
        jbe public_6ad4168
        push 0x3F
        pop edx
        public_6ad4168 : nop
        mov ecx, dword ptr ds : [ebx+4]
        cmp ecx, dword ptr ds : [ebx+8]
        jne public_6ad41bc
        cmp edx, 0x20
        jae public_6ad4193
        mov ebx, 0x80000000
        mov ecx, edx
        shr ebx, cl
        lea ecx, ds:[edx+eax+4]
        not ebx
        and dword ptr ds : [eax+edi*4+0x44], ebx
        dec byte ptr ds : [ecx]
        jne public_6ad41b4
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx], ebx
        jmp public_6ad41b4
        public_6ad4193 : nop
        lea ecx, ds:[edx-0x20]
        mov ebx, 0x80000000
        shr ebx, cl
        lea ecx, ds:[edx+eax+4]
        not ebx
        and dword ptr ds : [eax+edi*4+0xC4], ebx
        dec byte ptr ds : [ecx]
        jne public_6ad41b4
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx+4], ebx
        public_6ad41b4 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov ebx, dword ptr ss : [ebp+0xC]
        jmp public_6ad41bf
        public_6ad41bc : nop
        mov ecx, dword ptr ss : [ebp-4]
        public_6ad41bf : nop
        mov edx, dword ptr ds : [ebx+8]
        mov ebx, dword ptr ds : [ebx+4]
        add ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [edx+4], ebx
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-4], ecx
        mov ebx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx+8], edx
        public_6ad41da : nop
        mov edx, ecx
        sar edx, 4
        dec edx
        cmp edx, 0x3F
        jbe public_6ad41e8
        push 0x3F
        pop edx
        public_6ad41e8 : nop
        mov ebx, dword ptr ss : [ebp-8]
        and ebx, 1
        mov dword ptr ss : [ebp-0xC], ebx
        jne public_6ad428b
        sub esi, dword ptr ss : [ebp-8]
        mov ebx, dword ptr ss : [ebp-8]
        sar ebx, 4
        push 0x3F
        mov dword ptr ss : [ebp+0xC], esi
        dec ebx
        pop esi
        cmp ebx, esi
        jbe public_6ad420d
        mov ebx, esi
        public_6ad420d : nop
        add ecx, dword ptr ss : [ebp-8]
        mov edx, ecx
        mov dword ptr ss : [ebp-4], ecx
        sar edx, 4
        dec edx
        cmp edx, esi
        jbe public_6ad421f
        mov edx, esi
        public_6ad421f : nop
        cmp ebx, edx
        je public_6ad4286
        mov ecx, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ds : [ecx+4]
        cmp esi, dword ptr ds : [ecx+8]
        jne public_6ad426e
        cmp ebx, 0x20
        jae public_6ad424f
        mov esi, 0x80000000
        mov ecx, ebx
        shr esi, cl
        not esi
        and dword ptr ds : [eax+edi*4+0x44], esi
        dec byte ptr ds : [ebx+eax+4]
        jne public_6ad426e
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx], esi
        jmp public_6ad426e
        public_6ad424f : nop
        lea ecx, ds:[ebx-0x20]
        mov esi, 0x80000000
        shr esi, cl
        not esi
        and dword ptr ds : [eax+edi*4+0xC4], esi
        dec byte ptr ds : [ebx+eax+4]
        jne public_6ad426e
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx+4], esi
        public_6ad426e : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        public_6ad4286 : nop
        mov esi, dword ptr ss : [ebp+0xC]
        jmp public_6ad428e
        public_6ad428b : nop
        mov ebx, dword ptr ss : [ebp+8]
        public_6ad428e : nop
        cmp dword ptr ss : [ebp-0xC], 0
        jne public_6ad429c
        cmp ebx, edx
        je public_6ad431d
        public_6ad429c : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov ebx, dword ptr ds : [ecx+edx*8+4]
        lea ecx, ds:[ecx+edx*8]
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [ecx+4], esi
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+8], esi
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ad431d
        mov cl, byte ptr ds : [edx+eax+4]
        cmp edx, 0x20
        mov byte ptr ss : [ebp+0xF], cl
        inc cl
        mov byte ptr ds : [edx+eax+4], cl
        jae public_6ad42f4
        cmp byte ptr ss : [ebp+0xF], 0
        jne public_6ad42e3
        mov ebx, 0x80000000
        mov ecx, edx
        shr ebx, cl
        mov ecx, dword ptr ss : [ebp+8]
        or dword ptr ds : [ecx], ebx
        public_6ad42e3 : nop
        mov ebx, 0x80000000
        mov ecx, edx
        shr ebx, cl
        lea eax, ds:[eax+edi*4+0x44]
        or dword ptr ds : [eax], ebx
        jmp public_6ad431d
        public_6ad42f4 : nop
        cmp byte ptr ss : [ebp+0xF], 0
        jne public_6ad430a
        lea ecx, ds:[edx-0x20]
        mov ebx, 0x80000000
        shr ebx, cl
        mov ecx, dword ptr ss : [ebp+8]
        or dword ptr ds : [ecx+4], ebx
        public_6ad430a : nop
        lea ecx, ds:[edx-0x20]
        mov edx, 0x80000000
        shr edx, cl
        lea eax, ds:[eax+edi*4+0xC4]
        or dword ptr ds : [eax], edx
        public_6ad431d : nop
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [eax+esi-4], eax
        mov eax, dword ptr ss : [ebp-0x10]
        dec dword ptr ds : [eax]
        jne public_6ad4428
        mov eax, dword ptr ds : [public_6ae2450]
        test eax, eax
        je public_6ad441a
        mov ecx, dword ptr ds : [public_6ae2448]
        mov esi, dword ptr ds : [public_6ada0c4]
        shl ecx, 0xF
        add ecx, dword ptr ds : [eax+0xC]
        mov ebx, 0x8000
        push 0x4000
        push ebx
        push ecx
        call esi
        mov ecx, dword ptr ds : [public_6ae2448]
        mov eax, dword ptr ds : [public_6ae2450]
        mov edx, 0x80000000
        shr edx, cl
        or dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [public_6ae2450]
        mov ecx, dword ptr ds : [public_6ae2448]
        mov eax, dword ptr ds : [eax+0x10]
        and dword ptr ds : [eax+ecx*4+0xC4], 0
        mov eax, dword ptr ds : [public_6ae2450]
        mov eax, dword ptr ds : [eax+0x10]
        dec byte ptr ds : [eax+0x43]
        mov eax, dword ptr ds : [public_6ae2450]
        mov ecx, dword ptr ds : [eax+0x10]
        cmp byte ptr ds : [ecx+0x43], 0
        jne public_6ad43ab
        and dword ptr ds : [eax+4], 0xFFFFFFFE
        mov eax, dword ptr ds : [public_6ae2450]
        public_6ad43ab : nop
        cmp dword ptr ds : [eax+8], 0xFFFFFFFF
        jne public_6ad441a
        push ebx
        push 0
        push dword ptr ds : [eax+0xC]
        call esi
        mov eax, dword ptr ds : [public_6ae2450]
        push dword ptr ds : [eax+0x10]
        push 0
        push dword ptr ds : [public_6ae2460]
        call dword ptr ds : [public_6ada134]
        mov eax, dword ptr ds : [public_6ae2454]
        mov edx, dword ptr ds : [public_6ae2458]
        lea eax, ds:[eax+eax*4]
        shl eax, 2
        mov ecx, eax
        mov eax, dword ptr ds : [public_6ae2450]
        sub ecx, eax
        lea ecx, ds:[ecx+edx-0x14]
        push ecx
        lea ecx, ds:[eax+0x14]
        push ecx
        push eax
        call public_6acf910
        mov eax, dword ptr ss : [ebp+8]
        add esp, 0xC
        dec dword ptr ds : [public_6ae2454]
        cmp eax, dword ptr ds : [public_6ae2450]
        jbe public_6ad4410
        sub dword ptr ss : [ebp+8], 0x14
        public_6ad4410 : nop
        mov eax, dword ptr ds : [public_6ae2458]
        mov dword ptr ds : [public_6ae244c], eax
        public_6ad441a : nop
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [public_6ae2448], edi
        mov dword ptr ds : [public_6ae2450], eax
        public_6ad4428 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad4104)
    }
}

#undef public_6ad4168
#undef public_6ad4193
#undef public_6ad41b4
#undef public_6ad41bc
#undef public_6ad41bf
#undef public_6ad41da
#undef public_6ad41e8
#undef public_6ad420d
#undef public_6ad421f
#undef public_6ad424f
#undef public_6ad426e
#undef public_6ad4286
#undef public_6ad428b
#undef public_6ad428e
#undef public_6ad429c
#undef public_6ad42e3
#undef public_6ad42f4
#undef public_6ad430a
#undef public_6ad431d
#undef public_6ad43ab
#undef public_6ad4410
#undef public_6ad441a
#undef public_6ad4428
