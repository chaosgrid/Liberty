#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c32040);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ab0);

#define public_6c33400 _public_6c33400
#define public_6c33408 _public_6c33408
#define public_6c33417 _public_6c33417
#define public_6c3342e _public_6c3342e

PROC_DECLARE(0x6c333d0, internal_6c333d0, public_6c333d0);
extern "C" NAKED register_t __cdecl internal_6c333d0()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+4]
        push eax
        mov ecx, esi
        call public_6c34ab0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], eax
        je public_6c33400
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_6c33400
        lea eax, ss:[esp+0x10]
        jmp public_6c33408
        public_6c33400 : nop
        mov dword ptr ss : [esp+8], esi
        lea eax, ss:[esp+8]
        public_6c33408 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+8]
        jne public_6c33417
        pop edi
        xor eax, eax
        pop esi
        pop ecx
        ret 0x10
        public_6c33417 : nop
        mov esi, dword ptr ss : [esp+0x18]
        push esi
        lea ecx, ds:[eax+0x10]
        call public_6c32040
        test eax, eax
        jne public_6c3342e
        pop edi
        pop esi
        pop ecx
        ret 0x10
        public_6c3342e : nop
        mov ecx, dword ptr ds : [eax+4]
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        push edi
        push esi
        push eax
        push ecx
        call dword ptr ds : [edx+0x38]
        pop edi
        movzx eax, al
        pop esi
        pop ecx
        ret 0x10
        UNREACHABLE_TRAP(0x6c333d0)
    }
}

#undef public_6c33400
#undef public_6c33408
#undef public_6c33417
#undef public_6c3342e
