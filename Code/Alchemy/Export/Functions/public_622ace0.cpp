#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222ee0);
CLANG_FORWARD_PROC_SYMBOL(public_622ace0);

#define public_622ad2d _public_622ad2d
#define public_622ad7a _public_622ad7a

PROC_DECLARE(0x622ace0, internal_622ace0, public_622ace0);
extern "C" NAKED register_t __cdecl internal_622ace0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x30]
        mov ecx, dword ptr ds : [esi]
        push esi
        mov byte ptr ss : [esp+0x13], al
        call dword ptr ds : [ecx+0x38]
        mov ebp, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0xF]
        push 1
        push edx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x28], al
        call public_6222ee0
        lea eax, ss:[esp+0x20]
        push 1
        push eax
        mov ecx, ebp
        call public_6222ee0
        mov al, byte ptr ss : [esp+0x20]
        xor bl, bl
        test al, al
        mov byte ptr ss : [esp+0x1C], bl
        jbe public_622ad7a
        push edi
        public_622ad2d : nop
        mov edi, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x14]
        and edi, 0xFF
        push edx
        push edi
        push esi
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x18]
        push ecx
        push edi
        push esi
        call dword ptr ds : [eax+0x24]
        lea edx, ss:[esp+0x14]
        push 4
        push edx
        mov ecx, ebp
        call public_6222ee0
        lea eax, ss:[esp+0x18]
        push 4
        push eax
        mov ecx, ebp
        call public_6222ee0
        mov al, byte ptr ss : [esp+0x24]
        inc bl
        cmp bl, al
        mov byte ptr ss : [esp+0x20], bl
        jb public_622ad2d
        pop edi
        public_622ad7a : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x622ace0)
    }
}

#undef public_622ad2d
#undef public_622ad7a
