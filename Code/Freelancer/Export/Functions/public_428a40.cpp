#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428680);
CLANG_FORWARD_PROC_SYMBOL(public_428a40);
CLANG_FORWARD_PROC_SYMBOL(public_42ae40);
CLANG_FORWARD_PROC_SYMBOL(public_5b8058);

#define public_428a6f _public_428a6f
#define public_428aae _public_428aae
#define public_428ab4 _public_428ab4
#define public_428adf _public_428adf
#define public_428b88 _public_428b88

PROC_DECLARE(0x428a40, internal_428a40, public_428a40);
extern "C" NAKED register_t __cdecl internal_428a40()
{
    __asm
    {
        sub esp, 0x20
        fld dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [public_6108d4]
        fcomp qword ptr ds : [public_5c8ba8]
        mov ecx, dword ptr ds : [public_6108d0]
        mov dword ptr ss : [esp+4], eax
        mov dword ptr ss : [esp], ecx
        fnstsw ax
        test ah, 1
        jne public_428a6f
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp], edx
        public_428a6f : nop
        mov eax, dword ptr ds : [public_667cb4]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        xor ebx, ebx
        cmp eax, ebx
        push edi
        mov edi, dword ptr ds : [public_5c6040]
        je public_428adf
        mov ecx, esi
        call edi
        test al, al
        jne public_428aae
        push esi
        call public_42ae40
        mov ecx, dword ptr ds : [public_667cb4]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        cmp edx, eax
        jne public_428ab4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x20
        ret 
        public_428aae : nop
        mov ecx, dword ptr ds : [public_667cb4]
        public_428ab4 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x34], edx
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+0x38], ecx
        mov edx, dword ptr ds : [public_667cb4]
        mov byte ptr ds : [edx+0x3C], 1
        mov eax, dword ptr ds : [public_667cb4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_667cb4], ebx
        public_428adf : nop
        mov ecx, esi
        call edi
        test al, al
        jne public_428b88
        mov al, byte ptr ss : [esp+0x18]
        mov cl, byte ptr ss : [esp+0x34]
        and al, 0xF8
        mov dl, al
        xor dl, cl
        and dl, 1
        xor dl, al
        mov eax, dword ptr ss : [esp+0x10]
        or dl, 4
        push esi
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        mov byte ptr ss : [esp+0x1C], dl
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x38], ebx
        call public_42ae40
        push ebx
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call public_428680
        add esp, 0x14
        test al, al
        je public_428b88
        mov eax, dword ptr ss : [esp+0x34]
        push ebx
/*FIXUP push offset public_610960 @0x428b50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_610960
/*FIXUP push offset public_610924 @0x428b55*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_610924
        push ebx
        push eax
        call public_5b8058
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [public_667cb4], eax
        add esp, 0x14
        mov dword ptr ds : [eax+4], 4
        mov eax, dword ptr ds : [public_667cb4]
        pop edi
        mov dword ptr ds : [eax+0x34], ebx
        pop esi
        mov dword ptr ds : [eax+0x38], ecx
        mov al, 1
        pop ebx
        add esp, 0x20
        ret 
        public_428b88 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x428a40)
    }
}

#undef public_428a6f
#undef public_428aae
#undef public_428ab4
#undef public_428adf
#undef public_428b88
