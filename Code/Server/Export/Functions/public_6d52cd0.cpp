#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5a770);
CLANG_FORWARD_PROC_SYMBOL(public_6d5af30);

#define public_6d52d03 _public_6d52d03
#define public_6d52d0e _public_6d52d0e
#define public_6d52d21 _public_6d52d21

PROC_DECLARE(0x6d52cd0, internal_6d52cd0, public_6d52cd0);
extern "C" NAKED register_t __cdecl internal_6d52cd0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x44]
        push ebx
        mov ecx, esi
        call public_6d5a770
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], eax
        je public_6d52d03
        add eax, 0xC
        push eax
        mov ecx, ebx
        call public_6d5af30
        test eax, eax
        jl public_6d52d03
        lea eax, ss:[esp+0x14]
        jmp public_6d52d0e
        public_6d52d03 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+0xC]
        public_6d52d0e : nop
        mov ecx, dword ptr ds : [edi+0x48]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        pop ebx
        je public_6d52d21
        mov eax, dword ptr ds : [eax+0x1C]
        pop ecx
        ret 4
        public_6d52d21 : nop
        xor eax, eax
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d52cd0)
    }
}

#undef public_6d52d03
#undef public_6d52d0e
#undef public_6d52d21
