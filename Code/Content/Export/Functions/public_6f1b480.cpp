#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1b480);

#define public_6f1b490 _public_6f1b490
#define public_6f1b4a0 _public_6f1b4a0
#define public_6f1b4ad _public_6f1b4ad
#define public_6f1b4c0 _public_6f1b4c0
#define public_6f1b4cc _public_6f1b4cc
#define public_6f1b4d4 _public_6f1b4d4
#define public_6f1b4de _public_6f1b4de
#define public_6f1b4e5 _public_6f1b4e5
#define public_6f1b4ed _public_6f1b4ed

PROC_DECLARE(0x6f1b480, internal_6f1b480, public_6f1b480);
extern "C" NAKED register_t __cdecl internal_6f1b480()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x40]
        mov edx, dword ptr ds : [eax]
        cmp edx, eax
        je public_6f1b4ed
        push ebx
        push esi
        push edi
        mov bl, 1
        mov edi, edi
        public_6f1b490 : nop
        mov esi, dword ptr ds : [edx+0x10]
        test esi, esi
        je public_6f1b4ad
        mov edi, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        je public_6f1b4ad
        public_6f1b4a0 : nop
        mov edi, dword ptr ds : [eax+8]
        mov byte ptr ds : [edi+4], bl
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+0x10]
        jne public_6f1b4a0
        public_6f1b4ad : nop
        mov eax, dword ptr ds : [edx+8]
        cmp byte ptr ds : [eax+0x15], 0
        jne public_6f1b4cc
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        cmp byte ptr ds : [eax+0x15], 0
        jne public_6f1b4e5
        public_6f1b4c0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        cmp byte ptr ds : [eax+0x15], 0
        je public_6f1b4c0
        jmp public_6f1b4e5
        public_6f1b4cc : nop
        mov eax, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f1b4de
        public_6f1b4d4 : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax+4]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f1b4d4
        public_6f1b4de : nop
        cmp dword ptr ds : [edx+8], eax
        je public_6f1b4e5
        mov edx, eax
        public_6f1b4e5 : nop
        cmp edx, dword ptr ds : [ecx+0x40]
        jne public_6f1b490
        pop edi
        pop esi
        pop ebx
        public_6f1b4ed : nop
        ret 
        UNREACHABLE_TRAP(0x6f1b480)
    }
}

#undef public_6f1b490
#undef public_6f1b4a0
#undef public_6f1b4ad
#undef public_6f1b4c0
#undef public_6f1b4cc
#undef public_6f1b4d4
#undef public_6f1b4de
#undef public_6f1b4e5
#undef public_6f1b4ed
