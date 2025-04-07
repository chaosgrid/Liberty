#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f6f0);

#define public_627f709 _public_627f709
#define public_627f720 _public_627f720
#define public_627f72c _public_627f72c
#define public_627f730 _public_627f730
#define public_627f740 _public_627f740
#define public_627f74b _public_627f74b

PROC_DECLARE(0x627f6f0, internal_627f6f0, public_627f6f0);
extern "C" NAKED register_t __cdecl internal_627f6f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x20]
        test dl, dl
        push ebx
        jne public_627f709
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_627f709
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_627f709 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x21]
        test bl, bl
        jne public_627f730
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_627f72c
        lea esp, ss:[esp]
        public_627f720 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_627f720
        public_627f72c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_627f730 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_627f74b
        lea esp, ss:[esp]
        public_627f740 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_627f740
        public_627f74b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x627f6f0)
    }
}

#undef public_627f709
#undef public_627f720
#undef public_627f72c
#undef public_627f730
#undef public_627f740
#undef public_627f74b
