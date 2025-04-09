#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_433a00);

#define public_433a16 _public_433a16
#define public_433a21 _public_433a21
#define public_433a25 _public_433a25
#define public_433a30 _public_433a30
#define public_433a3c _public_433a3c
#define public_433a45 _public_433a45

PROC_DECLARE(0x433a00, internal_433a00, public_433a00);
extern "C" NAKED register_t __cdecl internal_433a00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x25]
        test bl, bl
        jne public_433a25
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_433a21
        public_433a16 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_433a16
        public_433a21 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_433a25 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_433a3c
        nop 
        public_433a30 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_433a30
        public_433a3c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_433a45
        mov dword ptr ds : [ecx], eax
        public_433a45 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x433a00)
    }
}

#undef public_433a16
#undef public_433a21
#undef public_433a25
#undef public_433a30
#undef public_433a3c
#undef public_433a45
