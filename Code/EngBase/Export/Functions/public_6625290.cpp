#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6625290);

#define public_66252a9 _public_66252a9
#define public_66252bc _public_66252bc
#define public_66252c8 _public_66252c8
#define public_66252cc _public_66252cc
#define public_66252d5 _public_66252d5
#define public_66252e0 _public_66252e0

PROC_DECLARE(0x6625290, internal_6625290, public_6625290);
extern "C" NAKED register_t __cdecl internal_6625290()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push ebx
        mov dl, byte ptr ds : [eax+0x14]
        test dl, dl
        jne public_66252a9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_66252a9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_66252a9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_66252cc
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_66252c8
        public_66252bc : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_66252bc
        public_66252c8 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_66252cc : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_66252e0
        public_66252d5 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_66252d5
        public_66252e0 : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6625290)
    }
}

#undef public_66252a9
#undef public_66252bc
#undef public_66252c8
#undef public_66252cc
#undef public_66252d5
#undef public_66252e0
