#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dc453);

#define public_65dc4ca _public_65dc4ca
#define public_65dc4f6 _public_65dc4f6
#define public_65dc51a _public_65dc51a
#define public_65dc554 _public_65dc554
#define public_65dc5a0 _public_65dc5a0
#define public_65dc5ad _public_65dc5ad
#define public_65dc5c3 _public_65dc5c3
#define public_65dc5d2 _public_65dc5d2
#define public_65dc5d6 _public_65dc5d6
#define public_65dc5e8 _public_65dc5e8
#define public_65dc5eb _public_65dc5eb
#define public_65dc5fa _public_65dc5fa
#define public_65dc601 _public_65dc601
#define public_65dc62c _public_65dc62c
#define public_65dc645 _public_65dc645
#define public_65dc670 _public_65dc670
#define public_65dc691 _public_65dc691
#define public_65dc694 _public_65dc694
#define public_65dc6bb _public_65dc6bb
#define public_65dc702 _public_65dc702
#define public_65dc70f _public_65dc70f
#define public_65dc725 _public_65dc725
#define public_65dc734 _public_65dc734
#define public_65dc738 _public_65dc738
#define public_65dc741 _public_65dc741
#define public_65dc744 _public_65dc744

PROC_DECLARE(0x65dc453, internal_65dc453, public_65dc453);
extern "C" NAKED register_t __cdecl internal_65dc453()
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
        jle public_65dc601
        test bl, 1
        jne public_65dc5fa
        add ebx, ecx
        cmp esi, ebx
        jg public_65dc5fa
        mov ecx, dword ptr ss : [ebp-4]
        sar ecx, 4
        dec ecx
        cmp ecx, 0x3F
        mov dword ptr ss : [ebp-8], ecx
        jbe public_65dc4ca
        push 0x3F
        pop ecx
        mov dword ptr ss : [ebp-8], ecx
        public_65dc4ca : nop
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edi+8]
        jne public_65dc51a
        cmp ecx, 0x20
        jae public_65dc4f6
        mov ebx, 0x80000000
        shr ebx, cl
        mov ecx, dword ptr ss : [ebp-8]
        lea ecx, ds:[ecx+eax+4]
        not ebx
        and dword ptr ds : [eax+edx*4+0x44], ebx
        dec byte ptr ds : [ecx]
        jne public_65dc51a
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx], ebx
        jmp public_65dc51a
        public_65dc4f6 : nop
        add ecx, 0xFFFFFFE0
        mov ebx, 0x80000000
        shr ebx, cl
        mov ecx, dword ptr ss : [ebp-8]
        lea ecx, ds:[ecx+eax+4]
        not ebx
        and dword ptr ds : [eax+edx*4+0xC4], ebx
        dec byte ptr ds : [ecx]
        jne public_65dc51a
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx+4], ebx
        public_65dc51a : nop
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
        jle public_65dc5e8
        mov edi, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+0xC]
        sar edi, 4
        dec edi
        lea ecx, ds:[ecx+esi-4]
        cmp edi, 0x3F
        jbe public_65dc554
        push 0x3F
        pop edi
        public_65dc554 : nop
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
        jne public_65dc5d6
        mov cl, byte ptr ds : [edi+eax+4]
        cmp edi, 0x20
        mov byte ptr ss : [ebp+0x13], cl
        inc cl
        mov byte ptr ds : [edi+eax+4], cl
        jae public_65dc5ad
        cmp byte ptr ss : [ebp+0x13], 0
        jne public_65dc5a0
        mov ebx, 0x80000000
        mov ecx, edi
        shr ebx, cl
        mov ecx, dword ptr ss : [ebp+8]
        or dword ptr ds : [ecx], ebx
        public_65dc5a0 : nop
        lea eax, ds:[eax+edx*4+0x44]
        mov edx, 0x80000000
        mov ecx, edi
        jmp public_65dc5d2
        public_65dc5ad : nop
        cmp byte ptr ss : [ebp+0x13], 0
        jne public_65dc5c3
        lea ecx, ds:[edi-0x20]
        mov ebx, 0x80000000
        shr ebx, cl
        mov ecx, dword ptr ss : [ebp+8]
        or dword ptr ds : [ecx+4], ebx
        public_65dc5c3 : nop
        lea eax, ds:[eax+edx*4+0xC4]
        lea ecx, ds:[edi-0x20]
        mov edx, 0x80000000
        public_65dc5d2 : nop
        shr edx, cl
        or dword ptr ds : [eax], edx
        public_65dc5d6 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp-4]
        lea eax, ds:[edx+esi-4]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [ecx+eax-4], ecx
        jmp public_65dc5eb
        public_65dc5e8 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        public_65dc5eb : nop
        lea eax, ds:[esi+1]
        mov dword ptr ds : [edx-4], eax
        mov dword ptr ds : [edx+esi-8], eax
        jmp public_65dc741
        public_65dc5fa : nop
        xor eax, eax
        jmp public_65dc744
        public_65dc601 : nop
        jge public_65dc741
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
        jbe public_65dc62c
        push 0x3F
        pop esi
        public_65dc62c : nop
        test byte ptr ss : [ebp-4], 1
        jne public_65dc6bb
        mov esi, dword ptr ss : [ebp-4]
        sar esi, 4
        dec esi
        cmp esi, 0x3F
        jbe public_65dc645
        push 0x3F
        pop esi
        public_65dc645 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_65dc694
        cmp esi, 0x20
        jae public_65dc670
        mov ebx, 0x80000000
        mov ecx, esi
        shr ebx, cl
        lea esi, ds:[esi+eax+4]
        not ebx
        and dword ptr ds : [eax+edx*4+0x44], ebx
        dec byte ptr ds : [esi]
        jne public_65dc691
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx], ebx
        jmp public_65dc691
        public_65dc670 : nop
        lea ecx, ds:[esi-0x20]
        mov ebx, 0x80000000
        shr ebx, cl
        lea ecx, ds:[esi+eax+4]
        not ebx
        and dword ptr ds : [eax+edx*4+0xC4], ebx
        dec byte ptr ds : [ecx]
        jne public_65dc691
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx+4], ebx
        public_65dc691 : nop
        mov ebx, dword ptr ss : [ebp+0xC]
        public_65dc694 : nop
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
        jbe public_65dc6bb
        push 0x3F
        pop esi
        public_65dc6bb : nop
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
        jne public_65dc738
        mov cl, byte ptr ds : [esi+eax+4]
        cmp esi, 0x20
        mov byte ptr ss : [ebp+0xF], cl
        inc cl
        mov byte ptr ds : [esi+eax+4], cl
        jae public_65dc70f
        cmp byte ptr ss : [ebp+0xF], 0
        jne public_65dc702
        mov edi, 0x80000000
        mov ecx, esi
        shr edi, cl
        mov ecx, dword ptr ss : [ebp+8]
        or dword ptr ds : [ecx], edi
        public_65dc702 : nop
        lea eax, ds:[eax+edx*4+0x44]
        mov edx, 0x80000000
        mov ecx, esi
        jmp public_65dc734
        public_65dc70f : nop
        cmp byte ptr ss : [ebp+0xF], 0
        jne public_65dc725
        lea ecx, ds:[esi-0x20]
        mov edi, 0x80000000
        shr edi, cl
        mov ecx, dword ptr ss : [ebp+8]
        or dword ptr ds : [ecx+4], edi
        public_65dc725 : nop
        lea eax, ds:[eax+edx*4+0xC4]
        lea ecx, ds:[esi-0x20]
        mov edx, 0x80000000
        public_65dc734 : nop
        shr edx, cl
        or dword ptr ds : [eax], edx
        public_65dc738 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [eax+ebx-4], eax
        public_65dc741 : nop
        push 1
        pop eax
        public_65dc744 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65dc453)
    }
}

#undef public_65dc4ca
#undef public_65dc4f6
#undef public_65dc51a
#undef public_65dc554
#undef public_65dc5a0
#undef public_65dc5ad
#undef public_65dc5c3
#undef public_65dc5d2
#undef public_65dc5d6
#undef public_65dc5e8
#undef public_65dc5eb
#undef public_65dc5fa
#undef public_65dc601
#undef public_65dc62c
#undef public_65dc645
#undef public_65dc670
#undef public_65dc691
#undef public_65dc694
#undef public_65dc6bb
#undef public_65dc702
#undef public_65dc70f
#undef public_65dc725
#undef public_65dc734
#undef public_65dc738
#undef public_65dc741
#undef public_65dc744
