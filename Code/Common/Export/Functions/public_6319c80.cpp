#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6319c80);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6319c98 _public_6319c98
#define public_6319caa _public_6319caa
#define public_6319cb9 _public_6319cb9
#define public_6319ccc _public_6319ccc
#define public_6319d03 _public_6319d03
#define public_6319d10 _public_6319d10
#define public_6319d26 _public_6319d26
#define public_6319d46 _public_6319d46
#define public_6319d4f _public_6319d4f
#define public_6319d64 _public_6319d64
#define public_6319d78 _public_6319d78
#define public_6319d94 _public_6319d94
#define public_6319db5 _public_6319db5
#define public_6319dd2 _public_6319dd2

PROC_DECLARE(0x6319c80, internal_6319c80, public_6319c80);
extern "C" NAKED register_t __cdecl internal_6319c80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+8]
        cmp edi, eax
        je public_6319dd2
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        public_6319c98 : nop
        mov eax, dword ptr ds : [public_63991c0]
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [edi+8]
        mov ebx, eax
        cmp esi, ebx
        jae public_6319caa
        mov ebx, esi
        public_6319caa : nop
        cmp ebp, edi
        jne public_6319d10
        cmp dword ptr ss : [ebp+8], ebx
        jae public_6319cb9
        call dword ptr ds : [public_63991c4]
        public_6319cb9 : nop
        mov ecx, ebp
        call dword ptr ds : [public_63991bc]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_6319ccc
        mov esi, eax
        public_6319ccc : nop
        test esi, esi
        jbe public_6319d03
        mov ecx, dword ptr ss : [ebp+4]
        add ebx, ecx
        sub eax, esi
        push eax
        lea edx, ds:[ebx+esi]
        push edx
        push ebx
        call dword ptr ds : [public_6399330]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6319d03
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d8]
        public_6319d03 : nop
        mov ecx, ebp
        call dword ptr ds : [public_63991bc]
        jmp public_6319db5
        public_6319d10 : nop
        xor esi, esi
        cmp ebx, esi
        jbe public_6319d78
        cmp ebx, eax
        jne public_6319d78
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_6319d26
        mov eax, dword ptr ds : [public_63991d0]
        public_6319d26 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6319d78
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, esi
        je public_6319d4f
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6319d46
        cmp cl, 0xFF
        je public_6319d46
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6319d4f
        public_6319d46 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6319d4f : nop
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+0xC], esi
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_6319d64
        mov eax, dword ptr ds : [public_63991d0]
        public_6319d64 : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_6319db5
        public_6319d78 : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6319db5
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        jne public_6319d94
        mov esi, dword ptr ds : [public_63991d0]
        public_6319d94 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_6319db5 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add edi, 0x10
        add ebp, 0x10
        cmp edi, eax
        mov dword ptr ss : [esp+0x14], edi
        jne public_6319c98
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop edi
        ret 
        public_6319dd2 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6319c80)
    }
}

#undef public_6319c98
#undef public_6319caa
#undef public_6319cb9
#undef public_6319ccc
#undef public_6319d03
#undef public_6319d10
#undef public_6319d26
#undef public_6319d46
#undef public_6319d4f
#undef public_6319d64
#undef public_6319d78
#undef public_6319d94
#undef public_6319db5
#undef public_6319dd2
