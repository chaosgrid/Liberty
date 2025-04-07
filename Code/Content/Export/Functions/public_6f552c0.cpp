#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f552c0);

#define public_6f552d6 _public_6f552d6
#define public_6f552e1 _public_6f552e1
#define public_6f552e5 _public_6f552e5
#define public_6f552f0 _public_6f552f0
#define public_6f552fc _public_6f552fc
#define public_6f55305 _public_6f55305

PROC_DECLARE(0x6f552c0, internal_6f552c0, public_6f552c0);
extern "C" NAKED register_t __cdecl internal_6f552c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x31]
        test bl, bl
        jne public_6f552e5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x31]
        test bl, bl
        jne public_6f552e1
        public_6f552d6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x31]
        test bl, bl
        je public_6f552d6
        public_6f552e1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f552e5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f552fc
        nop 
        public_6f552f0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f552f0
        public_6f552fc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f55305
        mov dword ptr ds : [ecx], eax
        public_6f55305 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f552c0)
    }
}

#undef public_6f552d6
#undef public_6f552e1
#undef public_6f552e5
#undef public_6f552f0
#undef public_6f552fc
#undef public_6f55305
