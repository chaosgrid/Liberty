#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d160d0);

#define public_6d160e6 _public_6d160e6
#define public_6d160f1 _public_6d160f1
#define public_6d160f5 _public_6d160f5
#define public_6d16100 _public_6d16100
#define public_6d1610c _public_6d1610c
#define public_6d16115 _public_6d16115

PROC_DECLARE(0x6d160d0, internal_6d160d0, public_6d160d0);
extern "C" NAKED register_t __cdecl internal_6d160d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6d160f5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6d160f1
        public_6d160e6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6d160e6
        public_6d160f1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6d160f5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6d1610c
        nop 
        public_6d16100 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6d16100
        public_6d1610c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6d16115
        mov dword ptr ds : [ecx], eax
        public_6d16115 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d160d0)
    }
}

#undef public_6d160e6
#undef public_6d160f1
#undef public_6d160f5
#undef public_6d16100
#undef public_6d1610c
#undef public_6d16115
