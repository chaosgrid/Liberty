#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e3f0);

#define public_6f4e409 _public_6f4e409
#define public_6f4e420 _public_6f4e420
#define public_6f4e42c _public_6f4e42c
#define public_6f4e430 _public_6f4e430
#define public_6f4e440 _public_6f4e440
#define public_6f4e44b _public_6f4e44b

PROC_DECLARE(0x6f4e3f0, internal_6f4e3f0, public_6f4e3f0);
extern "C" NAKED register_t __cdecl internal_6f4e3f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x20]
        test dl, dl
        push ebx
        jne public_6f4e409
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f4e409
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f4e409 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x21]
        test bl, bl
        jne public_6f4e430
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6f4e42c
        lea esp, ss:[esp]
        public_6f4e420 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6f4e420
        public_6f4e42c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f4e430 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f4e44b
        lea esp, ss:[esp]
        public_6f4e440 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f4e440
        public_6f4e44b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f4e3f0)
    }
}

#undef public_6f4e409
#undef public_6f4e420
#undef public_6f4e42c
#undef public_6f4e430
#undef public_6f4e440
#undef public_6f4e44b
