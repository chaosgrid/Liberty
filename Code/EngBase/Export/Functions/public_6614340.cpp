#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6614340);

#define public_6614359 _public_6614359
#define public_661436c _public_661436c
#define public_6614378 _public_6614378
#define public_661437c _public_661437c
#define public_6614385 _public_6614385
#define public_6614390 _public_6614390

PROC_DECLARE(0x6614340, internal_6614340, public_6614340);
extern "C" NAKED register_t __cdecl internal_6614340()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push ebx
        mov dl, byte ptr ds : [eax+0x30]
        test dl, dl
        jne public_6614359
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6614359
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6614359 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x31]
        test bl, bl
        jne public_661437c
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x31]
        test bl, bl
        jne public_6614378
        public_661436c : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x31]
        test bl, bl
        je public_661436c
        public_6614378 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_661437c : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_6614390
        public_6614385 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6614385
        public_6614390 : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6614340)
    }
}

#undef public_6614359
#undef public_661436c
#undef public_6614378
#undef public_661437c
#undef public_6614385
#undef public_6614390
