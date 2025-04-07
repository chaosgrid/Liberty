#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d88d20);
CLANG_FORWARD_PROC_SYMBOL(public_6d8c830);
CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6d97ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);
CLANG_FORWARD_JUMP_SYMBOL(public_6db2542);

#define public_6d89616 _public_6d89616
#define public_6d89630 _public_6d89630
#define public_6d8964c _public_6d8964c
#define public_6d89657 _public_6d89657
#define public_6d8965f _public_6d8965f
#define public_6d89694 _public_6d89694
#define public_6d896b0 _public_6d896b0
#define public_6d896bb _public_6d896bb
#define public_6d896c3 _public_6d896c3
#define public_6d896ea _public_6d896ea
#define public_6d8973e _public_6d8973e
#define public_6d89750 _public_6d89750

PROC_DECLARE(0x6d89410, internal_6d89410, public_6d89410);
extern "C" NAKED register_t __cdecl internal_6d89410()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db2542 @0x6d89412*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db2542
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x3C
        push edi
        lea eax, ss:[esp+4]
        push eax
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+8]
        push 4
        push 2
        mov dword ptr ss : [esp+0x18], edi
        call public_6d96300
        test eax, eax
        jne public_6d89750
        mov ecx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0x58]
        push ecx
        push esi
        call public_6d8c830
        mov eax, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [esi+0xDC]
        mov byte ptr ds : [eax+0x9C], dl
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+0xAC]
        mov dword ptr ds : [edx+0xBC], ecx
        mov ax, word ptr ds : [esi+0xB0]
        mov ecx, dword ptr ss : [esp+0x10]
        mov word ptr ds : [ecx+0xC0], ax
        mov dl, byte ptr ds : [esi+0xB4]
        mov eax, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0xC2], dl
        mov ecx, dword ptr ds : [esi+0xD0]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+0xB8], ecx
        mov eax, dword ptr ds : [esi+0xB8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0xA0], eax
        mov edx, dword ptr ds : [esi+0xBC]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0xA4], edx
        mov ecx, dword ptr ds : [esi+0xC0]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+0xA8], ecx
        mov eax, dword ptr ds : [esi+0xC4]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0xAC], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+0xC8]
        mov dword ptr ds : [eax+0xB0], edx
        mov ecx, dword ptr ds : [esi+0xCC]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+0xB4], ecx
        mov al, byte ptr ds : [esi+0xA8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [ecx+0xE8], al
        mov dx, word ptr ds : [esi+0xD8]
        mov eax, dword ptr ss : [esp+0x10]
        add esp, 8
        mov word ptr ds : [eax+0xC4], dx
        call dword ptr ds : [public_6db305c]
        test al, al
        jne public_6d8973e
        push ebx
        xor ebx, ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov byte ptr ss : [esp+0x38], bl
        mov byte ptr ss : [esp+0x39], bl
        mov byte ptr ss : [esp+0x3A], bl
        mov byte ptr ss : [esp+0x3B], bl
        mov byte ptr ss : [esp+0x3C], bl
        mov byte ptr ss : [esp+0x3D], bl
        mov byte ptr ss : [esp+0x3E], bl
        mov byte ptr ss : [esp+0x3F], bl
        mov byte ptr ss : [esp+0x40], bl
        mov byte ptr ss : [esp+0x41], bl
        mov byte ptr ss : [esp+0x42], bl
        mov byte ptr ss : [esp+0x43], bl
        mov byte ptr ss : [esp+0x44], bl
        mov byte ptr ss : [esp+0x45], bl
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ss : [esp+0x20], bl
        mov byte ptr ss : [esp+0x21], bl
        mov byte ptr ss : [esp+0x22], bl
        mov byte ptr ss : [esp+0x23], bl
        mov byte ptr ss : [esp+0x24], bl
        mov byte ptr ss : [esp+0x25], bl
        mov byte ptr ss : [esp+0x26], bl
        mov byte ptr ss : [esp+0x27], bl
        mov byte ptr ss : [esp+0x28], bl
        mov byte ptr ss : [esp+0x29], bl
        mov byte ptr ss : [esp+0x2A], bl
        mov byte ptr ss : [esp+0x2B], bl
        mov byte ptr ss : [esp+0x2C], bl
        mov byte ptr ss : [esp+0x2D], bl
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        add ecx, 0x2C
        push ecx
        mov byte ptr ss : [esp+0x60], 1
        mov dword ptr ss : [esp+0x20], ebx
        call dword ptr ds : [public_6db30e4]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0x10
        cmp eax, ebx
        je public_6d89616
        push eax
        call dword ptr ds : [public_6db31ec]
        add esp, 4
        cmp eax, ebx
        je public_6d89616
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        push edx
        call public_6d97ce0
        jmp public_6d896ea
        public_6d89616 : nop
        mov esi, dword ptr ss : [esp+0x30]
        cmp esi, ebx
        mov eax, dword ptr ss : [esp+0xC]
        push ebp
        lea ebp, ds:[eax+0xC8]
        mov edi, 6
        je public_6d8965f
        mov edi, edi
        public_6d89630 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6d8964c
        xor ecx, ecx
        cmp eax, 0x4E
        sete cl
        dec ecx
        and ecx, 0xFFFFFFF0
        add ecx, 0x17
        mov eax, ecx
        jmp public_6d89657
        public_6d8964c : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6d88d20
        add eax, 3
        public_6d89657 : nop
        mov esi, dword ptr ds : [esi]
        add edi, eax
        cmp esi, ebx
        jne public_6d89630
        public_6d8965f : nop
        push edi
        mov dword ptr ss : [ebp], edi
        call public_6db1f8a
        mov edx, dword ptr ss : [ebp]
        add esp, 4
        push edx
        push eax
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [ebp+4], eax
        call dword ptr ds : [public_6db30dc]
        mov esi, dword ptr ss : [esp+0x1C]
        cmp esi, ebx
        mov eax, dword ptr ss : [esp+0x10]
        lea ebp, ds:[eax+0xD0]
        mov edi, 6
        je public_6d896c3
        public_6d89694 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6d896b0
        xor ecx, ecx
        cmp eax, 0x4E
        sete cl
        dec ecx
        and ecx, 0xFFFFFFF0
        add ecx, 0x17
        mov eax, ecx
        jmp public_6d896bb
        public_6d896b0 : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6d88d20
        add eax, 3
        public_6d896bb : nop
        mov esi, dword ptr ds : [esi]
        add edi, eax
        cmp esi, ebx
        jne public_6d89694
        public_6d896c3 : nop
        push edi
        mov dword ptr ss : [ebp], edi
        call public_6db1f8a
        mov edx, dword ptr ss : [ebp]
        add esp, 4
        push edx
        push eax
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [ebp+4], eax
        call dword ptr ds : [public_6db30dc]
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x60]
        pop ebp
        public_6d896ea : nop
        mov eax, dword ptr ss : [esp+0xC]
        lea ecx, ds:[eax+0xE0]
        push ebx
        push ecx
        add eax, 0x2C
        push eax
        call dword ptr ds : [public_6db30ec]
        mov eax, dword ptr ss : [esp+0x18]
        lea edx, ds:[eax+0xE4]
        push edx
        add esi, 0xD4
        add eax, 0x2C
        push esi
        push eax
        call dword ptr ds : [public_6db30e8]
        mov esi, dword ptr ds : [public_6db3094]
        add esp, 0x18
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x50], bl
        call esi
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call esi
        pop ebx
        public_6d8973e : nop
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ds : [edi]
        push ecx
        push edx
        mov ecx, edi
        call dword ptr ds : [eax+0x24]
        pop esi
        public_6d89750 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 8
        UNREACHABLE_TRAP(0x6d89410)
    }
}

#undef public_6d89616
#undef public_6d89630
#undef public_6d8964c
#undef public_6d89657
#undef public_6d8965f
#undef public_6d89694
#undef public_6d896b0
#undef public_6d896bb
#undef public_6d896c3
#undef public_6d896ea
#undef public_6d8973e
#undef public_6d89750
