#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34a60);

#define public_6c34a76 _public_6c34a76
#define public_6c34a81 _public_6c34a81
#define public_6c34a85 _public_6c34a85
#define public_6c34a90 _public_6c34a90
#define public_6c34a9c _public_6c34a9c
#define public_6c34aa5 _public_6c34aa5

PROC_DECLARE(0x6c34a60, internal_6c34a60, public_6c34a60);
extern "C" NAKED register_t __cdecl internal_6c34a60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x25]
        test bl, bl
        jne public_6c34a85
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_6c34a81
        public_6c34a76 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_6c34a76
        public_6c34a81 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6c34a85 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6c34a9c
        nop 
        public_6c34a90 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6c34a90
        public_6c34a9c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6c34aa5
        mov dword ptr ds : [ecx], eax
        public_6c34aa5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6c34a60)
    }
}

#undef public_6c34a76
#undef public_6c34a81
#undef public_6c34a85
#undef public_6c34a90
#undef public_6c34a9c
#undef public_6c34aa5
