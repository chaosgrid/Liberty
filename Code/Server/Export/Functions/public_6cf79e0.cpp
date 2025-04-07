#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf79e0);

#define public_6cf79f9 _public_6cf79f9
#define public_6cf7a10 _public_6cf7a10
#define public_6cf7a1c _public_6cf7a1c
#define public_6cf7a20 _public_6cf7a20
#define public_6cf7a30 _public_6cf7a30
#define public_6cf7a3b _public_6cf7a3b

PROC_DECLARE(0x6cf79e0, internal_6cf79e0, public_6cf79e0);
extern "C" NAKED register_t __cdecl internal_6cf79e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x10]
        test dl, dl
        push ebx
        jne public_6cf79f9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6cf79f9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6cf79f9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x11]
        test bl, bl
        jne public_6cf7a20
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_6cf7a1c
        lea esp, ss:[esp]
        public_6cf7a10 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_6cf7a10
        public_6cf7a1c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6cf7a20 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6cf7a3b
        lea esp, ss:[esp]
        public_6cf7a30 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6cf7a30
        public_6cf7a3b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6cf79e0)
    }
}

#undef public_6cf79f9
#undef public_6cf7a10
#undef public_6cf7a1c
#undef public_6cf7a20
#undef public_6cf7a30
#undef public_6cf7a3b
