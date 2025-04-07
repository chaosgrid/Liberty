#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa0350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4160);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa0370 _public_6fa0370
#define public_6fa0388 _public_6fa0388
#define public_6fa03b6 _public_6fa03b6

PROC_DECLARE(0x6fa0350, internal_6fa0350, public_6fa0350);
extern "C" NAKED register_t __cdecl internal_6fa0350()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6fa03b6
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_6fa0370 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x14
        lea ebp, ds:[esi+8]
        call public_6fa912a
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6fa0388
        mov ebx, eax
        public_6fa0388 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push ebp
        push eax
        call public_6fa4160
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [eax+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x20]
        jne public_6fa0370
        pop edi
        pop ebp
        pop ebx
        public_6fa03b6 : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6fa0350)
    }
}

#undef public_6fa0370
#undef public_6fa0388
#undef public_6fa03b6
