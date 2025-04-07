#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_62ff910);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);

#define public_62ff931 _public_62ff931
#define public_62ff963 _public_62ff963
#define public_62ff96b _public_62ff96b
#define public_62ff97f _public_62ff97f

PROC_DECLARE(0x62ff910, internal_62ff910, public_62ff910);
extern "C" NAKED register_t __cdecl internal_62ff910()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        push esi
        mov edi, ecx
        call dword ptr ds : [public_63992ec]
        add esp, 4
        test eax, eax
        jne public_62ff931
        push esi
        call public_630d3f0
        add esp, 4
        public_62ff931 : nop
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+0x80]
        push eax
        mov ecx, esi
        xor ebx, ebx
        call public_62fcfb0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0xC], eax
        je public_62ff963
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_62ff963
        lea eax, ss:[esp+0xC]
        jmp public_62ff96b
        public_62ff963 : nop
        mov dword ptr ss : [esp+0x14], esi
        lea eax, ss:[esp+0x14]
        public_62ff96b : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x84]
        je public_62ff97f
        pop edi
        pop esi
        add eax, 0x10
        pop ebx
        pop ecx
        ret 4
        public_62ff97f : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62ff910)
    }
}

#undef public_62ff931
#undef public_62ff963
#undef public_62ff96b
#undef public_62ff97f
