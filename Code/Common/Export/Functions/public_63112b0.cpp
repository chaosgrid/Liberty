#include "Common-PCH.h"


#define public_63112f0 _public_63112f0
#define public_6311300 _public_6311300

PROC_DECLARE(0x63112b0, internal_63112b0, public_63112b0);
extern "C" NAKED register_t __cdecl internal_63112b0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        push ebx
        push esi
        lea esi, ds:[ecx+8]
        mov ecx, dword ptr ds : [esi]
        lea edx, ds:[eax+8]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ds : [esi+0xC]
        push edi
        mov dword ptr ds : [edx+0xC], ecx
        mov edi, dword ptr ds : [esi+0x30]
        xor ebx, ebx
        test edi, edi
        mov dword ptr ds : [edx+0x30], edi
        jle public_6311300
        lea edi, ds:[edx+0x10]
        sub esi, edx
        lea esp, ss:[esp]
        public_63112f0 : nop
        mov ecx, dword ptr ds : [esi+edi]
        mov dword ptr ds : [edi], ecx
        mov ecx, dword ptr ds : [edx+0x30]
        inc ebx
        add edi, 4
        cmp ebx, ecx
        jl public_63112f0
        public_6311300 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x63112b0)
    }
}

#undef public_63112f0
#undef public_6311300
