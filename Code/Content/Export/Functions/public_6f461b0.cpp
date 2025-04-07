#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f461b0);

#define public_6f461c9 _public_6f461c9
#define public_6f461e0 _public_6f461e0
#define public_6f461ec _public_6f461ec
#define public_6f461f0 _public_6f461f0
#define public_6f46200 _public_6f46200
#define public_6f4620b _public_6f4620b

PROC_DECLARE(0x6f461b0, internal_6f461b0, public_6f461b0);
extern "C" NAKED register_t __cdecl internal_6f461b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x68]
        test dl, dl
        push ebx
        jne public_6f461c9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f461c9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f461c9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x69]
        test bl, bl
        jne public_6f461f0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x69]
        test bl, bl
        jne public_6f461ec
        lea esp, ss:[esp]
        public_6f461e0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x69]
        test bl, bl
        je public_6f461e0
        public_6f461ec : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f461f0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f4620b
        lea esp, ss:[esp]
        public_6f46200 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f46200
        public_6f4620b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f461b0)
    }
}

#undef public_6f461c9
#undef public_6f461e0
#undef public_6f461ec
#undef public_6f461f0
#undef public_6f46200
#undef public_6f4620b
