#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633fc90);

#define public_633fcb0 _public_633fcb0
#define public_633fcbe _public_633fcbe
#define public_633fcc2 _public_633fcc2
#define public_633fcd0 _public_633fcd0
#define public_633fcdc _public_633fcdc
#define public_633fce5 _public_633fce5

PROC_DECLARE(0x633fc90, internal_633fc90, public_633fc90);
extern "C" NAKED register_t __cdecl internal_633fc90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0xA9]
        test bl, bl
        jne public_633fcc2
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0xA9]
        test bl, bl
        jne public_633fcbe
        lea esp, ss:[esp]
        public_633fcb0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0xA9]
        test bl, bl
        je public_633fcb0
        public_633fcbe : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_633fcc2 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_633fcdc
        lea esp, ss:[esp]
        public_633fcd0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_633fcd0
        public_633fcdc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_633fce5
        mov dword ptr ds : [ecx], eax
        public_633fce5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x633fc90)
    }
}

#undef public_633fcb0
#undef public_633fcbe
#undef public_633fcc2
#undef public_633fcd0
#undef public_633fcdc
#undef public_633fce5
