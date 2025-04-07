#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96bc0);

#define public_6d96bd6 _public_6d96bd6
#define public_6d96be1 _public_6d96be1
#define public_6d96be5 _public_6d96be5
#define public_6d96bf0 _public_6d96bf0
#define public_6d96bfc _public_6d96bfc
#define public_6d96c05 _public_6d96c05

PROC_DECLARE(0x6d96bc0, internal_6d96bc0, public_6d96bc0);
extern "C" NAKED register_t __cdecl internal_6d96bc0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6d96be5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6d96be1
        public_6d96bd6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6d96bd6
        public_6d96be1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6d96be5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6d96bfc
        nop 
        public_6d96bf0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6d96bf0
        public_6d96bfc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6d96c05
        mov dword ptr ds : [ecx], eax
        public_6d96c05 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d96bc0)
    }
}

#undef public_6d96bd6
#undef public_6d96be1
#undef public_6d96be5
#undef public_6d96bf0
#undef public_6d96bfc
#undef public_6d96c05
