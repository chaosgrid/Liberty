#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f55120);

#define public_6f5513c _public_6f5513c
#define public_6f55155 _public_6f55155
#define public_6f55164 _public_6f55164
#define public_6f55168 _public_6f55168
#define public_6f55171 _public_6f55171
#define public_6f5517c _public_6f5517c

PROC_DECLARE(0x6f55120, internal_6f55120, public_6f55120);
extern "C" NAKED register_t __cdecl internal_6f55120()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x108]
        test dl, dl
        push ebx
        jne public_6f5513c
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f5513c
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f5513c : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x109]
        test bl, bl
        jne public_6f55168
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x109]
        test bl, bl
        jne public_6f55164
        public_6f55155 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x109]
        test bl, bl
        je public_6f55155
        public_6f55164 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f55168 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f5517c
        public_6f55171 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f55171
        public_6f5517c : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f55120)
    }
}

#undef public_6f5513c
#undef public_6f55155
#undef public_6f55164
#undef public_6f55168
#undef public_6f55171
#undef public_6f5517c
