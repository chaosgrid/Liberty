#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626ba00);

#define public_626ba19 _public_626ba19
#define public_626ba30 _public_626ba30
#define public_626ba3c _public_626ba3c
#define public_626ba40 _public_626ba40
#define public_626ba50 _public_626ba50
#define public_626ba5b _public_626ba5b

PROC_DECLARE(0x626ba00, internal_626ba00, public_626ba00);
extern "C" NAKED register_t __cdecl internal_626ba00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x14]
        test dl, dl
        push ebx
        jne public_626ba19
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_626ba19
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_626ba19 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_626ba40
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_626ba3c
        lea esp, ss:[esp]
        public_626ba30 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_626ba30
        public_626ba3c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_626ba40 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_626ba5b
        lea esp, ss:[esp]
        public_626ba50 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_626ba50
        public_626ba5b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x626ba00)
    }
}

#undef public_626ba19
#undef public_626ba30
#undef public_626ba3c
#undef public_626ba40
#undef public_626ba50
#undef public_626ba5b
