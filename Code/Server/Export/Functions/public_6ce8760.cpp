#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecba0);
CLANG_FORWARD_PROC_SYMBOL(public_6ced1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d08a40);
CLANG_FORWARD_PROC_SYMBOL(public_6d28880);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60568);

#define public_6ce87c3 _public_6ce87c3
#define public_6ce87e3 _public_6ce87e3
#define public_6ce8803 _public_6ce8803
#define public_6ce8842 _public_6ce8842
#define public_6ce8850 _public_6ce8850
#define public_6ce8875 _public_6ce8875
#define public_6ce88ae _public_6ce88ae

PROC_DECLARE(0x6ce8760, internal_6ce8760, public_6ce8760);
extern "C" NAKED register_t __cdecl internal_6ce8760()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60568 @0x6ce8762*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60568
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        mov al, byte ptr ss : [esp+0x28]
        push ebx
        push ebp
        mov byte ptr ss : [esp+0x10], al
        xor edx, edx
        push esi
        mov ebx, ecx
        xor eax, eax
        push edi
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], edx
        mov edi, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, edx
        mov dword ptr ss : [esp+0x30], edx
        je public_6ce8842
        mov esi, dword ptr ds : [edi+8]
        sub esi, ecx
        sar esi, 5
        cmp esi, edx
        jbe public_6ce8842
        mov eax, esi
        jge public_6ce87c3
        xor eax, eax
        public_6ce87c3 : nop
        imul eax, 0x6C
        push eax
        call public_6d60012
        mov edi, dword ptr ss : [esp+0x20]
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp edi, eax
        mov ebp, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_6ce8803
        public_6ce87e3 : nop
        push edi
        push ebp
        call public_6ced1f0
        mov eax, dword ptr ss : [esp+0x18]
        add edi, 0x6C
        add esp, 8
        add ebp, 0x6C
        cmp edi, eax
        jne public_6ce87e3
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x1C]
        public_6ce8803 : nop
        push eax
        push edi
        lea ecx, ss:[esp+0x20]
        call public_6d28880
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        call public_6d5ffb0
        imul esi, 0x6C
        add esi, ebx
        add esp, 4
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x24], esi
        call public_6cecba0
        imul eax, 0x6C
        mov edi, dword ptr ss : [esp+0x38]
        add eax, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov ebx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x20], eax
        public_6ce8842 : nop
        mov esi, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        xor ebp, ebp
        cmp esi, ecx
        je public_6ce8875
        mov edi, edi
        public_6ce8850 : nop
        cmp ebp, 6
        jge public_6ce8875
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x18]
        push eax
        push esi
        mov ecx, ebx
        call dword ptr ds : [edx+0x244]
        add ebp, eax
        mov eax, dword ptr ds : [edi+8]
        add esi, 0x20
        cmp esi, eax
        mov eax, dword ptr ss : [esp+0x20]
        jne public_6ce8850
        public_6ce8875 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        test ecx, ecx
        je public_6ce88ae
        sub eax, ecx
        mov ecx, eax
        mov eax, 0x4BDA12F7
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        test edx, edx
        je public_6ce88ae
        mov eax, dword ptr ds : [ebx]
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push 2
        mov ecx, ebx
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ds : [ebx+0x28]
        push eax
        call public_6d08a40
        public_6ce88ae : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6ce8760)
    }
}

#undef public_6ce87c3
#undef public_6ce87e3
#undef public_6ce8803
#undef public_6ce8842
#undef public_6ce8850
#undef public_6ce8875
#undef public_6ce88ae
