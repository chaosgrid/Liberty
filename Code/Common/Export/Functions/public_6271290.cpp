#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);

#define public_62712d4 _public_62712d4
#define public_62712dc _public_62712dc
#define public_62712ef _public_62712ef

PROC_DECLARE(0x6271290, internal_6271290, public_6271290);
extern "C" NAKED register_t __cdecl internal_6271290()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        push edi
        push eax
        mov edi, ecx
        call public_630d3f0
        add esp, 4
        lea ecx, ss:[esp+0x18]
        lea esi, ds:[edi+0xC]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], eax
        xor ebx, ebx
        call public_62fcfb0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0xC], eax
        je public_62712d4
        mov edx, dword ptr ss : [esp+0x18]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_62712d4
        lea eax, ss:[esp+0xC]
        jmp public_62712dc
        public_62712d4 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_62712dc : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x10]
        je public_62712ef
        mov eax, dword ptr ds : [eax+0x10]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        public_62712ef : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6271290)
    }
}

#undef public_62712d4
#undef public_62712dc
#undef public_62712ef
