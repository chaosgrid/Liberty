#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efdfa0);

#define public_6efdfb9 _public_6efdfb9
#define public_6efdfd0 _public_6efdfd0
#define public_6efdfdc _public_6efdfdc
#define public_6efdfe0 _public_6efdfe0
#define public_6efdff0 _public_6efdff0
#define public_6efdffb _public_6efdffb

PROC_DECLARE(0x6efdfa0, internal_6efdfa0, public_6efdfa0);
extern "C" NAKED register_t __cdecl internal_6efdfa0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x54]
        test dl, dl
        push ebx
        jne public_6efdfb9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6efdfb9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6efdfb9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x55]
        test bl, bl
        jne public_6efdfe0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x55]
        test bl, bl
        jne public_6efdfdc
        lea esp, ss:[esp]
        public_6efdfd0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x55]
        test bl, bl
        je public_6efdfd0
        public_6efdfdc : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6efdfe0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6efdffb
        lea esp, ss:[esp]
        public_6efdff0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6efdff0
        public_6efdffb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6efdfa0)
    }
}

#undef public_6efdfb9
#undef public_6efdfd0
#undef public_6efdfdc
#undef public_6efdfe0
#undef public_6efdff0
#undef public_6efdffb
