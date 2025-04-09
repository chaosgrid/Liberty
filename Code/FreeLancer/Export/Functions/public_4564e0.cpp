#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_454bb0);
CLANG_FORWARD_PROC_SYMBOL(public_4564e0);
CLANG_FORWARD_PROC_SYMBOL(public_5760f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4564f0 _public_4564f0
#define public_456507 _public_456507
#define public_45652e _public_45652e

PROC_DECLARE(0x4564e0, internal_4564e0, public_4564e0);
extern "C" NAKED register_t __cdecl internal_4564e0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_45652e
        push edi
        mov edi, edi
        public_4564f0 : nop
        mov edi, dword ptr ds : [esi+8]
        test edi, edi
        je public_456507
        mov ecx, edi
        call public_454bb0
        push edi
        call public_5b7e1d
        add esp, 4
        public_456507 : nop
        mov edi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], edi
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+0xC]
        add esp, 4
        dec ecx
        mov dword ptr ds : [ebx+0xC], ecx
        cmp edi, dword ptr ds : [ebx+8]
        mov esi, edi
        jne public_4564f0
        pop edi
        public_45652e : nop
        push 0xF
        mov ecx, ebx
        call public_5760f0
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4564e0)
    }
}

#undef public_4564f0
#undef public_456507
#undef public_45652e
