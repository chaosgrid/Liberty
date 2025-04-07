#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63239e0);

#define public_63239f9 _public_63239f9
#define public_6323a10 _public_6323a10
#define public_6323a1c _public_6323a1c
#define public_6323a20 _public_6323a20
#define public_6323a30 _public_6323a30
#define public_6323a3b _public_6323a3b

PROC_DECLARE(0x63239e0, internal_63239e0, public_63239e0);
extern "C" NAKED register_t __cdecl internal_63239e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x44]
        test dl, dl
        push ebx
        jne public_63239f9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_63239f9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_63239f9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x45]
        test bl, bl
        jne public_6323a20
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x45]
        test bl, bl
        jne public_6323a1c
        lea esp, ss:[esp]
        public_6323a10 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x45]
        test bl, bl
        je public_6323a10
        public_6323a1c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6323a20 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6323a3b
        lea esp, ss:[esp]
        public_6323a30 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6323a30
        public_6323a3b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x63239e0)
    }
}

#undef public_63239f9
#undef public_6323a10
#undef public_6323a1c
#undef public_6323a20
#undef public_6323a30
#undef public_6323a3b
