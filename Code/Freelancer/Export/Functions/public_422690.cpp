#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4226ba _public_4226ba
#define public_4226d1 _public_4226d1
#define public_4226d7 _public_4226d7
#define public_422721 _public_422721
#define public_422744 _public_422744
#define public_4227b7 _public_4227b7

PROC_DECLARE(0x422690, internal_422690, public_422690);
extern "C" NAKED register_t __cdecl internal_422690()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        mov ebx, dword ptr ss : [esp+0x38]
        test ebx, ebx
        push ebp
        push esi
        push edi
        je public_4226d1
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax+0x40]
        mov esi, eax
        mov eax, dword ptr ds : [public_664988]
        test eax, eax
        jne public_4226ba
        call public_5b73e0
        mov dword ptr ds : [public_664988], eax
        public_4226ba : nop
        mov ebp, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea esi, ss:[esp+0x10]
        jmp public_4226d7
        public_4226d1 : nop
        mov ebp, dword ptr ss : [esp+0x48]
        mov esi, ebp
        public_4226d7 : nop
        mov eax, dword ptr ds : [public_5c6de0]
        lea edx, ss:[esp+0x44]
        push edx
        mov edi, offset public_6648dc
        mov ecx, 0xC
        rep movsd
        mov dword ptr ss : [esp+0x48], 1
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 7
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [esp+0x44]
        test eax, eax
        je public_422721
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6648dc @0x422710*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6648dc
        push eax
        call dword ptr ds : [ecx+0x7C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 
        public_422721 : nop
        test ebx, ebx
        je public_422744
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [eax]
        push ebx
        call dword ptr ds : [ecx+0x40]
        mov edx, dword ptr ds : [public_5c6de0]
        push eax
        mov eax, dword ptr ds : [edx]
        push eax
        call dword ptr ds : [esi+0x74]
        jmp public_4227b7
        public_422744 : nop
        mov ecx, dword ptr ds : [public_5c6de0]
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        call dword ptr ds : [edx+0x74]
        public_4227b7 : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push eax
        call dword ptr ds : [ecx+0x6C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x422690)
    }
}

#undef public_4226ba
#undef public_4226d1
#undef public_4226d7
#undef public_422721
#undef public_422744
#undef public_4227b7
