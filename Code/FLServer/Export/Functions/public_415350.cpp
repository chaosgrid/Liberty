#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415350);

#define public_415369 _public_415369
#define public_415380 _public_415380
#define public_41538c _public_41538c
#define public_415390 _public_415390
#define public_4153a0 _public_4153a0
#define public_4153ab _public_4153ab

PROC_DECLARE(0x415350, internal_415350, public_415350);
extern "C" NAKED register_t __cdecl internal_415350()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x20]
        test dl, dl
        push ebx
        jne public_415369
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_415369
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_415369 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x21]
        test bl, bl
        jne public_415390
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_41538c
        lea esp, ss:[esp]
        public_415380 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_415380
        public_41538c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_415390 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_4153ab
        lea esp, ss:[esp]
        public_4153a0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_4153a0
        public_4153ab : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x415350)
    }
}

#undef public_415369
#undef public_415380
#undef public_41538c
#undef public_415390
#undef public_4153a0
#undef public_4153ab
