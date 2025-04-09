#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_458220);
CLANG_FORWARD_PROC_SYMBOL(public_558310);

#define public_458240 _public_458240
#define public_45829e _public_45829e
#define public_4582a9 _public_4582a9

PROC_DECLARE(0x458220, internal_458220, public_458220);
extern "C" NAKED register_t __cdecl internal_458220()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+4]
        push ebx
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+8], eax
        je public_4582a9
        push ebp
        push esi
        push edi
        lea esp, ss:[esp]
        public_458240 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        lea esi, ds:[ebx+8]
        push eax
        call dword ptr ds : [public_5c603c]
        add esp, 4
        mov ecx, esi
        mov edi, eax
        call dword ptr ds : [public_5c60b4]
        test al, al
        jne public_45829e
        mov esi, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [ebp]
        push esi
        call dword ptr ds : [public_5c61c4]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_45829e
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, edi
        call dword ptr ds : [edx+0x10]
        cmp eax, 0x15
        jne public_45829e
        mov al, byte ptr ds : [edi+0x70]
        test al, al
        je public_45829e
        mov eax, dword ptr ss : [esp+0x1C]
        push esi
        push eax
        lea ecx, ss:[ebp+0x20]
        call public_558310
        public_45829e : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ss : [esp+0x14]
        jne public_458240
        pop edi
        pop esi
        pop ebp
        public_4582a9 : nop
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x458220)
    }
}

#undef public_458240
#undef public_45829e
#undef public_4582a9
