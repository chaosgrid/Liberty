#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635de90);

#define public_635debe _public_635debe
#define public_635ded0 _public_635ded0
#define public_635ded8 _public_635ded8

PROC_DECLARE(0x635de90, internal_635de90, public_635de90);
extern "C" NAKED register_t __cdecl internal_635de90()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+0x98]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [edx+0x78]
        shl eax, 0x18
        cmp eax, 0x8000000
        jl public_635ded0
        push esi
        lea esi, ds:[edi+0x1C]
        lea eax, ds:[ecx+0x64]
        mov edx, 0x15
        public_635debe : nop
        mov dword ptr ds : [eax], esi
        sub eax, 4
        dec edx
        jne public_635debe
        mov edx, dword ptr ds : [edi]
        pop esi
        mov dword ptr ds : [ecx+0x10], edx
        pop edi
        ret 4
        public_635ded0 : nop
        lea eax, ds:[ecx+0x64]
        mov edx, 0x14
        public_635ded8 : nop
        mov dword ptr ds : [eax], 0
        sub eax, 4
        dec edx
        jne public_635ded8
        lea eax, ds:[edi+0x1C]
        mov dword ptr ds : [ecx+0x14], eax
        mov edx, dword ptr ds : [edi]
        mov dword ptr ds : [ecx+0x10], edx
        pop edi
        ret 4
        UNREACHABLE_TRAP(0x635de90)
    }
}

#undef public_635debe
#undef public_635ded0
#undef public_635ded8
