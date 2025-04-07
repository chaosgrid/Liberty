#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f466e0);

#define public_6f466f6 _public_6f466f6
#define public_6f46701 _public_6f46701
#define public_6f46705 _public_6f46705
#define public_6f46710 _public_6f46710
#define public_6f4671c _public_6f4671c
#define public_6f46725 _public_6f46725

PROC_DECLARE(0x6f466e0, internal_6f466e0, public_6f466e0);
extern "C" NAKED register_t __cdecl internal_6f466e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x51]
        test bl, bl
        jne public_6f46705
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x51]
        test bl, bl
        jne public_6f46701
        public_6f466f6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x51]
        test bl, bl
        je public_6f466f6
        public_6f46701 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f46705 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f4671c
        nop 
        public_6f46710 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f46710
        public_6f4671c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f46725
        mov dword ptr ds : [ecx], eax
        public_6f46725 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f466e0)
    }
}

#undef public_6f466f6
#undef public_6f46701
#undef public_6f46705
#undef public_6f46710
#undef public_6f4671c
#undef public_6f46725
