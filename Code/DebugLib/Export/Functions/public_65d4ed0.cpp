#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3b40);
CLANG_FORWARD_PROC_SYMBOL(public_65d3df0);
CLANG_FORWARD_PROC_SYMBOL(public_65d3e10);
CLANG_FORWARD_PROC_SYMBOL(public_65d4350);
CLANG_FORWARD_PROC_SYMBOL(public_65d4ed0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cc3);
CLANG_FORWARD_PROC_SYMBOL(public_65d6e7a);
CLANG_FORWARD_PROC_SYMBOL(public_65d73a0);

#define public_65d4ee6 _public_65d4ee6
#define public_65d4f41 _public_65d4f41
#define public_65d4f43 _public_65d4f43
#define public_65d4f56 _public_65d4f56
#define public_65d4f86 _public_65d4f86
#define public_65d4fb3 _public_65d4fb3
#define public_65d4fca _public_65d4fca
#define public_65d4fcf _public_65d4fcf
#define public_65d4fd7 _public_65d4fd7
#define public_65d4fe1 _public_65d4fe1

PROC_DECLARE(0x65d4ed0, internal_65d4ed0, public_65d4ed0);
extern "C" NAKED register_t __cdecl internal_65d4ed0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, ecx
        jae public_65d4ee6
        call public_65d6e7a
        public_65d4ee6 : nop
        mov esi, dword ptr ss : [ebp+4]
        xor ebx, ebx
        cmp esi, ebx
        je public_65d4f43
        mov al, byte ptr ds : [esi-1]
        test al, al
        je public_65d4f43
        cmp al, 0xFF
        je public_65d4f43
        mov cl, al
        mov edi, esi
        dec cl
        xor eax, eax
        mov byte ptr ds : [esi-1], cl
        or ecx, 0xFFFFFFFF
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ss : [ebp+0xC], ebx
        push 1
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        mov ecx, ebp
        push ebx
        call public_65d3e10
        test al, al
        je public_65d4f41
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov edx, ecx
        push ebx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, ebp
        call public_65d3df0
        public_65d4f41 : nop
        xor ebx, ebx
        public_65d4f43 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        sub eax, edx
        cmp eax, edi
        jae public_65d4f56
        mov edi, eax
        public_65d4f56 : nop
        cmp edi, ebx
        jbe public_65d4fe1
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ss : [esp+0x14]
        add ecx, edx
        sub eax, edi
        push eax
        lea eax, ds:[ecx+edi]
        push eax
        push ecx
        call public_65d73a0
        mov esi, dword ptr ss : [ebp+8]
        add esp, 0xC
        sub esi, edi
        cmp esi, 0xFFFFFFFD
        jbe public_65d4f86
        call public_65d6cc3
        public_65d4f86 : nop
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, ebx
        je public_65d4fb3
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_65d4fb3
        cmp cl, 0xFF
        je public_65d4fb3
        cmp esi, ebx
        jne public_65d4fcf
        dec cl
        push ebx
        mov byte ptr ds : [eax-1], cl
        mov ecx, ebp
        call public_65d3b40
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_65d4fb3 : nop
        cmp esi, ebx
        jne public_65d4fca
        cmp eax, ebx
        je public_65d4fe1
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [eax], 0
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_65d4fca : nop
        cmp dword ptr ss : [ebp+0xC], esi
        jae public_65d4fd7
        public_65d4fcf : nop
        mov ecx, ebp
        push esi
        call public_65d4350
        public_65d4fd7 : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], esi
        mov byte ptr ds : [esi+ecx], 0
        public_65d4fe1 : nop
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x65d4ed0)
    }
}

#undef public_65d4ee6
#undef public_65d4f41
#undef public_65d4f43
#undef public_65d4f56
#undef public_65d4f86
#undef public_65d4fb3
#undef public_65d4fca
#undef public_65d4fcf
#undef public_65d4fd7
#undef public_65d4fe1
