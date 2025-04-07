#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6340400);

#define public_6340420 _public_6340420
#define public_634042e _public_634042e
#define public_6340432 _public_6340432
#define public_6340440 _public_6340440
#define public_634044c _public_634044c
#define public_6340455 _public_6340455

PROC_DECLARE(0x6340400, internal_6340400, public_6340400);
extern "C" NAKED register_t __cdecl internal_6340400()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x81]
        test bl, bl
        jne public_6340432
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x81]
        test bl, bl
        jne public_634042e
        lea esp, ss:[esp]
        public_6340420 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x81]
        test bl, bl
        je public_6340420
        public_634042e : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6340432 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_634044c
        lea esp, ss:[esp]
        public_6340440 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6340440
        public_634044c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6340455
        mov dword ptr ds : [ecx], eax
        public_6340455 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6340400)
    }
}

#undef public_6340420
#undef public_634042e
#undef public_6340432
#undef public_6340440
#undef public_634044c
#undef public_6340455
