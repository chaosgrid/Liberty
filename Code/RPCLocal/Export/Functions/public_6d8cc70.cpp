#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8cceb _public_6d8cceb

PROC_DECLARE(0x6d8cc70, internal_6d8cc70, public_6d8cc70);
extern "C" NAKED register_t __cdecl internal_6d8cc70()
{
    __asm
    {
        sub esp, 0x408
        push ebx
        lea eax, ss:[esp+4]
        push eax
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+8]
        push 1
        push 3
        call public_6d96300
        test eax, eax
        jne public_6d8cceb
        push esi
        mov esi, dword ptr ss : [esp+0x414]
        push edi
        mov edi, dword ptr ds : [public_6db31fc]
        lea ecx, ss:[esp+0x10]
        push esi
        push ecx
        call edi
        lea edx, ds:[esi+0xA0]
        push edx
        lea eax, ss:[esp+0x21C]
        push eax
        call edi
        mov cl, byte ptr ds : [esi+0xC0]
        mov edx, dword ptr ss : [esp+0x1C]
        mov byte ptr ss : [esp+0x420], cl
        lea edi, ds:[edx+0x20]
        mov ecx, 0x100
        lea esi, ss:[esp+0x20]
        rep movsd
        movsw 
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ebx]
        add esp, 0x10
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0x170]
        pop edi
        pop esi
        public_6d8cceb : nop
        pop ebx
        add esp, 0x408
        ret 8
        UNREACHABLE_TRAP(0x6d8cc70)
    }
}

#undef public_6d8cceb
