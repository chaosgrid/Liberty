#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5361e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_52b1d3 _public_52b1d3
#define public_52b22e _public_52b22e
#define public_52b247 _public_52b247
#define public_52b253 _public_52b253
#define public_52b255 _public_52b255
#define public_52b277 _public_52b277
#define public_52b283 _public_52b283

PROC_DECLARE(0x52b150, internal_52b150, public_52b150);
extern "C" NAKED register_t __cdecl internal_52b150()
{
    __asm
    {
        sub esp, 0x64
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [eax+0x18]
        test al, al
        jne public_52b22e
        lea ecx, ds:[esi+0x28]
        push ecx
        call dword ptr ds : [public_5c63c8]
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_52b22e
        cmp dword ptr ds : [edi+0x14], 2
        jne public_52b22e
        mov eax, dword ptr ds : [esi+0x2C]
        mov ecx, dword ptr ds : [esi+0x24]
        lea edx, ss:[esp+0x24]
        push edx
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x1C]
        push eax
        call dword ptr ds : [public_5c6588]
        add esp, 0x10
        test al, al
        je public_52b22e
        mov edx, dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x24]
        push ecx
        push edx
        call dword ptr ds : [public_5c65ec]
        mov eax, dword ptr ds : [public_675430]
        add esp, 8
        test eax, eax
        jne public_52b1d3
        call public_5b73e0
        mov dword ptr ds : [public_675430], eax
        public_52b1d3 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x30]
        push edx
        lea edx, ss:[esp+0x38]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [esi+0x24]
        lea eax, ss:[esp+0x18]
        push eax
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x14]
        push ecx
        fadd dword ptr ss : [esp+0x34]
        push edi
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x2C]
        call public_5361e0
        add esp, 0xC
        test eax, eax
        je public_52b22e
        mov ecx, dword ptr ds : [esi+0x24]
        push eax
        add ecx, 0x20
        call dword ptr ds : [public_5c67f4]
        public_52b22e : nop
        mov edx, dword ptr ss : [esp+0x74]
        mov byte ptr ds : [esi+0x10], 1
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x1C]
        add esi, 0x14
        cmp eax, ecx
        mov dword ptr ss : [esp+0x74], edx
        je public_52b253
        public_52b247 : nop
        cmp word ptr ds : [eax], dx
        je public_52b255
        add eax, 2
        cmp eax, ecx
        jne public_52b247
        public_52b253 : nop
        mov eax, ecx
        public_52b255 : nop
        cmp eax, ecx
        jne public_52b283
        lea edx, ss:[esp+0x74]
        push edx
        push 1
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_5c6898]
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_52b283
        mov ecx, dword ptr ss : [esp+0x74]
        public_52b277 : nop
        cmp word ptr ds : [eax], cx
        je public_52b283
        add eax, 2
        cmp eax, esi
        jne public_52b277
        public_52b283 : nop
        pop edi
        pop esi
        add esp, 0x64
        ret 8
        UNREACHABLE_TRAP(0x52b150)
    }
}

#undef public_52b1d3
#undef public_52b22e
#undef public_52b247
#undef public_52b253
#undef public_52b255
#undef public_52b277
#undef public_52b283
