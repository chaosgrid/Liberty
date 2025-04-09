#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_4c8b40);
CLANG_FORWARD_PROC_SYMBOL(public_4c8b80);
CLANG_FORWARD_PROC_SYMBOL(public_4c8bc0);

#define public_59bbd3 _public_59bbd3
#define public_59bc20 _public_59bc20

PROC_DECLARE(0x59bb40, internal_59bb40, public_59bb40);
extern "C" NAKED register_t __cdecl internal_59bb40()
{
    __asm
    {
        sub esp, 0x30
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0x60]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [esi+0x8C]
        test eax, eax
        je public_59bc20
        lea ecx, ss:[esp+4]
        call public_4215b0
        push 0x40490FDB
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        call public_4c8b40
        push 0
        lea ecx, ss:[esp+8]
        call public_4c8b80
        push 0
        lea ecx, ss:[esp+8]
        call public_4c8bc0
        mov ecx, dword ptr ds : [esi+0x8C]
        test ecx, ecx
        je public_59bbd3
        fld dword ptr ds : [esi+0x3F0]
        mov edx, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        fstp dword ptr ss : [esp]
        push ecx
        push eax
        call dword ptr ds : [edx+0x60]
        public_59bbd3 : nop
        fld dword ptr ds : [esi+0x3EC]
        mov eax, dword ptr ds : [public_5c6d58]
        lea edx, ss:[esp+0x28]
        push edx
        mov edx, dword ptr ds : [esi+0x8C]
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        fstp dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x4C]
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+4]
        push edx
        mov edx, dword ptr ds : [esi+0x8C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        nop 
        public_59bc20 : nop
        pop esi
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x59bb40)
    }
}

#undef public_59bbd3
#undef public_59bc20
