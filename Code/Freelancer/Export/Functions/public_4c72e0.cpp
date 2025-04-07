#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c72e0);

#define public_4c72f0 _public_4c72f0
#define public_4c72fe _public_4c72fe
#define public_4c730b _public_4c730b
#define public_4c7311 _public_4c7311
#define public_4c7320 _public_4c7320
#define public_4c7327 _public_4c7327

PROC_DECLARE(0x4c72e0, internal_4c72e0, public_4c72e0);
extern "C" NAKED register_t __cdecl internal_4c72e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_673510]
        xor ecx, ecx
        test eax, eax
        je public_4c7327
        mov edx, dword ptr ss : [esp+4]
        nop 
        public_4c72f0 : nop
        cmp eax, edx
        je public_4c72fe
        mov ecx, eax
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_4c72f0
        ret 
        public_4c72fe : nop
        test ecx, ecx
        push esi
        mov esi, dword ptr ds : [eax+4]
        je public_4c730b
        mov dword ptr ds : [ecx+4], esi
        jmp public_4c7311
        public_4c730b : nop
        mov dword ptr ds : [public_673510], esi
        public_4c7311 : nop
        cmp eax, dword ptr ds : [public_673514]
        pop esi
        jne public_4c7320
        mov dword ptr ds : [public_673514], ecx
        public_4c7320 : nop
        mov dword ptr ds : [edx+4], 0
        public_4c7327 : nop
        ret 
        UNREACHABLE_TRAP(0x4c72e0)
    }
}

#undef public_4c72f0
#undef public_4c72fe
#undef public_4c730b
#undef public_4c7311
#undef public_4c7320
#undef public_4c7327
