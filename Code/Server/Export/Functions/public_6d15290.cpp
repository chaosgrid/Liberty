#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15290);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d80);
CLANG_FORWARD_PROC_SYMBOL(public_6d16c60);
CLANG_FORWARD_PROC_SYMBOL(public_6d58e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c810);

#define public_6d152e9 _public_6d152e9
#define public_6d15314 _public_6d15314
#define public_6d1533b _public_6d1533b
#define public_6d15343 _public_6d15343
#define public_6d15360 _public_6d15360

PROC_DECLARE(0x6d15290, internal_6d15290, public_6d15290);
extern "C" NAKED register_t __cdecl internal_6d15290()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+0x10]
        lea esi, ds:[edi+0x6C]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], eax
        call public_6d15d10
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [edi+0x70]
        je public_6d15314
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_6d152e9
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+8]
        mov dword ptr ss : [esp+8], ecx
        push edx
        lea ecx, ds:[eax+0x28]
        call public_6d16c60
        mov eax, dword ptr ss : [esp+8]
        push 0
        push eax
        mov ecx, offset public_6d8db08
        call public_6d15d80
        public_6d152e9 : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, esi
        call public_6d5c810
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, eax
        mov edx, dword ptr ss : [esp+0x14]
        je public_6d1533b
        cmp edx, dword ptr ds : [ecx+0xC]
        jb public_6d1533b
        lea eax, ss:[esp+8]
        jmp public_6d15343
        public_6d15314 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [public_6d64a44]
        push ecx
        push 0x809
/*FIXUP push offset public_6d6840c @0x6d15324*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov eax, 0x100001
/*FIXUP push offset public_6d68550 @0x6d1532e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68550
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_6d152e9
        public_6d1533b : nop
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+0xC]
        public_6d15343 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x70]
        je public_6d15360
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_6d58e50
        pop edi
        pop esi
        add esp, 8
        ret 4
        nop 
        public_6d15360 : nop
        mov ecx, dword ptr ds : [public_6d64a44]
        push edx
        push 0x822
/*FIXUP push offset public_6d6840c @0x6d1536c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov eax, 0x100001
/*FIXUP push offset public_6d68550 @0x6d15376*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68550
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d15290)
    }
}

#undef public_6d152e9
#undef public_6d15314
#undef public_6d1533b
#undef public_6d15343
#undef public_6d15360
