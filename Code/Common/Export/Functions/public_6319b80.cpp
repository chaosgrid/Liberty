#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6319b80);

#define public_6319b96 _public_6319b96
#define public_6319ba1 _public_6319ba1
#define public_6319ba5 _public_6319ba5
#define public_6319bb0 _public_6319bb0
#define public_6319bbc _public_6319bbc
#define public_6319bc5 _public_6319bc5

PROC_DECLARE(0x6319b80, internal_6319b80, public_6319b80);
extern "C" NAKED register_t __cdecl internal_6319b80()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x41]
        test bl, bl
        jne public_6319ba5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x41]
        test bl, bl
        jne public_6319ba1
        public_6319b96 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x41]
        test bl, bl
        je public_6319b96
        public_6319ba1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6319ba5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6319bbc
        nop 
        public_6319bb0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6319bb0
        public_6319bbc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6319bc5
        mov dword ptr ds : [ecx], eax
        public_6319bc5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6319b80)
    }
}

#undef public_6319b96
#undef public_6319ba1
#undef public_6319ba5
#undef public_6319bb0
#undef public_6319bbc
#undef public_6319bc5
