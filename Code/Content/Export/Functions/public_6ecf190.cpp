#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecf190);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb010);
CLANG_FORWARD_PROC_SYMBOL(public_6f478b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f481e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f72930);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);

#define public_6ecf1cd _public_6ecf1cd
#define public_6ecf211 _public_6ecf211
#define public_6ecf2e0 _public_6ecf2e0
#define public_6ecf306 _public_6ecf306

PROC_DECLARE(0x6ecf190, internal_6ecf190, public_6ecf190);
extern "C" NAKED register_t __cdecl internal_6ecf190()
{
    __asm
    {
        sub esp, 0x44
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+8]
        push edi
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ecf306
        mov ecx, eax
        call public_6f481e0
        test eax, 0x3FFFFFFF
        je public_6ecf1cd
        push eax
        call dword ptr ds : [public_6fb34e8]
        add esp, 4
        cmp eax, 7
        je public_6ecf306
        public_6ecf1cd : nop
        test dword ptr ds : [esi+4], 0x3FFFFFFF
        mov eax, dword ptr ss : [esp+0x54]
        jne public_6ecf211
        push 1
        push eax
        lea ecx, ss:[esp+0x14]
/*FIXUP push offset public_6fb6068 @0x6ecf1e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6068
        push ecx
        call dword ptr ds : [public_6fb3360]
        lea edx, ss:[esp+0x1C]
        push edx
        call dword ptr ds : [public_6fb3684]
        push eax
        mov dword ptr ds : [esi+0x18], eax
        mov eax, dword ptr ds : [edi]
        push eax
        call dword ptr ds : [public_6fb3400]
        add esp, 0x1C
        pop edi
        pop esi
        pop ebp
        add esp, 0x44
        ret 4
        public_6ecf211 : nop
        mov edx, dword ptr ds : [esi+0x14]
        lea ecx, ss:[esp+0xC]
        push ecx
        push edx
/*FIXUP push offset public_6fb6064 @0x6ecf21a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        push eax
        mov dword ptr ss : [esp+0x1C], 0
        mov byte ptr ss : [esp+0x20], 0
        call public_6eeb010
        add esp, 0x10
        test eax, eax
        jne public_6ecf306
        lea ecx, ss:[esp+0x10]
        push ecx
        call dword ptr ds : [public_6fb3684]
        push edi
        mov dword ptr ds : [esi+0x18], eax
        call public_6f49b00
        lea edx, ds:[esi+0xC]
        push edx
        mov edi, eax
        call public_6f75f30
        mov ebp, eax
        add esp, 0xC
        test ebp, ebp
        je public_6ecf306
        test edi, edi
        je public_6ecf306
        mov ecx, edi
        call public_6f481e0
        test eax, 0x3FFFFFFF
        je public_6ecf306
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x54]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x5C], 0
        call dword ptr ds : [public_6fb362c]
        mov eax, dword ptr ss : [esp+0x5C]
        add esp, 8
        test eax, 0x3FFFFFFF
        je public_6ecf2e0
        mov ecx, edi
        call public_6f478b0
        cmp dword ptr ss : [esp+0x54], eax
        jne public_6ecf2e0
        mov edx, dword ptr ds : [esi+0x18]
        push 0x3F000000
        push 0
        push 0
        push 0
        push edx
        mov ecx, edi
        call public_6f481e0
        push eax
        mov eax, dword ptr ds : [esi+4]
        push eax
        mov ecx, ebp
        call public_6f72930
        pop edi
        pop esi
        pop ebp
        add esp, 0x44
        ret 4
        public_6ecf2e0 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [esi+0x14]
        push 0x3F000000
        push ecx
        mov ecx, dword ptr ds : [esi+0x18]
        push edx
        push eax
        push ecx
        mov ecx, edi
        call public_6f481e0
        push eax
        push 0
        mov ecx, ebp
        call public_6f72930
        public_6ecf306 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x44
        ret 4
        UNREACHABLE_TRAP(0x6ecf190)
    }
}

#undef public_6ecf1cd
#undef public_6ecf211
#undef public_6ecf2e0
#undef public_6ecf306
