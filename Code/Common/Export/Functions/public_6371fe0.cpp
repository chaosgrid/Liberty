#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6371fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);

#define public_6371ffc _public_6371ffc
#define public_637201a _public_637201a
#define public_6372025 _public_6372025
#define public_6372031 _public_6372031
#define public_6372038 _public_6372038
#define public_6372040 _public_6372040
#define public_637205e _public_637205e

PROC_DECLARE(0x6371fe0, internal_6371fe0, public_6371fe0);
extern "C" NAKED register_t __cdecl internal_6371fe0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b86c]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        cmp eax, ebx
        je public_6372040
        push esi
        mov esi, dword ptr ds : [public_658b810]
        push edi
        xor edi, edi
        cmp esi, edi
        je public_6372038
        public_6371ffc : nop
        cmp dword ptr ds : [esi+0x30], edi
        je public_6372038
        cmp dword ptr ds : [public_658b86c], 1
        mov eax, dword ptr ds : [esi+0x28]
        jne public_637201a
        cmp eax, edi
        je public_6372031
        mov ecx, dword ptr ds : [public_658b808]
        push ecx
        jmp public_6372025
        public_637201a : nop
        cmp eax, edi
        je public_6372031
        mov edx, dword ptr ds : [public_658b804]
        push edx
        public_6372025 : nop
        push eax
        call public_6377fe0
        add esp, 8
        mov dword ptr ds : [esi+0x28], edi
        public_6372031 : nop
        mov esi, dword ptr ds : [esi+0x30]
        cmp esi, edi
        jne public_6371ffc
        public_6372038 : nop
        pop edi
        mov dword ptr ds : [public_658b86c], ebx
        pop esi
        public_6372040 : nop
        cmp dword ptr ds : [public_658b078], 2
        jl public_637205e
        mov eax, dword ptr ds : [public_658b7fc]
        push ebx
/*FIXUP push offset public_63f04d4 @0x637204f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f04d4
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_637205e : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6371fe0)
    }
}

#undef public_6371ffc
#undef public_637201a
#undef public_6372025
#undef public_6372031
#undef public_6372038
#undef public_6372040
#undef public_637205e
