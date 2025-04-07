#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b76fd0);

#define public_6b76fe6 _public_6b76fe6
#define public_6b76ff1 _public_6b76ff1
#define public_6b76ff5 _public_6b76ff5
#define public_6b76fff _public_6b76fff
#define public_6b7700b _public_6b7700b
#define public_6b77014 _public_6b77014

PROC_DECLARE(0x6b76fd0, internal_6b76fd0, public_6b76fd0);
extern "C" NAKED register_t __cdecl internal_6b76fd0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push ebx
        mov edx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [edx+0x25]
        test bl, bl
        jne public_6b76ff5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_6b76ff1
        public_6b76fe6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_6b76fe6
        public_6b76ff1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6b76ff5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6b7700b
        public_6b76fff : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6b76fff
        public_6b7700b : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6b77014
        mov dword ptr ds : [ecx], eax
        public_6b77014 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6b76fd0)
    }
}

#undef public_6b76fe6
#undef public_6b76ff1
#undef public_6b76ff5
#undef public_6b76fff
#undef public_6b7700b
#undef public_6b77014
