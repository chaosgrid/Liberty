#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f465f0);

#define public_6f46606 _public_6f46606
#define public_6f46611 _public_6f46611
#define public_6f46615 _public_6f46615
#define public_6f46620 _public_6f46620
#define public_6f4662c _public_6f4662c
#define public_6f46635 _public_6f46635

PROC_DECLARE(0x6f465f0, internal_6f465f0, public_6f465f0);
extern "C" NAKED register_t __cdecl internal_6f465f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x45]
        test bl, bl
        jne public_6f46615
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x45]
        test bl, bl
        jne public_6f46611
        public_6f46606 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x45]
        test bl, bl
        je public_6f46606
        public_6f46611 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f46615 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f4662c
        nop 
        public_6f46620 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f46620
        public_6f4662c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f46635
        mov dword ptr ds : [ecx], eax
        public_6f46635 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f465f0)
    }
}

#undef public_6f46606
#undef public_6f46611
#undef public_6f46615
#undef public_6f46620
#undef public_6f4662c
#undef public_6f46635
