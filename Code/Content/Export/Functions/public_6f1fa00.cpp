#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);

#define public_6f1fa16 _public_6f1fa16
#define public_6f1fa21 _public_6f1fa21
#define public_6f1fa25 _public_6f1fa25
#define public_6f1fa30 _public_6f1fa30
#define public_6f1fa3c _public_6f1fa3c
#define public_6f1fa45 _public_6f1fa45

PROC_DECLARE(0x6f1fa00, internal_6f1fa00, public_6f1fa00);
extern "C" NAKED register_t __cdecl internal_6f1fa00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6f1fa25
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6f1fa21
        public_6f1fa16 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6f1fa16
        public_6f1fa21 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f1fa25 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f1fa3c
        nop 
        public_6f1fa30 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f1fa30
        public_6f1fa3c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f1fa45
        mov dword ptr ds : [ecx], eax
        public_6f1fa45 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f1fa00)
    }
}

#undef public_6f1fa16
#undef public_6f1fa21
#undef public_6f1fa25
#undef public_6f1fa30
#undef public_6f1fa3c
#undef public_6f1fa45
