#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6319c30);

#define public_6319c46 _public_6319c46
#define public_6319c51 _public_6319c51
#define public_6319c55 _public_6319c55
#define public_6319c60 _public_6319c60
#define public_6319c6c _public_6319c6c
#define public_6319c75 _public_6319c75

PROC_DECLARE(0x6319c30, internal_6319c30, public_6319c30);
extern "C" NAKED register_t __cdecl internal_6319c30()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x75]
        test bl, bl
        jne public_6319c55
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x75]
        test bl, bl
        jne public_6319c51
        public_6319c46 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x75]
        test bl, bl
        je public_6319c46
        public_6319c51 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6319c55 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6319c6c
        nop 
        public_6319c60 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6319c60
        public_6319c6c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6319c75
        mov dword ptr ds : [ecx], eax
        public_6319c75 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6319c30)
    }
}

#undef public_6319c46
#undef public_6319c51
#undef public_6319c55
#undef public_6319c60
#undef public_6319c6c
#undef public_6319c75
