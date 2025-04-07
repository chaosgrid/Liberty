#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2dfb0);

#define public_6f2dfc9 _public_6f2dfc9
#define public_6f2dfe0 _public_6f2dfe0
#define public_6f2dfec _public_6f2dfec
#define public_6f2dff0 _public_6f2dff0
#define public_6f2e000 _public_6f2e000
#define public_6f2e00b _public_6f2e00b

PROC_DECLARE(0x6f2dfb0, internal_6f2dfb0, public_6f2dfb0);
extern "C" NAKED register_t __cdecl internal_6f2dfb0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x20]
        test dl, dl
        push ebx
        jne public_6f2dfc9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f2dfc9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f2dfc9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x21]
        test bl, bl
        jne public_6f2dff0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6f2dfec
        lea esp, ss:[esp]
        public_6f2dfe0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6f2dfe0
        public_6f2dfec : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f2dff0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f2e00b
        lea esp, ss:[esp]
        public_6f2e000 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f2e000
        public_6f2e00b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f2dfb0)
    }
}

#undef public_6f2dfc9
#undef public_6f2dfe0
#undef public_6f2dfec
#undef public_6f2dff0
#undef public_6f2e000
#undef public_6f2e00b
