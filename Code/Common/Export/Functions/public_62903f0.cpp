#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62903f0);

#define public_6290409 _public_6290409
#define public_6290420 _public_6290420
#define public_629042c _public_629042c
#define public_6290430 _public_6290430
#define public_6290440 _public_6290440
#define public_629044b _public_629044b

PROC_DECLARE(0x62903f0, internal_62903f0, public_62903f0);
extern "C" NAKED register_t __cdecl internal_62903f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x54]
        test dl, dl
        push ebx
        jne public_6290409
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_6290409
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_6290409 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x55]
        test bl, bl
        jne public_6290430
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x55]
        test bl, bl
        jne public_629042c
        lea esp, ss:[esp]
        public_6290420 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x55]
        test bl, bl
        je public_6290420
        public_629042c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6290430 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_629044b
        lea esp, ss:[esp]
        public_6290440 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_6290440
        public_629044b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62903f0)
    }
}

#undef public_6290409
#undef public_6290420
#undef public_629042c
#undef public_6290430
#undef public_6290440
#undef public_629044b
