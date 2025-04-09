#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5760f0);
CLANG_FORWARD_PROC_SYMBOL(public_577c30);
CLANG_FORWARD_PROC_SYMBOL(public_57c7d0);

#define public_57c812 _public_57c812
#define public_57c833 _public_57c833

PROC_DECLARE(0x57c7d0, internal_57c7d0, public_57c7d0);
extern "C" NAKED register_t __cdecl internal_57c7d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [eax+0xD0]
        lea edi, ds:[esi+0x498]
        push 1
        mov ecx, edi
        call public_5760f0
        push 2
        mov ecx, edi
        call public_5760f0
        push 0xF
        mov ecx, edi
        call public_5760f0
        push edi
        call public_577c30
        mov al, byte ptr ss : [esp+0x10]
        add esp, 4
        test al, al
        je public_57c812
        and byte ptr ds : [esi+0x6C], 0xFC
        public_57c812 : nop
        mov al, byte ptr ds : [esi+0x52B]
        test al, al
        pop edi
        pop esi
        je public_57c833
        call dword ptr ds : [public_5c6e80]
        test eax, eax
        je public_57c833
        mov edx, dword ptr ds : [eax]
        push 0
        push 0
        mov ecx, eax
        call dword ptr ds : [edx+0x2C]
        public_57c833 : nop
        ret 4
        UNREACHABLE_TRAP(0x57c7d0)
    }
}

#undef public_57c812
#undef public_57c833
