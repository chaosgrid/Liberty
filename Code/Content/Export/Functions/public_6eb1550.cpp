#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb1550);

#define public_6eb1570 _public_6eb1570
#define public_6eb157e _public_6eb157e
#define public_6eb1582 _public_6eb1582
#define public_6eb1590 _public_6eb1590
#define public_6eb159c _public_6eb159c
#define public_6eb15a5 _public_6eb15a5

PROC_DECLARE(0x6eb1550, internal_6eb1550, public_6eb1550);
extern "C" NAKED register_t __cdecl internal_6eb1550()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0xA5]
        test bl, bl
        jne public_6eb1582
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0xA5]
        test bl, bl
        jne public_6eb157e
        lea esp, ss:[esp]
        public_6eb1570 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0xA5]
        test bl, bl
        je public_6eb1570
        public_6eb157e : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6eb1582 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6eb159c
        lea esp, ss:[esp]
        public_6eb1590 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6eb1590
        public_6eb159c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6eb15a5
        mov dword ptr ds : [ecx], eax
        public_6eb15a5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6eb1550)
    }
}

#undef public_6eb1570
#undef public_6eb157e
#undef public_6eb1582
#undef public_6eb1590
#undef public_6eb159c
#undef public_6eb15a5
