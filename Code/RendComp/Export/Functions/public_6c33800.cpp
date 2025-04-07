#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34ab0);

#define public_6c33843 _public_6c33843
#define public_6c3384b _public_6c3384b
#define public_6c3387b _public_6c3387b

PROC_DECLARE(0x6c33800, internal_6c33800, public_6c33800);
extern "C" NAKED register_t __cdecl internal_6c33800()
{
    __asm
    {
        push ecx
        fld dword ptr ss : [esp+0x14]
        push ebx
        fcomp dword ptr ss : [esp+0x1C]
        or ebx, 0xFFFFFFFF
        fnstsw ax
        test ah, 0x41
        jp public_6c3387b
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+4]
        push eax
        mov ecx, esi
        call public_6c34ab0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6c33843
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_6c33843
        lea eax, ss:[esp+0x14]
        jmp public_6c3384b
        public_6c33843 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6c3384b : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        je public_6c3387b
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [eax+0x14]
        jge public_6c3387b
        mov edx, dword ptr ds : [eax+0x20]
        fld dword ptr ss : [esp+0x18]
        fstp dword ptr ds : [edx+ecx*4]
        mov eax, dword ptr ds : [eax+0x20]
        fld dword ptr ss : [esp+0x1C]
        pop ebx
        fstp dword ptr ds : [eax+ecx*4+4]
        xor eax, eax
        pop ecx
        ret 0x14
        public_6c3387b : nop
        mov eax, ebx
        pop ebx
        pop ecx
        ret 0x14
        UNREACHABLE_TRAP(0x6c33800)
    }
}

#undef public_6c33843
#undef public_6c3384b
#undef public_6c3387b
