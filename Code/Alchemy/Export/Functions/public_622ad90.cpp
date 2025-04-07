#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222ee0);
CLANG_FORWARD_PROC_SYMBOL(public_622ad90);

#define public_622addd _public_622addd
#define public_622ae2a _public_622ae2a

PROC_DECLARE(0x622ad90, internal_622ad90, public_622ad90);
extern "C" NAKED register_t __cdecl internal_622ad90()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x34]
        mov ecx, dword ptr ds : [esi]
        push esi
        mov byte ptr ss : [esp+0x13], al
        call dword ptr ds : [ecx+0x3C]
        mov ebp, dword ptr ss : [esp+0x24]
        lea edx, ss:[esp+0xF]
        push 1
        push edx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x30], al
        call public_6222ee0
        lea eax, ss:[esp+0x28]
        push 1
        push eax
        mov ecx, ebp
        call public_6222ee0
        mov al, byte ptr ss : [esp+0x28]
        xor bl, bl
        test al, al
        mov byte ptr ss : [esp+0x24], bl
        jbe public_622ae2a
        push edi
        public_622addd : nop
        mov edi, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x14]
        and edi, 0xFF
        push edx
        push edi
        push esi
        call dword ptr ds : [ecx+0x24]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x18]
        push ecx
        push edi
        push esi
        call dword ptr ds : [eax+0x28]
        lea edx, ss:[esp+0x14]
        push 4
        push edx
        mov ecx, ebp
        call public_6222ee0
        lea eax, ss:[esp+0x18]
        push 0xC
        push eax
        mov ecx, ebp
        call public_6222ee0
        mov al, byte ptr ss : [esp+0x2C]
        inc bl
        cmp bl, al
        mov byte ptr ss : [esp+0x28], bl
        jb public_622addd
        pop edi
        public_622ae2a : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x622ad90)
    }
}

#undef public_622addd
#undef public_622ae2a
