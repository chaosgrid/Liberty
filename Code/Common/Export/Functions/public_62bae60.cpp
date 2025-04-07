#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bae60);

#define public_62bae76 _public_62bae76
#define public_62bae81 _public_62bae81
#define public_62bae85 _public_62bae85
#define public_62bae90 _public_62bae90
#define public_62bae9c _public_62bae9c
#define public_62baea5 _public_62baea5

PROC_DECLARE(0x62bae60, internal_62bae60, public_62bae60);
extern "C" NAKED register_t __cdecl internal_62bae60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x51]
        test bl, bl
        jne public_62bae85
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x51]
        test bl, bl
        jne public_62bae81
        public_62bae76 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x51]
        test bl, bl
        je public_62bae76
        public_62bae81 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_62bae85 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_62bae9c
        nop 
        public_62bae90 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_62bae90
        public_62bae9c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_62baea5
        mov dword ptr ds : [ecx], eax
        public_62baea5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62bae60)
    }
}

#undef public_62bae76
#undef public_62bae81
#undef public_62bae85
#undef public_62bae90
#undef public_62bae9c
#undef public_62baea5
