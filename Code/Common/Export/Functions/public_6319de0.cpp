#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6319de0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6319df4 _public_6319df4
#define public_6319e0a _public_6319e0a
#define public_6319e19 _public_6319e19
#define public_6319e2c _public_6319e2c
#define public_6319e63 _public_6319e63
#define public_6319e70 _public_6319e70
#define public_6319e86 _public_6319e86
#define public_6319ea6 _public_6319ea6
#define public_6319eaf _public_6319eaf
#define public_6319ec4 _public_6319ec4
#define public_6319ed8 _public_6319ed8
#define public_6319ef4 _public_6319ef4
#define public_6319f11 _public_6319f11
#define public_6319f23 _public_6319f23

PROC_DECLARE(0x6319de0, internal_6319de0, public_6319de0);
extern "C" NAKED register_t __cdecl internal_6319de0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        cmp ebp, eax
        je public_6319f23
        push ebx
        push esi
        push edi
        public_6319df4 : nop
        mov eax, dword ptr ds : [public_63991c0]
        mov esi, dword ptr ds : [eax]
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi+8]
        mov ebx, eax
        cmp esi, ebx
        jae public_6319e0a
        mov ebx, esi
        public_6319e0a : nop
        cmp ebp, edi
        jne public_6319e70
        cmp dword ptr ss : [ebp+8], ebx
        jae public_6319e19
        call dword ptr ds : [public_63991c4]
        public_6319e19 : nop
        mov ecx, ebp
        call dword ptr ds : [public_63991bc]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_6319e2c
        mov esi, eax
        public_6319e2c : nop
        test esi, esi
        jbe public_6319e63
        mov ecx, dword ptr ss : [ebp+4]
        add ebx, ecx
        sub eax, esi
        push eax
        lea edx, ds:[ebx+esi]
        push edx
        push ebx
        call dword ptr ds : [public_6399330]
        mov edi, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub edi, esi
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6319e63
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_63991d8]
        public_6319e63 : nop
        mov ecx, ebp
        call dword ptr ds : [public_63991bc]
        jmp public_6319f11
        public_6319e70 : nop
        xor esi, esi
        cmp ebx, esi
        jbe public_6319ed8
        cmp ebx, eax
        jne public_6319ed8
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_6319e86
        mov eax, dword ptr ds : [public_63991d0]
        public_6319e86 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6319ed8
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, esi
        je public_6319eaf
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6319ea6
        cmp cl, 0xFF
        je public_6319ea6
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6319eaf
        public_6319ea6 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6319eaf : nop
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+0xC], esi
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_6319ec4
        mov eax, dword ptr ds : [public_63991d0]
        public_6319ec4 : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_6319f11
        public_6319ed8 : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6319f11
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        jne public_6319ef4
        mov esi, dword ptr ds : [public_63991d0]
        public_6319ef4 : nop
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
        public_6319f11 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add ebp, 0x10
        cmp ebp, eax
        jne public_6319df4
        pop edi
        pop esi
        pop ebx
        public_6319f23 : nop
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6319de0)
    }
}

#undef public_6319df4
#undef public_6319e0a
#undef public_6319e19
#undef public_6319e2c
#undef public_6319e63
#undef public_6319e70
#undef public_6319e86
#undef public_6319ea6
#undef public_6319eaf
#undef public_6319ec4
#undef public_6319ed8
#undef public_6319ef4
#undef public_6319f11
#undef public_6319f23
