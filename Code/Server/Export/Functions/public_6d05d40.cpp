#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d05d40);

#define public_6d05d56 _public_6d05d56
#define public_6d05d61 _public_6d05d61
#define public_6d05d65 _public_6d05d65
#define public_6d05d70 _public_6d05d70
#define public_6d05d7c _public_6d05d7c
#define public_6d05d85 _public_6d05d85

PROC_DECLARE(0x6d05d40, internal_6d05d40, public_6d05d40);
extern "C" NAKED register_t __cdecl internal_6d05d40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x35]
        test bl, bl
        jne public_6d05d65
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        jne public_6d05d61
        public_6d05d56 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        je public_6d05d56
        public_6d05d61 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6d05d65 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6d05d7c
        nop 
        public_6d05d70 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6d05d70
        public_6d05d7c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6d05d85
        mov dword ptr ds : [ecx], eax
        public_6d05d85 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d05d40)
    }
}

#undef public_6d05d56
#undef public_6d05d61
#undef public_6d05d65
#undef public_6d05d70
#undef public_6d05d7c
#undef public_6d05d85
