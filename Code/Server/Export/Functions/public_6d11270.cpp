#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d11270);

#define public_6d1128c _public_6d1128c
#define public_6d112a5 _public_6d112a5
#define public_6d112b4 _public_6d112b4
#define public_6d112b8 _public_6d112b8
#define public_6d112c1 _public_6d112c1
#define public_6d112cc _public_6d112cc

PROC_DECLARE(0x6d11270, internal_6d11270, public_6d11270);
extern "C" NAKED register_t __cdecl internal_6d11270()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x110]
        test dl, dl
        push ebx
        jne public_6d1128c
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6d1128c
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6d1128c : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x111]
        test bl, bl
        jne public_6d112b8
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x111]
        test bl, bl
        jne public_6d112b4
        public_6d112a5 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x111]
        test bl, bl
        je public_6d112a5
        public_6d112b4 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6d112b8 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6d112cc
        public_6d112c1 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6d112c1
        public_6d112cc : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d11270)
    }
}

#undef public_6d1128c
#undef public_6d112a5
#undef public_6d112b4
#undef public_6d112b8
#undef public_6d112c1
#undef public_6d112cc
