#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f467d0);

#define public_6f467e6 _public_6f467e6
#define public_6f467f1 _public_6f467f1
#define public_6f467f5 _public_6f467f5
#define public_6f46800 _public_6f46800
#define public_6f4680c _public_6f4680c
#define public_6f46815 _public_6f46815

PROC_DECLARE(0x6f467d0, internal_6f467d0, public_6f467d0);
extern "C" NAKED register_t __cdecl internal_6f467d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x69]
        test bl, bl
        jne public_6f467f5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x69]
        test bl, bl
        jne public_6f467f1
        public_6f467e6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x69]
        test bl, bl
        je public_6f467e6
        public_6f467f1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f467f5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f4680c
        nop 
        public_6f46800 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f46800
        public_6f4680c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f46815
        mov dword ptr ds : [ecx], eax
        public_6f46815 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f467d0)
    }
}

#undef public_6f467e6
#undef public_6f467f1
#undef public_6f467f5
#undef public_6f46800
#undef public_6f4680c
#undef public_6f46815
