#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4177b0);
CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_4dfbd0);
CLANG_FORWARD_PROC_SYMBOL(public_4e08b0);
CLANG_FORWARD_PROC_SYMBOL(public_4e0ee0);
CLANG_FORWARD_PROC_SYMBOL(public_4e6020);
CLANG_FORWARD_PROC_SYMBOL(public_4e7f60);
CLANG_FORWARD_PROC_SYMBOL(public_55e340);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_JUMP_SYMBOL(public_5be6c1);

#define public_4e0a18 _public_4e0a18
#define public_4e0a5e _public_4e0a5e
#define public_4e0ad7 _public_4e0ad7
#define public_4e0bb4 _public_4e0bb4

PROC_DECLARE(0x4e08b0, internal_4e08b0, public_4e08b0);
extern "C" NAKED register_t __cdecl internal_4e08b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5be6c1 @0x4e08b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be6c1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x54
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        call public_4e6020
        lea edi, ss:[ebp+0x4E0]
        xor ebx, ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x6C], ebx
        call public_55e340
        mov al, byte ptr ss : [esp+0x13]
        lea esi, ss:[ebp+0x528]
        push ebx
        push ebx
        mov ecx, esi
        mov byte ptr ss : [esp+0x74], 1
        mov byte ptr ds : [esi], al
        call public_42a7e0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ebx
        lea ecx, ss:[ebp+0x534]
        mov byte ptr ss : [esp+0x6C], 2
        call public_4dfbd0
        mov dl, byte ptr ss : [esp+0x13]
        mov al, byte ptr ss : [esp+0x13]
        lea ecx, ss:[ebp+0x560]
        mov byte ptr ds : [ecx], dl
        mov byte ptr ds : [ecx+1], al
        mov byte ptr ds : [ecx+0xC], bl
        call public_4e7f60
        mov cl, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [ebp+0x57C], cl
        mov dword ptr ss : [ebp+0x580], ebx
        mov dword ptr ss : [ebp+0x584], ebx
        mov dword ptr ss : [ebp+0x588], ebx
        mov dword ptr ds : [edi], offset public_5d89b4
        mov dword ptr ss : [ebp], offset public_5d896c
        mov dword ptr ss : [ebp+0x38], offset public_5d88b4
        mov dword ptr ss : [ebp+0xB4], offset public_5d88a4
        mov dword ptr ss : [ebp+0x364], offset public_5d8898
        mov dword ptr ss : [ebp+0x384], offset public_5d8890
        mov dword ptr ds : [public_674b04], ebp
        mov dword ptr ss : [esp+0x18], 0xBE978D50
        mov eax, dword ptr ss : [esp+0x18]
        lea edx, ss:[ebp+0x4D4]
        mov dword ptr ds : [edx], eax
        mov dword ptr ss : [esp+0x1C], 0xBEBBE76D
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+4], ecx
        mov eax, ebx
        or ecx, 0xFFFFFFFF
        mov dword ptr ds : [edx+8], eax
        mov edi, offset public_5d8878
        mov dword ptr ss : [ebp+0x500], ebx
        mov dword ptr ss : [ebp+0x504], ebx
        mov dword ptr ss : [ebp+0x508], ebx
        mov dword ptr ss : [ebp+0x50C], ebx
        mov dword ptr ss : [ebp+0x510], ebx
        mov dword ptr ss : [ebp+0x514], ebx
        mov dword ptr ss : [ebp+0x518], ebx
        mov dword ptr ss : [ebp+0x51C], ebx
        mov dword ptr ss : [ebp+0x520], ebx
        mov dword ptr ss : [ebp+0x648], ebx
        mov dword ptr ss : [ebp+0x64C], ebx
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        mov byte ptr ss : [esp+0x6C], 4
        mov dword ptr ss : [esp+0x20], ebx
        lea edx, ss:[ebp+8]
        jb public_4e0a18
        mov eax, 0x1F
        public_4e0a18 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5d8878
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        push ebx
        mov byte ptr ds : [eax+ebp+8], bl
        push ebx
        lea ecx, ss:[ebp+0x38]
        mov dword ptr ss : [ebp+4], eax
        call public_4e0ee0
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d8880
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea edx, ss:[ebp+0x50]
        jb public_4e0a5e
        mov eax, 0x1F
        public_4e0a5e : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5d8880
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp+0x50], bl
        mov dword ptr ss : [ebp+0x4C], eax
        mov dword ptr ss : [esp+0x18], 0xBEC624DD
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ss:[ebp+0x4B4]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x1C], 0xBE947AE1
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x20], 0xBF800000
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+8], ecx
        mov eax, 0x3DE147AE
        lea ecx, ss:[ebp+0x398]
        mov dword ptr ss : [ebp+0x48], offset public_5d8880
        mov dword ptr ss : [ebp+0x4C0], eax
        mov dword ptr ss : [ebp+0x4C4], eax
        cmp dword ptr ds : [ecx], ebx
        je public_4e0ad7
        push ebx
        call dword ptr ds : [public_5c62a8]
/*FIXUP public_4e0ad7 : nop
        push offset public_5d4ddc @0x4e0ad7*/
  FIXUP public_4e0ad7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4ddc
        mov byte ptr ss : [ebp+0x55C], bl
        mov dword ptr ss : [ebp+0x558], ebx
        mov dword ptr ss : [ebp+0x574], ebx
        mov dword ptr ss : [ebp+0x578], ebx
        mov byte ptr ss : [ebp+0x594], bl
        mov byte ptr ss : [ebp+0x660], bl
        mov dword ptr ss : [ebp+0x658], 0xBF800000
        mov dword ptr ss : [ebp+0x65C], ebx
        mov byte ptr ss : [ebp+0x650], bl
        call public_4177b0
/*FIXUP push offset public_5d6b98 @0x4e0b1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6b98
        mov dword ptr ss : [ebp+0x664], eax
        call public_4177b0
        add esp, 8
        mov dword ptr ss : [ebp+0x668], eax
        mov dword ptr ss : [esp+0x24], 0x5F
        mov dword ptr ss : [esp+0x28], 0x21
        mov dword ptr ss : [esp+0x2C], 0x22
        mov dword ptr ss : [esp+0x30], 0xCC
        mov dword ptr ss : [esp+0x34], 0x54
        mov dword ptr ss : [esp+0x38], 0x58
        mov dword ptr ss : [esp+0x3C], 0x59
        mov dword ptr ss : [esp+0x40], 0x8B
        mov dword ptr ss : [esp+0x44], 0x24
        mov dword ptr ss : [esp+0x48], 0x25
        mov dword ptr ss : [esp+0x4C], 0x26
        mov dword ptr ss : [esp+0x50], 0xBB
        mov dword ptr ss : [esp+0x54], 0xC9
        mov dword ptr ss : [esp+0x58], 0xCA
        mov dword ptr ss : [esp+0x5C], 0x23
        mov dword ptr ss : [esp+0x60], 0x8A
        public_4e0bb4 : nop
        mov edx, dword ptr ss : [esp+ebx*4+0x24]
        push edx
        lea ecx, ss:[ebp+0x384]
        call public_5760d0
        inc ebx
        cmp ebx, 0x10
        jb public_4e0bb4
        mov ecx, dword ptr ss : [esp+0x64]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x66C], 1
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x60
        ret 4
        UNREACHABLE_TRAP(0x4e08b0)
    }
}

#undef public_4e0a18
#undef public_4e0a5e
#undef public_4e0ad7
#undef public_4e0bb4
