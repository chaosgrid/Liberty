#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a72a0);

#define public_62a72b6 _public_62a72b6
#define public_62a72c1 _public_62a72c1
#define public_62a72c5 _public_62a72c5
#define public_62a72d0 _public_62a72d0
#define public_62a72dc _public_62a72dc
#define public_62a72e5 _public_62a72e5

PROC_DECLARE(0x62a72a0, internal_62a72a0, public_62a72a0);
extern "C" NAKED register_t __cdecl internal_62a72a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x69]
        test bl, bl
        jne public_62a72c5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x69]
        test bl, bl
        jne public_62a72c1
        public_62a72b6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x69]
        test bl, bl
        je public_62a72b6
        public_62a72c1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_62a72c5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_62a72dc
        nop 
        public_62a72d0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_62a72d0
        public_62a72dc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_62a72e5
        mov dword ptr ds : [ecx], eax
        public_62a72e5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62a72a0)
    }
}

#undef public_62a72b6
#undef public_62a72c1
#undef public_62a72c5
#undef public_62a72d0
#undef public_62a72dc
#undef public_62a72e5
