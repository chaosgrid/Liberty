#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da34e0);

#define public_6da34f9 _public_6da34f9
#define public_6da3510 _public_6da3510
#define public_6da351c _public_6da351c
#define public_6da3520 _public_6da3520
#define public_6da3530 _public_6da3530
#define public_6da353b _public_6da353b

PROC_DECLARE(0x6da34e0, internal_6da34e0, public_6da34e0);
extern "C" NAKED register_t __cdecl internal_6da34e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x20]
        test dl, dl
        push ebx
        jne public_6da34f9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6da34f9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6da34f9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x21]
        test bl, bl
        jne public_6da3520
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6da351c
        lea esp, ss:[esp]
        public_6da3510 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6da3510
        public_6da351c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6da3520 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6da353b
        lea esp, ss:[esp]
        public_6da3530 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6da3530
        public_6da353b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6da34e0)
    }
}

#undef public_6da34f9
#undef public_6da3510
#undef public_6da351c
#undef public_6da3520
#undef public_6da3530
#undef public_6da353b
