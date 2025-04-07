#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41af40);
CLANG_FORWARD_PROC_SYMBOL(public_41b030);
CLANG_FORWARD_PROC_SYMBOL(public_5850f0);
CLANG_FORWARD_PROC_SYMBOL(public_585890);
CLANG_FORWARD_PROC_SYMBOL(public_585a90);

#define public_585af0 _public_585af0
#define public_585aff _public_585aff

PROC_DECLARE(0x585a90, internal_585a90, public_585a90);
extern "C" NAKED register_t __cdecl internal_585a90()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push esi
        push edi
        push 0
        mov esi, ecx
        call public_5850f0
        mov eax, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [eax]
        push eax
        mov dword ptr ds : [esi+0x32C], eax
        call dword ptr ds : [public_5c61fc]
        mov edi, eax
        mov eax, dword ptr ds : [edi+4]
        push 4
        lea ecx, ss:[esp+0x14]
        add eax, 0x20
        push ecx
        push eax
        call public_41af40
        mov edx, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [edi+0xC]
        add esp, 0x10
        push edx
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        push 0
        push ecx
        mov ecx, esi
        call public_585890
        test ebx, ebx
        jle public_585aff
        lea esi, ss:[esp+0xC]
        nop 
        lea esp, ss:[esp]
        public_585af0 : nop
        push esi
        call public_41b030
        add esp, 4
        add esi, 4
        dec ebx
        jne public_585af0
        public_585aff : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x585a90)
    }
}

#undef public_585af0
#undef public_585aff
