#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ececb0);

#define public_6ececc6 _public_6ececc6
#define public_6ececd1 _public_6ececd1
#define public_6ececd5 _public_6ececd5
#define public_6ecece0 _public_6ecece0
#define public_6ececec _public_6ececec
#define public_6ececf5 _public_6ececf5

PROC_DECLARE(0x6ececb0, internal_6ececb0, public_6ececb0);
extern "C" NAKED register_t __cdecl internal_6ececb0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x25]
        test bl, bl
        jne public_6ececd5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_6ececd1
        public_6ececc6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_6ececc6
        public_6ececd1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6ececd5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6ececec
        nop 
        public_6ecece0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6ecece0
        public_6ececec : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6ececf5
        mov dword ptr ds : [ecx], eax
        public_6ececf5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ececb0)
    }
}

#undef public_6ececc6
#undef public_6ececd1
#undef public_6ececd5
#undef public_6ecece0
#undef public_6ececec
#undef public_6ececf5
