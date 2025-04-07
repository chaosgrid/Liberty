#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802b00);
CLANG_FORWARD_PROC_SYMBOL(public_6802e00);
CLANG_FORWARD_PROC_SYMBOL(public_6803de0);
CLANG_FORWARD_PROC_SYMBOL(public_6804fe0);
CLANG_FORWARD_PROC_SYMBOL(public_68053a0);

#define public_6803e2f _public_6803e2f
#define public_6803e9d _public_6803e9d

PROC_DECLARE(0x6803de0, internal_6803de0, public_6803de0);
extern "C" NAKED register_t __cdecl internal_6803de0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [edi], 0xFFFFFFFD
        mov ebx, eax
        je public_6803e9d
        push edi
        call public_6804fe0
        lea eax, ds:[eax+eax*8]
        shl eax, 5
        mov ecx, eax
        mov eax, dword ptr ds : [public_680e604]
        mov esi, dword ptr ds : [eax+0x64]
        sub esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        add esi, 0x10
        add esp, 4
        cmp ecx, 0xFFFFFFFA
        jne public_6803e2f
/*FIXUP push offset public_680d524 @0x6803e1d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d524
        call public_6802e00
        mov eax, dword ptr ds : [public_680e604]
        add esp, 4
        public_6803e2f : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ebx]
        sub ecx, 0x10
        mov eax, dword ptr ds : [ecx]
        add edx, 0x10
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [edx+0xC], ecx
        mov eax, dword ptr ds : [ebx]
        lea edx, ds:[edi+0x10]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi]
        sub eax, 0x10
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [ebx]
        push 0
        add eax, 0x20
        push 3
        push esi
        mov dword ptr ds : [ebx], eax
        call public_6802b00
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        ret 
        public_6803e9d : nop
        mov edx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edx+0x14]
        mov esi, dword ptr ds : [eax+0x64]
        lea ecx, ds:[ecx+ecx*8]
        shl ecx, 5
        sub esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        add esi, 0x10
        cmp ecx, 0xFFFFFFFA
        jne public_6803e2f
        mov eax, dword ptr ds : [ebx]
        sub eax, 0x10
        push eax
        add edi, 0x10
        push edi
        push edx
        call public_68053a0
        mov eax, dword ptr ds : [ebx]
        add esp, 0xC
        pop edi
        add eax, 0xFFFFFFF0
        pop esi
        mov dword ptr ds : [ebx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6803de0)
    }
}

#undef public_6803e2f
#undef public_6803e9d
