#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec5e20);

#define public_6ec5e36 _public_6ec5e36
#define public_6ec5e41 _public_6ec5e41
#define public_6ec5e45 _public_6ec5e45
#define public_6ec5e50 _public_6ec5e50
#define public_6ec5e5c _public_6ec5e5c
#define public_6ec5e65 _public_6ec5e65

PROC_DECLARE(0x6ec5e20, internal_6ec5e20, public_6ec5e20);
extern "C" NAKED register_t __cdecl internal_6ec5e20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6ec5e45
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6ec5e41
        public_6ec5e36 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6ec5e36
        public_6ec5e41 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6ec5e45 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6ec5e5c
        nop 
        public_6ec5e50 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6ec5e50
        public_6ec5e5c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6ec5e65
        mov dword ptr ds : [ecx], eax
        public_6ec5e65 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ec5e20)
    }
}

#undef public_6ec5e36
#undef public_6ec5e41
#undef public_6ec5e45
#undef public_6ec5e50
#undef public_6ec5e5c
#undef public_6ec5e65
