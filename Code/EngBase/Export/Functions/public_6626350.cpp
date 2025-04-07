#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612e70);

#define public_6626376 _public_6626376
#define public_662639a _public_662639a
#define public_66263af _public_66263af
#define public_66263ba _public_66263ba
#define public_66263c0 _public_66263c0

PROC_DECLARE(0x6626350, internal_6626350, public_6626350);
extern "C" NAKED register_t __cdecl internal_6626350()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [esi+0x2C]
        inc ecx
        test al, al
        mov dword ptr ds : [esi+8], ecx
        je public_6626376
        mov eax, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        jne public_6626376
        inc dword ptr ds : [esi+0xC]
        jmp public_662639a
        public_6626376 : nop
        lea edx, ss:[esp+0xC]
        lea eax, ss:[esp+8]
        push edx
        push eax
        lea ecx, ds:[esi+0x10]
        call public_6612e70
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ss : [esp+8]
        cmp eax, ecx
        je public_66263ba
        mov dword ptr ds : [esi+0x28], eax
        mov byte ptr ds : [esi+0x2C], 1
        public_662639a : nop
        cmp eax, dword ptr ds : [esi+0x14]
        je public_66263ba
        mov ecx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_66263ba
        mov edx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [edx+4]
        public_66263af : nop
        cmp dword ptr ds : [eax+8], edx
        je public_66263c0
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_66263af
        public_66263ba : nop
        xor al, al
        pop esi
        ret 0x10
        public_66263c0 : nop
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea esi, ds:[eax+0x10]
        mov ecx, 0x12
        rep movsd
        pop edi
        mov al, 1
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x6626350)
    }
}

#undef public_6626376
#undef public_662639a
#undef public_66263af
#undef public_66263ba
#undef public_66263c0
