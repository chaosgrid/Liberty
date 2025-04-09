#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413710);
CLANG_FORWARD_PROC_SYMBOL(public_46d6d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_413783 _public_413783
#define public_41378d _public_41378d
#define public_413796 _public_413796

PROC_DECLARE(0x413710, internal_413710, public_413710);
extern "C" NAKED register_t __cdecl internal_413710()
{
    __asm
    {
        sub esp, 0x10
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edi]
        xor eax, eax
        test ecx, ecx
        je public_413796
        push esi
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_616524
        call public_46d6d0
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+0x10]
        test eax, eax
        lea esi, ds:[edx+0x10]
        jne public_41378d
        push 0x164
        call public_5b7e84
        add esp, 4
        test eax, eax
        je public_413783
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax+0x15C], ecx
        mov dword ptr ds : [eax+0x160], 1
        mov dword ptr ds : [esi], eax
        pop esi
        pop edi
        add esp, 0x10
        ret 
        public_413783 : nop
        xor eax, eax
        mov dword ptr ds : [esi], eax
        pop esi
        pop edi
        add esp, 0x10
        ret 
        public_41378d : nop
        inc dword ptr ds : [eax+0x160]
        mov eax, dword ptr ds : [esi]
        pop esi
        public_413796 : nop
        pop edi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x413710)
    }
}

#undef public_413783
#undef public_41378d
#undef public_413796
