#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62efe40);

#define public_62efea2 _public_62efea2
#define public_62eff32 _public_62eff32
#define public_62effa6 _public_62effa6
#define public_62effc0 _public_62effc0

PROC_DECLARE(0x62efe40, internal_62efe40, public_62efe40);
extern "C" NAKED register_t __cdecl internal_62efe40()
{
    __asm
    {
        sub esp, 0x14C
        push ebx
        mov ebx, dword ptr ds : [public_6399024]
        push ebp
        mov ebp, dword ptr ss : [esp+0x15C]
        test ebp, ebp
        push esi
        mov esi, dword ptr ss : [esp+0x15C]
        push edi
        je public_62efea2
        mov eax, dword ptr ss : [esp+0x168]
        test eax, eax
        jne public_62efea2
        push esi
        mov dword ptr ss : [esp+0x14], esi
        call ebx
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x44]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [ebp], eax
        je public_62efea2
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x14C
        ret 
        public_62efea2 : nop
        xor eax, eax
        mov dword ptr ss : [esp+0x2C], offset public_639b84c
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, 0xB
        lea edi, ss:[esp+0x34]
        rep stosd
        mov eax, dword ptr ds : [public_639905c]
        mov dword ptr ss : [esp+0x3C], 0x80000000
        mov dword ptr ss : [esp+0x40], 1
        mov dword ptr ss : [esp+0x48], 3
        mov dword ptr ss : [esp+0x4C], 0x8000080
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x2C], 0x34
        mov dword ptr ss : [esp+0x5C], 0xFFFFFFFF
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_62effc0
        mov eax, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        mov esi, dword ptr ss : [esp+0x10]
        je public_62eff32
        mov edi, dword ptr ss : [esp+0x168]
        test edi, edi
        je public_62eff32
        cmp dword ptr ds : [edi], 0xFFFFFFFF
        jne public_62eff32
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [edi], eax
        public_62eff32 : nop
        test ebp, ebp
        je public_62effa6
        mov edx, dword ptr ds : [esi]
        push 0x100
        lea eax, ss:[esp+0x60]
        push eax
        push esi
        call dword ptr ds : [edx+0x84]
        lea edx, ss:[esp+0x5C]
        lea ecx, ss:[esp+0x5C]
        push edx
        mov dword ptr ss : [esp+0x24], ecx
        call ebx
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x44]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [ebp], eax
        jne public_62effa6
        lea ecx, ss:[esp+0x5C]
        lea eax, ss:[esp+0x5C]
        push ecx
        mov dword ptr ss : [esp+0x1C], eax
        call ebx
        mov edx, dword ptr ds : [public_6399040]
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        mov dword ptr ss : [ebp], eax
        public_62effa6 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push eax
        mov bl, 1
        call dword ptr ds : [ecx+8]
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x14C
        ret 
        nop 
        public_62effc0 : nop
        mov edx, dword ptr ds : [public_6399028]
        push esi
        push 0x1C3
/*FIXUP push offset public_63a123c @0x62effcc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
        mov eax, 0x100002
/*FIXUP push offset public_63a1268 @0x62effd6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1268
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x14C
        ret 
        UNREACHABLE_TRAP(0x62efe40)
    }
}

#undef public_62efea2
#undef public_62eff32
#undef public_62effa6
#undef public_62effc0
