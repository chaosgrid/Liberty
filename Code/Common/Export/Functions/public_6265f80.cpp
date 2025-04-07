#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_6265fb3 _public_6265fb3
#define public_6265fbb _public_6265fbb
#define public_6265fd0 _public_6265fd0

PROC_DECLARE(0x6265f80, internal_6265f80, public_6265f80);
extern "C" NAKED register_t __cdecl internal_6265f80()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+0xC]
        push eax
        mov ecx, esi
        xor ebx, ebx
        call public_62fcfb0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xC], eax
        je public_6265fb3
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6265fb3
        lea eax, ss:[esp+0xC]
        jmp public_6265fbb
        public_6265fb3 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_6265fbb : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x10]
        je public_6265fd0
        mov eax, dword ptr ds : [eax+0x10]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        mov edi, edi
        public_6265fd0 : nop
        push ecx
        mov ecx, dword ptr ds : [public_6399028]
        push 0x1E8
/*FIXUP push offset public_6399484 @0x6265fdc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399484
        mov eax, 0x100001
/*FIXUP push offset public_63996fc @0x6265fe6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63996fc
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6265f80)
    }
}

#undef public_6265fb3
#undef public_6265fbb
#undef public_6265fd0
