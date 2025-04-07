#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_62660bb _public_62660bb
#define public_62660c3 _public_62660c3
#define public_62660d6 _public_62660d6

PROC_DECLARE(0x6266080, internal_6266080, public_6266080);
extern "C" NAKED register_t __cdecl internal_6266080()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x18]
        lea esi, ds:[edi+0x20]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], eax
        xor ebx, ebx
        call public_62fcfb0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xC], eax
        je public_62660bb
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_62660bb
        lea eax, ss:[esp+0xC]
        jmp public_62660c3
        public_62660bb : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_62660c3 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x24]
        je public_62660d6
        mov eax, dword ptr ds : [eax+0x10]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        public_62660d6 : nop
        mov edx, dword ptr ds : [public_6399028]
        push ecx
        push 0x1FC
/*FIXUP push offset public_6399484 @0x62660e2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399484
        mov eax, 0x100001
/*FIXUP push offset public_6399784 @0x62660ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399784
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6266080)
    }
}

#undef public_62660bb
#undef public_62660c3
#undef public_62660d6
