#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c260);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c990);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e240);

#define public_6f4c9f5 _public_6f4c9f5
#define public_6f4ca09 _public_6f4ca09

PROC_DECLARE(0x6f4c990, internal_6f4c990, public_6f4c990);
extern "C" NAKED register_t __cdecl internal_6f4c990()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push esi
        call public_6f4e240
        lea eax, ds:[eax+eax*8]
        shl eax, 5
        mov ecx, eax
        mov eax, dword ptr ds : [public_6f61e28]
        mov edi, dword ptr ds : [eax+0x64]
        sub edi, ecx
        mov ecx, dword ptr ds : [edi+0x100]
        add edi, 0x100
        add esp, 4
        cmp ecx, 0xFFFFFFFA
        je public_6f4ca09
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edx+0xC], ecx
        mov eax, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [eax]
        cmp edx, dword ptr ds : [eax+8]
        jb public_6f4c9f5
        push 1
        call public_6f4c260
        mov eax, dword ptr ds : [public_6f61e28]
        add esp, 4
        public_6f4c9f5 : nop
        mov ecx, dword ptr ds : [eax]
        push 0
        add ecx, 0x10
        push 1
        push edi
        mov dword ptr ds : [eax], ecx
        call public_6f4c4f0
        add esp, 0xC
        public_6f4ca09 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4c990)
    }
}

#undef public_6f4c9f5
#undef public_6f4ca09
