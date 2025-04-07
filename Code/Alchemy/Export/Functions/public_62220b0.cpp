#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62220b0);

#define public_62220c6 _public_62220c6
#define public_62220d1 _public_62220d1
#define public_62220d5 _public_62220d5
#define public_62220df _public_62220df
#define public_62220eb _public_62220eb
#define public_62220f4 _public_62220f4

PROC_DECLARE(0x62220b0, internal_62220b0, public_62220b0);
extern "C" NAKED register_t __cdecl internal_62220b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push ebx
        mov edx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [edx+0x1D]
        test bl, bl
        jne public_62220d5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_62220d1
        public_62220c6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_62220c6
        public_62220d1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_62220d5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_62220eb
        public_62220df : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_62220df
        public_62220eb : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_62220f4
        mov dword ptr ds : [ecx], eax
        public_62220f4 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62220b0)
    }
}

#undef public_62220c6
#undef public_62220d1
#undef public_62220d5
#undef public_62220df
#undef public_62220eb
#undef public_62220f4
