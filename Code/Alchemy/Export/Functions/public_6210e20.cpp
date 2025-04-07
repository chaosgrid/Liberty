#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ccc0);
CLANG_FORWARD_PROC_SYMBOL(public_620f4e0);
CLANG_FORWARD_PROC_SYMBOL(public_62107b0);
CLANG_FORWARD_PROC_SYMBOL(public_62107d0);
CLANG_FORWARD_PROC_SYMBOL(public_6211060);
CLANG_FORWARD_PROC_SYMBOL(public_62111b0);
CLANG_FORWARD_PROC_SYMBOL(public_6244b50);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6247da9);

#define public_6210e55 _public_6210e55
#define public_6210e79 _public_6210e79
#define public_6210e7d _public_6210e7d
#define public_6210e82 _public_6210e82
#define public_6210edc _public_6210edc
#define public_6210ede _public_6210ede
#define public_6210efa _public_6210efa
#define public_6210f98 _public_6210f98
#define public_6210fa8 _public_6210fa8
#define public_6210fe3 _public_6210fe3
#define public_6210ffa _public_6210ffa
#define public_6211007 _public_6211007
#define public_621100d _public_621100d

PROC_DECLARE(0x6210e20, internal_6210e20, public_6210e20);
extern "C" NAKED register_t __cdecl internal_6210e20()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6247da9 @0x6210e28*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247da9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x34]
        xor ebp, ebp
        cmp dword ptr ds : [edi], 8
        jne public_6210ffa
        mov eax, dword ptr ss : [esp+0x30]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+4]
        public_6210e55 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6210e7d
        test cl, cl
        je public_6210e79
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6210e7d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6210e55
        public_6210e79 : nop
        xor eax, eax
        jmp public_6210e82
        public_6210e7d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6210e82 : nop
        cmp eax, ebp
        jne public_6210ffa
        push 0x140
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x30], esi
        cmp esi, ebp
        mov dword ptr ss : [esp+0x28], ebp
        je public_6210edc
        lea edi, ds:[esi+0xC]
        mov dword ptr ds : [esi], offset public_624b8b0
        mov ecx, edi
        call public_620f4e0
        mov dword ptr ds : [edi], offset public_624c128
        mov edi, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [esi+0xB8], esi
        mov dword ptr ds : [esi+0x24], esi
        mov dword ptr ds : [esi], offset public_624c1b8
        mov dword ptr ds : [esi+0x13C], 1
        mov ebx, esi
        jmp public_6210ede
        public_6210edc : nop
        xor ebx, ebx
        public_6210ede : nop
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        jne public_6210efa
        mov ecx, dword ptr ss : [esp+0x38]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], ebx
        jmp public_621100d
        public_6210efa : nop
        mov edx, dword ptr ds : [ebx+0xC]
        lea esi, ds:[ebx+0xC]
        push edi
        push esi
        call dword ptr ds : [edx+4]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x30], eax
        je public_6211007
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x28], 1
        lea edi, ds:[esi+0xD8]
        mov dword ptr ss : [esp+0x14], edi
        push ecx
        mov ecx, edi
        mov eax, esp
        mov dword ptr ss : [esp+0x1C], esp
        push eax
        mov byte ptr ss : [esp+0x30], 3
        call public_62107d0
        push ecx
        mov byte ptr ss : [esp+0x30], 4
        mov ecx, esp
        mov dword ptr ss : [esp+0x24], esp
        push ecx
        mov ecx, edi
        call public_62107b0
        lea edx, ss:[esp+0x3C]
        mov ecx, edi
        push edx
        mov byte ptr ss : [esp+0x34], 3
        call public_6211060
        mov ecx, edi
        mov dword ptr ss : [esp+0x34], ebp
        mov byte ptr ss : [esp+0x28], 2
        call public_62111b0
        lea ecx, ds:[esi+0xB4]
        mov byte ptr ss : [esp+0x28], 1
        call public_6244b50
        mov ebp, dword ptr ds : [esi+0xA0]
        mov edi, dword ptr ds : [esi+0x9C]
        cmp edi, ebp
        mov dword ptr ss : [esp+0x28], 5
        je public_6210fa8
        public_6210f98 : nop
        push edi
        call public_620ccc0
        add edi, 4
        add esp, 4
        cmp edi, ebp
        jne public_6210f98
        public_6210fa8 : nop
        mov eax, dword ptr ds : [esi+0x9C]
        push eax
        call public_62460e0
        xor edi, edi
        add esp, 4
        mov dword ptr ds : [esi+0x9C], edi
        mov dword ptr ds : [esi+0xA0], edi
        mov dword ptr ds : [esi+0xA4], edi
        mov eax, dword ptr ds : [esi+0x7C]
        cmp eax, edi
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        je public_6210fe3
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], edi
        public_6210fe3 : nop
        push ebx
        call public_62460e0
        mov edx, dword ptr ss : [esp+0x3C]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x30]
        jmp public_621100d
        public_6210ffa : nop
        mov ecx, dword ptr ss : [esp+0x38]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], ebp
        jmp public_621100d
        public_6211007 : nop
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edx], ebx
        public_621100d : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x1C
        ret 0xC
        UNREACHABLE_TRAP(0x6210e20)
    }
}

#undef public_6210e55
#undef public_6210e79
#undef public_6210e7d
#undef public_6210e82
#undef public_6210edc
#undef public_6210ede
#undef public_6210efa
#undef public_6210f98
#undef public_6210fa8
#undef public_6210fe3
#undef public_6210ffa
#undef public_6211007
#undef public_621100d
