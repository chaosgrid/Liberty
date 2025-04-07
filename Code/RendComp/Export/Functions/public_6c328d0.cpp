#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2f7d0);
CLANG_FORWARD_PROC_SYMBOL(public_6c31ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ab0);

#define public_6c32902 _public_6c32902
#define public_6c3290a _public_6c3290a
#define public_6c3291b _public_6c3291b
#define public_6c32931 _public_6c32931
#define public_6c3294f _public_6c3294f
#define public_6c3295c _public_6c3295c
#define public_6c32960 _public_6c32960
#define public_6c32978 _public_6c32978

PROC_DECLARE(0x6c328d0, internal_6c328d0, public_6c328d0);
extern "C" NAKED register_t __cdecl internal_6c328d0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x20]
        lea esi, ds:[edi+8]
        push eax
        mov ecx, esi
        call public_6c34ab0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x18], eax
        je public_6c32902
        mov ecx, dword ptr ss : [esp+0x20]
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_6c32902
        lea eax, ss:[esp+0x18]
        jmp public_6c3290a
        public_6c32902 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_6c3290a : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0xC]
        jne public_6c3291b
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 0xC
        public_6c3291b : nop
        lea edi, ds:[eax+0x10]
        mov ecx, edi
        call public_6c2f7d0
        mov ebp, eax
        xor esi, esi
        test ebp, ebp
        jle public_6c3294f
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6c32931 : nop
        push esi
        mov ecx, edi
        call public_6c31ff0
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ebx
        push ecx
        call dword ptr ds : [edx+0x1C]
        test eax, eax
        je public_6c3295c
        inc esi
        cmp esi, ebp
        jl public_6c32931
        public_6c3294f : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        pop ecx
        ret 0xC
        public_6c3295c : nop
        dec esi
        js public_6c32978
        nop 
        public_6c32960 : nop
        push esi
        mov ecx, edi
        call public_6c31ff0
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ebx
        push ecx
        call dword ptr ds : [edx+0x20]
        dec esi
        jns public_6c32960
        public_6c32978 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6c328d0)
    }
}

#undef public_6c32902
#undef public_6c3290a
#undef public_6c3291b
#undef public_6c32931
#undef public_6c3294f
#undef public_6c3295c
#undef public_6c32960
#undef public_6c32978
