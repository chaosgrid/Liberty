#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead190);
CLANG_FORWARD_PROC_SYMBOL(public_6eaec70);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a670);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9e2c);

#define public_6ead1d0 _public_6ead1d0
#define public_6ead1e6 _public_6ead1e6
#define public_6ead1ee _public_6ead1ee
#define public_6ead210 _public_6ead210
#define public_6ead223 _public_6ead223
#define public_6ead22d _public_6ead22d
#define public_6ead24c _public_6ead24c
#define public_6ead261 _public_6ead261
#define public_6ead269 _public_6ead269
#define public_6ead290 _public_6ead290
#define public_6ead2ac _public_6ead2ac
#define public_6ead2b6 _public_6ead2b6
#define public_6ead2d2 _public_6ead2d2
#define public_6ead2da _public_6ead2da
#define public_6ead2e0 _public_6ead2e0
#define public_6ead300 _public_6ead300
#define public_6ead318 _public_6ead318
#define public_6ead336 _public_6ead336
#define public_6ead34c _public_6ead34c
#define public_6ead354 _public_6ead354
#define public_6ead39f _public_6ead39f

PROC_DECLARE(0x6ead190, internal_6ead190, public_6ead190);
extern "C" NAKED register_t __cdecl internal_6ead190()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fa9e2c @0x6ead192*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9e2c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov ecx, 0x11
        mov esi, ebx
        mov edi, ebp
        rep movsd
        mov al, byte ptr ds : [ebx+0x44]
        mov byte ptr ss : [ebp+0x44], al
        mov eax, dword ptr ds : [ebx+0x48]
        test eax, eax
        mov dword ptr ss : [esp+0x10], ebp
        jne public_6ead1d0
        xor edx, edx
        jmp public_6ead1e6
        public_6ead1d0 : nop
        mov ecx, dword ptr ds : [ebx+0x4C]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6ead1e6 : nop
        test edx, edx
        mov eax, edx
        jge public_6ead1ee
        xor eax, eax
        public_6ead1ee : nop
        lea edx, ds:[eax+eax*8]
        shl edx, 2
        push edx
        call public_6fa912a
        mov dword ptr ss : [ebp+0x48], eax
        mov ecx, dword ptr ds : [ebx+0x4C]
        mov edx, dword ptr ds : [ebx+0x48]
        add esp, 4
        cmp edx, ecx
        mov dword ptr ss : [esp+0x24], ecx
        je public_6ead22d
        mov edi, edi
        public_6ead210 : nop
        test eax, eax
        je public_6ead223
        mov ecx, 9
        mov esi, edx
        mov edi, eax
        rep movsd
        mov ecx, dword ptr ss : [esp+0x24]
        public_6ead223 : nop
        add edx, 0x24
        add eax, 0x24
        cmp edx, ecx
        jne public_6ead210
        public_6ead22d : nop
        mov dword ptr ss : [ebp+0x4C], eax
        mov dword ptr ss : [ebp+0x50], eax
        mov al, byte ptr ds : [ebx+0x54]
        mov byte ptr ss : [ebp+0x54], al
        mov eax, dword ptr ds : [ebx+0x58]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 0
        jne public_6ead24c
        xor edx, edx
        jmp public_6ead261
        public_6ead24c : nop
        mov ecx, dword ptr ds : [ebx+0x5C]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6ead261 : nop
        test edx, edx
        mov eax, edx
        jge public_6ead269
        xor eax, eax
        public_6ead269 : nop
        lea edx, ds:[eax+eax*2]
        shl edx, 2
        push edx
        call public_6fa912a
        mov dword ptr ss : [ebp+0x58], eax
        mov edx, dword ptr ds : [ebx+0x5C]
        mov ecx, dword ptr ds : [ebx+0x58]
        add esp, 4
        cmp ecx, edx
        mov dword ptr ss : [esp+0x24], edx
        je public_6ead2b6
        lea esp, ss:[esp]
        public_6ead290 : nop
        test eax, eax
        je public_6ead2ac
        mov edx, ecx
        mov edi, dword ptr ds : [edx]
        mov esi, eax
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        mov edx, dword ptr ss : [esp+0x24]
        public_6ead2ac : nop
        add ecx, 0xC
        add eax, 0xC
        cmp ecx, edx
        jne public_6ead290
        public_6ead2b6 : nop
        mov dword ptr ss : [ebp+0x5C], eax
        mov dword ptr ss : [ebp+0x60], eax
        mov al, byte ptr ds : [ebx+0x64]
        mov byte ptr ss : [ebp+0x64], al
        mov ecx, dword ptr ds : [ebx+0x68]
        test ecx, ecx
        mov byte ptr ss : [esp+0x1C], 1
        jne public_6ead2d2
        xor eax, eax
        jmp public_6ead2da
        public_6ead2d2 : nop
        mov eax, dword ptr ds : [ebx+0x6C]
        sub eax, ecx
        sar eax, 4
        public_6ead2da : nop
        test eax, eax
        jge public_6ead2e0
        xor eax, eax
        public_6ead2e0 : nop
        shl eax, 4
        push eax
        call public_6fa912a
        mov dword ptr ss : [ebp+0x68], eax
        mov ecx, dword ptr ds : [ebx+0x6C]
        mov edi, dword ptr ds : [ebx+0x68]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x24], ecx
        mov esi, eax
        je public_6ead318
        nop 
        public_6ead300 : nop
        push edi
        push esi
        call public_6f6a670
        mov eax, dword ptr ss : [esp+0x2C]
        add edi, 0x10
        add esp, 8
        add esi, 0x10
        cmp edi, eax
        jne public_6ead300
        public_6ead318 : nop
        mov dword ptr ss : [ebp+0x6C], esi
        mov dword ptr ss : [ebp+0x70], esi
        mov cl, byte ptr ds : [ebx+0x74]
        lea esi, ss:[ebp+0x74]
        mov byte ptr ds : [esi], cl
        mov eax, dword ptr ds : [ebx+0x78]
        test eax, eax
        mov byte ptr ss : [esp+0x1C], 2
        jne public_6ead336
        xor edx, edx
        jmp public_6ead34c
        public_6ead336 : nop
        mov ecx, dword ptr ds : [ebx+0x7C]
        sub ecx, eax
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ead34c : nop
        test edx, edx
        mov eax, edx
        jge public_6ead354
        xor eax, eax
        public_6ead354 : nop
        imul eax, 0x2C
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+0x7C]
        mov edx, dword ptr ds : [ebx+0x78]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6eaec70
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov cl, byte ptr ds : [ebx+0x84]
        add ebx, 0x84
        lea esi, ss:[ebp+0x84]
        mov byte ptr ds : [esi], cl
        mov ecx, ebx
        mov byte ptr ss : [esp+0x1C], 3
        call public_6fa3db0
        test eax, eax
        jge public_6ead39f
        xor eax, eax
        public_6ead39f : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov ebx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        push ebx
        mov ecx, esi
        call public_6eed270
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6ead190)
    }
}

#undef public_6ead1d0
#undef public_6ead1e6
#undef public_6ead1ee
#undef public_6ead210
#undef public_6ead223
#undef public_6ead22d
#undef public_6ead24c
#undef public_6ead261
#undef public_6ead269
#undef public_6ead290
#undef public_6ead2ac
#undef public_6ead2b6
#undef public_6ead2d2
#undef public_6ead2da
#undef public_6ead2e0
#undef public_6ead300
#undef public_6ead318
#undef public_6ead336
#undef public_6ead34c
#undef public_6ead354
#undef public_6ead39f
