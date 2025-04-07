#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a260);
CLANG_FORWARD_PROC_SYMBOL(public_661f8b0);

#define public_661f8cb _public_661f8cb
#define public_661f8fb _public_661f8fb
#define public_661f903 _public_661f903
#define public_661f917 _public_661f917

PROC_DECLARE(0x661f8b0, internal_661f8b0, public_661f8b0);
extern "C" NAKED register_t __cdecl internal_661f8b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 8
        mov eax, dword ptr ds : [eax+4]
        push edi
        test eax, eax
        mov edi, ecx
        jne public_661f8cb
        or eax, 0xFFFFFFFF
        pop edi
        add esp, 8
        ret 4
        public_661f8cb : nop
        push esi
        lea ecx, ss:[esp+0x14]
        lea esi, ds:[edi+0x30]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], eax
        call public_661a260
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+8], eax
        cmp eax, esi
        je public_661f8fb
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp edx, ecx
        jb public_661f8fb
        lea eax, ss:[esp+8]
        jmp public_661f903
        public_661f8fb : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_661f903 : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+0x34]
        cmp eax, ecx
        pop esi
        jne public_661f917
        or eax, 0xFFFFFFFF
        pop edi
        add esp, 8
        ret 4
        public_661f917 : nop
        mov eax, dword ptr ds : [eax+0x10]
        pop edi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x661f8b0)
    }
}

#undef public_661f8cb
#undef public_661f8fb
#undef public_661f903
#undef public_661f917
