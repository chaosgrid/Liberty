#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d339f8);
CLANG_FORWARD_PROC_SYMBOL(public_6d34b5b);

#define public_6d34b7f _public_6d34b7f
#define public_6d34bd5 _public_6d34bd5
#define public_6d34bf3 _public_6d34bf3
#define public_6d34c06 _public_6d34c06
#define public_6d34c09 _public_6d34c09
#define public_6d34c34 _public_6d34c34
#define public_6d34c71 _public_6d34c71
#define public_6d34c85 _public_6d34c85
#define public_6d34c89 _public_6d34c89
#define public_6d34c8e _public_6d34c8e
#define public_6d34c8f _public_6d34c8f

PROC_DECLARE(0x6d34b5b, internal_6d34b5b, public_6d34b5b);
extern "C" NAKED register_t __cdecl internal_6d34b5b()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax+4]
        cmp edx, dword ptr ds : [ecx+4]
        push edi
        mov dword ptr ss : [ebp-8], ebx
        je public_6d34b7f
        mov eax, 0x80004005
        jmp public_6d34c8f
        public_6d34b7f : nop
        push esi
        xor esi, esi
        cmp dword ptr ds : [ecx+0x10], esi
        jne public_6d34c89
        mov edx, dword ptr ds : [eax+0x1058]
        cmp edx, dword ptr ds : [ecx+0x1058]
        jne public_6d34c89
        mov edx, dword ptr ds : [eax+0x105C]
        cmp edx, dword ptr ds : [ecx+0x105C]
        mov dword ptr ss : [ebp-0x10], edx
        jne public_6d34c89
        mov edx, dword ptr ds : [eax+0x1060]
        cmp edx, dword ptr ds : [ecx+0x1060]
        jne public_6d34c89
        cmp dword ptr ds : [eax+0xC], esi
        jne public_6d34bd5
        mov ecx, ebx
        call public_6d339f8
        jmp public_6d34c8e
        public_6d34bd5 : nop
        cmp dword ptr ds : [eax+0x14], esi
        je public_6d34bf3
        lea esi, ds:[eax+0x30]
        lea edi, ds:[ecx+0x30]
        cmp esi, edi
        je public_6d34bf3
        mov ecx, 0x100
        xor edx, edx
        repe cmpsd
        jne public_6d34c89
        public_6d34bf3 : nop
        and dword ptr ss : [ebp-4], 0
        cmp dword ptr ds : [eax+0x1060], 0
        jbe public_6d34c85
        jmp public_6d34c09
        public_6d34c06 : nop
        mov ebx, dword ptr ss : [ebp-8]
        public_6d34c09 : nop
        mov ecx, dword ptr ds : [ebx]
        mov ebx, dword ptr ds : [ecx+0x1054]
        mov edx, dword ptr ds : [eax+0x1054]
        imul ebx, dword ptr ss : [ebp-4]
        imul edx, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [ecx]
        add edx, dword ptr ds : [eax+0x18]
        add ebx, dword ptr ds : [ecx+0x18]
        and dword ptr ss : [ebp-0xC], 0
        cmp dword ptr ss : [ebp-0x10], 0
        jbe public_6d34c71
        public_6d34c34 : nop
        mov ecx, dword ptr ds : [eax+0x1064]
        mov eax, ecx
        shr ecx, 2
        mov esi, ebx
        mov edi, edx
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx]
        add ebx, dword ptr ds : [ecx+0x1050]
        add edx, dword ptr ds : [eax+0x1050]
        mov ecx, dword ptr ds : [eax+0x105C]
        inc dword ptr ss : [ebp-0xC]
        cmp dword ptr ss : [ebp-0xC], ecx
        mov dword ptr ss : [ebp-0x10], ecx
        jb public_6d34c34
        public_6d34c71 : nop
        inc dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [ebp-4]
        cmp ecx, dword ptr ds : [eax+0x1060]
        jb public_6d34c06
        public_6d34c85 : nop
        xor eax, eax
        jmp public_6d34c8e
        public_6d34c89 : nop
        mov eax, 0x80004005
        public_6d34c8e : nop
        pop esi
        public_6d34c8f : nop
        pop edi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d34b5b)
    }
}

#undef public_6d34b7f
#undef public_6d34bd5
#undef public_6d34bf3
#undef public_6d34c06
#undef public_6d34c09
#undef public_6d34c34
#undef public_6d34c71
#undef public_6d34c85
#undef public_6d34c89
#undef public_6d34c8e
#undef public_6d34c8f
