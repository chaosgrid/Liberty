#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_585bd0);

#define public_585cae _public_585cae
#define public_585cc2 _public_585cc2

PROC_DECLARE(0x585bd0, internal_585bd0, public_585bd0);
extern "C" NAKED register_t __cdecl internal_585bd0()
{
    __asm
    {
        sub esp, 0x24
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        cmp edi, 0xFFFFFFFF
        mov esi, ecx
        je public_585cc2
        mov al, byte ptr ds : [esi+0x518]
        mov cl, byte ptr ss : [esp+0x34]
        shl cl, 4
        xor cl, al
        and cl, 0x10
        xor cl, al
        mov dword ptr ds : [esi+0x508], edi
        mov byte ptr ds : [esi+0x518], cl
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        lea edx, ss:[esp+0x38]
        push edx
        push 0
        push edi
        push eax
        call dword ptr ds : [ecx+0x88]
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, eax
        mov dword ptr ds : [esi+0x50C], eax
        mov dword ptr ds : [esi+0x510], ecx
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x64]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_585cc2
        mov edx, dword ptr ds : [public_5c6df0]
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        push 0x3F800000
        push edi
        push eax
        call dword ptr ds : [ecx+0x10]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x34]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_585cae
        fstp st(0)
        fld dword ptr ss : [esp+0x34]
        public_585cae : nop
        fstp dword ptr ds : [esi+0x50C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x3C]
        public_585cc2 : nop
        pop edi
        pop esi
        add esp, 0x24
        ret 0xC
        UNREACHABLE_TRAP(0x585bd0)
    }
}

#undef public_585cae
#undef public_585cc2
