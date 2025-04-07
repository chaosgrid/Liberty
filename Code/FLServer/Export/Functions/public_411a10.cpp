#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411a10);

#define public_411a29 _public_411a29
#define public_411a40 _public_411a40
#define public_411a4c _public_411a4c
#define public_411a50 _public_411a50
#define public_411a60 _public_411a60
#define public_411a6b _public_411a6b

PROC_DECLARE(0x411a10, internal_411a10, public_411a10);
extern "C" NAKED register_t __cdecl internal_411a10()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x14]
        test dl, dl
        push ebx
        jne public_411a29
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_411a29
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_411a29 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_411a50
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_411a4c
        lea esp, ss:[esp]
        public_411a40 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_411a40
        public_411a4c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_411a50 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_411a6b
        lea esp, ss:[esp]
        public_411a60 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_411a60
        public_411a6b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x411a10)
    }
}

#undef public_411a29
#undef public_411a40
#undef public_411a4c
#undef public_411a50
#undef public_411a60
#undef public_411a6b
