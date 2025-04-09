#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438930);

#define public_438946 _public_438946
#define public_438951 _public_438951
#define public_438955 _public_438955
#define public_438960 _public_438960
#define public_43896c _public_43896c
#define public_438975 _public_438975

PROC_DECLARE(0x438930, internal_438930, public_438930);
extern "C" NAKED register_t __cdecl internal_438930()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x39]
        test bl, bl
        jne public_438955
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x39]
        test bl, bl
        jne public_438951
        public_438946 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x39]
        test bl, bl
        je public_438946
        public_438951 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_438955 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_43896c
        nop 
        public_438960 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_438960
        public_43896c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_438975
        mov dword ptr ds : [ecx], eax
        public_438975 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x438930)
    }
}

#undef public_438946
#undef public_438951
#undef public_438955
#undef public_438960
#undef public_43896c
#undef public_438975
