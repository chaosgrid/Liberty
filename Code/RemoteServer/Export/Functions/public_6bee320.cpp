#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bee320);

#define public_6bee336 _public_6bee336
#define public_6bee341 _public_6bee341
#define public_6bee345 _public_6bee345
#define public_6bee350 _public_6bee350
#define public_6bee35c _public_6bee35c
#define public_6bee365 _public_6bee365

PROC_DECLARE(0x6bee320, internal_6bee320, public_6bee320);
extern "C" NAKED register_t __cdecl internal_6bee320()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x21]
        test bl, bl
        jne public_6bee345
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6bee341
        public_6bee336 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6bee336
        public_6bee341 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6bee345 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6bee35c
        nop 
        public_6bee350 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6bee350
        public_6bee35c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6bee365
        mov dword ptr ds : [ecx], eax
        public_6bee365 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6bee320)
    }
}

#undef public_6bee336
#undef public_6bee341
#undef public_6bee345
#undef public_6bee350
#undef public_6bee35c
#undef public_6bee365
