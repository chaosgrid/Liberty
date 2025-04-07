#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34ab0);

#define public_6c338c3 _public_6c338c3
#define public_6c338cb _public_6c338cb
#define public_6c338e7 _public_6c338e7
#define public_6c338f3 _public_6c338f3

PROC_DECLARE(0x6c33890, internal_6c33890, public_6c33890);
extern "C" NAKED register_t __cdecl internal_6c33890()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+4]
        push eax
        mov ecx, esi
        or ebx, 0xFFFFFFFF
        call public_6c34ab0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], eax
        je public_6c338c3
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_6c338c3
        lea eax, ss:[esp+0x10]
        jmp public_6c338cb
        public_6c338c3 : nop
        mov dword ptr ss : [esp+0x14], esi
        lea eax, ss:[esp+0x14]
        public_6c338cb : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+8]
        je public_6c338f3
        mov dl, byte ptr ss : [esp+0x1C]
        mov cl, 1
        test cl, dl
        je public_6c338e7
        pop edi
        pop esi
        mov byte ptr ds : [eax+0x1C], cl
        xor eax, eax
        pop ebx
        ret 0x10
        public_6c338e7 : nop
        pop edi
        pop esi
        mov byte ptr ds : [eax+0x1C], 0
        xor eax, eax
        pop ebx
        ret 0x10
        public_6c338f3 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6c33890)
    }
}

#undef public_6c338c3
#undef public_6c338cb
#undef public_6c338e7
#undef public_6c338f3
