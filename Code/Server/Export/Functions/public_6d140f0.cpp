#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d140f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d59ea0);

#define public_6d14123 _public_6d14123
#define public_6d1412b _public_6d1412b
#define public_6d14140 _public_6d14140

PROC_DECLARE(0x6d140f0, internal_6d140f0, public_6d140f0);
extern "C" NAKED register_t __cdecl internal_6d140f0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+8]
        push eax
        mov ecx, esi
        xor ebx, ebx
        call public_6d59ea0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xC], eax
        je public_6d14123
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6d14123
        lea eax, ss:[esp+0xC]
        jmp public_6d1412b
        public_6d14123 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_6d1412b : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0xC]
        je public_6d14140
        mov eax, dword ptr ds : [eax+0x10]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        mov edi, edi
        public_6d14140 : nop
        push ecx
        mov ecx, dword ptr ds : [public_6d64a44]
        push 0x659
/*FIXUP push offset public_6d6840c @0x6d1414c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov eax, 0x100001
/*FIXUP push offset public_6d68458 @0x6d14156*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68458
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d140f0)
    }
}

#undef public_6d14123
#undef public_6d1412b
#undef public_6d14140
