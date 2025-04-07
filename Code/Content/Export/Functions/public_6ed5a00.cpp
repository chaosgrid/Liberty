#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f24070);

#define public_6ed5a3d _public_6ed5a3d
#define public_6ed5a40 _public_6ed5a40

PROC_DECLARE(0x6ed5a00, internal_6ed5a00, public_6ed5a00);
extern "C" NAKED register_t __cdecl internal_6ed5a00()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x10], ecx
        lea ecx, ds:[esi-0x160]
        mov dword ptr ss : [esp+8], edi
        mov dword ptr ss : [esp+0xC], eax
        call public_6eea860
        mov edx, dword ptr ds : [eax+0x48]
        xor eax, eax
        cmp edi, eax
        mov dword ptr ss : [esp+0x14], edx
        jne public_6ed5a3d
        mov byte ptr ds : [esi+4], 1
        jmp public_6ed5a40
        public_6ed5a3d : nop
        mov byte ptr ds : [esi+4], al
        public_6ed5a40 : nop
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0x20]
        push 0x1001
        push ecx
        call public_6f24070
        add esp, 0xC
        pop edi
        pop esi
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6ed5a00)
    }
}

#undef public_6ed5a3d
#undef public_6ed5a40
