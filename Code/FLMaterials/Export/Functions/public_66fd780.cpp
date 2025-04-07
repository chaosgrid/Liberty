#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fd780);

#define public_66fd799 _public_66fd799
#define public_66fd7b0 _public_66fd7b0
#define public_66fd7bc _public_66fd7bc
#define public_66fd7c0 _public_66fd7c0
#define public_66fd7d0 _public_66fd7d0
#define public_66fd7db _public_66fd7db

PROC_DECLARE(0x66fd780, internal_66fd780, public_66fd780);
extern "C" NAKED register_t __cdecl internal_66fd780()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x14]
        test dl, dl
        push ebx
        jne public_66fd799
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_66fd799
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_66fd799 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_66fd7c0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_66fd7bc
        lea esp, ss:[esp]
        public_66fd7b0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_66fd7b0
        public_66fd7bc : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_66fd7c0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_66fd7db
        lea esp, ss:[esp]
        public_66fd7d0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_66fd7d0
        public_66fd7db : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x66fd780)
    }
}

#undef public_66fd799
#undef public_66fd7b0
#undef public_66fd7bc
#undef public_66fd7c0
#undef public_66fd7d0
#undef public_66fd7db
