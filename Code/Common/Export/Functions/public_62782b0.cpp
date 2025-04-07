#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62782b0);

#define public_62782c6 _public_62782c6
#define public_62782d1 _public_62782d1
#define public_62782d5 _public_62782d5
#define public_62782e0 _public_62782e0
#define public_62782ec _public_62782ec
#define public_62782f5 _public_62782f5

PROC_DECLARE(0x62782b0, internal_62782b0, public_62782b0);
extern "C" NAKED register_t __cdecl internal_62782b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x35]
        test bl, bl
        jne public_62782d5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        jne public_62782d1
        public_62782c6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        je public_62782c6
        public_62782d1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_62782d5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_62782ec
        nop 
        public_62782e0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_62782e0
        public_62782ec : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_62782f5
        mov dword ptr ds : [ecx], eax
        public_62782f5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62782b0)
    }
}

#undef public_62782c6
#undef public_62782d1
#undef public_62782d5
#undef public_62782e0
#undef public_62782ec
#undef public_62782f5
