#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34ab0);

#define public_6c3398f _public_6c3398f
#define public_6c33997 _public_6c33997
#define public_6c339a9 _public_6c339a9
#define public_6c339b2 _public_6c339b2

PROC_DECLARE(0x6c33950, internal_6c33950, public_6c33950);
extern "C" NAKED register_t __cdecl internal_6c33950()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+4]
        push eax
        mov ecx, esi
        or ebx, 0xFFFFFFFF
        mov dword ptr ss : [ebp], 0
        call public_6c34ab0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x20], eax
        je public_6c3398f
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_6c3398f
        lea eax, ss:[esp+0x20]
        jmp public_6c33997
        public_6c3398f : nop
        mov dword ptr ss : [esp+0x14], esi
        lea eax, ss:[esp+0x14]
        public_6c33997 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+8]
        je public_6c339b2
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6c339a9
        or dword ptr ss : [ebp], 1
        public_6c339a9 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x10
        public_6c339b2 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6c33950)
    }
}

#undef public_6c3398f
#undef public_6c33997
#undef public_6c339a9
#undef public_6c339b2
