#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420c40);

#define public_420c56 _public_420c56
#define public_420c61 _public_420c61
#define public_420c65 _public_420c65
#define public_420c70 _public_420c70
#define public_420c7c _public_420c7c
#define public_420c85 _public_420c85

PROC_DECLARE(0x420c40, internal_420c40, public_420c40);
extern "C" NAKED register_t __cdecl internal_420c40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x59]
        test bl, bl
        jne public_420c65
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x59]
        test bl, bl
        jne public_420c61
        public_420c56 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x59]
        test bl, bl
        je public_420c56
        public_420c61 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_420c65 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_420c7c
        nop 
        public_420c70 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_420c70
        public_420c7c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_420c85
        mov dword ptr ds : [ecx], eax
        public_420c85 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x420c40)
    }
}

#undef public_420c56
#undef public_420c61
#undef public_420c65
#undef public_420c70
#undef public_420c7c
#undef public_420c85
