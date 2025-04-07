#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2a340);

#define public_6c2a359 _public_6c2a359
#define public_6c2a370 _public_6c2a370
#define public_6c2a37c _public_6c2a37c
#define public_6c2a380 _public_6c2a380
#define public_6c2a390 _public_6c2a390
#define public_6c2a39b _public_6c2a39b

PROC_DECLARE(0x6c2a340, internal_6c2a340, public_6c2a340);
extern "C" NAKED register_t __cdecl internal_6c2a340()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x14]
        test dl, dl
        push ebx
        jne public_6c2a359
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6c2a359
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6c2a359 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6c2a380
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6c2a37c
        lea esp, ss:[esp]
        public_6c2a370 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6c2a370
        public_6c2a37c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6c2a380 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6c2a39b
        lea esp, ss:[esp]
        public_6c2a390 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6c2a390
        public_6c2a39b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6c2a340)
    }
}

#undef public_6c2a359
#undef public_6c2a370
#undef public_6c2a37c
#undef public_6c2a380
#undef public_6c2a390
#undef public_6c2a39b
