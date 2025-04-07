#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f14b40);
CLANG_FORWARD_PROC_SYMBOL(public_6f34b70);
CLANG_FORWARD_PROC_SYMBOL(public_6f57740);
CLANG_FORWARD_PROC_SYMBOL(public_6f738c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);

#define public_6f14b80 _public_6f14b80
#define public_6f14bdd _public_6f14bdd
#define public_6f14be5 _public_6f14be5
#define public_6f14bf8 _public_6f14bf8
#define public_6f14c02 _public_6f14c02

PROC_DECLARE(0x6f14b40, internal_6f14b40, public_6f14b40);
extern "C" NAKED register_t __cdecl internal_6f14b40()
{
    __asm
    {
        sub esp, 0xC
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x30]
        test al, al
        je public_6f14c02
        cmp dword ptr ds : [edi+0x34], 0xBF800000
        je public_6f14c02
        fild dword ptr ds : [edi+0x1AC]
        fcomp dword ptr ds : [edi+0x34]
        fnstsw ax
        test ah, 0x41
        jp public_6f14bf8
        mov eax, dword ptr ds : [edi+0x20]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f14be5
        push ebp
        lea ecx, ds:[ecx]
        public_6f14b80 : nop
        cmp dword ptr ds : [esi+0xC], 2
        jne public_6f14bdd
        lea eax, ds:[edi+0x28]
        push eax
        call public_6f75f30
        mov ecx, dword ptr ds : [edi+0x2C]
        mov edx, dword ptr ds : [esi+8]
        add esp, 4
        push ecx
        mov ebp, eax
        push edx
        mov ecx, ebp
        call public_6f738c0
        mov ecx, dword ptr ds : [esi+8]
        call public_6f57740
        mov ecx, dword ptr ds : [esi+8]
        push 0
        push 0
        push 0
        call public_6f34b70
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], ecx
        mov edx, dword ptr ss : [ebp+0x48]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], edx
        call dword ptr ds : [eax+0x70]
        mov dword ptr ds : [esi+0xC], 0
        public_6f14bdd : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x20]
        jne public_6f14b80
        pop ebp
        public_6f14be5 : nop
        pop esi
        mov byte ptr ds : [edi+0x30], 0
        mov dword ptr ds : [edi+0x34], 0xBF800000
        pop edi
        add esp, 0xC
        ret 4
        public_6f14bf8 : nop
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [edi+0x34]
        fstp dword ptr ds : [edi+0x34]
        public_6f14c02 : nop
        pop edi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6f14b40)
    }
}

#undef public_6f14b80
#undef public_6f14bdd
#undef public_6f14be5
#undef public_6f14bf8
#undef public_6f14c02
