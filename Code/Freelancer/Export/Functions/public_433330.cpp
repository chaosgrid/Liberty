#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_433330);

#define public_433346 _public_433346
#define public_433351 _public_433351
#define public_433355 _public_433355
#define public_433360 _public_433360
#define public_43336c _public_43336c
#define public_433375 _public_433375

PROC_DECLARE(0x433330, internal_433330, public_433330);
extern "C" NAKED register_t __cdecl internal_433330()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x61]
        test bl, bl
        jne public_433355
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x61]
        test bl, bl
        jne public_433351
        public_433346 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x61]
        test bl, bl
        je public_433346
        public_433351 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_433355 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_43336c
        nop 
        public_433360 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_433360
        public_43336c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_433375
        mov dword ptr ds : [ecx], eax
        public_433375 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x433330)
    }
}

#undef public_433346
#undef public_433351
#undef public_433355
#undef public_433360
#undef public_43336c
#undef public_433375
