#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6319090);

#define public_63190a9 _public_63190a9
#define public_63190c0 _public_63190c0
#define public_63190cc _public_63190cc
#define public_63190d0 _public_63190d0
#define public_63190e0 _public_63190e0
#define public_63190eb _public_63190eb

PROC_DECLARE(0x6319090, internal_6319090, public_6319090);
extern "C" NAKED register_t __cdecl internal_6319090()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x10]
        test dl, dl
        push ebx
        jne public_63190a9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_63190a9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_63190a9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x11]
        test bl, bl
        jne public_63190d0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_63190cc
        lea esp, ss:[esp]
        public_63190c0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_63190c0
        public_63190cc : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_63190d0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_63190eb
        lea esp, ss:[esp]
        public_63190e0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_63190e0
        public_63190eb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6319090)
    }
}

#undef public_63190a9
#undef public_63190c0
#undef public_63190cc
#undef public_63190d0
#undef public_63190e0
#undef public_63190eb
