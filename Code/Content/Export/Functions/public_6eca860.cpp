#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eca860);
CLANG_FORWARD_JUMP_SYMBOL(public_6faaea8);

#define public_6eca8d1 _public_6eca8d1

PROC_DECLARE(0x6eca860, internal_6eca860, public_6eca860);
extern "C" NAKED register_t __cdecl internal_6eca860()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faaea8 @0x6eca862*/
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
        mov esi, dword ptr ds : [public_6fb3030]
        push edi
        lea ecx, ss:[ebp+8]
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [ebp+4], eax
        call esi
        mov dword ptr ss : [ebp], offset public_6fb5a90
        xor eax, eax
        lea ebx, ss:[ebp+0x40]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [ebp+0xC], eax
        mov byte ptr ss : [ebp+0x10], al
        call esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6fb572c
        mov dword ptr ss : [ebp], offset public_6fb5ddc
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x10]
        jb public_6eca8d1
        mov eax, 0x2F
        public_6eca8d1 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_6fb572c
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp+0x10], 0
        push 0
        mov dword ptr ss : [ebp+0xC], eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        pop edi
        mov dword ptr ds : [ebx], eax
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6eca860)
    }
}

#undef public_6eca8d1
