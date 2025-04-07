#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c5fa0);

#define public_4c5fb6 _public_4c5fb6
#define public_4c5fc1 _public_4c5fc1
#define public_4c5fc5 _public_4c5fc5
#define public_4c5fd0 _public_4c5fd0
#define public_4c5fdc _public_4c5fdc
#define public_4c5fe5 _public_4c5fe5

PROC_DECLARE(0x4c5fa0, internal_4c5fa0, public_4c5fa0);
extern "C" NAKED register_t __cdecl internal_4c5fa0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x55]
        test bl, bl
        jne public_4c5fc5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x55]
        test bl, bl
        jne public_4c5fc1
        public_4c5fb6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x55]
        test bl, bl
        je public_4c5fb6
        public_4c5fc1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_4c5fc5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_4c5fdc
        nop 
        public_4c5fd0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_4c5fd0
        public_4c5fdc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_4c5fe5
        mov dword ptr ds : [ecx], eax
        public_4c5fe5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4c5fa0)
    }
}

#undef public_4c5fb6
#undef public_4c5fc1
#undef public_4c5fc5
#undef public_4c5fd0
#undef public_4c5fdc
#undef public_4c5fe5
