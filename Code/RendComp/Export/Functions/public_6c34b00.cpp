#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34b00);

#define public_6c34b19 _public_6c34b19
#define public_6c34b30 _public_6c34b30
#define public_6c34b3c _public_6c34b3c
#define public_6c34b40 _public_6c34b40
#define public_6c34b50 _public_6c34b50
#define public_6c34b5b _public_6c34b5b

PROC_DECLARE(0x6c34b00, internal_6c34b00, public_6c34b00);
extern "C" NAKED register_t __cdecl internal_6c34b00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x24]
        test dl, dl
        push ebx
        jne public_6c34b19
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6c34b19
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6c34b19 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x25]
        test bl, bl
        jne public_6c34b40
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_6c34b3c
        lea esp, ss:[esp]
        public_6c34b30 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_6c34b30
        public_6c34b3c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6c34b40 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6c34b5b
        lea esp, ss:[esp]
        public_6c34b50 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6c34b50
        public_6c34b5b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6c34b00)
    }
}

#undef public_6c34b19
#undef public_6c34b30
#undef public_6c34b3c
#undef public_6c34b40
#undef public_6c34b50
#undef public_6c34b5b
