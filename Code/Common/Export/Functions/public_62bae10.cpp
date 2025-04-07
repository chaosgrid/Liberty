#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bae10);

#define public_62bae26 _public_62bae26
#define public_62bae31 _public_62bae31
#define public_62bae35 _public_62bae35
#define public_62bae40 _public_62bae40
#define public_62bae4c _public_62bae4c
#define public_62bae55 _public_62bae55

PROC_DECLARE(0x62bae10, internal_62bae10, public_62bae10);
extern "C" NAKED register_t __cdecl internal_62bae10()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x31]
        test bl, bl
        jne public_62bae35
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x31]
        test bl, bl
        jne public_62bae31
        public_62bae26 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x31]
        test bl, bl
        je public_62bae26
        public_62bae31 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_62bae35 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_62bae4c
        nop 
        public_62bae40 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_62bae40
        public_62bae4c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_62bae55
        mov dword ptr ds : [ecx], eax
        public_62bae55 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62bae10)
    }
}

#undef public_62bae26
#undef public_62bae31
#undef public_62bae35
#undef public_62bae40
#undef public_62bae4c
#undef public_62bae55
