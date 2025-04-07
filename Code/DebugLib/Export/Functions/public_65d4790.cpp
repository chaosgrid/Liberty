#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d4790);

#define public_65d47a9 _public_65d47a9
#define public_65d47bc _public_65d47bc
#define public_65d47c8 _public_65d47c8
#define public_65d47cc _public_65d47cc
#define public_65d47d5 _public_65d47d5
#define public_65d47e0 _public_65d47e0

PROC_DECLARE(0x65d4790, internal_65d4790, public_65d4790);
extern "C" NAKED register_t __cdecl internal_65d4790()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push ebx
        mov dl, byte ptr ds : [eax+0x2C]
        test dl, dl
        jne public_65d47a9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_65d47a9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_65d47a9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x2D]
        test bl, bl
        jne public_65d47cc
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        jne public_65d47c8
        public_65d47bc : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        je public_65d47bc
        public_65d47c8 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_65d47cc : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_65d47e0
        public_65d47d5 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_65d47d5
        public_65d47e0 : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65d4790)
    }
}

#undef public_65d47a9
#undef public_65d47bc
#undef public_65d47c8
#undef public_65d47cc
#undef public_65d47d5
#undef public_65d47e0
