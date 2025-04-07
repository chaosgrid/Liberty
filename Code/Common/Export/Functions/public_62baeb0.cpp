#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62baeb0);

#define public_62baec6 _public_62baec6
#define public_62baed1 _public_62baed1
#define public_62baed5 _public_62baed5
#define public_62baee0 _public_62baee0
#define public_62baeec _public_62baeec
#define public_62baef5 _public_62baef5

PROC_DECLARE(0x62baeb0, internal_62baeb0, public_62baeb0);
extern "C" NAKED register_t __cdecl internal_62baeb0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x4D]
        test bl, bl
        jne public_62baed5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x4D]
        test bl, bl
        jne public_62baed1
        public_62baec6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x4D]
        test bl, bl
        je public_62baec6
        public_62baed1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_62baed5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_62baeec
        nop 
        public_62baee0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_62baee0
        public_62baeec : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_62baef5
        mov dword ptr ds : [ecx], eax
        public_62baef5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62baeb0)
    }
}

#undef public_62baec6
#undef public_62baed1
#undef public_62baed5
#undef public_62baee0
#undef public_62baeec
#undef public_62baef5
