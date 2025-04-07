#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6801cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6803c40);
CLANG_FORWARD_PROC_SYMBOL(public_6805590);
CLANG_FORWARD_PROC_SYMBOL(public_68055c0);
CLANG_FORWARD_PROC_SYMBOL(public_6805e70);
CLANG_FORWARD_PROC_SYMBOL(public_6805f40);
CLANG_FORWARD_PROC_SYMBOL(public_6809be0);
CLANG_FORWARD_PROC_SYMBOL(public_6809c70);
CLANG_FORWARD_PROC_SYMBOL(public_680bdaa);

#define public_680a282 _public_680a282
#define public_680a291 _public_680a291
#define public_680a2a2 _public_680a2a2
#define public_680a2ba _public_680a2ba

PROC_DECLARE(0x680a240, internal_680a240, public_680a240);
extern "C" NAKED register_t __cdecl internal_680a240()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        push 1
        call public_6809c70
        push 3
        mov edi, eax
        call public_6801cf0
        mov ebx, eax
        push edi
        mov dword ptr ss : [esp+0x1C], ebx
        call public_6809be0
        add esp, 0xC
        call public_680bdaa
        test ebx, ebx
        mov esi, eax
        push 2
        je public_680a282
        call public_6805e70
        add esp, 4
        call public_680bdaa
        mov ebp, eax
        jmp public_680a291
        public_680a282 : nop
        call public_6805f40
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        lea ebp, ds:[esi+1]
        public_680a291 : nop
        lea ebx, ds:[esi+1]
        push ebx
        push edi
        call public_6803c40
        add esp, 8
        cmp esi, ebp
        jl public_680a2ba
        public_680a2a2 : nop
        push esi
        push edi
        call public_68055c0
        push eax
        push ebx
        push edi
        call public_6805590
        add esp, 0x14
        dec esi
        dec ebx
        cmp esi, ebp
        jge public_680a2a2
        public_680a2ba : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_6801bd0
        push eax
        push ebp
        push edi
        call public_6805590
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x680a240)
    }
}

#undef public_680a282
#undef public_680a291
#undef public_680a2a2
#undef public_680a2ba
