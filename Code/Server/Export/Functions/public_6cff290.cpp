#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0b260);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f600);
CLANG_FORWARD_PROC_SYMBOL(public_6d28880);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60e47);

#define public_6cff356 _public_6cff356
#define public_6cff4b8 _public_6cff4b8
#define public_6cff4d4 _public_6cff4d4
#define public_6cff4e0 _public_6cff4e0
#define public_6cff4e2 _public_6cff4e2
#define public_6cff506 _public_6cff506
#define public_6cff514 _public_6cff514
#define public_6cff52e _public_6cff52e

PROC_DECLARE(0x6cff290, internal_6cff290, public_6cff290);
extern "C" NAKED register_t __cdecl internal_6cff290()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d60e47 @0x6cff298*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60e47
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xF4
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [eax+0x18]
        xor ebx, ebx
        test al, al
        jne public_6cff4b8
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x50]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cff4b8
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, ebx
        je public_6cff4b8
        mov eax, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [esi+0x24]
        lea edx, ss:[esp+0xB8]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        push eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x1C]
        push eax
        call dword ptr ds : [public_6d64588]
        add esp, 0x10
        test al, al
        je public_6cff4b8
        mov ecx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0xB8]
        push edx
        call dword ptr ds : [eax+0x1C]
        push eax
        call dword ptr ds : [public_6d64584]
        mov eax, dword ptr ds : [public_6d8d8d0]
        add esp, 8
        cmp eax, ebx
        jne public_6cff356
        call public_6d5ff70
        mov dword ptr ds : [public_6d8d8d0], eax
        public_6cff356 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x38]
        push edx
        lea edx, ss:[esp+0xCC]
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0xC4]
/*FIXUP push offset public_6d66f88 @0x6cff378*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66f88
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0xC4]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0xC0]
        fstp dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x24]
        call dword ptr ds : [public_6d643b4]
        mov dword ptr ss : [esp+0x18], eax
        add esp, 4
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x54]
        call dword ptr ds : [public_6d64580]
        mov ecx, dword ptr ds : [esi+0x30]
        mov edx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [esi+0x34]
        mov dword ptr ss : [esp+0x54], ecx
        mov ecx, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [esp+0x58], edx
        mov dword ptr ss : [esp+0x5C], eax
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], 4
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x108], ebx
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x3C], ecx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x38], eax
        lea eax, ss:[esp+0x50]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x38], 0x15
        mov dword ptr ss : [esp+0x44], edx
        mov dword ptr ss : [esp+0x48], eax
        call public_6d0b260
        mov edx, dword ptr ss : [esp+0xA4]
        push edx
        mov dword ptr ss : [esp+0x10C], 1
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0x9C]
        mov ecx, dword ptr ss : [esp+0x98]
        add esp, 4
        push eax
        push ecx
        lea ecx, ss:[esp+0x98]
        mov dword ptr ss : [esp+0xAC], ebx
        mov dword ptr ss : [esp+0xB0], ebx
        mov dword ptr ss : [esp+0xB4], ebx
        call public_6d28880
        mov edx, dword ptr ss : [esp+0x94]
        push edx
        call public_6d5ffb0
        add esp, 4
        mov dword ptr ss : [esp+0x94], ebx
        mov dword ptr ss : [esp+0x98], ebx
        mov dword ptr ss : [esp+0x9C], ebx
        mov dword ptr ss : [esp+0x108], 0xFFFFFFFF
        lea ecx, ss:[esp+0x70]
        call public_6cecb50
        public_6cff4b8 : nop
        mov edx, dword ptr ss : [esp+0x114]
        mov byte ptr ds : [esi+0x10], 1
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x1C]
        add esi, 0x14
        cmp eax, ecx
        mov dword ptr ss : [esp+0x24], edx
        je public_6cff4e0
        public_6cff4d4 : nop
        cmp word ptr ds : [eax], dx
        je public_6cff4e2
        add eax, 2
        cmp eax, ecx
        jne public_6cff4d4
        public_6cff4e0 : nop
        mov eax, ecx
        public_6cff4e2 : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0x28], eax
        jne public_6cff514
        lea eax, ss:[esp+0x24]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6d6456c]
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_6cff52e
        mov ecx, dword ptr ss : [esp+0x24]
        public_6cff506 : nop
        cmp word ptr ds : [eax], cx
        je public_6cff52e
        add eax, 2
        cmp eax, esi
        jne public_6cff506
        jmp public_6cff52e
        public_6cff514 : nop
        lea ecx, ss:[esp+0xF]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        lea ecx, ss:[esp+0xB8]
        mov byte ptr ss : [esp+0x17], bl
        call public_6d0f600
        public_6cff52e : nop
        mov ecx, dword ptr ss : [esp+0x100]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x100
        ret 8
        UNREACHABLE_TRAP(0x6cff290)
    }
}

#undef public_6cff356
#undef public_6cff4b8
#undef public_6cff4d4
#undef public_6cff4e0
#undef public_6cff4e2
#undef public_6cff506
#undef public_6cff514
#undef public_6cff52e
