#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f46730);

#define public_6f46746 _public_6f46746
#define public_6f46751 _public_6f46751
#define public_6f46755 _public_6f46755
#define public_6f46760 _public_6f46760
#define public_6f4676c _public_6f4676c
#define public_6f46775 _public_6f46775

PROC_DECLARE(0x6f46730, internal_6f46730, public_6f46730);
extern "C" NAKED register_t __cdecl internal_6f46730()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x35]
        test bl, bl
        jne public_6f46755
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        jne public_6f46751
        public_6f46746 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        je public_6f46746
        public_6f46751 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f46755 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f4676c
        nop 
        public_6f46760 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f46760
        public_6f4676c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f46775
        mov dword ptr ds : [ecx], eax
        public_6f46775 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f46730)
    }
}

#undef public_6f46746
#undef public_6f46751
#undef public_6f46755
#undef public_6f46760
#undef public_6f4676c
#undef public_6f46775
