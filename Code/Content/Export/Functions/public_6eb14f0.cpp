#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb14f0);

#define public_6eb1509 _public_6eb1509
#define public_6eb1520 _public_6eb1520
#define public_6eb152c _public_6eb152c
#define public_6eb1530 _public_6eb1530
#define public_6eb1540 _public_6eb1540
#define public_6eb154b _public_6eb154b

PROC_DECLARE(0x6eb14f0, internal_6eb14f0, public_6eb14f0);
extern "C" NAKED register_t __cdecl internal_6eb14f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x34]
        test dl, dl
        push ebx
        jne public_6eb1509
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6eb1509
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6eb1509 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x35]
        test bl, bl
        jne public_6eb1530
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        jne public_6eb152c
        lea esp, ss:[esp]
        public_6eb1520 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        je public_6eb1520
        public_6eb152c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6eb1530 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6eb154b
        lea esp, ss:[esp]
        public_6eb1540 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6eb1540
        public_6eb154b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6eb14f0)
    }
}

#undef public_6eb1509
#undef public_6eb1520
#undef public_6eb152c
#undef public_6eb1530
#undef public_6eb1540
#undef public_6eb154b
