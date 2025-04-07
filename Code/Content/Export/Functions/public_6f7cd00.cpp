#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7cd00);

#define public_6f7cd1c _public_6f7cd1c
#define public_6f7cd35 _public_6f7cd35
#define public_6f7cd44 _public_6f7cd44
#define public_6f7cd48 _public_6f7cd48
#define public_6f7cd51 _public_6f7cd51
#define public_6f7cd5c _public_6f7cd5c

PROC_DECLARE(0x6f7cd00, internal_6f7cd00, public_6f7cd00);
extern "C" NAKED register_t __cdecl internal_6f7cd00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x134]
        test dl, dl
        push ebx
        jne public_6f7cd1c
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f7cd1c
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f7cd1c : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x135]
        test bl, bl
        jne public_6f7cd48
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x135]
        test bl, bl
        jne public_6f7cd44
        public_6f7cd35 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x135]
        test bl, bl
        je public_6f7cd35
        public_6f7cd44 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f7cd48 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f7cd5c
        public_6f7cd51 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f7cd51
        public_6f7cd5c : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f7cd00)
    }
}

#undef public_6f7cd1c
#undef public_6f7cd35
#undef public_6f7cd44
#undef public_6f7cd48
#undef public_6f7cd51
#undef public_6f7cd5c
