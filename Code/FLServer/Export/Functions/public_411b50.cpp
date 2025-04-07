#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411b50);

#define public_411b66 _public_411b66
#define public_411b71 _public_411b71
#define public_411b75 _public_411b75
#define public_411b80 _public_411b80
#define public_411b8c _public_411b8c
#define public_411b95 _public_411b95

PROC_DECLARE(0x411b50, internal_411b50, public_411b50);
extern "C" NAKED register_t __cdecl internal_411b50()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_411b75
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_411b71
        public_411b66 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_411b66
        public_411b71 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_411b75 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_411b8c
        nop 
        public_411b80 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_411b80
        public_411b8c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_411b95
        mov dword ptr ds : [ecx], eax
        public_411b95 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x411b50)
    }
}

#undef public_411b66
#undef public_411b71
#undef public_411b75
#undef public_411b80
#undef public_411b8c
#undef public_411b95
