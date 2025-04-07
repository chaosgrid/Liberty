#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1750);
CLANG_FORWARD_PROC_SYMBOL(public_6be2460);

#define public_6be1766 _public_6be1766
#define public_6be17a3 _public_6be17a3
#define public_6be17ab _public_6be17ab
#define public_6be17c1 _public_6be17c1

PROC_DECLARE(0x6be1750, internal_6be1750, public_6be1750);
extern "C" NAKED register_t __cdecl internal_6be1750()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        test ebx, ebx
        push edi
        mov edi, ecx
        jne public_6be1766
        pop edi
        mov eax, 4
        pop ebx
        ret 0xC
        public_6be1766 : nop
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
        call public_6be2460
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6be17a3
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6be17a3
        lea eax, ss:[esp+0x14]
        jmp public_6be17ab
        public_6be17a3 : nop
        mov dword ptr ss : [esp+0x18], esi
        lea eax, ss:[esp+0x18]
        public_6be17ab : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0xC]
        pop esi
        je public_6be17c1
        mov eax, dword ptr ds : [eax+0x10]
        push ebx
        call dword ptr ds : [eax]
        add esp, 4
        pop edi
        pop ebx
        ret 0xC
        public_6be17c1 : nop
        pop edi
        mov eax, 0x19
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6be1750)
    }
}

#undef public_6be1766
#undef public_6be17a3
#undef public_6be17ab
#undef public_6be17c1
