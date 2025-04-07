#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66142f0);

#define public_6614306 _public_6614306
#define public_6614311 _public_6614311
#define public_6614315 _public_6614315
#define public_661431f _public_661431f
#define public_661432b _public_661432b
#define public_6614334 _public_6614334

PROC_DECLARE(0x66142f0, internal_66142f0, public_66142f0);
extern "C" NAKED register_t __cdecl internal_66142f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push ebx
        mov edx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [edx+0x11]
        test bl, bl
        jne public_6614315
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_6614311
        public_6614306 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_6614306
        public_6614311 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6614315 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_661432b
        public_661431f : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_661431f
        public_661432b : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6614334
        mov dword ptr ds : [ecx], eax
        public_6614334 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x66142f0)
    }
}

#undef public_6614306
#undef public_6614311
#undef public_6614315
#undef public_661431f
#undef public_661432b
#undef public_6614334
