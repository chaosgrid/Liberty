#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403e30);
CLANG_FORWARD_PROC_SYMBOL(public_403e90);
CLANG_FORWARD_PROC_SYMBOL(public_404490);
CLANG_FORWARD_PROC_SYMBOL(public_4044b0);
CLANG_FORWARD_PROC_SYMBOL(public_4056d0);
CLANG_FORWARD_PROC_SYMBOL(public_4058c0);
CLANG_FORWARD_JUMP_SYMBOL(public_419c41);

#define public_40590e _public_40590e
#define public_40591f _public_40591f
#define public_405936 _public_405936
#define public_405969 _public_405969
#define public_405983 _public_405983
#define public_405997 _public_405997
#define public_4059b2 _public_4059b2
#define public_4059dc _public_4059dc
#define public_4059f8 _public_4059f8
#define public_405a01 _public_405a01
#define public_405a10 _public_405a10
#define public_405a1c _public_405a1c

PROC_DECLARE(0x4058c0, internal_4058c0, public_4058c0);
extern "C" NAKED register_t __cdecl internal_4058c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_419c41 @0x4058c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_419c41
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov dword ptr ss : [esp+0x10], esi
        xor ebp, ebp
        cmp esi, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        je public_405a1c
        mov ebx, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [ebx]
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov eax, dword ptr ds : [ebx+8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jbe public_40590e
        or edi, 0xFFFFFFFF
        public_40590e : nop
        cmp esi, ebx
        jne public_405983
        or ebx, 0xFFFFFFFF
        cmp edi, ebp
        jbe public_40591f
        call dword ptr ds : [public_41b8d0]
        public_40591f : nop
        mov ecx, esi
        call public_4056d0
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, 0xFFFFFFFF
        jae public_405936
        mov ebx, eax
        cmp ebx, ebp
        jbe public_405969
        public_405936 : nop
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
        push ebp
        sub edi, ebx
        push edi
        mov ecx, esi
        call public_4044b0
        test al, al
        je public_405969
        push edi
        mov ecx, esi
        call public_404490
        public_405969 : nop
        mov ecx, esi
        call public_4056d0
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_405983 : nop
        cmp edi, ebp
        jbe public_4059dc
        cmp edi, eax
        jne public_4059dc
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_405997
        mov eax, offset public_41c3f4
        public_405997 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_4059dc
        push 1
        mov ecx, esi
        call public_403e90
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_4059b2
        mov eax, offset public_41c3f4
        public_4059b2 : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        mov cl, byte ptr ds : [eax-1]
        pop edi
        pop esi
        inc cl
        pop ebp
        mov byte ptr ds : [eax-1], cl
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_4059dc : nop
        push 1
        push edi
        mov ecx, esi
        call public_4044b0
        test al, al
        je public_405a1c
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        mov ecx, offset public_41c3f4
        je public_4059f8
        mov ecx, ebx
        public_4059f8 : nop
        test edi, edi
        mov eax, dword ptr ds : [esi+4]
        jbe public_405a10
        mov edx, edi
        public_405a01 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_405a01
        public_405a10 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [edx+edi*2], 0
        public_405a1c : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4058c0)
    }
}

#undef public_40590e
#undef public_40591f
#undef public_405936
#undef public_405969
#undef public_405983
#undef public_405997
#undef public_4059b2
#undef public_4059dc
#undef public_4059f8
#undef public_405a01
#undef public_405a10
#undef public_405a1c
