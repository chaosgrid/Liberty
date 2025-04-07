#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1caa0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f1cab0 _public_6f1cab0
#define public_6f1cabd _public_6f1cabd
#define public_6f1cad1 _public_6f1cad1
#define public_6f1cae0 _public_6f1cae0
#define public_6f1cb04 _public_6f1cb04
#define public_6f1cb1c _public_6f1cb1c
#define public_6f1cb30 _public_6f1cb30

PROC_DECLARE(0x6f1caa0, internal_6f1caa0, public_6f1caa0);
extern "C" NAKED register_t __cdecl internal_6f1caa0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push ebp
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f1cad1
        nop 
        public_6f1cab0 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6f1cabd
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6f1cabd : nop
        mov edx, dword ptr ds : [ebx]
        push esi
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, dword ptr ds : [ebx+8]
        jne public_6f1cab0
        public_6f1cad1 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_6f1cb30
        push edi
        nop 
        public_6f1cae0 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        mov esi, dword ptr ds : [ebx+8]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        mov dword ptr ss : [esp+0x14], eax
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f1cb04
        mov edi, eax
        public_6f1cb04 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f1cb1c
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        public_6f1cb1c : nop
        mov edx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ss : [esp+0x18]
        inc edx
        mov dword ptr ds : [ebx+0xC], edx
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [eax+8]
        jne public_6f1cae0
        pop edi
        public_6f1cb30 : nop
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f1caa0)
    }
}

#undef public_6f1cab0
#undef public_6f1cabd
#undef public_6f1cad1
#undef public_6f1cae0
#undef public_6f1cb04
#undef public_6f1cb1c
#undef public_6f1cb30
