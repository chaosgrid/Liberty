#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f46490);

#define public_6f464a9 _public_6f464a9
#define public_6f464c0 _public_6f464c0
#define public_6f464cc _public_6f464cc
#define public_6f464d0 _public_6f464d0
#define public_6f464e0 _public_6f464e0
#define public_6f464eb _public_6f464eb

PROC_DECLARE(0x6f46490, internal_6f46490, public_6f46490);
extern "C" NAKED register_t __cdecl internal_6f46490()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x18]
        test dl, dl
        push ebx
        jne public_6f464a9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f464a9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f464a9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x19]
        test bl, bl
        jne public_6f464d0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        jne public_6f464cc
        lea esp, ss:[esp]
        public_6f464c0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        je public_6f464c0
        public_6f464cc : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f464d0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f464eb
        lea esp, ss:[esp]
        public_6f464e0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f464e0
        public_6f464eb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f46490)
    }
}

#undef public_6f464a9
#undef public_6f464c0
#undef public_6f464cc
#undef public_6f464d0
#undef public_6f464e0
#undef public_6f464eb
