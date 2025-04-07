#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802b00);
CLANG_FORWARD_PROC_SYMBOL(public_6803f20);
CLANG_FORWARD_PROC_SYMBOL(public_6804fe0);

#define public_6803f9f _public_6803f9f
#define public_6803fa4 _public_6803fa4

PROC_DECLARE(0x6803f20, internal_6803f20, public_6803f20);
extern "C" NAKED register_t __cdecl internal_6803f20()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [edi+0x10]
        lea esi, ds:[edi+0x10]
        mov eax, offset public_680d510
        sub eax, edx
        cmp byte ptr ds : [eax], 0
        je public_6803f9f
        push esi
        call public_6804fe0
        lea ecx, ds:[eax+eax*8]
        mov eax, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [eax+0x64]
        shl ecx, 5
        sub edx, ecx
        mov ecx, dword ptr ds : [edx+0x30]
        add edx, 0x30
        add esp, 4
        cmp ecx, 0xFFFFFFFA
        je public_6803fa4
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], 0xFFFFFFFE
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [eax]
        add edi, 0x10
        mov dword ptr ds : [eax], edi
        mov ecx, edi
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edi
        mov edi, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edi
        mov esi, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ecx+0xC], esi
        mov ecx, dword ptr ds : [eax]
        push 1
        add ecx, 0x10
        push 2
        push edx
        mov dword ptr ds : [eax], ecx
        call public_6802b00
        add esp, 0xC
        pop edi
        pop esi
        ret 
        public_6803f9f : nop
        mov eax, dword ptr ds : [public_680e604]
        public_6803fa4 : nop
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edx+0xC], ecx
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        add ecx, 0x10
        pop edi
        mov dword ptr ds : [eax], ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6803f20)
    }
}

#undef public_6803f9f
#undef public_6803fa4
