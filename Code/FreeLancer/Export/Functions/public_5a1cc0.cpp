#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4177b0);
CLANG_FORWARD_PROC_SYMBOL(public_5a1cc0);

#define public_5a1ce3 _public_5a1ce3
#define public_5a1d0e _public_5a1d0e
#define public_5a1d27 _public_5a1d27

PROC_DECLARE(0x5a1cc0, internal_5a1cc0, public_5a1cc0);
extern "C" NAKED register_t __cdecl internal_5a1cc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_4177b0
        mov ecx, dword ptr ds : [esi+0x98]
        add esp, 4
        cmp ecx, eax
        je public_5a1d27
        push edi
        mov dword ptr ds : [esi+0x98], eax
        xor edi, edi
        public_5a1ce3 : nop
        mov ecx, dword ptr ds : [esi+0x8C]
        test ecx, ecx
        je public_5a1d0e
        mov eax, dword ptr ds : [esi+0x90]
        sub eax, ecx
        sar eax, 3
        cmp edi, eax
        jae public_5a1d0e
        mov ecx, dword ptr ds : [ecx+edi*8]
        mov eax, dword ptr ds : [esi+0x98]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        inc edi
        jmp public_5a1ce3
        public_5a1d0e : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0xA4], 0
        pop edi
        mov dword ptr ds : [esi+0xB0], ecx
        pop esi
        ret 8
        public_5a1d27 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0xB0], edx
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x5a1cc0)
    }
}

#undef public_5a1ce3
#undef public_5a1d0e
#undef public_5a1d27
