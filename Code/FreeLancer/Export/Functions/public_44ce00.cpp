#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44ce00);

#define public_44ce19 _public_44ce19
#define public_44ce30 _public_44ce30
#define public_44ce3c _public_44ce3c
#define public_44ce40 _public_44ce40
#define public_44ce50 _public_44ce50
#define public_44ce5b _public_44ce5b

PROC_DECLARE(0x44ce00, internal_44ce00, public_44ce00);
extern "C" NAKED register_t __cdecl internal_44ce00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0xD]
        test dl, dl
        push ebx
        jne public_44ce19
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_44ce19
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_44ce19 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0xE]
        test bl, bl
        jne public_44ce40
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0xE]
        test bl, bl
        jne public_44ce3c
        lea esp, ss:[esp]
        public_44ce30 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0xE]
        test bl, bl
        je public_44ce30
        public_44ce3c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_44ce40 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_44ce5b
        lea esp, ss:[esp]
        public_44ce50 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_44ce50
        public_44ce5b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x44ce00)
    }
}

#undef public_44ce19
#undef public_44ce30
#undef public_44ce3c
#undef public_44ce40
#undef public_44ce50
#undef public_44ce5b
