#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da2140);

#define public_6da2156 _public_6da2156
#define public_6da2161 _public_6da2161
#define public_6da2165 _public_6da2165
#define public_6da2170 _public_6da2170
#define public_6da217c _public_6da217c
#define public_6da2185 _public_6da2185

PROC_DECLARE(0x6da2140, internal_6da2140, public_6da2140);
extern "C" NAKED register_t __cdecl internal_6da2140()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x49]
        test bl, bl
        jne public_6da2165
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        jne public_6da2161
        public_6da2156 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        je public_6da2156
        public_6da2161 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6da2165 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6da217c
        nop 
        public_6da2170 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6da2170
        public_6da217c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6da2185
        mov dword ptr ds : [ecx], eax
        public_6da2185 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6da2140)
    }
}

#undef public_6da2156
#undef public_6da2161
#undef public_6da2165
#undef public_6da2170
#undef public_6da217c
#undef public_6da2185
