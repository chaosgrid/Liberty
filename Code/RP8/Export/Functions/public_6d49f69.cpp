#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d49f69);

#define public_6d49f7f _public_6d49f7f
#define public_6d49f99 _public_6d49f99
#define public_6d49f9c _public_6d49f9c
#define public_6d49f9f _public_6d49f9f

PROC_DECLARE(0x6d49f69, internal_6d49f69, public_6d49f69);
extern "C" NAKED register_t __cdecl internal_6d49f69()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x184]
        xor edx, edx
        inc edx
        cmp dword ptr ds : [ecx+0x120], edx
        jle public_6d49f7f
        mov dword ptr ds : [eax+0x1C], edx
        jmp public_6d49f9f
        public_6d49f7f : nop
        mov edx, dword ptr ds : [ecx+0x118]
        dec edx
        cmp dword ptr ds : [ecx+0x80], edx
        mov ecx, dword ptr ds : [ecx+0x124]
        jae public_6d49f99
        mov ecx, dword ptr ds : [ecx+0xC]
        jmp public_6d49f9c
        public_6d49f99 : nop
        mov ecx, dword ptr ds : [ecx+0x48]
        public_6d49f9c : nop
        mov dword ptr ds : [eax+0x1C], ecx
        public_6d49f9f : nop
        and dword ptr ds : [eax+0x14], 0
        and dword ptr ds : [eax+0x18], 0
        ret 
        UNREACHABLE_TRAP(0x6d49f69)
    }
}

#undef public_6d49f7f
#undef public_6d49f99
#undef public_6d49f9c
#undef public_6d49f9f
