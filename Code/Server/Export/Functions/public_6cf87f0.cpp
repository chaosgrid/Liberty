#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00630);

#define public_6cf885d _public_6cf885d
#define public_6cf885f _public_6cf885f

PROC_DECLARE(0x6cf87f0, internal_6cf87f0, public_6cf87f0);
extern "C" NAKED register_t __cdecl internal_6cf87f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        sub esp, 0x10
        test ecx, ecx
        push esi
        mov eax, 0xFFFFFFFC
        je public_6cf885f
        lea eax, ss:[esp+0x18]
        push eax
        lea edx, ss:[esp+8]
        push edx
        push ecx
        mov esi, 0xFFFFFFFE
        call public_6d00630
        add esp, 0xC
        test al, al
        je public_6cf885d
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        je public_6cf885d
        mov cl, byte ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x24]
        mov al, byte ptr ss : [esp+0x20]
        mov byte ptr ss : [esp+0xC], cl
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+0x10], edx
        lea edx, ss:[esp+8]
        mov dword ptr ss : [esp+8], 3
        mov byte ptr ss : [esp+0xD], al
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x194]
        xor eax, eax
        pop esi
        add esp, 0x10
        ret 
        public_6cf885d : nop
        mov eax, esi
        public_6cf885f : nop
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6cf87f0)
    }
}

#undef public_6cf885d
#undef public_6cf885f
