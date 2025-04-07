#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626bac0);

#define public_626bad6 _public_626bad6
#define public_626bae1 _public_626bae1
#define public_626bae5 _public_626bae5
#define public_626baf0 _public_626baf0
#define public_626bafc _public_626bafc
#define public_626bb05 _public_626bb05

PROC_DECLARE(0x626bac0, internal_626bac0, public_626bac0);
extern "C" NAKED register_t __cdecl internal_626bac0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x2D]
        test bl, bl
        jne public_626bae5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        jne public_626bae1
        public_626bad6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        je public_626bad6
        public_626bae1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_626bae5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_626bafc
        nop 
        public_626baf0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_626baf0
        public_626bafc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_626bb05
        mov dword ptr ds : [ecx], eax
        public_626bb05 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x626bac0)
    }
}

#undef public_626bad6
#undef public_626bae1
#undef public_626bae5
#undef public_626baf0
#undef public_626bafc
#undef public_626bb05
