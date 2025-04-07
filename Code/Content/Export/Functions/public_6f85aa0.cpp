#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0aef);

#define public_6f85b06 _public_6f85b06
#define public_6f85b0e _public_6f85b0e
#define public_6f85b14 _public_6f85b14
#define public_6f85b9b _public_6f85b9b
#define public_6f85ba3 _public_6f85ba3
#define public_6f85bab _public_6f85bab
#define public_6f85bc6 _public_6f85bc6
#define public_6f85bce _public_6f85bce
#define public_6f85bd8 _public_6f85bd8
#define public_6f85bff _public_6f85bff

PROC_DECLARE(0x6f85aa0, internal_6f85aa0, public_6f85aa0);
extern "C" NAKED register_t __cdecl internal_6f85aa0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0aef @0x6f85aa2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0aef
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push 0x70
        mov ebx, ecx
        call public_6fa912a
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+8], ebp
        test ebp, ebp
        mov dword ptr ss : [esp+0x14], 0
        je public_6f85bff
        push esi
        lea eax, ds:[ebx+4]
        push eax
        lea ecx, ss:[ebp+4]
        call dword ptr ds : [public_6fb3084]
        mov ecx, dword ptr ds : [ebx+0x1C]
        mov dword ptr ss : [ebp+0x1C], ecx
        mov dl, byte ptr ds : [ebx+0x20]
        lea esi, ss:[ebp+0x20]
        mov byte ptr ds : [esi], dl
        mov ecx, dword ptr ds : [ebx+0x24]
        test ecx, ecx
        mov byte ptr ss : [esp+0x18], 1
        jne public_6f85b06
        xor eax, eax
        jmp public_6f85b0e
        public_6f85b06 : nop
        mov eax, dword ptr ds : [ebx+0x28]
        sub eax, ecx
        sar eax, 2
        public_6f85b0e : nop
        test eax, eax
        jge public_6f85b14
        xor eax, eax
        public_6f85b14 : nop
        shl eax, 2
        push edi
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+0x28]
        mov edx, dword ptr ds : [ebx+0x24]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6eed270
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ss : [ebp], offset public_6fbc700
        mov ecx, dword ptr ds : [ebx+0x30]
        mov dword ptr ss : [ebp+0x30], ecx
        mov edx, dword ptr ds : [ebx+0x34]
        mov dword ptr ss : [ebp+0x34], edx
        lea eax, ds:[ebx+0x38]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x38]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov cl, byte ptr ds : [ebx+0x44]
        mov byte ptr ss : [ebp+0x44], cl
        mov dword ptr ss : [ebp], offset public_6fbc6d8
        lea esi, ds:[ebx+0x48]
        lea edi, ss:[ebp+0x48]
        mov ecx, 5
        rep movsd
        mov dword ptr ss : [ebp], offset public_6fbc710
        mov dl, byte ptr ds : [ebx+0x5C]
        mov byte ptr ss : [ebp+0x5C], dl
        mov eax, dword ptr ds : [ebx+0x60]
        test eax, eax
        mov byte ptr ss : [esp+0x1C], 2
        pop edi
        jne public_6f85b9b
        xor ecx, ecx
        jmp public_6f85ba3
        public_6f85b9b : nop
        mov ecx, dword ptr ds : [ebx+0x64]
        sub ecx, eax
        sar ecx, 2
        public_6f85ba3 : nop
        test ecx, ecx
        mov eax, ecx
        jge public_6f85bab
        xor eax, eax
        public_6f85bab : nop
        shl eax, 2
        push eax
        call public_6fa912a
        mov dword ptr ss : [ebp+0x60], eax
        mov edx, dword ptr ds : [ebx+0x64]
        mov ecx, eax
        mov eax, dword ptr ds : [ebx+0x60]
        add esp, 4
        cmp eax, edx
        je public_6f85bd8
        public_6f85bc6 : nop
        test ecx, ecx
        je public_6f85bce
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_6f85bce : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f85bc6
        public_6f85bd8 : nop
        mov dword ptr ss : [ebp+0x64], ecx
        mov dword ptr ss : [ebp+0x68], ecx
        mov ecx, dword ptr ds : [ebx+0x6C]
        pop esi
        mov dword ptr ss : [ebp+0x6C], ecx
        mov dword ptr ss : [ebp], offset public_6fbc73c
        mov eax, ebp
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6f85bff : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop ebp
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f85aa0)
    }
}

#undef public_6f85b06
#undef public_6f85b0e
#undef public_6f85b14
#undef public_6f85b9b
#undef public_6f85ba3
#undef public_6f85bab
#undef public_6f85bc6
#undef public_6f85bce
#undef public_6f85bd8
#undef public_6f85bff
