#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa3b80);

#define public_6fa3ba0 _public_6fa3ba0
#define public_6fa3bae _public_6fa3bae
#define public_6fa3bb2 _public_6fa3bb2
#define public_6fa3bc0 _public_6fa3bc0
#define public_6fa3bcc _public_6fa3bcc
#define public_6fa3bd5 _public_6fa3bd5

PROC_DECLARE(0x6fa3b80, internal_6fa3b80, public_6fa3b80);
extern "C" NAKED register_t __cdecl internal_6fa3b80()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x125]
        test bl, bl
        jne public_6fa3bb2
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x125]
        test bl, bl
        jne public_6fa3bae
        lea esp, ss:[esp]
        public_6fa3ba0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x125]
        test bl, bl
        je public_6fa3ba0
        public_6fa3bae : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6fa3bb2 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6fa3bcc
        lea esp, ss:[esp]
        public_6fa3bc0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6fa3bc0
        public_6fa3bcc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6fa3bd5
        mov dword ptr ds : [ecx], eax
        public_6fa3bd5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6fa3b80)
    }
}

#undef public_6fa3ba0
#undef public_6fa3bae
#undef public_6fa3bb2
#undef public_6fa3bc0
#undef public_6fa3bcc
#undef public_6fa3bd5
