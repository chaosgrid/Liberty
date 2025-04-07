#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_632e7b0);

#define public_632e7e4 _public_632e7e4
#define public_632e801 _public_632e801
#define public_632e823 _public_632e823

PROC_DECLARE(0x632e7b0, internal_632e7b0, public_632e7b0);
extern "C" NAKED register_t __cdecl internal_632e7b0()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ebp, ecx
/*FIXUP push offset public_63a48cc @0x632e7b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a48cc
        mov ecx, esi
        call public_6310410
        test al, al
        je public_632e823
        mov ecx, esi
        call public_6310b70
        mov esi, eax
        xor eax, eax
        cmp esi, eax
        jne public_632e7e4
        mov byte ptr ss : [ebp+8], al
        mov dword ptr ss : [ebp+4], eax
        pop esi
        mov al, 1
        pop ebp
        ret 4
        public_632e7e4 : nop
        push ebx
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        lea edx, ss:[ebp+8]
        jb public_632e801
        mov eax, 0x3F
        public_632e801 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        pop edi
        pop ebx
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+4], eax
        pop esi
        mov al, 1
        pop ebp
        ret 4
        public_632e823 : nop
        pop esi
        xor al, al
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x632e7b0)
    }
}

#undef public_632e7e4
#undef public_632e801
#undef public_632e823
