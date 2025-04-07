#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c010);

#define public_43c029 _public_43c029
#define public_43c040 _public_43c040
#define public_43c04c _public_43c04c
#define public_43c050 _public_43c050
#define public_43c060 _public_43c060
#define public_43c06b _public_43c06b

PROC_DECLARE(0x43c010, internal_43c010, public_43c010);
extern "C" NAKED register_t __cdecl internal_43c010()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x14]
        test dl, dl
        push ebx
        jne public_43c029
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_43c029
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_43c029 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_43c050
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_43c04c
        lea esp, ss:[esp]
        public_43c040 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_43c040
        public_43c04c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_43c050 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_43c06b
        lea esp, ss:[esp]
        public_43c060 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_43c060
        public_43c06b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x43c010)
    }
}

#undef public_43c029
#undef public_43c040
#undef public_43c04c
#undef public_43c050
#undef public_43c060
#undef public_43c06b
