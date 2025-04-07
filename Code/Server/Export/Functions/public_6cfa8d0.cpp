#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce6870);
CLANG_FORWARD_PROC_SYMBOL(public_6d00630);
CLANG_FORWARD_PROC_SYMBOL(public_6d00670);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c970);
CLANG_FORWARD_PROC_SYMBOL(public_6d0d370);
CLANG_FORWARD_PROC_SYMBOL(public_6d60190);

#define public_6cfa992 _public_6cfa992
#define public_6cfa9c4 _public_6cfa9c4
#define public_6cfa9c9 _public_6cfa9c9
#define public_6cfa9df _public_6cfa9df
#define public_6cfa9e1 _public_6cfa9e1

PROC_DECLARE(0x6cfa8d0, internal_6cfa8d0, public_6cfa8d0);
extern "C" NAKED register_t __cdecl internal_6cfa8d0()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [ecx]
        test ecx, 0x3FFFFFFF
        push ebp
        push esi
        push edi
        mov eax, 0xFFFFFFFC
        je public_6cfa9e1
        mov esi, dword ptr ss : [esp+0x18]
        test dword ptr ds : [esi], 0x3FFFFFFF
        je public_6cfa9e1
        push ecx
        mov ebp, 0xFFFFFFFE
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cfa9df
        push 0
/*FIXUP push offset public_6d88890 @0x6cfa913*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d88890
/*FIXUP push offset public_6d88538 @0x6cfa918*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d88538
        push 0
        push eax
        call public_6d60190
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x2C]
        mov edi, eax
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x2C], 0
        call public_6d00630
        mov edx, dword ptr ss : [esp+0x2C]
        push 0
/*FIXUP push offset public_6d88590 @0x6cfa94f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d88590
/*FIXUP push offset public_6d88538 @0x6cfa954*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d88538
        push 0
        push edx
        call public_6d60190
        mov esi, eax
        add esp, 0x34
        test esi, esi
        je public_6cfa9df
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x154]
        mov ecx, eax
        and ecx, 0xC40
        cmp eax, ecx
        jne public_6cfa992
        mov ecx, dword ptr ss : [esp+0x18]
        push esi
        push edi
        call public_6d0c970
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ecx
        ret 
        public_6cfa992 : nop
        mov ecx, esi
        call public_6ce6870
        mov ecx, dword ptr ds : [eax+0x88]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ecx+0x88]
        shl edx, 4
        mov ecx, dword ptr ds : [ecx+edx+0xC]
        cmp ecx, 3
        je public_6cfa9c4
        cmp ecx, 4
        je public_6cfa9c4
        cmp ecx, 5
        mov byte ptr ss : [esp+0x14], 1
        jne public_6cfa9c9
        public_6cfa9c4 : nop
        mov byte ptr ss : [esp+0x14], 0
        public_6cfa9c9 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x14]
        push edx
        add eax, 0x164
        push eax
        push esi
        push edi
        call public_6d0d370
        public_6cfa9df : nop
        mov eax, ebp
        public_6cfa9e1 : nop
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6cfa8d0)
    }
}

#undef public_6cfa992
#undef public_6cfa9c4
#undef public_6cfa9c9
#undef public_6cfa9df
#undef public_6cfa9e1
