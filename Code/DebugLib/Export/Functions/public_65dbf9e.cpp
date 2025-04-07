#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dbf9e);
CLANG_FORWARD_PROC_SYMBOL(public_65dc2a7);
CLANG_FORWARD_PROC_SYMBOL(public_65dc358);

#define public_65dbfde _public_65dbfde
#define public_65dbfee _public_65dbfee
#define public_65dbffc _public_65dbffc
#define public_65dc015 _public_65dc015
#define public_65dc01c _public_65dc01c
#define public_65dc036 _public_65dc036
#define public_65dc038 _public_65dc038
#define public_65dc03a _public_65dc03a
#define public_65dc04d _public_65dc04d
#define public_65dc050 _public_65dc050
#define public_65dc054 _public_65dc054
#define public_65dc066 _public_65dc066
#define public_65dc068 _public_65dc068
#define public_65dc078 _public_65dc078
#define public_65dc08c _public_65dc08c
#define public_65dc093 _public_65dc093
#define public_65dc0ba _public_65dc0ba
#define public_65dc0d7 _public_65dc0d7
#define public_65dc0ee _public_65dc0ee
#define public_65dc0f1 _public_65dc0f1
#define public_65dc11a _public_65dc11a
#define public_65dc123 _public_65dc123
#define public_65dc140 _public_65dc140
#define public_65dc180 _public_65dc180
#define public_65dc1ae _public_65dc1ae
#define public_65dc1b1 _public_65dc1b1
#define public_65dc211 _public_65dc211
#define public_65dc223 _public_65dc223
#define public_65dc23c _public_65dc23c
#define public_65dc252 _public_65dc252
#define public_65dc255 _public_65dc255
#define public_65dc261 _public_65dc261
#define public_65dc264 _public_65dc264
#define public_65dc29a _public_65dc29a
#define public_65dc2a2 _public_65dc2a2

PROC_DECLARE(0x65dbf9e, internal_65dbf9e, public_65dbf9e);
extern "C" NAKED register_t __cdecl internal_65dbf9e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov eax, dword ptr ds : [public_65e7914]
        mov edx, dword ptr ds : [public_65e7918]
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
        jge public_65dbfde
        or esi, 0xFFFFFFFF
        shr esi, cl
        or dword ptr ss : [ebp-8], 0xFFFFFFFF
        mov dword ptr ss : [ebp-0xC], esi
        jmp public_65dbfee
        public_65dbfde : nop
        add ecx, 0xFFFFFFE0
        or eax, 0xFFFFFFFF
        xor esi, esi
        shr eax, cl
        mov dword ptr ss : [ebp-0xC], esi
        mov dword ptr ss : [ebp-8], eax
        public_65dbfee : nop
        mov eax, dword ptr ds : [public_65e790c]
        mov ebx, eax
        cmp ebx, edi
        mov dword ptr ss : [ebp+8], ebx
        jae public_65dc015
        public_65dbffc : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        and ecx, dword ptr ss : [ebp-8]
        and edi, esi
        or ecx, edi
        jne public_65dc015
        add ebx, 0x14
        cmp ebx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+8], ebx
        jb public_65dbffc
        public_65dc015 : nop
        cmp ebx, dword ptr ss : [ebp-4]
        jne public_65dc093
        mov ebx, edx
        public_65dc01c : nop
        cmp ebx, eax
        mov dword ptr ss : [ebp+8], ebx
        jae public_65dc038
        mov ecx, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        and ecx, dword ptr ss : [ebp-8]
        and edi, esi
        or ecx, edi
        jne public_65dc036
        add ebx, 0x14
        jmp public_65dc01c
        public_65dc036 : nop
        cmp ebx, eax
        public_65dc038 : nop
        jne public_65dc093
        public_65dc03a : nop
        cmp ebx, dword ptr ss : [ebp-4]
        jae public_65dc050
        cmp dword ptr ds : [ebx+8], 0
        jne public_65dc04d
        add ebx, 0x14
        mov dword ptr ss : [ebp+8], ebx
        jmp public_65dc03a
        public_65dc04d : nop
        cmp ebx, dword ptr ss : [ebp-4]
        public_65dc050 : nop
        jne public_65dc078
        mov ebx, edx
        public_65dc054 : nop
        cmp ebx, eax
        mov dword ptr ss : [ebp+8], ebx
        jae public_65dc068
        cmp dword ptr ds : [ebx+8], 0
        jne public_65dc066
        add ebx, 0x14
        jmp public_65dc054
        public_65dc066 : nop
        cmp ebx, eax
        public_65dc068 : nop
        jne public_65dc078
        call public_65dc2a7
        mov ebx, eax
        test ebx, ebx
        mov dword ptr ss : [ebp+8], ebx
        je public_65dc08c
        public_65dc078 : nop
        push ebx
        call public_65dc358
        pop ecx
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [ebx+0x10]
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        jne public_65dc093
        public_65dc08c : nop
        xor eax, eax
        jmp public_65dc2a2
        public_65dc093 : nop
        mov dword ptr ds : [public_65e790c], ebx
        mov eax, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ds : [eax]
        cmp edx, 0xFFFFFFFF
        mov dword ptr ss : [ebp-4], edx
        je public_65dc0ba
        mov ecx, dword ptr ds : [eax+edx*4+0xC4]
        mov edi, dword ptr ds : [eax+edx*4+0x44]
        and ecx, dword ptr ss : [ebp-8]
        and edi, esi
        or ecx, edi
        jne public_65dc0f1
        public_65dc0ba : nop
        mov edx, dword ptr ds : [eax+0xC4]
        mov esi, dword ptr ds : [eax+0x44]
        and edx, dword ptr ss : [ebp-8]
        and esi, dword ptr ss : [ebp-0xC]
        and dword ptr ss : [ebp-4], 0
        lea ecx, ds:[eax+0x44]
        or edx, esi
        mov esi, dword ptr ss : [ebp-0xC]
        jne public_65dc0ee
        public_65dc0d7 : nop
        mov edx, dword ptr ds : [ecx+0x84]
        inc dword ptr ss : [ebp-4]
        and edx, dword ptr ss : [ebp-8]
        add ecx, 4
        mov edi, esi
        and edi, dword ptr ds : [ecx]
        or edx, edi
        je public_65dc0d7
        public_65dc0ee : nop
        mov edx, dword ptr ss : [ebp-4]
        public_65dc0f1 : nop
        mov ecx, edx
        xor edi, edi
        imul ecx, 0x204
        lea ecx, ds:[ecx+eax+0x144]
        mov dword ptr ss : [ebp-0xC], ecx
        mov ecx, dword ptr ds : [eax+edx*4+0x44]
        and ecx, esi
        jne public_65dc11a
        mov ecx, dword ptr ds : [eax+edx*4+0xC4]
        push 0x20
        and ecx, dword ptr ss : [ebp-8]
        pop edi
        public_65dc11a : nop
        test ecx, ecx
        jl public_65dc123
        shl ecx, 1
        inc edi
        jmp public_65dc11a
        public_65dc123 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+edi*8+4]
        mov ecx, dword ptr ds : [edx]
        sub ecx, dword ptr ss : [ebp-0x10]
        mov esi, ecx
        mov dword ptr ss : [ebp-8], ecx
        sar esi, 4
        dec esi
        cmp esi, 0x3F
        jle public_65dc140
        push 0x3F
        pop esi
        public_65dc140 : nop
        cmp esi, edi
        je public_65dc255
        mov ecx, dword ptr ds : [edx+4]
        cmp ecx, dword ptr ds : [edx+8]
        jne public_65dc1b1
        cmp edi, 0x20
        jge public_65dc180
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
        jne public_65dc1ae
        mov ebx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp-0x14]
        and dword ptr ds : [ebx], ecx
        jmp public_65dc1b1
        public_65dc180 : nop
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
        jne public_65dc1ae
        mov ebx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp-0x14]
        and dword ptr ds : [ebx+4], ecx
        jmp public_65dc1b1
        public_65dc1ae : nop
        mov ebx, dword ptr ss : [ebp+8]
        public_65dc1b1 : nop
        mov ecx, dword ptr ds : [edx+8]
        mov edi, dword ptr ds : [edx+4]
        cmp dword ptr ss : [ebp-8], 0
        mov dword ptr ds : [ecx+4], edi
        mov ecx, dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edi
        je public_65dc261
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
        jne public_65dc252
        mov cl, byte ptr ds : [esi+eax+4]
        cmp esi, 0x20
        mov byte ptr ss : [ebp+0xB], cl
        jge public_65dc223
        inc cl
        cmp byte ptr ss : [ebp+0xB], 0
        mov byte ptr ds : [esi+eax+4], cl
        jne public_65dc211
        mov edi, 0x80000000
        mov ecx, esi
        shr edi, cl
        or dword ptr ds : [ebx], edi
        public_65dc211 : nop
        mov edi, 0x80000000
        mov ecx, esi
        shr edi, cl
        mov ecx, dword ptr ss : [ebp-4]
        or dword ptr ds : [eax+ecx*4+0x44], edi
        jmp public_65dc252
        public_65dc223 : nop
        inc cl
        cmp byte ptr ss : [ebp+0xB], 0
        mov byte ptr ds : [esi+eax+4], cl
        jne public_65dc23c
        lea ecx, ds:[esi-0x20]
        mov edi, 0x80000000
        shr edi, cl
        or dword ptr ds : [ebx+4], edi
        public_65dc23c : nop
        mov ecx, dword ptr ss : [ebp-4]
        lea edi, ds:[eax+ecx*4+0xC4]
        lea ecx, ds:[esi-0x20]
        mov esi, 0x80000000
        shr esi, cl
        or dword ptr ds : [edi], esi
        public_65dc252 : nop
        mov ecx, dword ptr ss : [ebp-8]
        public_65dc255 : nop
        test ecx, ecx
        je public_65dc264
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+edx-4], ecx
        jmp public_65dc264
        public_65dc261 : nop
        mov ecx, dword ptr ss : [ebp-8]
        public_65dc264 : nop
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
        jne public_65dc29a
        cmp ebx, dword ptr ds : [public_65e7910]
        jne public_65dc29a
        mov ecx, dword ptr ss : [ebp-4]
        cmp ecx, dword ptr ds : [public_65e7908]
        jne public_65dc29a
        and dword ptr ds : [public_65e7910], 0
        public_65dc29a : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax], ecx
        lea eax, ds:[edx+4]
        public_65dc2a2 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65dbf9e)
    }
}

#undef public_65dbfde
#undef public_65dbfee
#undef public_65dbffc
#undef public_65dc015
#undef public_65dc01c
#undef public_65dc036
#undef public_65dc038
#undef public_65dc03a
#undef public_65dc04d
#undef public_65dc050
#undef public_65dc054
#undef public_65dc066
#undef public_65dc068
#undef public_65dc078
#undef public_65dc08c
#undef public_65dc093
#undef public_65dc0ba
#undef public_65dc0d7
#undef public_65dc0ee
#undef public_65dc0f1
#undef public_65dc11a
#undef public_65dc123
#undef public_65dc140
#undef public_65dc180
#undef public_65dc1ae
#undef public_65dc1b1
#undef public_65dc211
#undef public_65dc223
#undef public_65dc23c
#undef public_65dc252
#undef public_65dc255
#undef public_65dc261
#undef public_65dc264
#undef public_65dc29a
#undef public_65dc2a2
