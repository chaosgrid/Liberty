#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630caf0);

#define public_630cb06 _public_630cb06
#define public_630cb11 _public_630cb11
#define public_630cb15 _public_630cb15
#define public_630cb20 _public_630cb20
#define public_630cb2c _public_630cb2c
#define public_630cb35 _public_630cb35

PROC_DECLARE(0x630caf0, internal_630caf0, public_630caf0);
extern "C" NAKED register_t __cdecl internal_630caf0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x71]
        test bl, bl
        jne public_630cb15
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x71]
        test bl, bl
        jne public_630cb11
        public_630cb06 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x71]
        test bl, bl
        je public_630cb06
        public_630cb11 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_630cb15 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_630cb2c
        nop 
        public_630cb20 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_630cb20
        public_630cb2c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_630cb35
        mov dword ptr ds : [ecx], eax
        public_630cb35 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x630caf0)
    }
}

#undef public_630cb06
#undef public_630cb11
#undef public_630cb15
#undef public_630cb20
#undef public_630cb2c
#undef public_630cb35
