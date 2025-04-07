#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6393908);

#define public_629bb53 _public_629bb53
#define public_629bb5b _public_629bb5b
#define public_629bb61 _public_629bb61
#define public_629bb81 _public_629bb81
#define public_629bb89 _public_629bb89
#define public_629bb94 _public_629bb94

PROC_DECLARE(0x629ba70, internal_629ba70, public_629ba70);
extern "C" NAKED register_t __cdecl internal_629ba70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393908 @0x629ba72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393908
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], eax
        mov cx, word ptr ds : [edi+8]
        mov word ptr ds : [esi+8], cx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov al, byte ptr ds : [edi+0x10]
        mov byte ptr ds : [esi+0x10], al
        mov cl, byte ptr ds : [edi+0x11]
        mov byte ptr ds : [esi+0x11], cl
        mov dl, byte ptr ds : [edi+0x12]
        mov byte ptr ds : [esi+0x12], dl
        mov eax, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], eax
        mov ecx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x18], ecx
        mov edx, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi], offset public_639bdcc
        mov dword ptr ds : [esi+0x1C], edx
        mov eax, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x20], eax
        mov ecx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [esi], offset public_639c49c
        mov dword ptr ds : [esi+0x24], ecx
        mov edx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [esi+0x28], edx
        mov eax, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [esi+0x2C], eax
        mov ecx, dword ptr ds : [edi+0x30]
        mov dword ptr ds : [esi+0x30], ecx
        mov edx, dword ptr ds : [edi+0x34]
        mov dword ptr ds : [esi+0x34], edx
        mov al, byte ptr ds : [edi+0x38]
        mov byte ptr ds : [esi+0x38], al
        mov ecx, dword ptr ds : [edi+0x3C]
        mov dword ptr ds : [esi+0x3C], ecx
        lea edx, ds:[edi+0x40]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[esi+0x40]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [esi], offset public_639c61c
        mov al, byte ptr ds : [edi+0x4C]
        mov byte ptr ds : [esi+0x4C], al
        mov ecx, dword ptr ds : [edi+0x50]
        mov dword ptr ds : [esi+0x50], ecx
        mov edx, dword ptr ds : [edi+0x58]
        mov dword ptr ds : [esi+0x58], edx
        mov eax, dword ptr ds : [edi+0x5C]
        mov dword ptr ds : [esi+0x5C], eax
        mov cl, byte ptr ds : [edi+0x60]
        mov byte ptr ds : [esi+0x60], cl
        mov ecx, dword ptr ds : [edi+0x64]
        test ecx, ecx
        mov dword ptr ss : [esp+0x14], 0
        jne public_629bb53
        xor eax, eax
        jmp public_629bb5b
        public_629bb53 : nop
        mov eax, dword ptr ds : [edi+0x68]
        sub eax, ecx
        sar eax, 2
        public_629bb5b : nop
        test eax, eax
        jge public_629bb61
        xor eax, eax
        public_629bb61 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6391d9c
        mov dword ptr ds : [esi+0x64], eax
        mov edx, dword ptr ds : [edi+0x68]
        mov ecx, eax
        mov eax, dword ptr ds : [edi+0x64]
        add esp, 4
        cmp eax, edx
        je public_629bb94
        push ebx
        public_629bb81 : nop
        test ecx, ecx
        je public_629bb89
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        public_629bb89 : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_629bb81
        pop ebx
        public_629bb94 : nop
        mov dword ptr ds : [esi+0x68], ecx
        mov dword ptr ds : [esi+0x6C], ecx
        mov eax, dword ptr ds : [edi+0x70]
        mov dword ptr ds : [esi+0x70], eax
        mov ecx, dword ptr ds : [edi+0x74]
        mov dword ptr ds : [esi+0x74], ecx
        mov edx, dword ptr ds : [edi+0x78]
        mov dword ptr ds : [esi+0x78], edx
        mov eax, dword ptr ds : [edi+0x7C]
        mov dword ptr ds : [esi+0x7C], eax
        mov ecx, dword ptr ds : [edi+0x80]
        mov dword ptr ds : [esi+0x80], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], offset public_639d50c
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x629ba70)
    }
}

#undef public_629bb53
#undef public_629bb5b
#undef public_629bb61
#undef public_629bb81
#undef public_629bb89
#undef public_629bb94
