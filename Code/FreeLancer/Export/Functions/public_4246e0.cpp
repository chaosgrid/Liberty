#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4246e0);

#define public_424702 _public_424702
#define public_42470e _public_42470e
#define public_42471b _public_42471b
#define public_424758 _public_424758
#define public_424760 _public_424760

PROC_DECLARE(0x4246e0, internal_4246e0, public_4246e0);
extern "C" NAKED register_t __cdecl internal_4246e0()
{
    __asm
    {
        sub esp, 0x14
        push ebp
        push esi
        push edi
        push 0
        call dword ptr ds : [public_5c6f68]
        mov ecx, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ds : [ecx+8]
        test ebp, ebp
        mov dword ptr ss : [esp+0xC], eax
        jne public_424702
        mov ebp, 0x280
        public_424702 : nop
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_42470e
        mov eax, 0x1E0
        public_42470e : nop
        mov dl, byte ptr ds : [ecx+0x25]
        test dl, dl
        je public_42471b
        xor esi, esi
        xor edi, edi
        jmp public_424760
        public_42471b : nop
        push 0
        mov dword ptr ss : [esp+0x20], eax
        push 0x2CA0000
        lea eax, ss:[esp+0x18]
        mov esi, 0x80000000
        push eax
        mov edi, esi
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], ebp
        call dword ptr ds : [public_5c72a0]
        test eax, eax
        je public_424758
        mov ebp, dword ptr ss : [esp+0x18]
        sub ebp, dword ptr ss : [esp+0x10]
        public_424758 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        sub eax, dword ptr ss : [esp+0x14]
        public_424760 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x2C]
        push 0
        push ecx
        push 0
        push 0
        push eax
        mov eax, dword ptr ss : [esp+0x38]
        push ebp
        push esi
        push edi
        push 0x2CA0000
        push edx
        push eax
        push 0
        call dword ptr ds : [public_5c72a4]
        pop edi
        pop esi
        mov dword ptr ds : [public_6679f4], eax
        pop ebp
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x4246e0)
    }
}

#undef public_424702
#undef public_42470e
#undef public_42471b
#undef public_424758
#undef public_424760
