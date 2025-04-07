#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633e020);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639784b);

#define public_633e04f _public_633e04f
#define public_633e051 _public_633e051
#define public_633e082 _public_633e082
#define public_633e08a _public_633e08a
#define public_633e090 _public_633e090
#define public_633e0b0 _public_633e0b0
#define public_633e0c3 _public_633e0c3
#define public_633e0cd _public_633e0cd
#define public_633e153 _public_633e153
#define public_633e157 _public_633e157
#define public_633e17e _public_633e17e
#define public_633e1a5 _public_633e1a5
#define public_633e1c0 _public_633e1c0

PROC_DECLARE(0x633e020, internal_633e020, public_633e020);
extern "C" NAKED register_t __cdecl internal_633e020()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639784b @0x633e022*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639784b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        test ebp, ebp
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+0x20], ebx
        je public_633e04f
        lea eax, ss:[ebp+4]
        jmp public_633e051
        public_633e04f : nop
        xor eax, eax
        public_633e051 : nop
        lea esi, ds:[eax+4]
        lea edi, ds:[ebx+8]
        mov ecx, 0x11
        rep movsd
        mov dword ptr ds : [ebx+4], offset public_63993e8
        mov eax, dword ptr ss : [ebp+0x4C]
        mov dword ptr ds : [ebx+0x4C], eax
        mov ecx, dword ptr ss : [ebp+0x50]
        mov dword ptr ds : [ebx+0x50], ecx
        mov dl, byte ptr ss : [ebp+0x54]
        mov byte ptr ds : [ebx+0x54], dl
        mov ecx, dword ptr ss : [ebp+0x58]
        test ecx, ecx
        jne public_633e082
        xor eax, eax
        jmp public_633e08a
        public_633e082 : nop
        mov eax, dword ptr ss : [ebp+0x5C]
        sub eax, ecx
        sar eax, 5
        public_633e08a : nop
        test eax, eax
        jge public_633e090
        xor eax, eax
        public_633e090 : nop
        shl eax, 5
        push eax
        call public_6391d9c
        mov dword ptr ds : [ebx+0x58], eax
        mov ecx, dword ptr ss : [ebp+0x5C]
        mov edx, dword ptr ss : [ebp+0x58]
        add esp, 4
        cmp edx, ecx
        mov dword ptr ss : [esp+0x34], ecx
        je public_633e0cd
        lea ecx, ds:[ecx]
        public_633e0b0 : nop
        test eax, eax
        je public_633e0c3
        mov ecx, 8
        mov esi, edx
        mov edi, eax
        rep movsd
        mov ecx, dword ptr ss : [esp+0x34]
        public_633e0c3 : nop
        add edx, 0x20
        add eax, 0x20
        cmp edx, ecx
        jne public_633e0b0
        public_633e0cd : nop
        mov dword ptr ds : [ebx+0x5C], eax
        mov dword ptr ds : [ebx+0x60], eax
        mov al, byte ptr ss : [ebp+0x64]
        mov byte ptr ds : [ebx+0x64], al
        mov ecx, dword ptr ss : [ebp+0x68]
        mov dword ptr ds : [ebx+0x68], ecx
        mov edx, dword ptr ss : [ebp+0x6C]
        mov dword ptr ds : [ebx+0x6C], edx
        mov eax, dword ptr ss : [ebp+0x70]
        mov dword ptr ds : [ebx+0x70], eax
        lea ecx, ss:[ebp+0x74]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[ebx+0x74]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov dl, byte ptr ss : [ebp+0x80]
        push 0xC14
        mov dword ptr ss : [esp+0x30], 0
        mov byte ptr ds : [ebx+0x80], dl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+0x84], eax
        mov dword ptr ds : [ebx+0x88], 0
        mov ecx, dword ptr ss : [ebp+0x84]
        mov edi, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [eax]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x18], esi
        je public_633e1c0
        jmp public_633e157
        public_633e153 : nop
        mov edi, dword ptr ss : [esp+0x34]
        public_633e157 : nop
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[edi+8]
        push 0xC14
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x14], ecx
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [eax], esi
        jne public_633e17e
        mov ecx, eax
        public_633e17e : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_633e1a5
        mov esi, dword ptr ss : [esp+0x14]
        mov ecx, 0x303
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x34]
        public_633e1a5 : nop
        mov ecx, dword ptr ds : [ebx+0x88]
        mov eax, dword ptr ss : [esp+0x1C]
        inc ecx
        mov dword ptr ds : [ebx+0x88], ecx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        mov dword ptr ss : [esp+0x34], edi
        jne public_633e153
        public_633e1c0 : nop
        mov eax, dword ptr ss : [ebp+0x8C]
        mov dword ptr ds : [ebx+0x8C], eax
        mov ecx, dword ptr ss : [ebp+0x90]
        pop edi
        mov dword ptr ds : [ebx+0x90], ecx
        mov edx, dword ptr ss : [ebp+0x94]
        mov ecx, dword ptr ss : [esp+0x20]
        pop esi
        mov dword ptr ds : [ebx+0x94], edx
        mov dword ptr ds : [ebx], offset public_63a5144
        mov dword ptr ds : [ebx+4], offset public_63a5134
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x633e020)
    }
}

#undef public_633e04f
#undef public_633e051
#undef public_633e082
#undef public_633e08a
#undef public_633e090
#undef public_633e0b0
#undef public_633e0c3
#undef public_633e0cd
#undef public_633e153
#undef public_633e157
#undef public_633e17e
#undef public_633e1a5
#undef public_633e1c0
