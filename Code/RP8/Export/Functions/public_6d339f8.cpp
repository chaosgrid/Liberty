#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d339f8);

#define public_6d33a33 _public_6d33a33
#define public_6d33a5b _public_6d33a5b
#define public_6d33a65 _public_6d33a65
#define public_6d33a90 _public_6d33a90
#define public_6d33a94 _public_6d33a94
#define public_6d33a96 _public_6d33a96
#define public_6d33b10 _public_6d33b10
#define public_6d33b1e _public_6d33b1e
#define public_6d33b57 _public_6d33b57
#define public_6d33b7f _public_6d33b7f
#define public_6d33b81 _public_6d33b81
#define public_6d33b82 _public_6d33b82

PROC_DECLARE(0x6d339f8, internal_6d339f8, public_6d339f8);
extern "C" NAKED register_t __cdecl internal_6d339f8()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        push esi
        push edi
        mov edi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [edi+0x103C]
        or edx, dword ptr ds : [edi+0x1038]
        mov eax, dword ptr ds : [edi+0x1030]
        mov esi, dword ptr ds : [edi+0x1034]
        or edx, eax
        or edx, esi
        test dl, 3
        mov dword ptr ss : [ebp-8], ecx
        mov dword ptr ss : [ebp-0x10], eax
        je public_6d33a33
        mov eax, 0x80004005
        jmp public_6d33b82
        public_6d33a33 : nop
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+0x1030]
        mov ecx, dword ptr ds : [eax+0x1034]
        push ebx
        mov ebx, dword ptr ds : [eax+0x103C]
        or ebx, dword ptr ds : [eax+0x1038]
        mov dword ptr ss : [ebp-0x14], edx
        or ebx, edx
        or ebx, ecx
        test bl, 3
        je public_6d33a65
        public_6d33a5b : nop
        mov eax, 0x80004005
        jmp public_6d33b81
        public_6d33a65 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp edx, 0x31545844
        je public_6d33a94
        cmp edx, 0x32545844
        je public_6d33a90
        cmp edx, 0x33545844
        je public_6d33a90
        cmp edx, 0x34545844
        je public_6d33a90
        cmp edx, 0x35545844
        jne public_6d33a5b
        public_6d33a90 : nop
        push 0x10
        jmp public_6d33a96
        public_6d33a94 : nop
        push 8
        public_6d33a96 : nop
        mov edx, dword ptr ds : [eax+0x1058]
        shr edx, 2
        pop ebx
        imul edx, ebx
        shr ecx, 2
        imul ecx, dword ptr ds : [eax+0x1050]
        mov dword ptr ss : [ebp-0x18], edx
        mov edx, dword ptr ds : [eax+0x1054]
        imul edx, dword ptr ds : [eax+0x1040]
        add ecx, edx
        mov edx, dword ptr ss : [ebp-0x14]
        shr edx, 2
        imul edx, ebx
        add ecx, edx
        add ecx, dword ptr ds : [eax+0x18]
        shr esi, 2
        imul esi, dword ptr ds : [edi+0x1050]
        mov dword ptr ss : [ebp-0xC], ecx
        mov ecx, dword ptr ds : [edi+0x1054]
        imul ecx, dword ptr ds : [edi+0x1040]
        add esi, ecx
        mov ecx, dword ptr ss : [ebp-0x10]
        and dword ptr ss : [ebp-0x10], 0
        shr ecx, 2
        imul ecx, ebx
        add esi, ecx
        add esi, dword ptr ds : [edi+0x18]
        cmp dword ptr ds : [eax+0x1060], 0
        mov dword ptr ss : [ebp-0x14], esi
        jbe public_6d33b7f
        mov eax, dword ptr ds : [eax+0x105C]
        mov edx, dword ptr ss : [ebp-8]
        public_6d33b10 : nop
        and dword ptr ss : [ebp-8], 0
        test eax, eax
        mov ebx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-4], esi
        jbe public_6d33b57
        public_6d33b1e : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        mov esi, dword ptr ss : [ebp-4]
        add dword ptr ss : [ebp-8], 4
        mov eax, ecx
        shr ecx, 2
        mov edi, ebx
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [edx]
        add ebx, dword ptr ds : [eax+0x1050]
        mov ecx, dword ptr ds : [ecx+0x1050]
        mov eax, dword ptr ds : [eax+0x105C]
        add dword ptr ss : [ebp-4], ecx
        cmp dword ptr ss : [ebp-8], eax
        jb public_6d33b1e
        public_6d33b57 : nop
        mov ecx, dword ptr ds : [edx+4]
        mov esi, dword ptr ds : [ecx+0x1054]
        add dword ptr ss : [ebp-0xC], esi
        mov edi, dword ptr ds : [edx]
        mov esi, dword ptr ss : [ebp-0x14]
        add esi, dword ptr ds : [edi+0x1054]
        inc dword ptr ss : [ebp-0x10]
        mov edi, dword ptr ss : [ebp-0x10]
        cmp edi, dword ptr ds : [ecx+0x1060]
        mov dword ptr ss : [ebp-0x14], esi
        jb public_6d33b10
        public_6d33b7f : nop
        xor eax, eax
        public_6d33b81 : nop
        pop ebx
        public_6d33b82 : nop
        pop edi
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d339f8)
    }
}

#undef public_6d33a33
#undef public_6d33a5b
#undef public_6d33a65
#undef public_6d33a90
#undef public_6d33a94
#undef public_6d33a96
#undef public_6d33b10
#undef public_6d33b1e
#undef public_6d33b57
#undef public_6d33b7f
#undef public_6d33b81
#undef public_6d33b82
