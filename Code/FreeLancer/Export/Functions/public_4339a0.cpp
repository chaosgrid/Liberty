#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4339a0);

#define public_4339b9 _public_4339b9
#define public_4339d0 _public_4339d0
#define public_4339dc _public_4339dc
#define public_4339e0 _public_4339e0
#define public_4339f0 _public_4339f0
#define public_4339fb _public_4339fb

PROC_DECLARE(0x4339a0, internal_4339a0, public_4339a0);
extern "C" NAKED register_t __cdecl internal_4339a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x24]
        test dl, dl
        push ebx
        jne public_4339b9
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_4339b9
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_4339b9 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x25]
        test bl, bl
        jne public_4339e0
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_4339dc
        lea esp, ss:[esp]
        public_4339d0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_4339d0
        public_4339dc : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_4339e0 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_4339fb
        lea esp, ss:[esp]
        public_4339f0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_4339f0
        public_4339fb : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4339a0)
    }
}

#undef public_4339b9
#undef public_4339d0
#undef public_4339dc
#undef public_4339e0
#undef public_4339f0
#undef public_4339fb
