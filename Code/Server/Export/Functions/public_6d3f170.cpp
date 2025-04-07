#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3f170);

#define public_6d3f189 _public_6d3f189
#define public_6d3f1a0 _public_6d3f1a0
#define public_6d3f1ac _public_6d3f1ac
#define public_6d3f1b0 _public_6d3f1b0
#define public_6d3f1c0 _public_6d3f1c0
#define public_6d3f1cb _public_6d3f1cb

PROC_DECLARE(0x6d3f170, internal_6d3f170, public_6d3f170);
extern "C" NAKED register_t __cdecl internal_6d3f170()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x28]
        test dl, dl
        push ebx
        jne public_6d3f189
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6d3f189
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6d3f189 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x29]
        test bl, bl
        jne public_6d3f1b0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        jne public_6d3f1ac
        lea esp, ss:[esp]
        public_6d3f1a0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        je public_6d3f1a0
        public_6d3f1ac : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6d3f1b0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6d3f1cb
        lea esp, ss:[esp]
        public_6d3f1c0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6d3f1c0
        public_6d3f1cb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d3f170)
    }
}

#undef public_6d3f189
#undef public_6d3f1a0
#undef public_6d3f1ac
#undef public_6d3f1b0
#undef public_6d3f1c0
#undef public_6d3f1cb
