#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405850);

#define public_405866 _public_405866
#define public_405871 _public_405871
#define public_405875 _public_405875
#define public_405880 _public_405880
#define public_40588c _public_40588c
#define public_405895 _public_405895

PROC_DECLARE(0x405850, internal_405850, public_405850);
extern "C" NAKED register_t __cdecl internal_405850()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x21]
        test bl, bl
        jne public_405875
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_405871
        public_405866 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_405866
        public_405871 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_405875 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_40588c
        nop 
        public_405880 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_405880
        public_40588c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_405895
        mov dword ptr ds : [ecx], eax
        public_405895 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x405850)
    }
}

#undef public_405866
#undef public_405871
#undef public_405875
#undef public_405880
#undef public_40588c
#undef public_405895
