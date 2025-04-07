#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626ba60);

#define public_626ba79 _public_626ba79
#define public_626ba90 _public_626ba90
#define public_626ba9c _public_626ba9c
#define public_626baa0 _public_626baa0
#define public_626bab0 _public_626bab0
#define public_626babb _public_626babb

PROC_DECLARE(0x626ba60, internal_626ba60, public_626ba60);
extern "C" NAKED register_t __cdecl internal_626ba60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x2C]
        test dl, dl
        push ebx
        jne public_626ba79
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_626ba79
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_626ba79 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x2D]
        test bl, bl
        jne public_626baa0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        jne public_626ba9c
        lea esp, ss:[esp]
        public_626ba90 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        je public_626ba90
        public_626ba9c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_626baa0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_626babb
        lea esp, ss:[esp]
        public_626bab0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_626bab0
        public_626babb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x626ba60)
    }
}

#undef public_626ba79
#undef public_626ba90
#undef public_626ba9c
#undef public_626baa0
#undef public_626bab0
#undef public_626babb
