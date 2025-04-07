#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce5700);

#define public_6ce5716 _public_6ce5716
#define public_6ce5721 _public_6ce5721
#define public_6ce5725 _public_6ce5725
#define public_6ce5730 _public_6ce5730
#define public_6ce573c _public_6ce573c
#define public_6ce5745 _public_6ce5745

PROC_DECLARE(0x6ce5700, internal_6ce5700, public_6ce5700);
extern "C" NAKED register_t __cdecl internal_6ce5700()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x11]
        test bl, bl
        jne public_6ce5725
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_6ce5721
        public_6ce5716 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_6ce5716
        public_6ce5721 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6ce5725 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6ce573c
        nop 
        public_6ce5730 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6ce5730
        public_6ce573c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6ce5745
        mov dword ptr ds : [ecx], eax
        public_6ce5745 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ce5700)
    }
}

#undef public_6ce5716
#undef public_6ce5721
#undef public_6ce5725
#undef public_6ce5730
#undef public_6ce573c
#undef public_6ce5745
