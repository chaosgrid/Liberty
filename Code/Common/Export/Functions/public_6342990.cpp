#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6342990);

#define public_63429a9 _public_63429a9
#define public_63429c0 _public_63429c0
#define public_63429cc _public_63429cc
#define public_63429d0 _public_63429d0
#define public_63429e0 _public_63429e0
#define public_63429eb _public_63429eb

PROC_DECLARE(0x6342990, internal_6342990, public_6342990);
extern "C" NAKED register_t __cdecl internal_6342990()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x24]
        test dl, dl
        push ebx
        jne public_63429a9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_63429a9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_63429a9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x25]
        test bl, bl
        jne public_63429d0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_63429cc
        lea esp, ss:[esp]
        public_63429c0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_63429c0
        public_63429cc : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_63429d0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_63429eb
        lea esp, ss:[esp]
        public_63429e0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_63429e0
        public_63429eb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6342990)
    }
}

#undef public_63429a9
#undef public_63429c0
#undef public_63429cc
#undef public_63429d0
#undef public_63429e0
#undef public_63429eb
