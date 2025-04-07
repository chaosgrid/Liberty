#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63429f0);

#define public_6342a06 _public_6342a06
#define public_6342a11 _public_6342a11
#define public_6342a15 _public_6342a15
#define public_6342a20 _public_6342a20
#define public_6342a2c _public_6342a2c
#define public_6342a35 _public_6342a35

PROC_DECLARE(0x63429f0, internal_63429f0, public_63429f0);
extern "C" NAKED register_t __cdecl internal_63429f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6342a15
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6342a11
        public_6342a06 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6342a06
        public_6342a11 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6342a15 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6342a2c
        nop 
        public_6342a20 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6342a20
        public_6342a2c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6342a35
        mov dword ptr ds : [ecx], eax
        public_6342a35 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x63429f0)
    }
}

#undef public_6342a06
#undef public_6342a11
#undef public_6342a15
#undef public_6342a20
#undef public_6342a2c
#undef public_6342a35
