#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34ab0);

#define public_6c32870 _public_6c32870
#define public_6c32878 _public_6c32878
#define public_6c32888 _public_6c32888
#define public_6c328a5 _public_6c328a5

PROC_DECLARE(0x6c32840, internal_6c32840, public_6c32840);
extern "C" NAKED register_t __cdecl internal_6c32840()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+8]
        push eax
        mov ecx, esi
        call public_6c34ab0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], eax
        je public_6c32870
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_6c32870
        lea eax, ss:[esp+0x10]
        jmp public_6c32878
        public_6c32870 : nop
        mov dword ptr ss : [esp+8], esi
        lea eax, ss:[esp+8]
        public_6c32878 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0xC]
        jne public_6c32888
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        pop ecx
        ret 0x10
        public_6c32888 : nop
        mov ecx, dword ptr ds : [eax+0x18]
        cmp ecx, dword ptr ds : [eax+0x14]
        jne public_6c328a5
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFF8
        pop esi
        pop ecx
        ret 0x10
        public_6c328a5 : nop
        mov eax, dword ptr ds : [eax+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        lea eax, ds:[eax+ecx*8]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        push ecx
        call dword ptr ds : [edx+0x18]
        pop edi
        pop esi
        pop ecx
        ret 0x10
        UNREACHABLE_TRAP(0x6c32840)
    }
}

#undef public_6c32870
#undef public_6c32878
#undef public_6c32888
#undef public_6c328a5
