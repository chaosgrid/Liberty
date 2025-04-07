#include "RendComp-PCH.h"


#define public_6c227d0 _public_6c227d0
#define public_6c227dd _public_6c227dd
#define public_6c227f4 _public_6c227f4

PROC_DECLARE(0x6c227a0, internal_6c227a0, public_6c227a0);
extern "C" NAKED register_t __cdecl internal_6c227a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        mov dword ptr ds : [esi+0x1E8], eax
        je public_6c227f4
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        lea edx, ds:[eax+ecx*4]
        mov ecx, dword ptr ds : [esi+0x14]
        lea eax, ds:[edx+4]
        cmp eax, ecx
        je public_6c227dd
        sub edx, eax
        push edi
        lea esp, ss:[esp]
        public_6c227d0 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], edi
        add eax, 4
        cmp eax, ecx
        jne public_6c227d0
        pop edi
        public_6c227dd : nop
        mov eax, dword ptr ds : [esi+0x14]
        add eax, 0xFFFFFFFC
        mov dword ptr ds : [esi+0x14], eax
        mov edx, eax
        mov dword ptr ds : [esi+0x1E8], edx
        xor eax, eax
        pop esi
        ret 8
        public_6c227f4 : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6c227a0)
    }
}

#undef public_6c227d0
#undef public_6c227dd
#undef public_6c227f4
