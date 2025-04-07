#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624a786);

#define public_6240b05 _public_6240b05
#define public_6240b29 _public_6240b29
#define public_6240b2d _public_6240b2d
#define public_6240b32 _public_6240b32
#define public_6240b77 _public_6240b77
#define public_6240b93 _public_6240b93
#define public_6240bd8 _public_6240bd8
#define public_6240bec _public_6240bec
#define public_6240c11 _public_6240c11
#define public_6240c24 _public_6240c24
#define public_6240c31 _public_6240c31
#define public_6240c37 _public_6240c37
#define public_6240c39 _public_6240c39

PROC_DECLARE(0x6240ad0, internal_6240ad0, public_6240ad0);
extern "C" NAKED register_t __cdecl internal_6240ad0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624a786 @0x6240ad8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a786
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        push edi
        mov eax, dword ptr ss : [ebp]
        xor edi, edi
        cmp eax, 8
        jne public_6240c24
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        public_6240b05 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6240b2d
        test cl, cl
        je public_6240b29
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6240b2d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6240b05
        public_6240b29 : nop
        xor eax, eax
        jmp public_6240b32
        public_6240b2d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6240b32 : nop
        cmp eax, edi
        jne public_6240c24
        push 0x54
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], esi
        cmp esi, edi
        mov dword ptr ss : [esp+0x18], edi
        je public_6240b77
        lea edi, ds:[esi+4]
        mov dword ptr ds : [esi], offset public_624ba48
        mov ecx, edi
        call public_623f7b0
        mov dword ptr ds : [edi], offset public_624f9e0
        mov dword ptr ds : [esi], offset public_624f980
        mov dword ptr ds : [esi+0x50], 1
        mov edi, esi
        public_6240b77 : nop
        test edi, edi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        jne public_6240b93
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], edi
        jmp public_6240c39
        public_6240b93 : nop
        mov edx, dword ptr ds : [edi+4]
        lea esi, ds:[edi+4]
        push ebp
        push esi
        call dword ptr ds : [edx]
        mov ebp, eax
        test ebp, ebp
        je public_6240c31
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ds : [esi+0x28], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x34]
        test eax, eax
        mov dword ptr ss : [esp+0x18], 1
        mov dword ptr ds : [esi+0x30], offset public_624bd80
        je public_6240bd8
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        je public_6240bd8
        push eax
        call public_62460e0
        add esp, 4
        public_6240bd8 : nop
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_6240bec
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x24], 0
        public_6240bec : nop
        mov dword ptr ds : [esi+4], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov dword ptr ds : [esi+0xC], offset public_624bd80
        je public_6240c11
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        je public_6240c11
        push esi
        call public_62460e0
        add esp, 4
        public_6240c11 : nop
        push edi
        call public_62460e0
        mov edx, dword ptr ss : [esp+0x2C]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edx], eax
        jmp public_6240c37
        public_6240c24 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], edi
        jmp public_6240c39
        public_6240c31 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx], edi
        public_6240c37 : nop
        mov eax, ebp
        public_6240c39 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6240ad0)
    }
}

#undef public_6240b05
#undef public_6240b29
#undef public_6240b2d
#undef public_6240b32
#undef public_6240b77
#undef public_6240b93
#undef public_6240bd8
#undef public_6240bec
#undef public_6240c11
#undef public_6240c24
#undef public_6240c31
#undef public_6240c37
#undef public_6240c39
