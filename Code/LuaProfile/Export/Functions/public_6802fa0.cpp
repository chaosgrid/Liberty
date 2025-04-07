#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802870);
CLANG_FORWARD_PROC_SYMBOL(public_6802b00);
CLANG_FORWARD_PROC_SYMBOL(public_6802fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6804fe0);

#define public_6803005 _public_6803005
#define public_6803019 _public_6803019

PROC_DECLARE(0x6802fa0, internal_6802fa0, public_6802fa0);
extern "C" NAKED register_t __cdecl internal_6802fa0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push esi
        call public_6804fe0
        lea eax, ds:[eax+eax*8]
        shl eax, 5
        mov ecx, eax
        mov eax, dword ptr ds : [public_680e604]
        mov edi, dword ptr ds : [eax+0x64]
        sub edi, ecx
        mov ecx, dword ptr ds : [edi+0x100]
        add edi, 0x100
        add esp, 4
        cmp ecx, 0xFFFFFFFA
        je public_6803019
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
        mov edx, dword ptr ds : [eax]
        cmp edx, dword ptr ds : [eax+8]
        jb public_6803005
        push 1
        call public_6802870
        mov eax, dword ptr ds : [public_680e604]
        add esp, 4
        public_6803005 : nop
        mov ecx, dword ptr ds : [eax]
        push 0
        add ecx, 0x10
        push 1
        push edi
        mov dword ptr ds : [eax], ecx
        call public_6802b00
        add esp, 0xC
        public_6803019 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6802fa0)
    }
}

#undef public_6803005
#undef public_6803019
