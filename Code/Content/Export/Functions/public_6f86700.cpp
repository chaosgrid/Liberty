#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f86700);
CLANG_FORWARD_PROC_SYMBOL(public_6f93080);
CLANG_FORWARD_PROC_SYMBOL(public_6f935f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f86723 _public_6f86723
#define public_6f86777 _public_6f86777

PROC_DECLARE(0x6f86700, internal_6f86700, public_6f86700);
extern "C" NAKED register_t __cdecl internal_6f86700()
{
    __asm
    {
        sub esp, 0x10
        push ebp
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6fbc7c8
        mov ebp, dword ptr ds : [esi+0x58]
        push edi
        mov edi, dword ptr ds : [esi+0x54]
        cmp edi, ebp
        mov dword ptr ss : [esp+0xC], esi
        je public_6f86777
        lea esi, ds:[edi+0xEC]
        push ebx
        public_6f86723 : nop
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6f93080
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        mov ebx, eax
        call public_6f1df30
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [eax]
        push edx
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        call public_6fa8370
        mov edx, dword ptr ds : [esi+4]
        push edx
        mov ecx, esi
        call public_6f935f0
        xor eax, eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        add edi, 0x108
        add esi, 0x108
        cmp edi, ebp
        jne public_6f86723
        mov esi, dword ptr ss : [esp+0x10]
        pop ebx
        public_6f86777 : nop
        mov eax, dword ptr ds : [esi+0x54]
        push eax
        call public_6fa8fe0
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [esi+0x54], eax
        mov dword ptr ds : [esi+0x58], eax
        mov dword ptr ds : [esi+0x5C], eax
        pop esi
        pop ebp
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f86700)
    }
}

#undef public_6f86723
#undef public_6f86777
