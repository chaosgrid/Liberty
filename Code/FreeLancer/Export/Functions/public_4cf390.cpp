#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4177b0);
CLANG_FORWARD_PROC_SYMBOL(public_4cf390);
CLANG_FORWARD_PROC_SYMBOL(public_4cf6a0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bdc93);

#define public_4cf3f2 _public_4cf3f2
#define public_4cf480 _public_4cf480
#define public_4cf4c8 _public_4cf4c8
#define public_4cf546 _public_4cf546
#define public_4cf548 _public_4cf548
#define public_4cf55f _public_4cf55f

PROC_DECLARE(0x4cf390, internal_4cf390, public_4cf390);
extern "C" NAKED register_t __cdecl internal_4cf390()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bdc93 @0x4cf392*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bdc93
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebp
        mov ebp, ecx
        push esi
        push edi
        xor esi, esi
        lea edi, ss:[ebp+0x28]
        mov ecx, edi
        mov dword ptr ss : [ebp+4], esi
        mov byte ptr ss : [ebp+8], 0
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ds : [ecx], esi
        mov dword ptr ds : [ecx+4], esi
        push esi
        mov dword ptr ss : [esp+0x24], esi
        call dword ptr ds : [public_5c645c]
        mov dword ptr ss : [ebp], offset public_5d6eac
        mov dword ptr ss : [ebp+0x34], esi
        cmp dword ptr ds : [edi], esi
        mov dword ptr ss : [esp+0x20], 1
        je public_4cf3f2
        push esi
        mov ecx, edi
        call dword ptr ds : [public_5c62a8]
        public_4cf3f2 : nop
        push ebx
        mov dword ptr ss : [ebp+0x30], esi
        lea ebx, ss:[ebp+0x38]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x24], 2
        call public_59f860
        mov dword ptr ss : [ebp+0x364], offset public_5cbed8
        mov al, byte ptr ss : [esp+0x13]
        push 0x24
        mov byte ptr ss : [esp+0x28], 4
        mov byte ptr ss : [ebp+0x410], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [ebp+0x414], eax
        mov dword ptr ss : [ebp+0x418], esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d796c
        mov dword ptr ss : [ebp], offset public_5d7a5c
        mov dword ptr ds : [ebx], offset public_5d79a4
        mov dword ptr ss : [ebp+0xB4], offset public_5d7994
        mov dword ptr ss : [ebp+0x364], offset public_5d798c
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        mov byte ptr ss : [esp+0x24], 5
        lea edx, ss:[ebp+8]
        jb public_4cf480
        mov eax, 0x1F
        public_4cf480 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5d796c
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        push 0
        mov byte ptr ds : [eax+ebp+8], 0
        push 0
        mov ecx, ebx
        mov dword ptr ss : [ebp+4], eax
        call public_4cf6a0
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d7978
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea edx, ss:[ebp+0x50]
        jb public_4cf4c8
        mov eax, 0x1F
        public_4cf4c8 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        mov esi, offset public_5d7978
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0x4C], eax
        xor esi, esi
        mov dword ptr ss : [ebp+0x48], offset public_5d7978
        mov dword ptr ss : [ebp+0x41C], esi
        mov eax, dword ptr ds : [public_5d7964]
        mov dword ptr ss : [ebp+0x420], eax
        mov dword ptr ss : [ebp+0x438], esi
        mov byte ptr ss : [ebp+0x43C], 0
        mov dword ptr ss : [ebp+0x444], 0xFFFFFFFF
        mov dword ptr ss : [ebp+0x440], esi
        call public_54baf0
        cmp eax, esi
        pop ebx
        je public_4cf55f
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x150]
        cmp eax, esi
        je public_4cf546
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_4cf548
        public_4cf546 : nop
        xor eax, eax
        public_4cf548 : nop
        push 0x80000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c649c]
        mov dword ptr ss : [ebp+0x440], eax
/*FIXUP public_4cf55f : nop
        push offset public_5d4ddc @0x4cf55f*/
  FIXUP public_4cf55f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4ddc
        call public_4177b0
/*FIXUP push offset public_5d6b98 @0x4cf569*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6b98
        mov dword ptr ss : [ebp+0x44C], eax
        call public_4177b0
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 8
        mov dword ptr ss : [ebp+0x474], esi
        mov dword ptr ss : [ebp+0x450], eax
        pop edi
        pop esi
        mov eax, ebp
        mov byte ptr ds : [public_67494c], 0
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x4cf390)
    }
}

#undef public_4cf3f2
#undef public_4cf480
#undef public_4cf4c8
#undef public_4cf546
#undef public_4cf548
#undef public_4cf55f
