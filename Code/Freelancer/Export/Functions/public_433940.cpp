#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_433940);

#define public_433959 _public_433959
#define public_433970 _public_433970
#define public_43397c _public_43397c
#define public_433980 _public_433980
#define public_433990 _public_433990
#define public_43399b _public_43399b

PROC_DECLARE(0x433940, internal_433940, public_433940);
extern "C" NAKED register_t __cdecl internal_433940()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x60]
        test dl, dl
        push ebx
        jne public_433959
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_433959
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_433959 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x61]
        test bl, bl
        jne public_433980
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x61]
        test bl, bl
        jne public_43397c
        lea esp, ss:[esp]
        public_433970 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x61]
        test bl, bl
        je public_433970
        public_43397c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_433980 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_43399b
        lea esp, ss:[esp]
        public_433990 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_433990
        public_43399b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x433940)
    }
}

#undef public_433959
#undef public_433970
#undef public_43397c
#undef public_433980
#undef public_433990
#undef public_43399b
