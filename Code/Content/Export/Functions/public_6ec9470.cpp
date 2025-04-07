#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f67740);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fa0);

#define public_6ec94dd _public_6ec94dd
#define public_6ec950f _public_6ec950f
#define public_6ec9518 _public_6ec9518

PROC_DECLARE(0x6ec9470, internal_6ec9470, public_6ec9470);
extern "C" NAKED register_t __cdecl internal_6ec9470()
{
    __asm
    {
        sub esp, 0x5C
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        push edi
        lea eax, ds:[esi+0xC]
        push eax
        mov bl, 1
        call public_6f15b90
        test eax, 0x3FFFFFFF
        mov dword ptr ss : [esp+0x10], eax
        je public_6ec9518
        lea ecx, ss:[esp+0x44]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [public_6fb3664]
        mov eax, dword ptr ds : [esi+4]
        add eax, 0xC
        push eax
        call public_6f49b00
        add esp, 0x10
        test eax, eax
        je public_6ec950f
        mov ecx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ecx+8]
        call public_6f478c0
        mov edi, eax
        test edi, edi
        je public_6ec950f
        mov eax, dword ptr ds : [public_6fcf014]
        test eax, eax
        jne public_6ec94dd
        call public_6fa8fa0
        mov dword ptr ds : [public_6fcf014], eax
        public_6ec94dd : nop
        mov edx, dword ptr ds : [eax]
        add esi, 0x40
        push esi
        lea ecx, ss:[esp+0x24]
        push ecx
        push eax
        call dword ptr ds : [edx+0x54]
        mov edx, dword ptr ds : [edi+0x48]
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x10], edx
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call public_6f67740
        add esp, 0x10
        public_6ec950f : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 0x5C
        ret 
        public_6ec9518 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x5C
        ret 
        UNREACHABLE_TRAP(0x6ec9470)
    }
}

#undef public_6ec94dd
#undef public_6ec950f
#undef public_6ec9518
