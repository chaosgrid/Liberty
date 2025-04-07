#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce6870);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);

#define public_6cff6e9 _public_6cff6e9
#define public_6cff6eb _public_6cff6eb
#define public_6cff767 _public_6cff767
#define public_6cff769 _public_6cff769
#define public_6cff827 _public_6cff827
#define public_6cff8d2 _public_6cff8d2
#define public_6cff8f0 _public_6cff8f0
#define public_6cff8fc _public_6cff8fc
#define public_6cff8fe _public_6cff8fe
#define public_6cff920 _public_6cff920
#define public_6cff92c _public_6cff92c

PROC_DECLARE(0x6cff6c0, internal_6cff6c0, public_6cff6c0);
extern "C" NAKED register_t __cdecl internal_6cff6c0()
{
    __asm
    {
        sub esp, 0x30
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x18]
        test al, al
        jne public_6cff8d2
        mov ecx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6cff6e9
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6cff6eb
        public_6cff6e9 : nop
        xor eax, eax
        public_6cff6eb : nop
        mov edx, dword ptr ds : [eax+0xB4]
        test edx, edx
        jne public_6cff8d2
        test ecx, ecx
        je public_6cff8d2
        lea eax, ds:[ecx+0xC]
        test eax, eax
        je public_6cff8d2
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6cff8d2
        mov eax, dword ptr ds : [eax+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_6cff8d2
        call public_6ce6870
        mov ebp, eax
        mov ecx, ebp
        call dword ptr ds : [public_6d6422c]
        test eax, eax
        jne public_6cff8d2
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_6cff767
        add eax, 0xC
        test eax, eax
        je public_6cff767
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6cff767
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_6cff769
        public_6cff767 : nop
        xor eax, eax
        public_6cff769 : nop
        fld dword ptr ds : [esi+0x28]
        push ebx
        fstp dword ptr ds : [eax+0x2C0]
        mov edx, dword ptr ds : [esi+0x38]
        mov eax, dword ptr ds : [esi+0x2C]
        push edi
        mov edi, dword ptr ds : [public_6d64c7c]
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x10], eax
        call edi
        mov ecx, dword ptr ds : [esi+0x3C]
        mov edx, dword ptr ds : [esi+0x30]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], ecx
        fmul dword ptr ds : [public_6d656b8]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x10]
        fmulp 
        fadd dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x10], edx
        fstp dword ptr ss : [esp+0x1C]
        call edi
        mov ecx, dword ptr ds : [esi+0x34]
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+0x40]
        fmul dword ptr ds : [public_6d656b8]
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        fsub dword ptr ss : [esp+0x10]
        fmulp 
        fadd dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x10], ecx
        fstp dword ptr ss : [esp+0x20]
        call edi
        mov ecx, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_6d656b8]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x10]
        fmulp 
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        mov ebx, eax
        mov eax, dword ptr ds : [public_6d8d8d0]
        test eax, eax
        jne public_6cff827
        call public_6d5ff70
        mov dword ptr ds : [public_6d8d8d0], eax
        public_6cff827 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        push ebx
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [esp+0x38], ecx
        mov dword ptr ss : [esp+0x3C], edx
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x34]
        push edx
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+0x48]
        mov ecx, dword ptr ds : [esi+0x44]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], ecx
        call edi
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [eax+4]
        fmul dword ptr ds : [public_6d656b8]
        lea ecx, ds:[eax+4]
        fld dword ptr ss : [esp+0x14]
        push ecx
        fsub dword ptr ss : [esp+0x14]
        fmulp 
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edx]
        mov al, byte ptr ds : [esi+0x4C]
        test al, al
        pop edi
        pop ebx
        je public_6cff8d2
        push 0x20000
        lea ecx, ss:[ebp+0xE4]
        call dword ptr ds : [public_6d64024]
        movzx eax, word ptr ds : [eax+8]
        mov ecx, dword ptr ds : [esi+0x24]
        push 0
        mov dword ptr ss : [esp+0x14], eax
        mov edx, dword ptr ds : [ecx+4]
        add ecx, 4
        push 0
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [edx+0x4C]
        public_6cff8d2 : nop
        mov edx, dword ptr ss : [esp+0x40]
        mov byte ptr ds : [esi+0x10], 1
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x1C]
        add esi, 0x14
        cmp eax, ecx
        mov dword ptr ss : [esp+0x40], edx
        je public_6cff8fc
        nop 
        lea esp, ss:[esp]
        public_6cff8f0 : nop
        cmp word ptr ds : [eax], dx
        je public_6cff8fe
        add eax, 2
        cmp eax, ecx
        jne public_6cff8f0
        public_6cff8fc : nop
        mov eax, ecx
        public_6cff8fe : nop
        cmp eax, ecx
        jne public_6cff92c
        lea edx, ss:[esp+0x40]
        push edx
        push 1
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6d641b4]
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_6cff92c
        mov ecx, dword ptr ss : [esp+0x40]
        public_6cff920 : nop
        cmp word ptr ds : [eax], cx
        je public_6cff92c
        add eax, 2
        cmp eax, esi
        jne public_6cff920
        public_6cff92c : nop
        pop esi
        pop ebp
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x6cff6c0)
    }
}

#undef public_6cff6e9
#undef public_6cff6eb
#undef public_6cff767
#undef public_6cff769
#undef public_6cff827
#undef public_6cff8d2
#undef public_6cff8f0
#undef public_6cff8fc
#undef public_6cff8fe
#undef public_6cff920
#undef public_6cff92c
