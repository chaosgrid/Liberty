#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3f070);

#define public_6f3f089 _public_6f3f089
#define public_6f3f0a0 _public_6f3f0a0
#define public_6f3f0ac _public_6f3f0ac
#define public_6f3f0b0 _public_6f3f0b0
#define public_6f3f0c0 _public_6f3f0c0
#define public_6f3f0cb _public_6f3f0cb

PROC_DECLARE(0x6f3f070, internal_6f3f070, public_6f3f070);
extern "C" NAKED register_t __cdecl internal_6f3f070()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x24]
        test dl, dl
        push ebx
        jne public_6f3f089
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f3f089
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f3f089 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x25]
        test bl, bl
        jne public_6f3f0b0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_6f3f0ac
        lea esp, ss:[esp]
        public_6f3f0a0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_6f3f0a0
        public_6f3f0ac : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f3f0b0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f3f0cb
        lea esp, ss:[esp]
        public_6f3f0c0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f3f0c0
        public_6f3f0cb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f3f070)
    }
}

#undef public_6f3f089
#undef public_6f3f0a0
#undef public_6f3f0ac
#undef public_6f3f0b0
#undef public_6f3f0c0
#undef public_6f3f0cb
