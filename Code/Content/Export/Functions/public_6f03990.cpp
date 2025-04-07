#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f02b10);
CLANG_FORWARD_PROC_SYMBOL(public_6f03530);
CLANG_FORWARD_PROC_SYMBOL(public_6f03550);
CLANG_FORWARD_PROC_SYMBOL(public_6f03990);
CLANG_FORWARD_PROC_SYMBOL(public_6f03ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_6facc81);

#define public_6f039df _public_6f039df
#define public_6f039f0 _public_6f039f0
#define public_6f03a07 _public_6f03a07
#define public_6f03a38 _public_6f03a38
#define public_6f03a52 _public_6f03a52
#define public_6f03a66 _public_6f03a66
#define public_6f03a81 _public_6f03a81
#define public_6f03aab _public_6f03aab
#define public_6f03ac5 _public_6f03ac5
#define public_6f03ae2 _public_6f03ae2

PROC_DECLARE(0x6f03990, internal_6f03990, public_6f03990);
extern "C" NAKED register_t __cdecl internal_6f03990()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6facc81 @0x6f03992*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6facc81
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        xor esi, esi
        cmp ebp, esi
        mov dword ptr ss : [esp+0x1C], esi
        je public_6f03ae2
        mov edi, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [edi]
        mov byte ptr ss : [ebp], al
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+0xC], esi
        mov eax, dword ptr ds : [edi+8]
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        jbe public_6f039df
        or ebx, 0xFFFFFFFF
        public_6f039df : nop
        cmp ebp, edi
        jne public_6f03a52
        or edi, 0xFFFFFFFF
        cmp ebx, esi
        jbe public_6f039f0
        call dword ptr ds : [public_6fb32e4]
        public_6f039f0 : nop
        mov ecx, ebp
        call public_6f03ec0
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, 0xFFFFFFFF
        jae public_6f03a07
        mov edi, eax
        cmp edi, esi
        jbe public_6f03a38
        public_6f03a07 : nop
        mov ecx, dword ptr ss : [ebp+4]
        add ebx, ecx
        sub eax, edi
        push eax
        lea edx, ds:[ebx+edi]
        push edx
        push ebx
        call dword ptr ds : [public_6fb3388]
        mov esi, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub esi, edi
        push esi
        mov ecx, ebp
        call public_6f03550
        test al, al
        je public_6f03a38
        push esi
        mov ecx, ebp
        call public_6f03530
        public_6f03a38 : nop
        mov ecx, ebp
        call public_6f03ec0
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6f03a52 : nop
        cmp ebx, esi
        jbe public_6f03aab
        cmp ebx, eax
        jne public_6f03aab
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_6f03a66
        mov eax, offset public_6fb8014
        public_6f03a66 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6f03aab
        push 1
        mov ecx, ebp
        call public_6f02b10
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_6f03a81
        mov eax, offset public_6fb8014
        public_6f03a81 : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        pop edi
        mov dword ptr ss : [ebp+0xC], edx
        mov cl, byte ptr ds : [eax-1]
        pop esi
        inc cl
        pop ebp
        mov byte ptr ds : [eax-1], cl
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6f03aab : nop
        push 1
        push ebx
        mov ecx, ebp
        call public_6f03550
        test al, al
        je public_6f03ae2
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        jne public_6f03ac5
        mov esi, offset public_6fb8014
        public_6f03ac5 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_6f03ae2 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f03990)
    }
}

#undef public_6f039df
#undef public_6f039f0
#undef public_6f03a07
#undef public_6f03a38
#undef public_6f03a52
#undef public_6f03a66
#undef public_6f03a81
#undef public_6f03aab
#undef public_6f03ac5
#undef public_6f03ae2
