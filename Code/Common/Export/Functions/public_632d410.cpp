#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632d410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_632d427 _public_632d427
#define public_632d450 _public_632d450
#define public_632d462 _public_632d462

PROC_DECLARE(0x632d410, internal_632d410, public_632d410);
extern "C" NAKED register_t __cdecl internal_632d410()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        lea eax, ds:[ebp*4]
        test eax, eax
        push edi
        mov esi, ecx
        jge public_632d427
        xor eax, eax
        public_632d427 : nop
        push eax
        call public_6391d9c
        mov ecx, dword ptr ds : [esi+0x10]
        mov edi, eax
        mov eax, ebp
        shr eax, 2
        lea ebx, ds:[edi+eax*4]
        mov eax, dword ptr ds : [esi+0x20]
        add eax, 4
        add esp, 4
        cmp ecx, eax
        mov edx, ebx
        je public_632d462
        lea esp, ss:[esp]
        public_632d450 : nop
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], ebp
        add ecx, 4
        add edx, 4
        cmp ecx, eax
        jne public_632d450
        mov ebp, dword ptr ss : [esp+0x14]
        public_632d462 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        push ecx
        call public_6391d5a
        add esp, 4
        mov dword ptr ds : [esi+0x24], edi
        pop edi
        mov dword ptr ds : [esi+0x28], ebp
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x632d410)
    }
}

#undef public_632d427
#undef public_632d450
#undef public_632d462
