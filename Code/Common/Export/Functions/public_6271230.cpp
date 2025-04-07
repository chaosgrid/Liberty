#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_6271263 _public_6271263
#define public_627126b _public_627126b
#define public_627127e _public_627127e

PROC_DECLARE(0x6271230, internal_6271230, public_6271230);
extern "C" NAKED register_t __cdecl internal_6271230()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+0x20]
        push eax
        mov ecx, esi
        xor ebx, ebx
        call public_62fcfb0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0xC], eax
        je public_6271263
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6271263
        lea eax, ss:[esp+0xC]
        jmp public_627126b
        public_6271263 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_627126b : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x24]
        je public_627127e
        mov eax, dword ptr ds : [eax+0x10]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        public_627127e : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6271230)
    }
}

#undef public_6271263
#undef public_627126b
#undef public_627127e
