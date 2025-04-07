#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63231f0);

#define public_6323206 _public_6323206
#define public_6323211 _public_6323211
#define public_6323215 _public_6323215
#define public_6323220 _public_6323220
#define public_632322c _public_632322c
#define public_6323235 _public_6323235

PROC_DECLARE(0x63231f0, internal_63231f0, public_63231f0);
extern "C" NAKED register_t __cdecl internal_63231f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x45]
        test bl, bl
        jne public_6323215
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x45]
        test bl, bl
        jne public_6323211
        public_6323206 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x45]
        test bl, bl
        je public_6323206
        public_6323211 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6323215 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_632322c
        nop 
        public_6323220 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6323220
        public_632322c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6323235
        mov dword ptr ds : [ecx], eax
        public_6323235 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x63231f0)
    }
}

#undef public_6323206
#undef public_6323211
#undef public_6323215
#undef public_6323220
#undef public_632322c
#undef public_6323235
