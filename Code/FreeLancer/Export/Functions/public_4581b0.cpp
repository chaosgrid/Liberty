#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_457fe0);
CLANG_FORWARD_PROC_SYMBOL(public_4581b0);

#define public_4581d0 _public_4581d0
#define public_45820c _public_45820c
#define public_458216 _public_458216

PROC_DECLARE(0x4581b0, internal_4581b0, public_4581b0);
extern "C" NAKED register_t __cdecl internal_4581b0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+4]
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+0xC], eax
        je public_458216
        push ebx
        push esi
        lea esp, ss:[esp]
        public_4581d0 : nop
        mov eax, dword ptr ds : [edi+0xC]
        lea esi, ds:[edi+8]
        push eax
        call dword ptr ds : [public_5c603c]
        add esp, 4
        mov ecx, esi
        mov ebx, eax
        call dword ptr ds : [public_5c60b4]
        test al, al
        jne public_45820c
        mov esi, dword ptr ds : [esi+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi]
        call dword ptr ds : [public_5c61c4]
        cmp eax, 0xFFFFFFFF
        je public_45820c
        push ebx
        push eax
        mov ecx, esi
        call public_457fe0
        public_45820c : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [esp+0x14]
        jne public_4581d0
        pop esi
        pop ebx
        public_458216 : nop
        pop edi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x4581b0)
    }
}

#undef public_4581d0
#undef public_45820c
#undef public_458216
