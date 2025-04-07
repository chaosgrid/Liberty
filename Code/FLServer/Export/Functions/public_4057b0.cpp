#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4057b0);

#define public_4057c6 _public_4057c6
#define public_4057d1 _public_4057d1
#define public_4057d5 _public_4057d5
#define public_4057e0 _public_4057e0
#define public_4057ec _public_4057ec
#define public_4057f5 _public_4057f5

PROC_DECLARE(0x4057b0, internal_4057b0, public_4057b0);
extern "C" NAKED register_t __cdecl internal_4057b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x11]
        test bl, bl
        jne public_4057d5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_4057d1
        public_4057c6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_4057c6
        public_4057d1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_4057d5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_4057ec
        nop 
        public_4057e0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_4057e0
        public_4057ec : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_4057f5
        mov dword ptr ds : [ecx], eax
        public_4057f5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4057b0)
    }
}

#undef public_4057c6
#undef public_4057d1
#undef public_4057d5
#undef public_4057e0
#undef public_4057ec
#undef public_4057f5
