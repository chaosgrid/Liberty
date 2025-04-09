#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_4f3af0);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf1fe);

#define public_4f3b40 _public_4f3b40
#define public_4f3ba1 _public_4f3ba1
#define public_4f3c38 _public_4f3c38

PROC_DECLARE(0x4f3af0, internal_4f3af0, public_4f3af0);
extern "C" NAKED register_t __cdecl internal_4f3af0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf1fe @0x4f3af2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf1fe
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
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
        mov dword ptr ss : [esp+0x28], 1
        je public_4f3b40
        push esi
        call dword ptr ds : [public_5c62a8]
        public_4f3b40 : nop
        mov dword ptr ss : [ebp+0x30], esi
        lea ebx, ss:[ebp+0x38]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x28], 2
        call public_59f860
        mov dword ptr ss : [ebp+0x364], esi
        mov dword ptr ss : [ebp+0x368], esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov dword ptr ss : [ebp], offset public_5d9784
        mov dword ptr ds : [ebx], offset public_5d96cc
        mov dword ptr ss : [ebp+0xB4], offset public_5d96bc
        mov edi, offset public_5d969c
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        mov byte ptr ss : [esp+0x28], 5
        mov dword ptr ds : [public_674bc8], ebp
        lea edx, ss:[ebp+8]
        jb public_4f3ba1
        mov eax, 0x1F
        public_4f3ba1 : nop
        mov edi, edx
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5d969c
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        sub esp, 0xC
        mov dword ptr ss : [esp+0x20], 0
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, esp
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x24], 0
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx+4], edx
        mov byte ptr ds : [eax+ebp+8], 0
        mov dword ptr ss : [esp+0x28], 0xBF800000
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [ebp+4], eax
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, ebx
        call dword ptr ds : [eax+0x7C]
        mov eax, dword ptr ds : [ebx]
        lea ecx, ds:[ebx+0x60]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0x14]
        xor esi, esi
        push esi
        push esi
        mov ecx, ebx
        call public_4b5060
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5d96a8
        mov dword ptr ss : [ebp+0x36C], esi
        mov dword ptr ss : [ebp+0x370], esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea edx, ss:[ebp+0x50]
        jb public_4f3c38
        mov eax, 0x1F
        public_4f3c38 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, offset public_5d96a8
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x20]
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0x4C], eax
        or eax, 0xFFFFFFFF
        pop edi
        mov dword ptr ss : [ebp+0x36C], eax
        mov dword ptr ss : [ebp+0x384], eax
        pop esi
        mov dword ptr ss : [ebp+0x48], offset public_5d96a8
        mov byte ptr ss : [ebp+0x374], 0
        mov dword ptr ss : [ebp+0x37C], 0x3F800000
        mov byte ptr ss : [ebp+0x380], 0
        mov dword ptr ss : [ebp+0x388], 0
        mov byte ptr ss : [ebp+0x38C], 0
        mov eax, ebp
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x4f3af0)
    }
}

#undef public_4f3b40
#undef public_4f3ba1
#undef public_4f3c38
