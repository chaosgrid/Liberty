#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8080);

#define public_6ee8096 _public_6ee8096
#define public_6ee80a1 _public_6ee80a1
#define public_6ee80a5 _public_6ee80a5
#define public_6ee80b0 _public_6ee80b0
#define public_6ee80bc _public_6ee80bc
#define public_6ee80c5 _public_6ee80c5

PROC_DECLARE(0x6ee8080, internal_6ee8080, public_6ee8080);
extern "C" NAKED register_t __cdecl internal_6ee8080()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6ee80a5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6ee80a1
        public_6ee8096 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6ee8096
        public_6ee80a1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6ee80a5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6ee80bc
        nop 
        public_6ee80b0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6ee80b0
        public_6ee80bc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6ee80c5
        mov dword ptr ds : [ecx], eax
        public_6ee80c5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ee8080)
    }
}

#undef public_6ee8096
#undef public_6ee80a1
#undef public_6ee80a5
#undef public_6ee80b0
#undef public_6ee80bc
#undef public_6ee80c5
