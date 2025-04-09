#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4da170);
CLANG_FORWARD_PROC_SYMBOL(public_4da930);
CLANG_FORWARD_PROC_SYMBOL(public_4e6020);
CLANG_FORWARD_PROC_SYMBOL(public_55e340);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_JUMP_SYMBOL(public_5be3f0);

#define public_4da292 _public_4da292
#define public_4da2d8 _public_4da2d8
#define public_4da5c6 _public_4da5c6

PROC_DECLARE(0x4da170, internal_4da170, public_4da170);
extern "C" NAKED register_t __cdecl internal_4da170()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5be3f0 @0x4da172*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be3f0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x100
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x10C], ebp
        call public_4e6020
        lea esi, ss:[ebp+0x4E0]
        xor ebx, ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x118], ebx
        call public_55e340
        mov al, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [ebp+0x58C], al
        mov dword ptr ss : [ebp+0x590], ebx
        mov dword ptr ss : [ebp+0x594], ebx
        mov dword ptr ss : [ebp+0x598], ebx
        mov dword ptr ss : [ebp+0x5D0], ebx
        mov dword ptr ss : [ebp+0x5D4], ebx
        mov cl, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [ebp+0x5DC], cl
        mov dword ptr ss : [ebp+0x5E0], ebx
        mov dword ptr ss : [ebp+0x5E4], ebx
        mov dword ptr ss : [ebp+0x5E8], ebx
        mov dword ptr ss : [ebp], offset public_5d85bc
        mov dword ptr ss : [ebp+0x38], offset public_5d8504
        mov dword ptr ss : [ebp+0xB4], offset public_5d84f4
        mov dword ptr ss : [ebp+0x364], offset public_5d84e8
        mov dword ptr ss : [ebp+0x384], offset public_5d84e0
        mov dword ptr ds : [esi], offset public_5d84d4
        mov dword ptr ds : [public_674aa0], ebp
        mov dword ptr ss : [esp+0x14], 0x3E970A3D
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ss:[ebp+0x4D4]
        mov dword ptr ds : [edx], eax
        mov dword ptr ss : [esp+0x18], 0xBEBBE76D
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+4], ecx
        mov eax, ebx
        mov dword ptr ds : [edx+8], eax
        mov eax, 1
        mov dword ptr ss : [ebp+0x5A0], eax
        mov dword ptr ss : [ebp+0x5A4], eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d84c4
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        mov byte ptr ss : [esp+0x118], 4
        mov dword ptr ss : [esp+0x1C], ebx
        lea edx, ss:[ebp+8]
        jb public_4da292
        mov eax, 0x1F
        public_4da292 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5d84c4
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        push ebx
        mov byte ptr ds : [eax+ebp+8], bl
        push ebx
        lea ecx, ss:[ebp+0x38]
        mov dword ptr ss : [ebp+4], eax
        call public_4da930
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d84b8
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea edx, ss:[ebp+0x50]
        jb public_4da2d8
        mov eax, 0x1F
        public_4da2d8 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5d84b8
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp+0x50], bl
        mov dword ptr ss : [ebp+0x4C], eax
        mov dword ptr ss : [esp+0x14], 0x3ED60419
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[ebp+0x4B4]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x18], 0xBE947AE1
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x1C], 0xBF800000
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+8], ecx
        mov eax, 0x3DE147AE
        mov dword ptr ss : [ebp+0x48], offset public_5d84b8
        mov dword ptr ss : [ebp+0x4C0], eax
        mov dword ptr ss : [ebp+0x4C4], eax
        mov byte ptr ss : [ebp+0x500], 1
        mov dword ptr ss : [ebp+0x504], ebx
        mov edx, dword ptr ds : [public_5d8484]
        mov dword ptr ss : [ebp+0x588], edx
        mov byte ptr ss : [ebp+0x584], bl
        mov byte ptr ss : [ebp+0x585], bl
        mov byte ptr ss : [ebp+0x5B8], bl
        mov byte ptr ss : [ebp+0x586], bl
        mov byte ptr ss : [ebp+0x5B9], bl
        mov byte ptr ss : [ebp+0x5BA], bl
        mov dword ptr ss : [ebp+0x5C8], ebx
        mov dword ptr ss : [esp+0x20], 0x5E
        mov dword ptr ss : [esp+0x24], 0xBC
        mov dword ptr ss : [esp+0x28], 0xC0
        mov dword ptr ss : [esp+0x2C], 0xC1
        mov dword ptr ss : [esp+0x30], 0xBD
        mov dword ptr ss : [esp+0x34], 0xBE
        mov dword ptr ss : [esp+0x38], 0x3A
        mov dword ptr ss : [esp+0x3C], 0x3C
        mov dword ptr ss : [esp+0x40], 0x3B
        mov dword ptr ss : [esp+0x44], 0x3E
        mov dword ptr ss : [esp+0x48], 0x3D
        mov dword ptr ss : [esp+0x4C], 0x56
        mov dword ptr ss : [esp+0x50], 0x57
        mov dword ptr ss : [esp+0x54], 0xA1
        mov dword ptr ss : [esp+0x58], 0xA2
        mov dword ptr ss : [esp+0x5C], 0xA3
        mov dword ptr ss : [esp+0x60], 0xA4
        mov dword ptr ss : [esp+0x64], 0xA5
        mov dword ptr ss : [esp+0x68], 0xA6
        mov dword ptr ss : [esp+0x6C], 0xA7
        mov dword ptr ss : [esp+0x70], 0xA8
        mov dword ptr ss : [esp+0x74], 0xA9
        mov dword ptr ss : [esp+0x78], 0xAA
        mov dword ptr ss : [esp+0x7C], 0x97
        mov dword ptr ss : [esp+0x80], 0x98
        mov dword ptr ss : [esp+0x84], 0x99
        mov dword ptr ss : [esp+0x88], 0x9A
        mov dword ptr ss : [esp+0x8C], 0x9B
        mov dword ptr ss : [esp+0x90], 0x9C
        mov dword ptr ss : [esp+0x94], 0x9D
        mov dword ptr ss : [esp+0x98], 0x9E
        mov dword ptr ss : [esp+0x9C], 0x9F
        mov dword ptr ss : [esp+0xA0], 0xA0
        mov dword ptr ss : [esp+0xA4], 0xAB
        mov dword ptr ss : [esp+0xA8], 0xAC
        mov dword ptr ss : [esp+0xAC], 0xAD
        mov dword ptr ss : [esp+0xB0], 0xAE
        mov dword ptr ss : [esp+0xB4], 0xAF
        mov dword ptr ss : [esp+0xB8], 0xB0
        mov dword ptr ss : [esp+0xBC], 0xB1
        mov dword ptr ss : [esp+0xC0], 0xB2
        mov dword ptr ss : [esp+0xC4], 0xB3
        mov dword ptr ss : [esp+0xC8], 0xB4
        mov dword ptr ss : [esp+0xCC], 0xB5
        mov dword ptr ss : [esp+0xD0], 0xB6
        mov dword ptr ss : [esp+0xD4], 0x91
        mov dword ptr ss : [esp+0xD8], 0x92
        mov dword ptr ss : [esp+0xDC], 0x93
        mov dword ptr ss : [esp+0xE0], 0x94
        mov dword ptr ss : [esp+0xE4], 0x95
        mov dword ptr ss : [esp+0xE8], 0x96
        mov dword ptr ss : [esp+0xEC], 0x8F
        mov dword ptr ss : [esp+0xF0], 0x90
        mov dword ptr ss : [esp+0xF4], 0xF
        mov dword ptr ss : [esp+0xF8], 0xB7
        mov dword ptr ss : [esp+0xFC], 0xB8
        mov dword ptr ss : [esp+0x100], 0xB9
        mov dword ptr ss : [esp+0x104], 0xBA
        mov dword ptr ss : [esp+0x108], 0x6F
        xor esi, esi
        public_4da5c6 : nop
        mov eax, dword ptr ss : [esp+esi*4+0x20]
        push eax
        lea ecx, ss:[ebp+0x384]
        call public_5760d0
        inc esi
        cmp esi, 0x3B
        jb public_4da5c6
        mov ecx, dword ptr ss : [esp+0x110]
        pop edi
        mov byte ptr ss : [ebp+0x5CD], bl
        pop esi
        mov byte ptr ss : [ebp+0x5CC], 1
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10C
        ret 4
        UNREACHABLE_TRAP(0x4da170)
    }
}

#undef public_4da292
#undef public_4da2d8
#undef public_4da5c6
