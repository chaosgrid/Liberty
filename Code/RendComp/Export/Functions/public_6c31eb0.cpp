#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2f7d0);
CLANG_FORWARD_PROC_SYMBOL(public_6c31eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6c31f30);
CLANG_FORWARD_PROC_SYMBOL(public_6c31ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6c32000);
CLANG_FORWARD_PROC_SYMBOL(public_6c32020);

#define public_6c31ed6 _public_6c31ed6
#define public_6c31f0c _public_6c31f0c
#define public_6c31f19 _public_6c31f19

PROC_DECLARE(0x6c31eb0, internal_6c31eb0, public_6c31eb0);
extern "C" NAKED register_t __cdecl internal_6c31eb0()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        push edi
        mov edi, ecx
        mov ecx, ebp
        call public_6c2f7d0
        push eax
        mov ecx, edi
        call public_6c31f30
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jle public_6c31f19
        push esi
        xor esi, esi
        test eax, eax
        jle public_6c31f0c
        push ebx
        public_6c31ed6 : nop
        push esi
        mov ecx, ebp
        call public_6c31ff0
        mov ebx, eax
        mov eax, dword ptr ds : [ebx]
        push eax
        push esi
        mov ecx, edi
        call public_6c32020
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        push esi
        mov ecx, edi
        call public_6c32000
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ds : [edx+esi*4]
        mov dword ptr ds : [eax+esi*4], ecx
        mov eax, dword ptr ds : [edi+4]
        inc esi
        cmp esi, eax
        jl public_6c31ed6
        pop ebx
        public_6c31f0c : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [edx+esi*4]
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [eax+esi*4], ecx
        pop esi
        public_6c31f19 : nop
        mov dl, byte ptr ss : [ebp+0xC]
        mov byte ptr ds : [edi+0xC], dl
        mov eax, edi
        pop edi
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6c31eb0)
    }
}

#undef public_6c31ed6
#undef public_6c31f0c
#undef public_6c31f19
