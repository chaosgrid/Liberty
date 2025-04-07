#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_62ff7d0);

#define public_62ff808 _public_62ff808
#define public_62ff810 _public_62ff810
#define public_62ff820 _public_62ff820

PROC_DECLARE(0x62ff7d0, internal_62ff7d0, public_62ff7d0);
extern "C" NAKED register_t __cdecl internal_62ff7d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        push edi
        lea eax, ds:[eax+eax*4]
        lea edi, ds:[ecx+eax*4]
        lea ecx, ss:[esp+0x14]
        lea esi, ds:[edi+0x30]
        push ecx
        mov ecx, esi
        xor ebx, ebx
        call public_62fcfb0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], eax
        je public_62ff808
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_62ff808
        lea eax, ss:[esp+0x10]
        jmp public_62ff810
        public_62ff808 : nop
        mov dword ptr ss : [esp+0x14], esi
        lea eax, ss:[esp+0x14]
        public_62ff810 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x34]
        je public_62ff820
        pop edi
        pop esi
        add eax, 0x10
        pop ebx
        ret 8
        public_62ff820 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x62ff7d0)
    }
}

#undef public_62ff808
#undef public_62ff810
#undef public_62ff820
