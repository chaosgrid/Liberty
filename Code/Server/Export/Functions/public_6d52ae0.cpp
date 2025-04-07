#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5a440);
CLANG_FORWARD_PROC_SYMBOL(public_6d5af80);

#define public_6d52b13 _public_6d52b13
#define public_6d52b1e _public_6d52b1e
#define public_6d52b31 _public_6d52b31

PROC_DECLARE(0x6d52ae0, internal_6d52ae0, public_6d52ae0);
extern "C" NAKED register_t __cdecl internal_6d52ae0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x30]
        push ebx
        mov ecx, esi
        call public_6d5a440
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], eax
        je public_6d52b13
        add eax, 0xC
        push eax
        mov ecx, ebx
        call public_6d5af80
        test eax, eax
        jl public_6d52b13
        lea eax, ss:[esp+0x14]
        jmp public_6d52b1e
        public_6d52b13 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+0xC]
        public_6d52b1e : nop
        mov ecx, dword ptr ds : [edi+0x34]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        pop ebx
        je public_6d52b31
        mov eax, dword ptr ds : [eax+0x1C]
        pop ecx
        ret 4
        public_6d52b31 : nop
        xor eax, eax
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d52ae0)
    }
}

#undef public_6d52b13
#undef public_6d52b1e
#undef public_6d52b31
