#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c540);
CLANG_FORWARD_PROC_SYMBOL(public_4c9e20);

#define public_4c9ec0 _public_4c9ec0
#define public_4c9ee9 _public_4c9ee9

PROC_DECLARE(0x4c9e20, internal_4c9e20, public_4c9e20);
extern "C" NAKED register_t __cdecl internal_4c9e20()
{
    __asm
    {
        sub esp, 0x18
        mov edx, dword ptr ds : [public_5c6dd8]
        push ebx
        push esi
        push edi
        push 0
        mov esi, ecx
        push 0
        lea ecx, ds:[esi+0x10C]
        push ecx
        mov ecx, dword ptr ds : [edx]
        push 0
        push 0
        lea eax, ds:[esi+4]
        push ecx
        push eax
        mov dword ptr ss : [esp+0x2C], eax
        call public_41c540
        lea edx, ss:[esp+0x28]
        push edx
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x48]
        lea edi, ds:[esi+0xCC]
        push edi
        push eax
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        call dword ptr ds : [public_5c64ac]
        add esp, 0x28
        test al, al
        je public_4c9ec0
        lea eax, ds:[esi+0x88]
        push ebp
        mov ebp, dword ptr ds : [public_5c6d14]
        push eax
        mov dword ptr ss : [esp+0x1C], eax
        call ebp
        mov dword ptr ss : [esp+0x20], eax
        mov eax, edi
        push eax
        mov dword ptr ss : [esp+0x28], eax
        call ebp
        mov ecx, dword ptr ds : [public_5c6d5c]
        add esp, 8
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x18]
        test eax, eax
        pop ebp
        je public_4c9ee9
        public_4c9ec0 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edi
        add esi, 0x88
        push esi
        push edx
        push 0x4E
/*FIXUP push offset public_5d7188 @0x4c9ecf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7188
        mov eax, 0x100002
/*FIXUP push offset public_5d7130 @0x4c9ed9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7130
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x1C
        public_4c9ee9 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x4c9e20)
    }
}

#undef public_4c9ec0
#undef public_4c9ee9
