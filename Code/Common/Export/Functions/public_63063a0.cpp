#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d36);
CLANG_FORWARD_PROC_SYMBOL(public_6391d3c);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639604c);

#define public_63063d6 _public_63063d6
#define public_63063e6 _public_63063e6
#define public_630640b _public_630640b
#define public_630640d _public_630640d
#define public_6306443 _public_6306443
#define public_6306445 _public_6306445
#define public_6306533 _public_6306533
#define public_630656a _public_630656a
#define public_6306577 _public_6306577

PROC_DECLARE(0x63063a0, internal_63063a0, public_63063a0);
extern "C" NAKED register_t __cdecl internal_63063a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639604c @0x63063a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639604c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x508
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp ecx, ebx
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        je public_63063d6
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi+4], ebx
        public_63063d6 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        je public_63063e6
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+8], ebx
        public_63063e6 : nop
        push 0xDC
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        cmp eax, ebx
        mov dword ptr ss : [esp+0x51C], ebx
        je public_630640b
        mov ecx, eax
        call public_6391d3c
        jmp public_630640d
        public_630640b : nop
        xor eax, eax
        public_630640d : nop
        or edi, 0xFFFFFFFF
        push 0xDC
        mov dword ptr ss : [esp+0x520], edi
        mov dword ptr ds : [esi+4], eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        cmp eax, ebx
        mov dword ptr ss : [esp+0x51C], 1
        je public_6306443
        mov ecx, eax
        call public_6391d3c
        jmp public_6306445
        public_6306443 : nop
        xor eax, eax
        public_6306445 : nop
        mov dword ptr ds : [esi+8], eax
        lea eax, ss:[esp+0x10]
        push eax
/*FIXUP push offset public_63a2fbc @0x630644d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2fbc
        push 0x80000001
        mov dword ptr ss : [esp+0x528], edi
        call dword ptr ds : [public_6399000]
        test eax, eax
        jne public_6306577
        mov ecx, dword ptr ds : [public_63a3014]
        mov eax, dword ptr ds : [public_63a301c]
        mov edx, dword ptr ds : [public_63a3018]
        mov dword ptr ss : [esp+0x94], ecx
        mov cx, word ptr ds : [public_63a3020]
        mov dword ptr ss : [esp+0x9C], eax
        mov word ptr ss : [esp+0xA0], cx
        xor eax, eax
        mov dword ptr ss : [esp+0x98], edx
        mov edx, dword ptr ds : [public_63a3000]
        mov ecx, 0x1C
        lea edi, ss:[esp+0xA2]
        rep stosd
        mov ecx, dword ptr ds : [public_63a3008]
        stosw 
        mov eax, dword ptr ds : [public_63a3004]
        mov dword ptr ss : [esp+0x18], eax
        mov al, byte ptr ds : [public_63a3010]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [public_63a300c]
        mov dword ptr ss : [esp+0x1C], ecx
        mov byte ptr ss : [esp+0x24], al
        mov dword ptr ss : [esp+0x20], edx
        xor eax, eax
        mov ecx, 0x1B
        lea edi, ss:[esp+0x25]
        rep stosd
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        stosw 
        lea edx, ss:[esp+0x118]
        push edx
        push ebx
        stosb 
        mov edi, dword ptr ds : [public_6399018]
        push ebx
        lea eax, ss:[esp+0xA4]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x24], 0x400
        call edi
        test eax, eax
        jne public_6306533
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x114]
        push edx
        call public_6391d36
        public_6306533 : nop
        lea eax, ss:[esp+0xC]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x118]
        push ecx
        push ebx
        push ebx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        mov dword ptr ss : [esp+0x24], 0x400
        call edi
        test eax, eax
        jne public_630656a
        lea ecx, ss:[esp+0x114]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        call public_6391d36
        public_630656a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        mov bl, 1
        call dword ptr ds : [public_6399014]
        public_6306577 : nop
        mov ecx, dword ptr ss : [esp+0x514]
        pop edi
        pop esi
        mov al, bl
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x514
        ret 
        UNREACHABLE_TRAP(0x63063a0)
    }
}

#undef public_63063d6
#undef public_63063e6
#undef public_630640b
#undef public_630640d
#undef public_6306443
#undef public_6306445
#undef public_6306533
#undef public_630656a
#undef public_6306577
