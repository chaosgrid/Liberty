#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2d4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2d5a0);

#define public_6c319c9 _public_6c319c9
#define public_6c319d7 _public_6c319d7

PROC_DECLARE(0x6c31950, internal_6c31950, public_6c31950);
extern "C" NAKED register_t __cdecl internal_6c31950()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x18]
        or eax, 0xFFFFFFFF
        test ecx, ecx
        push edi
        je public_6c319c9
        mov edi, dword ptr ds : [ecx+0x28]
        test edi, edi
        je public_6c319c9
        mov ecx, edi
        call public_6c2d4a0
        test eax, eax
        jl public_6c319d7
        mov eax, dword ptr ds : [esi+0x18]
        add eax, 0xC
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ds : [ecx]
        mov edx, eax
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ds : [esi+0x1C]
        movzx ecx, word ptr ds : [edx+8]
        mov edx, dword ptr ds : [eax+8]
        add edx, ecx
        mov dword ptr ds : [eax+8], edx
        mov eax, edx
        pop ebx
        push eax
        mov ecx, edi
        call public_6c2d5a0
        test eax, eax
        jl public_6c319c9
        mov edx, dword ptr ds : [esi+0x18]
        mov edi, dword ptr ds : [edx+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], edi
        mov edx, dword ptr ds : [edx+0x1C]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+0x1C]
        movzx edx, word ptr ds : [edx+0xC]
        add dword ptr ds : [ecx+4], edx
        public_6c319c9 : nop
        xor ecx, ecx
        test eax, eax
        setge cl
        pop edi
        mov al, cl
        pop esi
        ret 8
        public_6c319d7 : nop
        pop edi
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6c31950)
    }
}

#undef public_6c319c9
#undef public_6c319d7
