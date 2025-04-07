#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66252f0);

#define public_6625306 _public_6625306
#define public_6625311 _public_6625311
#define public_6625315 _public_6625315
#define public_662531f _public_662531f
#define public_662532b _public_662532b
#define public_6625334 _public_6625334

PROC_DECLARE(0x66252f0, internal_66252f0, public_66252f0);
extern "C" NAKED register_t __cdecl internal_66252f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push ebx
        mov edx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_6625315
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6625311
        public_6625306 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6625306
        public_6625311 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6625315 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_662532b
        public_662531f : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_662531f
        public_662532b : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6625334
        mov dword ptr ds : [ecx], eax
        public_6625334 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x66252f0)
    }
}

#undef public_6625306
#undef public_6625311
#undef public_6625315
#undef public_662531f
#undef public_662532b
#undef public_6625334
