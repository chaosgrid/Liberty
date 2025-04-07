#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34ab0);

#define public_6c332e0 _public_6c332e0
#define public_6c332e8 _public_6c332e8
#define public_6c332f7 _public_6c332f7
#define public_6c33308 _public_6c33308

PROC_DECLARE(0x6c332b0, internal_6c332b0, public_6c332b0);
extern "C" NAKED register_t __cdecl internal_6c332b0()
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
        je public_6c332e0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_6c332e0
        lea eax, ss:[esp+0x10]
        jmp public_6c332e8
        public_6c332e0 : nop
        mov dword ptr ss : [esp+8], esi
        lea eax, ss:[esp+8]
        public_6c332e8 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+8]
        jne public_6c332f7
        xor eax, eax
        pop edi
        pop esi
        pop ecx
        ret 0x20
        public_6c332f7 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+0x14]
        jl public_6c33308
        xor eax, eax
        pop edi
        pop esi
        pop ecx
        ret 0x20
        public_6c33308 : nop
        mov edi, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [eax+0x10]
        sub esp, 0x10
        mov esi, esp
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [esi+4], edi
        mov edi, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [esi+8], edi
        mov edi, dword ptr ss : [esp+0x3C]
        lea eax, ds:[edx+ecx*8]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+0xC], edi
        mov esi, dword ptr ss : [esp+0x2C]
        push esi
        push 0x3F800000
        push eax
        push ecx
        call dword ptr ds : [edx+0x30]
        pop edi
        movzx eax, al
        pop esi
        pop ecx
        ret 0x20
        UNREACHABLE_TRAP(0x6c332b0)
    }
}

#undef public_6c332e0
#undef public_6c332e8
#undef public_6c332f7
#undef public_6c33308
