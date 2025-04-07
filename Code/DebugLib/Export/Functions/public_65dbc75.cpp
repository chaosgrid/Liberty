#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d73a0);
CLANG_FORWARD_PROC_SYMBOL(public_65dbc75);

#define public_65dbcd9 _public_65dbcd9
#define public_65dbd04 _public_65dbd04
#define public_65dbd25 _public_65dbd25
#define public_65dbd2d _public_65dbd2d
#define public_65dbd30 _public_65dbd30
#define public_65dbd4b _public_65dbd4b
#define public_65dbd59 _public_65dbd59
#define public_65dbd7e _public_65dbd7e
#define public_65dbd90 _public_65dbd90
#define public_65dbdc0 _public_65dbdc0
#define public_65dbddf _public_65dbddf
#define public_65dbdf7 _public_65dbdf7
#define public_65dbdfc _public_65dbdfc
#define public_65dbdff _public_65dbdff
#define public_65dbe0d _public_65dbe0d
#define public_65dbe54 _public_65dbe54
#define public_65dbe65 _public_65dbe65
#define public_65dbe7b _public_65dbe7b
#define public_65dbe8e _public_65dbe8e
#define public_65dbf1c _public_65dbf1c
#define public_65dbf81 _public_65dbf81
#define public_65dbf8b _public_65dbf8b
#define public_65dbf99 _public_65dbf99

PROC_DECLARE(0x65dbc75, internal_65dbc75, public_65dbc75);
extern "C" NAKED register_t __cdecl internal_65dbc75()
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
        jne public_65dbf99
        mov edx, dword ptr ds : [ecx+esi]
        lea ebx, ds:[ecx+esi]
        mov dword ptr ss : [ebp-0xC], edx
        mov edx, dword ptr ds : [esi-4]
        mov dword ptr ss : [ebp-8], edx
        mov edx, dword ptr ss : [ebp-0xC]
        test dl, 1
        mov dword ptr ss : [ebp+0xC], ebx
        jne public_65dbd4b
        sar edx, 4
        dec edx
        cmp edx, 0x3F
        jbe public_65dbcd9
        push 0x3F
        pop edx
        public_65dbcd9 : nop
        mov ecx, dword ptr ds : [ebx+4]
        cmp ecx, dword ptr ds : [ebx+8]
        jne public_65dbd2d
        cmp edx, 0x20
        jae public_65dbd04
        mov ebx, 0x80000000
        mov ecx, edx
        shr ebx, cl
        lea ecx, ds:[edx+eax+4]
        not ebx
        and dword ptr ds : [eax+edi*4+0x44], ebx
        dec byte ptr ds : [ecx]
        jne public_65dbd25
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx], ebx
        jmp public_65dbd25
        public_65dbd04 : nop
        lea ecx, ds:[edx-0x20]
        mov ebx, 0x80000000
        shr ebx, cl
        lea ecx, ds:[edx+eax+4]
        not ebx
        and dword ptr ds : [eax+edi*4+0xC4], ebx
        dec byte ptr ds : [ecx]
        jne public_65dbd25
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx+4], ebx
        public_65dbd25 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov ebx, dword ptr ss : [ebp+0xC]
        jmp public_65dbd30
        public_65dbd2d : nop
        mov ecx, dword ptr ss : [ebp-4]
        public_65dbd30 : nop
        mov edx, dword ptr ds : [ebx+8]
        mov ebx, dword ptr ds : [ebx+4]
        add ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [edx+4], ebx
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-4], ecx
        mov ebx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx+8], edx
        public_65dbd4b : nop
        mov edx, ecx
        sar edx, 4
        dec edx
        cmp edx, 0x3F
        jbe public_65dbd59
        push 0x3F
        pop edx
        public_65dbd59 : nop
        mov ebx, dword ptr ss : [ebp-8]
        and ebx, 1
        mov dword ptr ss : [ebp-0xC], ebx
        jne public_65dbdfc
        sub esi, dword ptr ss : [ebp-8]
        mov ebx, dword ptr ss : [ebp-8]
        sar ebx, 4
        push 0x3F
        mov dword ptr ss : [ebp+0xC], esi
        dec ebx
        pop esi
        cmp ebx, esi
        jbe public_65dbd7e
        mov ebx, esi
        public_65dbd7e : nop
        add ecx, dword ptr ss : [ebp-8]
        mov edx, ecx
        mov dword ptr ss : [ebp-4], ecx
        sar edx, 4
        dec edx
        cmp edx, esi
        jbe public_65dbd90
        mov edx, esi
        public_65dbd90 : nop
        cmp ebx, edx
        je public_65dbdf7
        mov ecx, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ds : [ecx+4]
        cmp esi, dword ptr ds : [ecx+8]
        jne public_65dbddf
        cmp ebx, 0x20
        jae public_65dbdc0
        mov esi, 0x80000000
        mov ecx, ebx
        shr esi, cl
        not esi
        and dword ptr ds : [eax+edi*4+0x44], esi
        dec byte ptr ds : [ebx+eax+4]
        jne public_65dbddf
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx], esi
        jmp public_65dbddf
        public_65dbdc0 : nop
        lea ecx, ds:[ebx-0x20]
        mov esi, 0x80000000
        shr esi, cl
        not esi
        and dword ptr ds : [eax+edi*4+0xC4], esi
        dec byte ptr ds : [ebx+eax+4]
        jne public_65dbddf
        mov ecx, dword ptr ss : [ebp+8]
        and dword ptr ds : [ecx+4], esi
        public_65dbddf : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        public_65dbdf7 : nop
        mov esi, dword ptr ss : [ebp+0xC]
        jmp public_65dbdff
        public_65dbdfc : nop
        mov ebx, dword ptr ss : [ebp+8]
        public_65dbdff : nop
        cmp dword ptr ss : [ebp-0xC], 0
        jne public_65dbe0d
        cmp ebx, edx
        je public_65dbe8e
        public_65dbe0d : nop
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
        jne public_65dbe8e
        mov cl, byte ptr ds : [edx+eax+4]
        cmp edx, 0x20
        mov byte ptr ss : [ebp+0xF], cl
        inc cl
        mov byte ptr ds : [edx+eax+4], cl
        jae public_65dbe65
        cmp byte ptr ss : [ebp+0xF], 0
        jne public_65dbe54
        mov ebx, 0x80000000
        mov ecx, edx
        shr ebx, cl
        mov ecx, dword ptr ss : [ebp+8]
        or dword ptr ds : [ecx], ebx
        public_65dbe54 : nop
        mov ebx, 0x80000000
        mov ecx, edx
        shr ebx, cl
        lea eax, ds:[eax+edi*4+0x44]
        or dword ptr ds : [eax], ebx
        jmp public_65dbe8e
        public_65dbe65 : nop
        cmp byte ptr ss : [ebp+0xF], 0
        jne public_65dbe7b
        lea ecx, ds:[edx-0x20]
        mov ebx, 0x80000000
        shr ebx, cl
        mov ecx, dword ptr ss : [ebp+8]
        or dword ptr ds : [ecx+4], ebx
        public_65dbe7b : nop
        lea ecx, ds:[edx-0x20]
        mov edx, 0x80000000
        shr edx, cl
        lea eax, ds:[eax+edi*4+0xC4]
        or dword ptr ds : [eax], edx
        public_65dbe8e : nop
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [eax+esi-4], eax
        mov eax, dword ptr ss : [ebp-0x10]
        dec dword ptr ds : [eax]
        jne public_65dbf99
        mov eax, dword ptr ds : [public_65e7910]
        test eax, eax
        je public_65dbf8b
        mov ecx, dword ptr ds : [public_65e7908]
        mov esi, dword ptr ds : [public_65e10cc]
        shl ecx, 0xF
        add ecx, dword ptr ds : [eax+0xC]
        mov ebx, 0x8000
        push 0x4000
        push ebx
        push ecx
        call esi
        mov ecx, dword ptr ds : [public_65e7908]
        mov eax, dword ptr ds : [public_65e7910]
        mov edx, 0x80000000
        shr edx, cl
        or dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [public_65e7910]
        mov ecx, dword ptr ds : [public_65e7908]
        mov eax, dword ptr ds : [eax+0x10]
        and dword ptr ds : [eax+ecx*4+0xC4], 0
        mov eax, dword ptr ds : [public_65e7910]
        mov eax, dword ptr ds : [eax+0x10]
        dec byte ptr ds : [eax+0x43]
        mov eax, dword ptr ds : [public_65e7910]
        mov ecx, dword ptr ds : [eax+0x10]
        cmp byte ptr ds : [ecx+0x43], 0
        jne public_65dbf1c
        and dword ptr ds : [eax+4], 0xFFFFFFFE
        mov eax, dword ptr ds : [public_65e7910]
        public_65dbf1c : nop
        cmp dword ptr ds : [eax+8], 0xFFFFFFFF
        jne public_65dbf8b
        push ebx
        push 0
        push dword ptr ds : [eax+0xC]
        call esi
        mov eax, dword ptr ds : [public_65e7910]
        push dword ptr ds : [eax+0x10]
        push 0
        push dword ptr ds : [public_65e7920]
        call dword ptr ds : [public_65e1058]
        mov eax, dword ptr ds : [public_65e7914]
        mov edx, dword ptr ds : [public_65e7918]
        lea eax, ds:[eax+eax*4]
        shl eax, 2
        mov ecx, eax
        mov eax, dword ptr ds : [public_65e7910]
        sub ecx, eax
        lea ecx, ds:[ecx+edx-0x14]
        push ecx
        lea ecx, ds:[eax+0x14]
        push ecx
        push eax
        call public_65d73a0
        mov eax, dword ptr ss : [ebp+8]
        add esp, 0xC
        dec dword ptr ds : [public_65e7914]
        cmp eax, dword ptr ds : [public_65e7910]
        jbe public_65dbf81
        sub dword ptr ss : [ebp+8], 0x14
        public_65dbf81 : nop
        mov eax, dword ptr ds : [public_65e7918]
        mov dword ptr ds : [public_65e790c], eax
        public_65dbf8b : nop
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [public_65e7908], edi
        mov dword ptr ds : [public_65e7910], eax
        public_65dbf99 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65dbc75)
    }
}

#undef public_65dbcd9
#undef public_65dbd04
#undef public_65dbd25
#undef public_65dbd2d
#undef public_65dbd30
#undef public_65dbd4b
#undef public_65dbd59
#undef public_65dbd7e
#undef public_65dbd90
#undef public_65dbdc0
#undef public_65dbddf
#undef public_65dbdf7
#undef public_65dbdfc
#undef public_65dbdff
#undef public_65dbe0d
#undef public_65dbe54
#undef public_65dbe65
#undef public_65dbe7b
#undef public_65dbe8e
#undef public_65dbf1c
#undef public_65dbf81
#undef public_65dbf8b
#undef public_65dbf99
