#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417620);
CLANG_FORWARD_PROC_SYMBOL(public_5a1f50);

#define public_5a1f91 _public_5a1f91
#define public_5a1fb9 _public_5a1fb9
#define public_5a1fd4 _public_5a1fd4
#define public_5a1fd6 _public_5a1fd6

PROC_DECLARE(0x5a1f50, internal_5a1f50, public_5a1f50);
extern "C" NAKED register_t __cdecl internal_5a1f50()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x8A4]
        or eax, 0xFFFFFFFF
        cmp esi, 0x100
        jge public_5a1fd6
        lea eax, ds:[esi+1]
        cmp esi, eax
        mov dword ptr ds : [edi+0x8A4], eax
        jge public_5a1fb9
        cmp esi, 0x100
        jge public_5a1fb9
        mov eax, dword ptr ds : [edi+esi*4+0x48C]
        test eax, eax
        jne public_5a1f91
        call public_417620
        mov dword ptr ds : [edi+esi*4+0x48C], eax
        public_5a1f91 : nop
        mov ecx, dword ptr ds : [edi+esi*4+0x48C]
        test ecx, ecx
        je public_5a1fb9
        mov edx, dword ptr ds : [edi+0x84]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [edi+esi*4+0x48C]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x14]
        public_5a1fb9 : nop
        cmp esi, dword ptr ds : [edi+0x8A4]
        jge public_5a1fd4
        cmp esi, 0x100
        jge public_5a1fd4
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+esi*4+0x8C], eax
        public_5a1fd4 : nop
        mov eax, esi
        public_5a1fd6 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x5a1f50)
    }
}

#undef public_5a1f91
#undef public_5a1fb9
#undef public_5a1fd4
#undef public_5a1fd6
