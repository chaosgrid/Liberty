#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7d030);

#define public_6f7d046 _public_6f7d046
#define public_6f7d051 _public_6f7d051
#define public_6f7d055 _public_6f7d055
#define public_6f7d060 _public_6f7d060
#define public_6f7d06c _public_6f7d06c
#define public_6f7d075 _public_6f7d075

PROC_DECLARE(0x6f7d030, internal_6f7d030, public_6f7d030);
extern "C" NAKED register_t __cdecl internal_6f7d030()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x5D]
        test bl, bl
        jne public_6f7d055
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x5D]
        test bl, bl
        jne public_6f7d051
        public_6f7d046 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x5D]
        test bl, bl
        je public_6f7d046
        public_6f7d051 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f7d055 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f7d06c
        nop 
        public_6f7d060 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f7d060
        public_6f7d06c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f7d075
        mov dword ptr ds : [ecx], eax
        public_6f7d075 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f7d030)
    }
}

#undef public_6f7d046
#undef public_6f7d051
#undef public_6f7d055
#undef public_6f7d060
#undef public_6f7d06c
#undef public_6f7d075
