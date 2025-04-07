#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f19cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1cc40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f1cc86 _public_6f1cc86
#define public_6f1cc9c _public_6f1cc9c
#define public_6f1cc9f _public_6f1cc9f

PROC_DECLARE(0x6f1cc40, internal_6f1cc40, public_6f1cc40);
extern "C" NAKED register_t __cdecl internal_6f1cc40()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ss : [esp+8]
        push ebx
        push ebp
        lea eax, ss:[esp+8]
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        push ecx
        push edx
        mov dword ptr ss : [esp+0x14], 0
        call public_6f19cd0
        mov ebp, dword ptr ss : [esp+0x14]
        add esp, 0xC
        test ebp, ebp
        je public_6f1cc9f
        push esi
        mov esi, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f1cc86
        mov edi, eax
        public_6f1cc86 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        pop edi
        pop esi
        je public_6f1cc9c
        mov dword ptr ds : [eax], ebp
        public_6f1cc9c : nop
        inc dword ptr ds : [ebx+0xC]
        public_6f1cc9f : nop
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f1cc40)
    }
}

#undef public_6f1cc86
#undef public_6f1cc9c
#undef public_6f1cc9f
