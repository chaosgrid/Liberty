#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f215f0);

#define public_6f21609 _public_6f21609
#define public_6f21620 _public_6f21620
#define public_6f2162c _public_6f2162c
#define public_6f21630 _public_6f21630
#define public_6f21640 _public_6f21640
#define public_6f2164b _public_6f2164b

PROC_DECLARE(0x6f215f0, internal_6f215f0, public_6f215f0);
extern "C" NAKED register_t __cdecl internal_6f215f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x2C]
        test dl, dl
        push ebx
        jne public_6f21609
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6f21609
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6f21609 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x2D]
        test bl, bl
        jne public_6f21630
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        jne public_6f2162c
        lea esp, ss:[esp]
        public_6f21620 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        je public_6f21620
        public_6f2162c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f21630 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6f2164b
        lea esp, ss:[esp]
        public_6f21640 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6f21640
        public_6f2164b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f215f0)
    }
}

#undef public_6f21609
#undef public_6f21620
#undef public_6f2162c
#undef public_6f21630
#undef public_6f21640
#undef public_6f2164b
