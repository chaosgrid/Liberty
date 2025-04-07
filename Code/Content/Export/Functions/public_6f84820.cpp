#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb09b3);

#define public_6f84888 _public_6f84888
#define public_6f84890 _public_6f84890
#define public_6f84896 _public_6f84896
#define public_6f848c0 _public_6f848c0
#define public_6f848d8 _public_6f848d8
#define public_6f8490d _public_6f8490d
#define public_6f84915 _public_6f84915
#define public_6f8491b _public_6f8491b
#define public_6f84940 _public_6f84940
#define public_6f84948 _public_6f84948
#define public_6f84952 _public_6f84952
#define public_6f849a0 _public_6f849a0

PROC_DECLARE(0x6f84820, internal_6f84820, public_6f84820);
extern "C" NAKED register_t __cdecl internal_6f84820()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb09b3 @0x6f84822*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb09b3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push 0x90
        mov ebx, ecx
        call public_6fa912a
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], ebp
        test ebp, ebp
        mov dword ptr ss : [esp+0x18], 0
        je public_6f849a0
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [ebp+0x10], eax
        mov cl, byte ptr ds : [ebx+0x14]
        mov byte ptr ss : [ebp+0x14], cl
        mov ecx, dword ptr ds : [ebx+0x18]
        test ecx, ecx
        jne public_6f84888
        xor eax, eax
        jmp public_6f84890
        public_6f84888 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        sub eax, ecx
        sar eax, 2
        public_6f84890 : nop
        test eax, eax
        jge public_6f84896
        xor eax, eax
        public_6f84896 : nop
        push esi
        lea edx, ds:[eax*4]
        push edi
        push edx
        call public_6fa912a
        mov dword ptr ss : [ebp+0x18], eax
        mov ecx, dword ptr ds : [ebx+0x1C]
        mov edi, dword ptr ds : [ebx+0x18]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov esi, eax
        je public_6f848d8
        nop 
        lea esp, ss:[esp]
        public_6f848c0 : nop
        push edi
        push esi
        call public_6eb6740
        mov eax, dword ptr ss : [esp+0x18]
        add edi, 4
        add esp, 8
        add esi, 4
        cmp edi, eax
        jne public_6f848c0
        public_6f848d8 : nop
        mov dword ptr ss : [ebp+0x1C], esi
        mov dword ptr ss : [ebp+0x20], esi
        mov eax, dword ptr ds : [ebx+0x24]
        mov dword ptr ss : [ebp+0x24], eax
        mov ecx, dword ptr ds : [ebx+0x28]
        mov dword ptr ss : [ebp+0x28], ecx
        mov edx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ss : [ebp+0x2C], edx
        mov dword ptr ss : [ebp], offset public_6fb6268
        mov al, byte ptr ds : [ebx+0x30]
        mov byte ptr ss : [ebp+0x30], al
        mov ecx, dword ptr ds : [ebx+0x34]
        test ecx, ecx
        mov byte ptr ss : [esp+0x20], 1
        jne public_6f8490d
        xor eax, eax
        jmp public_6f84915
        public_6f8490d : nop
        mov eax, dword ptr ds : [ebx+0x38]
        sub eax, ecx
        sar eax, 2
        public_6f84915 : nop
        test eax, eax
        jge public_6f8491b
        xor eax, eax
        public_6f8491b : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        mov dword ptr ss : [ebp+0x34], eax
        mov edx, dword ptr ds : [ebx+0x38]
        mov ecx, eax
        mov eax, dword ptr ds : [ebx+0x34]
        add esp, 4
        cmp eax, edx
        je public_6f84952
        lea ebx, ds:[ebx]
        public_6f84940 : nop
        test ecx, ecx
        je public_6f84948
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_6f84948 : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f84940
        public_6f84952 : nop
        mov dword ptr ss : [ebp+0x38], ecx
        mov dword ptr ss : [ebp+0x3C], ecx
        mov dword ptr ss : [ebp], offset public_6fb623c
        mov edx, dword ptr ds : [ebx+0x40]
        mov dword ptr ss : [ebp+0x40], edx
        mov eax, dword ptr ds : [ebx+0x44]
        mov dword ptr ss : [ebp+0x44], eax
        lea esi, ds:[ebx+0x48]
        lea edi, ss:[ebp+0x48]
        mov ecx, 0x11
        rep movsd
        mov cl, byte ptr ds : [ebx+0x8C]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x8C], cl
        mov dword ptr ss : [ebp], offset public_6fbc648
        mov eax, ebp
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        public_6f849a0 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop ebp
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f84820)
    }
}

#undef public_6f84888
#undef public_6f84890
#undef public_6f84896
#undef public_6f848c0
#undef public_6f848d8
#undef public_6f8490d
#undef public_6f84915
#undef public_6f8491b
#undef public_6f84940
#undef public_6f84948
#undef public_6f84952
#undef public_6f849a0
