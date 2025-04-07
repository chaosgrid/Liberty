#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632d480);

#define public_632d499 _public_632d499
#define public_632d4b0 _public_632d4b0
#define public_632d4bc _public_632d4bc
#define public_632d4c0 _public_632d4c0
#define public_632d4d0 _public_632d4d0
#define public_632d4db _public_632d4db

PROC_DECLARE(0x632d480, internal_632d480, public_632d480);
extern "C" NAKED register_t __cdecl internal_632d480()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x1C]
        test dl, dl
        push ebx
        jne public_632d499
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_632d499
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_632d499 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x1D]
        test bl, bl
        jne public_632d4c0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_632d4bc
        lea esp, ss:[esp]
        public_632d4b0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_632d4b0
        public_632d4bc : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_632d4c0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_632d4db
        lea esp, ss:[esp]
        public_632d4d0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_632d4d0
        public_632d4db : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x632d480)
    }
}

#undef public_632d499
#undef public_632d4b0
#undef public_632d4bc
#undef public_632d4c0
#undef public_632d4d0
#undef public_632d4db
