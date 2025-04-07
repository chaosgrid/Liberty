#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3c290);

#define public_6b3c2a9 _public_6b3c2a9
#define public_6b3c2c0 _public_6b3c2c0
#define public_6b3c2cc _public_6b3c2cc
#define public_6b3c2d0 _public_6b3c2d0
#define public_6b3c2e0 _public_6b3c2e0
#define public_6b3c2eb _public_6b3c2eb

PROC_DECLARE(0x6b3c290, internal_6b3c290, public_6b3c290);
extern "C" NAKED register_t __cdecl internal_6b3c290()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x14]
        test dl, dl
        push ebx
        jne public_6b3c2a9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6b3c2a9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6b3c2a9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6b3c2d0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6b3c2cc
        lea esp, ss:[esp]
        public_6b3c2c0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6b3c2c0
        public_6b3c2cc : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6b3c2d0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6b3c2eb
        lea esp, ss:[esp]
        public_6b3c2e0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6b3c2e0
        public_6b3c2eb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6b3c290)
    }
}

#undef public_6b3c2a9
#undef public_6b3c2c0
#undef public_6b3c2cc
#undef public_6b3c2d0
#undef public_6b3c2e0
#undef public_6b3c2eb
