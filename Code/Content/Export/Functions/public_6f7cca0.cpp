#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7cca0);

#define public_6f7ccb9 _public_6f7ccb9
#define public_6f7ccd0 _public_6f7ccd0
#define public_6f7ccdc _public_6f7ccdc
#define public_6f7cce0 _public_6f7cce0
#define public_6f7ccf0 _public_6f7ccf0
#define public_6f7ccfb _public_6f7ccfb

PROC_DECLARE(0x6f7cca0, internal_6f7cca0, public_6f7cca0);
extern "C" NAKED register_t __cdecl internal_6f7cca0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x5C]
        test dl, dl
        push ebx
        jne public_6f7ccb9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f7ccb9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f7ccb9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x5D]
        test bl, bl
        jne public_6f7cce0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x5D]
        test bl, bl
        jne public_6f7ccdc
        lea esp, ss:[esp]
        public_6f7ccd0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x5D]
        test bl, bl
        je public_6f7ccd0
        public_6f7ccdc : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f7cce0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f7ccfb
        lea esp, ss:[esp]
        public_6f7ccf0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f7ccf0
        public_6f7ccfb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f7cca0)
    }
}

#undef public_6f7ccb9
#undef public_6f7ccd0
#undef public_6f7ccdc
#undef public_6f7cce0
#undef public_6f7ccf0
#undef public_6f7ccfb
