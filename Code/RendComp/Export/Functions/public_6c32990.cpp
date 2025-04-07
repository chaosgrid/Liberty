#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2f7d0);
CLANG_FORWARD_PROC_SYMBOL(public_6c31ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ab0);

#define public_6c329e8 _public_6c329e8
#define public_6c329f0 _public_6c329f0
#define public_6c32a10 _public_6c32a10
#define public_6c32a2a _public_6c32a2a

PROC_DECLARE(0x6c32990, internal_6c32990, public_6c32990);
extern "C" NAKED register_t __cdecl internal_6c32990()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_6c37d4c]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        push ebp
        push eax
        call dword ptr ds : [ecx+0x64]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1C], eax
        je public_6c32a2a
        mov ecx, dword ptr ds : [public_6c37d4c]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x3C]
        mov edi, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x1C]
        lea esi, ds:[edi+8]
        push eax
        mov ecx, esi
        call public_6c34ab0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x18], eax
        je public_6c329e8
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_6c329e8
        lea eax, ss:[esp+0x18]
        jmp public_6c329f0
        public_6c329e8 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_6c329f0 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0xC]
        je public_6c32a2a
        lea edi, ds:[eax+0x10]
        mov ecx, edi
        call public_6c2f7d0
        mov ebx, eax
        xor esi, esi
        test ebx, ebx
        jle public_6c32a2a
        lea esp, ss:[esp]
        public_6c32a10 : nop
        push esi
        mov ecx, edi
        call public_6c31ff0
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ebp
        push ecx
        call dword ptr ds : [edx+0x20]
        inc esi
        cmp esi, ebx
        jl public_6c32a10
        public_6c32a2a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6c32990)
    }
}

#undef public_6c329e8
#undef public_6c329f0
#undef public_6c32a10
#undef public_6c32a2a
