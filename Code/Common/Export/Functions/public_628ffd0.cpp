#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628ffd0);

#define public_628ffe6 _public_628ffe6
#define public_628fff1 _public_628fff1
#define public_628fff5 _public_628fff5
#define public_6290000 _public_6290000
#define public_629000c _public_629000c
#define public_6290015 _public_6290015

PROC_DECLARE(0x628ffd0, internal_628ffd0, public_628ffd0);
extern "C" NAKED register_t __cdecl internal_628ffd0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x11]
        test bl, bl
        jne public_628fff5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_628fff1
        public_628ffe6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_628ffe6
        public_628fff1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_628fff5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_629000c
        nop 
        public_6290000 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6290000
        public_629000c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6290015
        mov dword ptr ds : [ecx], eax
        public_6290015 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x628ffd0)
    }
}

#undef public_628ffe6
#undef public_628fff1
#undef public_628fff5
#undef public_6290000
#undef public_629000c
#undef public_6290015
