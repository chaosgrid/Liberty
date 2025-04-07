#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da2980);
CLANG_FORWARD_PROC_SYMBOL(public_6da3180);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_JUMP_SYMBOL(public_6db29c9);

#define public_6da2a0d _public_6da2a0d
#define public_6da2a1b _public_6da2a1b
#define public_6da2a38 _public_6da2a38
#define public_6da2a41 _public_6da2a41
#define public_6da2a69 _public_6da2a69

PROC_DECLARE(0x6da2980, internal_6da2980, public_6da2980);
extern "C" NAKED register_t __cdecl internal_6da2980()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db29c9 @0x6da2982*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db29c9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        mov al, byte ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        push ebx
        push esi
        push edi
        or ecx, 0xFFFFFFFF
        xor ebx, ebx
        mov byte ptr ss : [esp+0x10], al
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push edx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        call dword ptr ds : [public_6db3178]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, offset public_6dbbf64
        mov dword ptr ss : [esp+0x30], ebx
        call public_6da3180
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, dword ptr ds : [public_6dbbf68]
        je public_6da2a0d
        add eax, 0xC
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [public_6db3174]
        add esp, 8
        test al, al
        jne public_6da2a0d
        lea eax, ss:[esp+0x30]
        jmp public_6da2a1b
        public_6da2a0d : nop
        mov ecx, dword ptr ds : [public_6dbbf68]
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_6da2a1b : nop
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        je public_6da2a41
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6da2a38
        cmp cl, 0xFF
        je public_6da2a38
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6da2a41
        public_6da2a38 : nop
        push eax
        call public_6db1dc2
        add esp, 4
        public_6da2a41 : nop
        cmp esi, dword ptr ds : [public_6dbbf68]
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        jne public_6da2a69
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        public_6da2a69 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6da2980)
    }
}

#undef public_6da2a0d
#undef public_6da2a1b
#undef public_6da2a38
#undef public_6da2a41
#undef public_6da2a69
