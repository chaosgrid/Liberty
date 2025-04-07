#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d4db0);
CLANG_FORWARD_PROC_SYMBOL(public_4d4fa0);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_JUMP_SYMBOL(public_5be045);

#define public_4d4dfe _public_4d4dfe
#define public_4d4e61 _public_4d4e61
#define public_4d4ea9 _public_4d4ea9

PROC_DECLARE(0x4d4db0, internal_4d4db0, public_4d4db0);
extern "C" NAKED register_t __cdecl internal_4d4db0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5be045 @0x4d4db2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be045
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        xor esi, esi
        lea ecx, ss:[ebp+0x28]
        mov dword ptr ss : [ebp+4], esi
        mov byte ptr ss : [ebp+8], 0
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ds : [ecx], esi
        mov dword ptr ds : [ecx+4], esi
        mov dword ptr ss : [ebp], offset public_5d6eac
        mov dword ptr ss : [ebp+0x34], esi
        cmp dword ptr ds : [ecx], esi
        mov dword ptr ss : [esp+0x1C], 1
        je public_4d4dfe
        push esi
        call dword ptr ds : [public_5c62a8]
        public_4d4dfe : nop
        mov dword ptr ss : [ebp+0x30], esi
        lea ebx, ss:[ebp+0x38]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], 2
        call public_59f860
        mov dword ptr ss : [ebp+0x364], offset public_5cbed8
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d7c1c
        mov dword ptr ss : [ebp], offset public_5d7d0c
        mov dword ptr ds : [ebx], offset public_5d7c54
        mov dword ptr ss : [ebp+0xB4], offset public_5d7c44
        mov dword ptr ss : [ebp+0x364], offset public_5d7c3c
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        mov byte ptr ss : [esp+0x1C], 4
        lea edx, ss:[ebp+8]
        jb public_4d4e61
        mov eax, 0x1F
        public_4d4e61 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5d7c1c
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        push 0
        mov byte ptr ds : [eax+ebp+8], 0
        push 0
        mov ecx, ebx
        mov dword ptr ss : [ebp+4], eax
        call public_4d4fa0
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d7c2c
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea edx, ss:[ebp+0x50]
        jb public_4d4ea9
        mov eax, 0x1F
        public_4d4ea9 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, offset public_5d7c2c
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0x4C], eax
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x48], offset public_5d7c2c
        mov dword ptr ss : [ebp+0x37C], 0xFFFFFC19
        mov dword ptr ss : [ebp+0x380], 0xFFFFFFFF
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x4d4db0)
    }
}

#undef public_4d4dfe
#undef public_4d4e61
#undef public_4d4ea9
