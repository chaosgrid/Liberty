#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb1400);

#define public_6eb141c _public_6eb141c
#define public_6eb1435 _public_6eb1435
#define public_6eb1444 _public_6eb1444
#define public_6eb1448 _public_6eb1448
#define public_6eb1451 _public_6eb1451
#define public_6eb145c _public_6eb145c

PROC_DECLARE(0x6eb1400, internal_6eb1400, public_6eb1400);
extern "C" NAKED register_t __cdecl internal_6eb1400()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0xA4]
        test dl, dl
        push ebx
        jne public_6eb141c
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6eb141c
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6eb141c : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0xA5]
        test bl, bl
        jne public_6eb1448
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0xA5]
        test bl, bl
        jne public_6eb1444
        public_6eb1435 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0xA5]
        test bl, bl
        je public_6eb1435
        public_6eb1444 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6eb1448 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6eb145c
        public_6eb1451 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6eb1451
        public_6eb145c : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6eb1400)
    }
}

#undef public_6eb141c
#undef public_6eb1435
#undef public_6eb1444
#undef public_6eb1448
#undef public_6eb1451
#undef public_6eb145c
