#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34ab0);

#define public_6c336a4 _public_6c336a4
#define public_6c336ac _public_6c336ac
#define public_6c336c8 _public_6c336c8

PROC_DECLARE(0x6c33670, internal_6c33670, public_6c33670);
extern "C" NAKED register_t __cdecl internal_6c33670()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+4]
        push eax
        mov ecx, esi
        or ebx, 0xFFFFFFFF
        call public_6c34ab0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6c336a4
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_6c336a4
        lea eax, ss:[esp+0x14]
        jmp public_6c336ac
        public_6c336a4 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6c336ac : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+8]
        je public_6c336c8
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, dword ptr ds : [eax+0x14]
        jg public_6c336c8
        pop edi
        pop esi
        mov dword ptr ds : [eax+0x18], ecx
        xor eax, eax
        pop ebx
        pop ecx
        ret 0xC
        public_6c336c8 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6c33670)
    }
}

#undef public_6c336a4
#undef public_6c336ac
#undef public_6c336c8
