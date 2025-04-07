#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eca550);
CLANG_FORWARD_JUMP_SYMBOL(public_6faaea8);

#define public_6eca5cd _public_6eca5cd

PROC_DECLARE(0x6eca550, internal_6eca550, public_6eca550);
extern "C" NAKED register_t __cdecl internal_6eca550()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faaea8 @0x6eca552*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faaea8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov edi, dword ptr ds : [public_6fb3030]
        lea ecx, ss:[ebp+8]
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [ebp+4], eax
        call edi
        mov dword ptr ss : [ebp], offset public_6fb5a90
        lea esi, ss:[ebp+0xC]
        xor ebx, ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], ebx
        call edi
        mov dword ptr ss : [ebp+0x10], ebx
        mov byte ptr ss : [ebp+0x14], bl
        push ebx
        mov dword ptr ss : [ebp], offset public_6fb5dd0
        call dword ptr ds : [public_6fb3000]
        mov dword ptr ds : [esi], eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        add esp, 4
        mov edi, offset public_6fb572c
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x14]
        jb public_6eca5cd
        mov eax, 0x2F
        public_6eca5cd : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, offset public_6fb572c
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0x10], eax
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6eca550)
    }
}

#undef public_6eca5cd
