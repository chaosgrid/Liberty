#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15010);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);

#define public_6d15040 _public_6d15040
#define public_6d15065 _public_6d15065
#define public_6d15070 _public_6d15070
#define public_6d15079 _public_6d15079
#define public_6d1507b _public_6d1507b
#define public_6d15091 _public_6d15091
#define public_6d15094 _public_6d15094

PROC_DECLARE(0x6d15010, internal_6d15010, public_6d15010);
extern "C" NAKED register_t __cdecl internal_6d15010()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push esi
        push edi
        mov esi, ecx
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        lea ecx, ds:[esi+8]
        mov dword ptr ss : [esp+0x18], eax
        xor edi, edi
        call public_6d15d10
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [esi+0xC]
        je public_6d15040
        mov edi, dword ptr ds : [eax+0x10]
        jmp public_6d15065
        nop 
        public_6d15040 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [public_6d64a44]
        push ecx
        push 0x659
/*FIXUP push offset public_6d6840c @0x6d15050*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov eax, 0x100001
/*FIXUP push offset public_6d68458 @0x6d1505a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68458
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d15065 : nop
        mov esi, dword ptr ss : [esp+0x14]
        xor eax, eax
        xor ecx, ecx
        lea ecx, ds:[ecx]
        public_6d15070 : nop
        test ecx, ecx
        jne public_6d15079
        mov ecx, dword ptr ds : [edi+0x18]
        jmp public_6d1507b
        public_6d15079 : nop
        mov ecx, dword ptr ds : [ecx]
        public_6d1507b : nop
        test ecx, ecx
        je public_6d15094
        test esi, esi
        mov edx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [edx+4]
        je public_6d15091
        test edx, edx
        je public_6d15091
        cmp edx, esi
        jne public_6d15070
        public_6d15091 : nop
        inc eax
        jmp public_6d15070
        public_6d15094 : nop
        pop edi
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d15010)
    }
}

#undef public_6d15040
#undef public_6d15065
#undef public_6d15070
#undef public_6d15079
#undef public_6d1507b
#undef public_6d15091
#undef public_6d15094
