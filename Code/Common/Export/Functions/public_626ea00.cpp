#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f01f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6392728);

#define public_626eb50 _public_626eb50
#define public_626eb5b _public_626eb5b
#define public_626eb61 _public_626eb61
#define public_626eb86 _public_626eb86
#define public_626eb8e _public_626eb8e
#define public_626eb99 _public_626eb99

PROC_DECLARE(0x626ea00, internal_626ea00, public_626ea00);
extern "C" NAKED register_t __cdecl internal_626ea00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392728 @0x626ea02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392728
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        call public_62f01f0
        mov eax, dword ptr ds : [edi+0x5C]
        mov dword ptr ds : [esi+0x5C], eax
        mov cl, byte ptr ds : [edi+0x60]
        mov byte ptr ds : [esi+0x60], cl
        mov edx, dword ptr ds : [edi+0x64]
        mov dword ptr ds : [esi+0x64], edx
        mov eax, dword ptr ds : [edi+0x68]
        mov dword ptr ds : [esi+0x68], eax
        mov cl, byte ptr ds : [edi+0x6C]
        mov dword ptr ds : [esi], offset public_6399870
        mov byte ptr ds : [esi+0x6C], cl
        mov edx, dword ptr ds : [edi+0x70]
        mov dword ptr ds : [esi+0x70], edx
        mov eax, dword ptr ds : [edi+0x74]
        mov dword ptr ds : [esi+0x74], eax
        mov ecx, dword ptr ds : [edi+0x78]
        mov dword ptr ds : [esi+0x78], ecx
        mov edx, dword ptr ds : [edi+0x7C]
        mov dword ptr ds : [esi+0x7C], edx
        mov eax, dword ptr ds : [edi+0x80]
        mov dword ptr ds : [esi+0x80], eax
        mov ecx, dword ptr ds : [edi+0x84]
        mov dword ptr ds : [esi], offset public_6399b04
        mov dword ptr ds : [esi+0x84], ecx
        mov edx, dword ptr ds : [edi+0x88]
        mov dword ptr ds : [esi+0x88], edx
        mov eax, dword ptr ds : [edi+0x8C]
        mov dword ptr ds : [esi+0x8C], eax
        mov ecx, dword ptr ds : [edi+0x90]
        mov dword ptr ds : [esi+0x90], ecx
        mov edx, dword ptr ds : [edi+0x94]
        mov dword ptr ds : [esi+0x94], edx
        mov eax, dword ptr ds : [edi+0x98]
        mov dword ptr ds : [esi+0x98], eax
        mov ecx, dword ptr ds : [edi+0x9C]
        mov dword ptr ds : [esi+0x9C], ecx
        mov dword ptr ds : [esi], offset public_6399c0c
        mov edx, dword ptr ds : [edi+0xA0]
        mov dword ptr ds : [esi+0xA0], edx
        mov eax, dword ptr ds : [edi+0xA4]
        mov dword ptr ds : [esi+0xA4], eax
        lea ecx, ds:[edi+0xA8]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+0xA8]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [edx+0xC], ecx
        mov dl, byte ptr ds : [edi+0xB8]
        mov byte ptr ds : [esi+0xB8], dl
        mov al, byte ptr ds : [edi+0xB9]
        mov byte ptr ds : [esi+0xB9], al
        mov cl, byte ptr ds : [edi+0xBA]
        mov byte ptr ds : [esi+0xBA], cl
        mov dl, byte ptr ds : [edi+0xBC]
        mov byte ptr ds : [esi+0xBC], dl
        mov ecx, dword ptr ds : [edi+0xC0]
        test ecx, ecx
        mov dword ptr ss : [esp+0x14], 0
        jne public_626eb50
        xor eax, eax
        jmp public_626eb5b
        public_626eb50 : nop
        mov eax, dword ptr ds : [edi+0xC4]
        sub eax, ecx
        sar eax, 2
        public_626eb5b : nop
        test eax, eax
        jge public_626eb61
        xor eax, eax
        public_626eb61 : nop
        shl eax, 2
        push eax
        call public_6391d9c
        mov dword ptr ds : [esi+0xC0], eax
        mov edx, dword ptr ds : [edi+0xC4]
        mov ecx, eax
        mov eax, dword ptr ds : [edi+0xC0]
        add esp, 4
        cmp eax, edx
        je public_626eb99
        push ebx
        public_626eb86 : nop
        test ecx, ecx
        je public_626eb8e
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        public_626eb8e : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_626eb86
        pop ebx
        public_626eb99 : nop
        mov dword ptr ds : [esi+0xC4], ecx
        mov dword ptr ds : [esi+0xC8], ecx
        mov cl, byte ptr ds : [edi+0xCC]
        mov byte ptr ds : [esi+0xCC], cl
        mov edx, dword ptr ds : [edi+0xD0]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0xD0], edx
        mov dword ptr ds : [esi], offset public_6399c38
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x626ea00)
    }
}

#undef public_626eb50
#undef public_626eb5b
#undef public_626eb61
#undef public_626eb86
#undef public_626eb8e
#undef public_626eb99
