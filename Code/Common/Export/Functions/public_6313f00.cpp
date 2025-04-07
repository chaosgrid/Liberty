#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_6313f2e _public_6313f2e
#define public_6313f36 _public_6313f36
#define public_6313f47 _public_6313f47

PROC_DECLARE(0x6313f00, internal_6313f00, public_6313f00);
extern "C" NAKED register_t __cdecl internal_6313f00()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x10]
        lea esi, ds:[edi+0x40]
        push eax
        mov ecx, esi
        call public_62fcfb0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+8], eax
        je public_6313f2e
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6313f2e
        lea eax, ss:[esp+8]
        jmp public_6313f36
        public_6313f2e : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_6313f36 : nop
        mov ecx, dword ptr ds : [edi+0x44]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        jne public_6313f47
        xor eax, eax
        pop ecx
        ret 4
        public_6313f47 : nop
        add eax, 0x10
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6313f00)
    }
}

#undef public_6313f2e
#undef public_6313f36
#undef public_6313f47
