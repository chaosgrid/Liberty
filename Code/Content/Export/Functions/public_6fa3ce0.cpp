#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa3ce0);

#define public_6fa3cfc _public_6fa3cfc
#define public_6fa3d15 _public_6fa3d15
#define public_6fa3d24 _public_6fa3d24
#define public_6fa3d28 _public_6fa3d28
#define public_6fa3d31 _public_6fa3d31
#define public_6fa3d3c _public_6fa3d3c

PROC_DECLARE(0x6fa3ce0, internal_6fa3ce0, public_6fa3ce0);
extern "C" NAKED register_t __cdecl internal_6fa3ce0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x124]
        test dl, dl
        push ebx
        jne public_6fa3cfc
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6fa3cfc
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6fa3cfc : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x125]
        test bl, bl
        jne public_6fa3d28
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x125]
        test bl, bl
        jne public_6fa3d24
        public_6fa3d15 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x125]
        test bl, bl
        je public_6fa3d15
        public_6fa3d24 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6fa3d28 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6fa3d3c
        public_6fa3d31 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6fa3d31
        public_6fa3d3c : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6fa3ce0)
    }
}

#undef public_6fa3cfc
#undef public_6fa3d15
#undef public_6fa3d24
#undef public_6fa3d28
#undef public_6fa3d31
#undef public_6fa3d3c
