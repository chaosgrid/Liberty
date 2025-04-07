#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6110);

#define public_6ef6187 _public_6ef6187
#define public_6ef61b3 _public_6ef61b3
#define public_6ef61d7 _public_6ef61d7
#define public_6ef6211 _public_6ef6211
#define public_6ef625d _public_6ef625d
#define public_6ef626a _public_6ef626a
#define public_6ef6280 _public_6ef6280
#define public_6ef628f _public_6ef628f
#define public_6ef6293 _public_6ef6293
#define public_6ef62a5 _public_6ef62a5
#define public_6ef62a8 _public_6ef62a8
#define public_6ef62b7 _public_6ef62b7
#define public_6ef62be _public_6ef62be
#define public_6ef62e9 _public_6ef62e9
#define public_6ef6302 _public_6ef6302
#define public_6ef632d _public_6ef632d
#define public_6ef634e _public_6ef634e
#define public_6ef6351 _public_6ef6351
#define public_6ef6378 _public_6ef6378
#define public_6ef63bf _public_6ef63bf
#define public_6ef63cc _public_6ef63cc
#define public_6ef63e2 _public_6ef63e2
#define public_6ef63f1 _public_6ef63f1
#define public_6ef63f5 _public_6ef63f5
#define public_6ef63fe _public_6ef63fe
#define public_6ef6401 _public_6ef6401

PROC_DECLARE(0x6ef6110, internal_6ef6110, public_6ef6110);
extern "C" NAKED register_t __cdecl internal_6ef6110()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+0x10]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+0xC]
        mov edx, edi
        lea esi, ds:[eax+0x17]
        sub edx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [ecx+0x10]
        and esi, 0xFFFFFFF0
        shr edx, 0xF
        mov ecx, edx
        imul ecx, 0x204
        lea ecx, ds:[ecx+eax+0x144]
        mov dword ptr ss : [ebp-0xC], ecx
        mov ecx, dword ptr ds : [edi-4]
        dec ecx
        cmp esi, ecx
        mov dword ptr ss : [ebp+0x10], ecx
        mov ebx, dword ptr ds : [ecx+edi-4]
        lea edi, ds:[ecx+edi-4]
        mov dword ptr ss : [ebp-4], ebx
        jle public_6ef62be
        test bl, 1
        jne public_6ef62b7
        add ebx, ecx
        cmp esi, ebx
        jg public_6ef62b7
        mov ecx, dword ptr ss : [ebp-4]
        sar ecx, 4
        dec ecx
        cmp ecx, 0x3F
        mov dword ptr ss : [ebp-8], ecx
        jbe public_6ef6187
        push 0x3F
        pop ecx
        mov dword ptr ss : [ebp-8], ecx
        public_6ef6187 : nop
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edi+8]
        jne public_6ef61d7
        cmp ecx, 0x20
        jae public_6ef61b3
        mov ebx, 0x80000000
        shr ebx, cl
        mov ecx, dword ptr ss : [ebp-8]
        lea ecx, ds:[ecx+eax+4]
        not ebx
        and dword ptr ds : [eax+edx*4+0x44], ebx
        dec byte ptr ds : [ecx]
        jne public_6ef61d7
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx], ebx
        jmp public_6ef61d7
        public_6ef61b3 : nop
        add ecx, 0xFFFFFFE0
        mov ebx, 0x80000000
        shr ebx, cl
        mov ecx, dword ptr ss : [ebp-8]
        lea ecx, ds:[ecx+eax+4]
        not ebx
        and dword ptr ds : [eax+edx*4+0xC4], ebx
        dec byte ptr ds : [ecx]
        jne public_6ef61d7
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx+4], ebx
        public_6ef61d7 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov ebx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx+4], ebx
        mov ecx, dword ptr ds : [edi+4]
        mov edi, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx+8], edi
        mov ecx, dword ptr ss : [ebp+0x10]
        sub ecx, esi
        add dword ptr ss : [ebp-4], ecx
        cmp dword ptr ss : [ebp-4], 0
        jle public_6ef62a5
        mov edi, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+0xC]
        sar edi, 4
        dec edi
        lea ecx, ds:[ecx+esi-4]
        cmp edi, 0x3F
        jbe public_6ef6211
        push 0x3F
        pop edi
        public_6ef6211 : nop
        mov ebx, dword ptr ss : [ebp-0xC]
        lea ebx, ds:[ebx+edi*8]
        mov dword ptr ss : [ebp+0x10], ebx
        mov ebx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ecx+4], ebx
        mov ebx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ecx+8], ebx
        mov dword ptr ds : [ebx+4], ecx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [ebx+8], ecx
        mov ebx, dword ptr ds : [ecx+4]
        cmp ebx, dword ptr ds : [ecx+8]
        jne public_6ef6293
        mov cl, byte ptr ds : [edi+eax+4]
        cmp edi, 0x20
        mov byte ptr ss : [ebp+0x13], cl
        inc cl
        mov byte ptr ds : [edi+eax+4], cl
        jae public_6ef626a
        cmp byte ptr ss : [ebp+0x13], 0
        jne public_6ef625d
        mov ebx, 0x80000000
        mov ecx, edi
        shr ebx, cl
        mov ecx, dword ptr ss : [ebp+8]
        or dword ptr ds : [ecx], ebx
        public_6ef625d : nop
        lea eax, ds:[eax+edx*4+0x44]
        mov edx, 0x80000000
        mov ecx, edi
        jmp public_6ef628f
        public_6ef626a : nop
        cmp byte ptr ss : [ebp+0x13], 0
        jne public_6ef6280
        lea ecx, ds:[edi-0x20]
        mov ebx, 0x80000000
        shr ebx, cl
        mov ecx, dword ptr ss : [ebp+8]
        or dword ptr ds : [ecx+4], ebx
        public_6ef6280 : nop
        lea eax, ds:[eax+edx*4+0xC4]
        lea ecx, ds:[edi-0x20]
        mov edx, 0x80000000
        public_6ef628f : nop
        shr edx, cl
        or dword ptr ds : [eax], edx
        public_6ef6293 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp-4]
        lea eax, ds:[edx+esi-4]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [ecx+eax-4], ecx
        jmp public_6ef62a8
        public_6ef62a5 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        public_6ef62a8 : nop
        lea eax, ds:[esi+1]
        mov dword ptr ds : [edx-4], eax
        mov dword ptr ds : [edx+esi-8], eax
        jmp public_6ef63fe
        public_6ef62b7 : nop
        xor eax, eax
        jmp public_6ef6401
        public_6ef62be : nop
        jge public_6ef63fe
        mov ebx, dword ptr ss : [ebp+0xC]
        sub dword ptr ss : [ebp+0x10], esi
        lea ecx, ds:[esi+1]
        mov dword ptr ds : [ebx-4], ecx
        lea ebx, ds:[ebx+esi-4]
        mov esi, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp+0xC], ebx
        sar esi, 4
        dec esi
        mov dword ptr ds : [ebx-4], ecx
        cmp esi, 0x3F
        jbe public_6ef62e9
        push 0x3F
        pop esi
        public_6ef62e9 : nop
        test byte ptr ss : [ebp-4], 1
        jne public_6ef6378
        mov esi, dword ptr ss : [ebp-4]
        sar esi, 4
        dec esi
        cmp esi, 0x3F
        jbe public_6ef6302
        push 0x3F
        pop esi
        public_6ef6302 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ef6351
        cmp esi, 0x20
        jae public_6ef632d
        mov ebx, 0x80000000
        mov ecx, esi
        shr ebx, cl
        lea esi, ds:[esi+eax+4]
        not ebx
        and dword ptr ds : [eax+edx*4+0x44], ebx
        dec byte ptr ds : [esi]
        jne public_6ef634e
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx], ebx
        jmp public_6ef634e
        public_6ef632d : nop
        lea ecx, ds:[esi-0x20]
        mov ebx, 0x80000000
        shr ebx, cl
        lea ecx, ds:[esi+eax+4]
        not ebx
        and dword ptr ds : [eax+edx*4+0xC4], ebx
        dec byte ptr ds : [ecx]
        jne public_6ef634e
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx+4], ebx
        public_6ef634e : nop
        mov ebx, dword ptr ss : [ebp+0xC]
        public_6ef6351 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx+4], esi
        mov ecx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ss : [ebp+0x10]
        add esi, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+0x10], esi
        sar esi, 4
        dec esi
        cmp esi, 0x3F
        jbe public_6ef6378
        push 0x3F
        pop esi
        public_6ef6378 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edi, dword ptr ds : [ecx+esi*8+4]
        lea ecx, ds:[ecx+esi*8]
        mov dword ptr ds : [ebx+4], edi
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ecx+4], ebx
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ecx+8], ebx
        mov ecx, dword ptr ds : [ebx+4]
        cmp ecx, dword ptr ds : [ebx+8]
        jne public_6ef63f5
        mov cl, byte ptr ds : [esi+eax+4]
        cmp esi, 0x20
        mov byte ptr ss : [ebp+0xF], cl
        inc cl
        mov byte ptr ds : [esi+eax+4], cl
        jae public_6ef63cc
        cmp byte ptr ss : [ebp+0xF], 0
        jne public_6ef63bf
        mov edi, 0x80000000
        mov ecx, esi
        shr edi, cl
        mov ecx, dword ptr ss : [ebp+8]
        or dword ptr ds : [ecx], edi
        public_6ef63bf : nop
        lea eax, ds:[eax+edx*4+0x44]
        mov edx, 0x80000000
        mov ecx, esi
        jmp public_6ef63f1
        public_6ef63cc : nop
        cmp byte ptr ss : [ebp+0xF], 0
        jne public_6ef63e2
        lea ecx, ds:[esi-0x20]
        mov edi, 0x80000000
        shr edi, cl
        mov ecx, dword ptr ss : [ebp+8]
        or dword ptr ds : [ecx+4], edi
        public_6ef63e2 : nop
        lea eax, ds:[eax+edx*4+0xC4]
        lea ecx, ds:[esi-0x20]
        mov edx, 0x80000000
        public_6ef63f1 : nop
        shr edx, cl
        or dword ptr ds : [eax], edx
        public_6ef63f5 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [eax+ebx-4], eax
        public_6ef63fe : nop
        push 1
        pop eax
        public_6ef6401 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef6110)
    }
}

#undef public_6ef6187
#undef public_6ef61b3
#undef public_6ef61d7
#undef public_6ef6211
#undef public_6ef625d
#undef public_6ef626a
#undef public_6ef6280
#undef public_6ef628f
#undef public_6ef6293
#undef public_6ef62a5
#undef public_6ef62a8
#undef public_6ef62b7
#undef public_6ef62be
#undef public_6ef62e9
#undef public_6ef6302
#undef public_6ef632d
#undef public_6ef634e
#undef public_6ef6351
#undef public_6ef6378
#undef public_6ef63bf
#undef public_6ef63cc
#undef public_6ef63e2
#undef public_6ef63f1
#undef public_6ef63f5
#undef public_6ef63fe
#undef public_6ef6401
