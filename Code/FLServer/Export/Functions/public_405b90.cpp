#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4031c0);
CLANG_FORWARD_PROC_SYMBOL(public_403e30);
CLANG_FORWARD_PROC_SYMBOL(public_403e90);
CLANG_FORWARD_PROC_SYMBOL(public_404490);
CLANG_FORWARD_PROC_SYMBOL(public_4044b0);
CLANG_FORWARD_PROC_SYMBOL(public_4056d0);
CLANG_FORWARD_PROC_SYMBOL(public_405b90);
CLANG_FORWARD_JUMP_SYMBOL(public_419c81);

#define public_405bde _public_405bde
#define public_405bf0 _public_405bf0
#define public_405c07 _public_405c07
#define public_405c3b _public_405c3b
#define public_405c45 _public_405c45
#define public_405c59 _public_405c59
#define public_405c74 _public_405c74
#define public_405c88 _public_405c88
#define public_405ca2 _public_405ca2
#define public_405cbc _public_405cbc
#define public_405cc4 _public_405cc4

PROC_DECLARE(0x405b90, internal_405b90, public_405b90);
extern "C" NAKED register_t __cdecl internal_405b90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_419c81 @0x405b92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_419c81
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], esi
        xor ecx, ecx
        cmp esi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_405cc4
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        mov al, byte ptr ss : [ebp]
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], ecx
        mov eax, dword ptr ss : [ebp+8]
        push edi
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jbe public_405bde
        or edi, 0xFFFFFFFF
        public_405bde : nop
        cmp esi, ebp
        jne public_405c45
        push ebx
        or ebx, 0xFFFFFFFF
        cmp edi, ecx
        jbe public_405bf0
        call dword ptr ds : [public_41b8d0]
        public_405bf0 : nop
        mov ecx, esi
        call public_4056d0
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, 0xFFFFFFFF
        jae public_405c07
        mov ebx, eax
        test ebx, ebx
        jbe public_405c3b
        public_405c07 : nop
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebx
        push eax
        lea edx, ds:[ebx+edi]
        lea eax, ds:[ecx+edx*2]
        push eax
        lea ecx, ds:[ecx+edi*2]
        push ecx
        call public_403e30
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebx
        push edi
        mov ecx, esi
        call public_4044b0
        test al, al
        je public_405c3b
        push edi
        mov ecx, esi
        call public_404490
        public_405c3b : nop
        mov ecx, esi
        call public_4056d0
        pop ebx
        jmp public_405cbc
        public_405c45 : nop
        cmp edi, ecx
        jbe public_405c88
        cmp edi, eax
        jne public_405c88
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, ecx
        jne public_405c59
        mov eax, offset public_41c3f4
        public_405c59 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_405c88
        push 1
        mov ecx, esi
        call public_403e90
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_405c74
        mov eax, offset public_41c3f4
        public_405c74 : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        inc byte ptr ds : [eax-1]
        jmp public_405cbc
        public_405c88 : nop
        push 1
        push edi
        mov ecx, esi
        call public_4044b0
        test al, al
        je public_405cbc
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_405ca2
        mov eax, offset public_41c3f4
        public_405ca2 : nop
        mov edx, dword ptr ds : [esi+4]
        push edi
        push eax
        push edx
        call public_4031c0
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        add esp, 0xC
        mov word ptr ds : [eax+edi*2], 0
        public_405cbc : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        pop edi
        mov dword ptr ds : [esi+0x10], ecx
        pop ebp
        public_405cc4 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x405b90)
    }
}

#undef public_405bde
#undef public_405bf0
#undef public_405c07
#undef public_405c3b
#undef public_405c45
#undef public_405c59
#undef public_405c74
#undef public_405c88
#undef public_405ca2
#undef public_405cbc
#undef public_405cc4
