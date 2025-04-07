#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ced6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60679);

#define public_6ced42c _public_6ced42c
#define public_6ced455 _public_6ced455
#define public_6ced509 _public_6ced509
#define public_6ced50b _public_6ced50b
#define public_6ced572 _public_6ced572
#define public_6ced57a _public_6ced57a
#define public_6ced5ba _public_6ced5ba
#define public_6ced5d4 _public_6ced5d4
#define public_6ced5ed _public_6ced5ed
#define public_6ced5f7 _public_6ced5f7
#define public_6ced61c _public_6ced61c
#define public_6ced629 _public_6ced629
#define public_6ced634 _public_6ced634
#define public_6ced661 _public_6ced661
#define public_6ced66c _public_6ced66c
#define public_6ced678 _public_6ced678
#define public_6ced67c _public_6ced67c

PROC_DECLARE(0x6ced3f0, internal_6ced3f0, public_6ced3f0);
extern "C" NAKED register_t __cdecl internal_6ced3f0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d60679 @0x6ced3f8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60679
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x2C
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp edi, ebx
        jne public_6ced42c
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 4
        public_6ced42c : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+4]
        test al, al
        je public_6ced67c
        mov cx, word ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [public_6d6402c]
        cmp cx, word ptr ds : [edx]
        jne public_6ced455
        mov ecx, esi
        call public_6ced6a0
        mov word ptr ds : [esi+0x10], ax
        public_6ced455 : nop
        mov dx, word ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [public_6d6402c]
        cmp dx, word ptr ds : [eax]
        je public_6ced67c
        fld dword ptr ss : [esp+0x48]
        fadd dword ptr ds : [esi+0xC]
        fst dword ptr ds : [esi+0xC]
        fcomp dword ptr ds : [public_6d6573c]
        fnstsw ax
        test ah, 0x41
        jne public_6ced67c
        mov ecx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [ecx]
        push ebp
        lea ebp, ss:[esp+0x10]
        push ebp
        push edx
        call dword ptr ds : [eax+0xF0]
        test al, al
        je public_6ced66c
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6d65520]
        fnstsw ax
        test ah, 5
        jp public_6ced66c
        mov cl, byte ptr ss : [esp+0x4C]
        push ebx
        mov byte ptr ss : [esp+0x24], cl
        push ebx
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6d641fc]
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ebx
        mov byte ptr ss : [esp+0x2C], bl
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x30], 0x11
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, ebx
        je public_6ced509
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6ced50b
        public_6ced509 : nop
        xor eax, eax
        public_6ced50b : nop
        mov edx, dword ptr ds : [eax+0xB4]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x38], edx
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x1C]
        push eax
        xor eax, eax
        mov ax, word ptr ds : [esi+0x10]
        push eax
        call dword ptr ds : [edx+0xE4]
        test al, al
        je public_6ced61c
        mov ecx, edi
        call dword ptr ds : [public_6d64334]
        fld dword ptr ds : [eax+0x70]
        fmul dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        fstp dword ptr ss : [esp+0x14]
        call dword ptr ds : [edx+0x3C]
        fsub dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6ced572
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x3C]
        fsub dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x18]
        jmp public_6ced57a
        public_6ced572 : nop
        mov dword ptr ss : [esp+0x18], 0
        public_6ced57a : nop
        mov ecx, dword ptr ss : [esp+0x18]
        xor edx, edx
        mov dx, word ptr ds : [edi+8]
        mov edi, dword ptr ds : [public_6d641ec]
        push ebx
        push ecx
        lea ecx, ss:[esp+0x28]
        push edx
        call edi
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6d65188]
        mov dword ptr ss : [esp+0x4C], 0
        fnstsw ax
        test ah, 0x41
        jne public_6ced5ba
        fld dword ptr ss : [esp+0x1C]
        fdiv dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x4C]
        jmp public_6ced5d4
        public_6ced5ba : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x4C]
        push eax
        xor eax, eax
        mov ax, word ptr ds : [esi+0x10]
        push eax
        call dword ptr ds : [edx+0xEC]
        public_6ced5d4 : nop
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x1C]
        fcom dword ptr ss : [esp+0x4C]
        fnstsw ax
        test ah, 5
        jp public_6ced5ed
        fstp dword ptr ss : [esp+0x18]
        jmp public_6ced5f7
        public_6ced5ed : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        fstp st(0)
        mov dword ptr ss : [esp+0x18], ecx
        public_6ced5f7 : nop
        mov edx, dword ptr ss : [esp+0x18]
        xor eax, eax
        mov ax, word ptr ds : [esi+0x10]
        push ebx
        push edx
        lea ecx, ss:[esp+0x28]
        push eax
        call edi
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x20]
        push eax
        call dword ptr ds : [edx+0x188]
        jmp public_6ced629
        public_6ced61c : nop
        mov ecx, dword ptr ds : [public_6d6402c]
        mov dx, word ptr ds : [ecx]
        mov word ptr ds : [esi+0x10], dx
        public_6ced629 : nop
        mov ebp, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_6ced661
        public_6ced634 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ss : [esp+0x28], ecx
        jne public_6ced634
        mov ebp, dword ptr ss : [esp+0x24]
        public_6ced661 : nop
        push ebp
        call public_6d5ffb0
        add esp, 4
        jmp public_6ced678
        public_6ced66c : nop
        mov eax, dword ptr ds : [public_6d6402c]
        mov cx, word ptr ds : [eax]
        mov word ptr ds : [esi+0x10], cx
        public_6ced678 : nop
        mov dword ptr ds : [esi+0xC], ebx
        pop ebp
        public_6ced67c : nop
        mov ecx, dword ptr ss : [esp+0x38]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 4
        UNREACHABLE_TRAP(0x6ced3f0)
    }
}

#undef public_6ced42c
#undef public_6ced455
#undef public_6ced509
#undef public_6ced50b
#undef public_6ced572
#undef public_6ced57a
#undef public_6ced5ba
#undef public_6ced5d4
#undef public_6ced5ed
#undef public_6ced5f7
#undef public_6ced61c
#undef public_6ced629
#undef public_6ced634
#undef public_6ced661
#undef public_6ced66c
#undef public_6ced678
#undef public_6ced67c
