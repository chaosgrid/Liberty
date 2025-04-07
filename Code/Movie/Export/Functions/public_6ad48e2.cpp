#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad48e2);

#define public_6ad4959 _public_6ad4959
#define public_6ad4985 _public_6ad4985
#define public_6ad49a9 _public_6ad49a9
#define public_6ad49e3 _public_6ad49e3
#define public_6ad4a2f _public_6ad4a2f
#define public_6ad4a3c _public_6ad4a3c
#define public_6ad4a52 _public_6ad4a52
#define public_6ad4a61 _public_6ad4a61
#define public_6ad4a65 _public_6ad4a65
#define public_6ad4a77 _public_6ad4a77
#define public_6ad4a7a _public_6ad4a7a
#define public_6ad4a89 _public_6ad4a89
#define public_6ad4a90 _public_6ad4a90
#define public_6ad4abb _public_6ad4abb
#define public_6ad4ad4 _public_6ad4ad4
#define public_6ad4aff _public_6ad4aff
#define public_6ad4b20 _public_6ad4b20
#define public_6ad4b23 _public_6ad4b23
#define public_6ad4b4a _public_6ad4b4a
#define public_6ad4b91 _public_6ad4b91
#define public_6ad4b9e _public_6ad4b9e
#define public_6ad4bb4 _public_6ad4bb4
#define public_6ad4bc3 _public_6ad4bc3
#define public_6ad4bc7 _public_6ad4bc7
#define public_6ad4bd0 _public_6ad4bd0
#define public_6ad4bd3 _public_6ad4bd3

PROC_DECLARE(0x6ad48e2, internal_6ad48e2, public_6ad48e2);
extern "C" NAKED register_t __cdecl internal_6ad48e2()
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
        jle public_6ad4a90
        test bl, 1
        jne public_6ad4a89
        add ebx, ecx
        cmp esi, ebx
        jg public_6ad4a89
        mov ecx, dword ptr ss : [ebp-4]
        sar ecx, 4
        dec ecx
        cmp ecx, 0x3F
        mov dword ptr ss : [ebp-8], ecx
        jbe public_6ad4959
        push 0x3F
        pop ecx
        mov dword ptr ss : [ebp-8], ecx
        public_6ad4959 : nop
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edi+8]
        jne public_6ad49a9
        cmp ecx, 0x20
        jae public_6ad4985
        mov ebx, 0x80000000
        shr ebx, cl
        mov ecx, dword ptr ss : [ebp-8]
        lea ecx, ds:[ecx+eax+4]
        not ebx
        and dword ptr ds : [eax+edx*4+0x44], ebx
        dec byte ptr ds : [ecx]
        jne public_6ad49a9
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx], ebx
        jmp public_6ad49a9
        public_6ad4985 : nop
        add ecx, 0xFFFFFFE0
        mov ebx, 0x80000000
        shr ebx, cl
        mov ecx, dword ptr ss : [ebp-8]
        lea ecx, ds:[ecx+eax+4]
        not ebx
        and dword ptr ds : [eax+edx*4+0xC4], ebx
        dec byte ptr ds : [ecx]
        jne public_6ad49a9
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx+4], ebx
        public_6ad49a9 : nop
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
        jle public_6ad4a77
        mov edi, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+0xC]
        sar edi, 4
        dec edi
        lea ecx, ds:[ecx+esi-4]
        cmp edi, 0x3F
        jbe public_6ad49e3
        push 0x3F
        pop edi
        public_6ad49e3 : nop
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
        jne public_6ad4a65
        mov cl, byte ptr ds : [edi+eax+4]
        cmp edi, 0x20
        mov byte ptr ss : [ebp+0x13], cl
        inc cl
        mov byte ptr ds : [edi+eax+4], cl
        jae public_6ad4a3c
        cmp byte ptr ss : [ebp+0x13], 0
        jne public_6ad4a2f
        mov ebx, 0x80000000
        mov ecx, edi
        shr ebx, cl
        mov ecx, dword ptr ss : [ebp+8]
        or dword ptr ds : [ecx], ebx
        public_6ad4a2f : nop
        lea eax, ds:[eax+edx*4+0x44]
        mov edx, 0x80000000
        mov ecx, edi
        jmp public_6ad4a61
        public_6ad4a3c : nop
        cmp byte ptr ss : [ebp+0x13], 0
        jne public_6ad4a52
        lea ecx, ds:[edi-0x20]
        mov ebx, 0x80000000
        shr ebx, cl
        mov ecx, dword ptr ss : [ebp+8]
        or dword ptr ds : [ecx+4], ebx
        public_6ad4a52 : nop
        lea eax, ds:[eax+edx*4+0xC4]
        lea ecx, ds:[edi-0x20]
        mov edx, 0x80000000
        public_6ad4a61 : nop
        shr edx, cl
        or dword ptr ds : [eax], edx
        public_6ad4a65 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp-4]
        lea eax, ds:[edx+esi-4]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [ecx+eax-4], ecx
        jmp public_6ad4a7a
        public_6ad4a77 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        public_6ad4a7a : nop
        lea eax, ds:[esi+1]
        mov dword ptr ds : [edx-4], eax
        mov dword ptr ds : [edx+esi-8], eax
        jmp public_6ad4bd0
        public_6ad4a89 : nop
        xor eax, eax
        jmp public_6ad4bd3
        public_6ad4a90 : nop
        jge public_6ad4bd0
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
        jbe public_6ad4abb
        push 0x3F
        pop esi
        public_6ad4abb : nop
        test byte ptr ss : [ebp-4], 1
        jne public_6ad4b4a
        mov esi, dword ptr ss : [ebp-4]
        sar esi, 4
        dec esi
        cmp esi, 0x3F
        jbe public_6ad4ad4
        push 0x3F
        pop esi
        public_6ad4ad4 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ad4b23
        cmp esi, 0x20
        jae public_6ad4aff
        mov ebx, 0x80000000
        mov ecx, esi
        shr ebx, cl
        lea esi, ds:[esi+eax+4]
        not ebx
        and dword ptr ds : [eax+edx*4+0x44], ebx
        dec byte ptr ds : [esi]
        jne public_6ad4b20
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx], ebx
        jmp public_6ad4b20
        public_6ad4aff : nop
        lea ecx, ds:[esi-0x20]
        mov ebx, 0x80000000
        shr ebx, cl
        lea ecx, ds:[esi+eax+4]
        not ebx
        and dword ptr ds : [eax+edx*4+0xC4], ebx
        dec byte ptr ds : [ecx]
        jne public_6ad4b20
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx+4], ebx
        public_6ad4b20 : nop
        mov ebx, dword ptr ss : [ebp+0xC]
        public_6ad4b23 : nop
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
        jbe public_6ad4b4a
        push 0x3F
        pop esi
        public_6ad4b4a : nop
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
        jne public_6ad4bc7
        mov cl, byte ptr ds : [esi+eax+4]
        cmp esi, 0x20
        mov byte ptr ss : [ebp+0xF], cl
        inc cl
        mov byte ptr ds : [esi+eax+4], cl
        jae public_6ad4b9e
        cmp byte ptr ss : [ebp+0xF], 0
        jne public_6ad4b91
        mov edi, 0x80000000
        mov ecx, esi
        shr edi, cl
        mov ecx, dword ptr ss : [ebp+8]
        or dword ptr ds : [ecx], edi
        public_6ad4b91 : nop
        lea eax, ds:[eax+edx*4+0x44]
        mov edx, 0x80000000
        mov ecx, esi
        jmp public_6ad4bc3
        public_6ad4b9e : nop
        cmp byte ptr ss : [ebp+0xF], 0
        jne public_6ad4bb4
        lea ecx, ds:[esi-0x20]
        mov edi, 0x80000000
        shr edi, cl
        mov ecx, dword ptr ss : [ebp+8]
        or dword ptr ds : [ecx+4], edi
        public_6ad4bb4 : nop
        lea eax, ds:[eax+edx*4+0xC4]
        lea ecx, ds:[esi-0x20]
        mov edx, 0x80000000
        public_6ad4bc3 : nop
        shr edx, cl
        or dword ptr ds : [eax], edx
        public_6ad4bc7 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [eax+ebx-4], eax
        public_6ad4bd0 : nop
        push 1
        pop eax
        public_6ad4bd3 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad48e2)
    }
}

#undef public_6ad4959
#undef public_6ad4985
#undef public_6ad49a9
#undef public_6ad49e3
#undef public_6ad4a2f
#undef public_6ad4a3c
#undef public_6ad4a52
#undef public_6ad4a61
#undef public_6ad4a65
#undef public_6ad4a77
#undef public_6ad4a7a
#undef public_6ad4a89
#undef public_6ad4a90
#undef public_6ad4abb
#undef public_6ad4ad4
#undef public_6ad4aff
#undef public_6ad4b20
#undef public_6ad4b23
#undef public_6ad4b4a
#undef public_6ad4b91
#undef public_6ad4b9e
#undef public_6ad4bb4
#undef public_6ad4bc3
#undef public_6ad4bc7
#undef public_6ad4bd0
#undef public_6ad4bd3
