#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f73930);

#define public_6f73946 _public_6f73946
#define public_6f73954 _public_6f73954
#define public_6f7395b _public_6f7395b
#define public_6f73967 _public_6f73967
#define public_6f73975 _public_6f73975
#define public_6f73977 _public_6f73977
#define public_6f7397c _public_6f7397c

PROC_DECLARE(0x6f73930, internal_6f73930, public_6f73930);
extern "C" NAKED register_t __cdecl internal_6f73930()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xBC]
        push esi
        mov esi, dword ptr ds : [ecx+0xC0]
        cmp edx, esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        je public_6f7395b
        public_6f73946 : nop
        mov eax, dword ptr ds : [edx]
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_6f73954
        cmp dword ptr ds : [eax+4], edi
        je public_6f73977
        public_6f73954 : nop
        add edx, 4
        cmp edx, esi
        jne public_6f73946
        public_6f7395b : nop
        mov ecx, dword ptr ds : [ecx+0xE0]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6f73975
        public_6f73967 : nop
        mov edx, dword ptr ds : [eax+8]
        cmp edi, dword ptr ds : [edx+4]
        je public_6f7397c
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f73967
        public_6f73975 : nop
        xor eax, eax
        public_6f73977 : nop
        pop edi
        pop esi
        ret 4
        public_6f7397c : nop
        mov eax, dword ptr ds : [eax+8]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f73930)
    }
}

#undef public_6f73946
#undef public_6f73954
#undef public_6f7395b
#undef public_6f73967
#undef public_6f73975
#undef public_6f73977
#undef public_6f7397c
