#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eae440);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f956c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6f97d90);
CLANG_FORWARD_PROC_SYMBOL(public_6f9ac80);
CLANG_FORWARD_PROC_SYMBOL(public_6f9af40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1940);

#define public_6f9ad1e _public_6f9ad1e
#define public_6f9ad35 _public_6f9ad35
#define public_6f9ad7b _public_6f9ad7b
#define public_6f9ad92 _public_6f9ad92
#define public_6f9ade5 _public_6f9ade5
#define public_6f9ae0a _public_6f9ae0a
#define public_6f9ae1b _public_6f9ae1b
#define public_6f9ae2e _public_6f9ae2e
#define public_6f9ae3d _public_6f9ae3d
#define public_6f9ae41 _public_6f9ae41
#define public_6f9ae90 _public_6f9ae90
#define public_6f9aef5 _public_6f9aef5
#define public_6f9af0a _public_6f9af0a
#define public_6f9af23 _public_6f9af23

PROC_DECLARE(0x6f9ac80, internal_6f9ac80, public_6f9ac80);
extern "C" NAKED register_t __cdecl internal_6f9ac80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1940 @0x6f9ac82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1940
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        mov eax, dword ptr ss : [esp+0x4C]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x54]
        push edi
        lea edi, ds:[esi+0x20]
        mov ebp, ecx
        lea ecx, ds:[eax+0x34]
        mov edx, edi
        mov ebx, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], ebx
        mov edx, dword ptr ds : [edx+8]
        xor ebx, ebx
        mov byte ptr ds : [eax+0xC], 1
        mov al, byte ptr ss : [esp+0x5C]
        mov dword ptr ds : [ecx+8], edx
        mov byte ptr ss : [esp+0x28], al
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        cmp byte ptr ss : [ebp+0xC], bl
        mov dword ptr ss : [esp+0x50], ebx
        je public_6f9ad35
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x14], ebx
        call public_6eb5f30
        mov ecx, dword ptr ss : [esp+0x30]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jne public_6f9ad1e
        lea edx, ss:[esp+0x10]
        push edx
        push ecx
        lea ecx, ss:[esp+0x30]
        call public_6eae440
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_6eb5f30
        jmp public_6f9ad35
        public_6f9ad1e : nop
        lea ecx, ss:[esp+0x58]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x60], bl
        call public_6fa6e80
        public_6f9ad35 : nop
        cmp byte ptr ss : [ebp+0xE], bl
        je public_6f9ad92
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x14], 1
        call public_6eb5f30
        mov ecx, dword ptr ss : [esp+0x30]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jne public_6f9ad7b
        lea edx, ss:[esp+0x10]
        push edx
        push ecx
        lea ecx, ss:[esp+0x30]
        call public_6eae440
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_6eb5f30
        jmp public_6f9ad92
        public_6f9ad7b : nop
        lea ecx, ss:[esp+0x58]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x60], bl
        call public_6fa6e80
        public_6f9ad92 : nop
        lea eax, ss:[esp+0x28]
        push eax
        call public_6f97d90
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], eax
        je public_6f9af23
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ds:[esi+0x30]
        push edi
        push edx
        call dword ptr ds : [public_6fb35bc]
        mov al, byte ptr ss : [esp+0x68]
        add esp, 0xC
        mov byte ptr ss : [esp+0x38], al
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov edi, dword ptr ss : [esp+0x2C]
        cmp edi, dword ptr ss : [esp+0x30]
        mov byte ptr ss : [esp+0x50], 1
        je public_6f9ae90
        public_6f9ade5 : nop
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [esi+0x18]
        mov eax, ecx
        sub eax, ebx
        mov dword ptr ss : [esp+0x58], edx
        je public_6f9ae1b
        dec eax
        jne public_6f9ae41
        cmp byte ptr ss : [ebp+0x13], bl
        je public_6f9ae0a
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [public_6fbd188]
        fstp dword ptr ss : [esp+0x58]
        public_6f9ae0a : nop
        cmp byte ptr ss : [ebp+0xC], bl
        je public_6f9ae41
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [public_6fbd184]
        jmp public_6f9ae3d
        public_6f9ae1b : nop
        cmp byte ptr ss : [ebp+0x13], bl
        je public_6f9ae2e
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [public_6fbd188]
        fstp dword ptr ss : [esp+0x58]
        public_6f9ae2e : nop
        cmp byte ptr ss : [ebp+0xE], bl
        je public_6f9ae41
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [public_6fbd180]
        public_6f9ae3d : nop
        fstp dword ptr ss : [esp+0x58]
        public_6f9ae41 : nop
        mov eax, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x1C]
        push eax
        mov eax, dword ptr ds : [esi+4]
        push edx
        push ecx
        push eax
        call public_6f956c0
        add esp, 0x10
        cmp eax, ebx
        je public_6f9af0a
        mov ecx, dword ptr ss : [esp+0x58]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x44]
        push 1
        mov dword ptr ss : [esp+0x1C], ecx
        push eax
        lea ecx, ss:[esp+0x44]
        call public_6f96770
        mov eax, dword ptr ss : [esp+0x30]
        add edi, 4
        cmp edi, eax
        jne public_6f9ade5
        public_6f9ae90 : nop
        mov edx, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x18]
        add edx, 0x40
        push edx
        mov edx, dword ptr ds : [esi+0x18]
        lea eax, ss:[esp+0x3C]
        push eax
        mov eax, dword ptr ds : [esi+4]
        push ecx
        push edx
        push eax
        push esi
        mov ecx, ebp
        call public_6f9af40
        mov ecx, dword ptr ss : [esp+0x3C]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 4
        push edx
        push eax
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x58], 0xFFFFFFFF
        call public_6ea1490
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        call public_6fa8fe0
        add esp, 4
        mov al, 1
        public_6f9aef5 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 8
        public_6f9af0a : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        push ecx
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        public_6f9af23 : nop
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call public_6eec8d0
        xor al, al
        jmp public_6f9aef5
        UNREACHABLE_TRAP(0x6f9ac80)
    }
}

#undef public_6f9ad1e
#undef public_6f9ad35
#undef public_6f9ad7b
#undef public_6f9ad92
#undef public_6f9ade5
#undef public_6f9ae0a
#undef public_6f9ae1b
#undef public_6f9ae2e
#undef public_6f9ae3d
#undef public_6f9ae41
#undef public_6f9ae90
#undef public_6f9aef5
#undef public_6f9af0a
#undef public_6f9af23
