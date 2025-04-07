#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d59620);

#define public_6d59640 _public_6d59640
#define public_6d5964e _public_6d5964e
#define public_6d59652 _public_6d59652
#define public_6d59660 _public_6d59660
#define public_6d5966c _public_6d5966c
#define public_6d59675 _public_6d59675

PROC_DECLARE(0x6d59620, internal_6d59620, public_6d59620);
extern "C" NAKED register_t __cdecl internal_6d59620()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x5A5]
        test bl, bl
        jne public_6d59652
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x5A5]
        test bl, bl
        jne public_6d5964e
        lea esp, ss:[esp]
        public_6d59640 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x5A5]
        test bl, bl
        je public_6d59640
        public_6d5964e : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6d59652 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6d5966c
        lea esp, ss:[esp]
        public_6d59660 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6d59660
        public_6d5966c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6d59675
        mov dword ptr ds : [ecx], eax
        public_6d59675 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d59620)
    }
}

#undef public_6d59640
#undef public_6d5964e
#undef public_6d59652
#undef public_6d59660
#undef public_6d5966c
#undef public_6d59675
