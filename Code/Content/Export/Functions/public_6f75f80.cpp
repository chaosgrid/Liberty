#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f721c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f75d10);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f79d30);
CLANG_FORWARD_PROC_SYMBOL(public_6f7c5b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb02b6);

#define public_6f75fc0 _public_6f75fc0
#define public_6f76010 _public_6f76010
#define public_6f76020 _public_6f76020
#define public_6f76023 _public_6f76023
#define public_6f76027 _public_6f76027
#define public_6f76056 _public_6f76056
#define public_6f76097 _public_6f76097
#define public_6f760a4 _public_6f760a4
#define public_6f760cf _public_6f760cf
#define public_6f760de _public_6f760de
#define public_6f76128 _public_6f76128

PROC_DECLARE(0x6f75f80, internal_6f75f80, public_6f75f80);
extern "C" NAKED register_t __cdecl internal_6f75f80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb02b6 @0x6f75f82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb02b6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x270
        lea eax, ss:[esp+8]
        push eax
        mov dword ptr ss : [esp+0xC], 0
        call dword ptr ds : [public_6fb35a0]
        add esp, 4
        test al, al
        je public_6f76128
        push ebx
        push esi
        push edi
        mov bl, 1
        mov edi, edi
        public_6f75fc0 : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x15C]
        call public_6f721c0
        mov edx, dword ptr ss : [esp+0x14]
        push eax
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x288], 0
        mov dword ptr ss : [esp+0x34], edx
        call public_6f79d30
        mov edi, dword ptr ds : [public_6fd3a60]
        mov esi, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [public_6fd3a64]
        cmp esi, ecx
        mov edx, dword ptr ss : [esp+0x30]
        mov byte ptr ss : [esp+0x284], bl
        mov al, bl
        je public_6f76027
        mov edi, edi
        public_6f76010 : nop
        cmp edx, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        mov edi, esi
        je public_6f76020
        mov esi, dword ptr ds : [esi]
        jmp public_6f76023
        public_6f76020 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6f76023 : nop
        cmp esi, ecx
        jne public_6f76010
        public_6f76027 : nop
        mov cl, byte ptr ds : [public_6fd3a68]
        test cl, cl
        je public_6f76056
        lea eax, ss:[esp+0xE]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        push edi
        push esi
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, offset public_6fd3a5c
        mov byte ptr ss : [esp+0x22], bl
        call public_6f7c5b0
        push eax
        jmp public_6f760de
        public_6f76056 : nop
        test al, al
        mov dword ptr ss : [esp+0x10], edi
        je public_6f760a4
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, offset public_6fd3a5c
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax]
        jne public_6f76097
        lea edx, ss:[esp+0xE]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        push edi
        push esi
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, offset public_6fd3a5c
        mov byte ptr ss : [esp+0x22], bl
        call public_6f7c5b0
        push eax
        jmp public_6f760de
        public_6f76097 : nop
        lea ecx, ss:[esp+0x10]
        call public_6f7cd00
        mov edx, dword ptr ss : [esp+0x30]
        public_6f760a4 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [eax+0xC], edx
        jae public_6f760cf
        lea ecx, ss:[esp+0xE]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        push edi
        push esi
        lea eax, ss:[esp+0x3C]
        push eax
        mov ecx, offset public_6fd3a5c
        mov byte ptr ss : [esp+0x22], bl
        call public_6f7c5b0
        push eax
        jmp public_6f760de
        public_6f760cf : nop
        lea ecx, ss:[esp+0xF]
        push ecx
        lea edx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x13], 0
        push edx
        public_6f760de : nop
        lea ecx, ss:[esp+0x20]
        call public_6fa6e80
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x284], 0
        call public_6f75d10
        lea ecx, ss:[esp+0x158]
        mov dword ptr ss : [esp+0x284], 0xFFFFFFFF
        call public_6f75d10
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [public_6fb35a0]
        add esp, 4
        test al, al
        jne public_6f75fc0
        pop edi
        pop esi
        pop ebx
        public_6f76128 : nop
        mov ecx, dword ptr ss : [esp+0x270]
        mov dword ptr fs : [0], ecx
        add esp, 0x27C
        ret 
        UNREACHABLE_TRAP(0x6f75f80)
    }
}

#undef public_6f75fc0
#undef public_6f76010
#undef public_6f76020
#undef public_6f76023
#undef public_6f76027
#undef public_6f76056
#undef public_6f76097
#undef public_6f760a4
#undef public_6f760cf
#undef public_6f760de
#undef public_6f76128
