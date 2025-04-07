#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631d3e0);

#define public_631d3f9 _public_631d3f9
#define public_631d410 _public_631d410
#define public_631d41c _public_631d41c
#define public_631d420 _public_631d420
#define public_631d430 _public_631d430
#define public_631d43b _public_631d43b

PROC_DECLARE(0x631d3e0, internal_631d3e0, public_631d3e0);
extern "C" NAKED register_t __cdecl internal_631d3e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x34]
        test dl, dl
        push ebx
        jne public_631d3f9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_631d3f9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_631d3f9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x35]
        test bl, bl
        jne public_631d420
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        jne public_631d41c
        lea esp, ss:[esp]
        public_631d410 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        je public_631d410
        public_631d41c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_631d420 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_631d43b
        lea esp, ss:[esp]
        public_631d430 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_631d430
        public_631d43b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x631d3e0)
    }
}

#undef public_631d3f9
#undef public_631d410
#undef public_631d41c
#undef public_631d420
#undef public_631d430
#undef public_631d43b
