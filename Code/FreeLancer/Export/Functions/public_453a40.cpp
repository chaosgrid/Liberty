#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_453a40);
CLANG_FORWARD_PROC_SYMBOL(public_453bc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9eb8);

#define public_453a8c _public_453a8c
#define public_453acc _public_453acc
#define public_453ae5 _public_453ae5
#define public_453b35 _public_453b35
#define public_453b3e _public_453b3e

PROC_DECLARE(0x453a40, internal_453a40, public_453a40);
extern "C" NAKED register_t __cdecl internal_453a40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9eb8 @0x453a42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9eb8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        mov al, byte ptr ss : [esp+0x24]
        push ebp
        mov byte ptr ss : [esp+8], al
        xor eax, eax
        push esi
        push edi
        mov ebp, ecx
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        mov esi, dword ptr ss : [esp+0x34]
        cmp esi, eax
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0xC], ecx
        jne public_453a8c
        mov esi, offset public_5c865c
        public_453a8c : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        push ebx
        dec ecx
        mov ebx, ecx
        push 1
        push ebx
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_453acc
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ds : [eax+ebx], 0
        public_453acc : nop
        mov esi, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [esi+4]
        push 0x1C
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        pop ebx
        jne public_453ae5
        mov edi, eax
        public_453ae5 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0xC]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_453bc0
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 8
        pop edi
        inc edx
        test eax, eax
        pop esi
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        je public_453b3e
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_453b35
        cmp cl, 0xFF
        je public_453b35
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 8
        public_453b35 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_453b3e : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x453a40)
    }
}

#undef public_453a8c
#undef public_453acc
#undef public_453ae5
#undef public_453b35
#undef public_453b3e
