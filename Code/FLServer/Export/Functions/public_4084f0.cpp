#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4084f0);

#define public_408509 _public_408509
#define public_408520 _public_408520
#define public_40852c _public_40852c
#define public_408530 _public_408530
#define public_408540 _public_408540
#define public_40854b _public_40854b

PROC_DECLARE(0x4084f0, internal_4084f0, public_4084f0);
extern "C" NAKED register_t __cdecl internal_4084f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x10]
        test dl, dl
        push ebx
        jne public_408509
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_408509
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_408509 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x11]
        test bl, bl
        jne public_408530
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_40852c
        lea esp, ss:[esp]
        public_408520 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_408520
        public_40852c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_408530 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_40854b
        lea esp, ss:[esp]
        public_408540 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_408540
        public_40854b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4084f0)
    }
}

#undef public_408509
#undef public_408520
#undef public_40852c
#undef public_408530
#undef public_408540
#undef public_40854b
