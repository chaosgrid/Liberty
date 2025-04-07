#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411640);

#define public_410040 _public_410040
#define public_410048 _public_410048
#define public_410061 _public_410061

PROC_DECLARE(0x410010, internal_410010, public_410010);
extern "C" NAKED register_t __cdecl internal_410010()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+0x64]
        push eax
        mov ecx, esi
        call public_411640
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+8], eax
        je public_410040
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_410040
        lea eax, ss:[esp+8]
        jmp public_410048
        public_410040 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_410048 : nop
        mov ecx, dword ptr ds : [edi+0x68]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        jne public_410061
        push 8
        call dword ptr ds : [public_41bbd4]
        add esp, 8
        ret 4
        public_410061 : nop
        mov eax, dword ptr ds : [eax+0x10]
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x410010)
    }
}

#undef public_410040
#undef public_410048
#undef public_410061
