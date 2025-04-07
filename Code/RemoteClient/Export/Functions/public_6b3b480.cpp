#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b3c190);

#define public_6b3b496 _public_6b3b496
#define public_6b3b4d3 _public_6b3b4d3
#define public_6b3b4db _public_6b3b4db
#define public_6b3b4f1 _public_6b3b4f1

PROC_DECLARE(0x6b3b480, internal_6b3b480, public_6b3b480);
extern "C" NAKED register_t __cdecl internal_6b3b480()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        test ebx, ebx
        push edi
        mov edi, ecx
        jne public_6b3b496
        pop edi
        mov eax, 4
        pop ebx
        ret 0xC
        public_6b3b496 : nop
        movzx eax, word ptr ss : [esp+0xC]
        movzx ecx, word ptr ss : [esp+0x10]
        push esi
        shl eax, 0x10
        or eax, ecx
        lea edx, ss:[esp+0x10]
        lea esi, ds:[edi+8]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        call public_6b3c190
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6b3b4d3
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6b3b4d3
        lea eax, ss:[esp+0x14]
        jmp public_6b3b4db
        public_6b3b4d3 : nop
        mov dword ptr ss : [esp+0x18], esi
        lea eax, ss:[esp+0x18]
        public_6b3b4db : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0xC]
        pop esi
        je public_6b3b4f1
        mov eax, dword ptr ds : [eax+0x10]
        push ebx
        call dword ptr ds : [eax]
        add esp, 4
        pop edi
        pop ebx
        ret 0xC
        public_6b3b4f1 : nop
        pop edi
        mov eax, 0x19
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b3b480)
    }
}

#undef public_6b3b496
#undef public_6b3b4d3
#undef public_6b3b4db
#undef public_6b3b4f1
