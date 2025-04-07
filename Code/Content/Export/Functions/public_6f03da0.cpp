#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f02b10);
CLANG_FORWARD_PROC_SYMBOL(public_6f03530);
CLANG_FORWARD_PROC_SYMBOL(public_6f03550);
CLANG_FORWARD_PROC_SYMBOL(public_6f036c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f03da0);

#define public_6f03db5 _public_6f03db5
#define public_6f03e12 _public_6f03e12
#define public_6f03e14 _public_6f03e14
#define public_6f03e27 _public_6f03e27
#define public_6f03e59 _public_6f03e59
#define public_6f03e86 _public_6f03e86
#define public_6f03e9d _public_6f03e9d
#define public_6f03ea2 _public_6f03ea2
#define public_6f03eaa _public_6f03eaa
#define public_6f03eb4 _public_6f03eb4

PROC_DECLARE(0x6f03da0, internal_6f03da0, public_6f03da0);
extern "C" NAKED register_t __cdecl internal_6f03da0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, dword ptr ss : [esp+0xC]
        push esi
        push edi
        jae public_6f03db5
        call dword ptr ds : [public_6fb32e4]
        public_6f03db5 : nop
        mov esi, dword ptr ss : [ebp+4]
        xor ebx, ebx
        cmp esi, ebx
        je public_6f03e14
        mov al, byte ptr ds : [esi-1]
        test al, al
        je public_6f03e14
        cmp al, 0xFF
        je public_6f03e14
        mov cl, al
        dec cl
        mov byte ptr ds : [esi-1], cl
        xor eax, eax
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ss : [ebp+0xC], ebx
        mov edi, esi
        mov ecx, 0xFFFFFFFF
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        push 1
        push ebx
        mov ecx, ebp
        call public_6f03550
        test al, al
        je public_6f03e12
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        push ebx
        mov ecx, ebp
        call public_6f03530
        public_6f03e12 : nop
        xor ebx, ebx
        public_6f03e14 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        sub eax, edx
        cmp eax, edi
        jae public_6f03e27
        mov edi, eax
        public_6f03e27 : nop
        cmp edi, ebx
        jbe public_6f03eb4
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ss : [esp+0x14]
        sub eax, edi
        add ecx, edx
        push eax
        lea eax, ds:[ecx+edi]
        push eax
        push ecx
        call dword ptr ds : [public_6fb3388]
        mov esi, dword ptr ss : [ebp+8]
        sub esi, edi
        add esp, 0xC
        cmp esi, 0xFFFFFFFD
        jbe public_6f03e59
        call dword ptr ds : [public_6fb32dc]
        public_6f03e59 : nop
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, ebx
        je public_6f03e86
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6f03e86
        cmp cl, 0xFF
        je public_6f03e86
        cmp esi, ebx
        jne public_6f03ea2
        dec cl
        mov byte ptr ds : [eax-1], cl
        push ebx
        mov ecx, ebp
        call public_6f02b10
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 8
        public_6f03e86 : nop
        cmp esi, ebx
        jne public_6f03e9d
        cmp eax, ebx
        je public_6f03eb4
        pop edi
        mov dword ptr ss : [ebp+8], ebx
        pop esi
        mov byte ptr ds : [eax], 0
        mov eax, ebp
        pop ebp
        pop ebx
        ret 8
        public_6f03e9d : nop
        cmp dword ptr ss : [ebp+0xC], esi
        jae public_6f03eaa
        public_6f03ea2 : nop
        mov ecx, ebp
        push esi
        call public_6f036c0
        public_6f03eaa : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], esi
        mov byte ptr ds : [esi+ecx], 0
        public_6f03eb4 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f03da0)
    }
}

#undef public_6f03db5
#undef public_6f03e12
#undef public_6f03e14
#undef public_6f03e27
#undef public_6f03e59
#undef public_6f03e86
#undef public_6f03e9d
#undef public_6f03ea2
#undef public_6f03eaa
#undef public_6f03eb4
