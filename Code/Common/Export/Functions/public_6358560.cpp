#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346790);
CLANG_FORWARD_PROC_SYMBOL(public_6358560);
CLANG_FORWARD_PROC_SYMBOL(public_6366010);

#define public_635858b _public_635858b
#define public_635860a _public_635860a
#define public_6358621 _public_6358621

PROC_DECLARE(0x6358560, internal_6358560, public_6358560);
extern "C" NAKED register_t __cdecl internal_6358560()
{
    __asm
    {
        sub esp, 0x20
        mov eax, dword ptr ss : [esp+0x24]
        fld dword ptr ds : [eax]
        push ebx
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        push esi
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+8]
        push edi
        mov edi, ecx
        fstp dword ptr ss : [esp+0x14]
        lea esi, ds:[edi+0xF8]
        mov ebx, 2
        public_635858b : nop
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ds : [esi-0xD8]
        call public_6366010
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0xC]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi-8]
        call public_6346790
        fstp dword ptr ds : [esi-0xF0]
        fld dword ptr ss : [esp+0x10]
        sub esi, 4
        dec ebx
        fmul dword ptr ds : [public_63a5498]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_63a5498]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_63a5498]
        mov dword ptr ss : [esp+0x14], edx
        fstp dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x10]
        jne public_635858b
        mov eax, dword ptr ds : [edi+0xEC]
        test byte ptr ds : [eax], 0xC
        je public_635860a
        fld dword ptr ds : [edi+8]
        fmul dword ptr ds : [public_63a5670]
        fstp dword ptr ds : [edi+4]
        public_635860a : nop
        mov ecx, dword ptr ds : [edi+0xF0]
        test byte ptr ds : [ecx], 0xC
        je public_6358621
        fld dword ptr ds : [edi+4]
        fmul dword ptr ds : [public_63a5670]
        fstp dword ptr ds : [edi+8]
        public_6358621 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x6358560)
    }
}

#undef public_635858b
#undef public_635860a
#undef public_6358621
