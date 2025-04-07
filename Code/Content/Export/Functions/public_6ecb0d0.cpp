#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed1670);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2d80);
CLANG_FORWARD_PROC_SYMBOL(public_6f156b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15c70);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f481e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f73ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ecb13a _public_6ecb13a
#define public_6ecb170 _public_6ecb170
#define public_6ecb1c0 _public_6ecb1c0
#define public_6ecb1c7 _public_6ecb1c7
#define public_6ecb1e7 _public_6ecb1e7
#define public_6ecb1eb _public_6ecb1eb
#define public_6ecb1f0 _public_6ecb1f0
#define public_6ecb203 _public_6ecb203
#define public_6ecb207 _public_6ecb207
#define public_6ecb24e _public_6ecb24e
#define public_6ecb273 _public_6ecb273
#define public_6ecb27b _public_6ecb27b
#define public_6ecb29e _public_6ecb29e
#define public_6ecb2a4 _public_6ecb2a4
#define public_6ecb2bc _public_6ecb2bc
#define public_6ecb2f1 _public_6ecb2f1
#define public_6ecb346 _public_6ecb346

PROC_DECLARE(0x6ecb0d0, internal_6ecb0d0, public_6ecb0d0);
extern "C" NAKED register_t __cdecl internal_6ecb0d0()
{
    __asm
    {
        sub esp, 0x84
        push ebp
        mov ebp, ecx
        lea eax, ss:[ebp+0x10]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ds : [public_6fcefcc]
        add esp, 4
        cmp eax, ecx
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0xC], eax
        jne public_6ecb13a
        add ecx, 0xC
        push ecx
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ecb346
        mov edx, dword ptr ss : [ebp+0x44]
        xor eax, eax
        mov al, byte ptr ss : [ebp+0x41]
        xor ecx, ecx
        mov cl, byte ptr ss : [ebp+0x40]
        push edx
        mov edx, dword ptr ss : [ebp+4]
        push eax
        push ecx
        mov ecx, dword ptr ds : [edx+8]
        call public_6f481e0
        push eax
        call dword ptr ds : [public_6fb3650]
        add esp, 0x10
        mov al, 1
        pop ebp
        add esp, 0x84
        ret 
        public_6ecb13a : nop
        lea eax, ss:[esp+0xC]
        add ecx, 0xEC
        push eax
        call public_6fa7200
        mov ecx, dword ptr ss : [ebp+4]
        lea edx, ss:[esp+0xC]
        add ecx, 0xEC
        push edx
        mov dword ptr ss : [esp+0xC], eax
        call public_6ed1670
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, eax
        je public_6ecb2f1
        push ebx
        push esi
        push edi
        public_6ecb170 : nop
        mov eax, dword ptr ss : [ebp+0x44]
        mov ecx, dword ptr ds : [ecx+0x10]
        push eax
        xor edx, edx
        mov dl, byte ptr ss : [ebp+0x41]
        xor eax, eax
        mov al, byte ptr ss : [ebp+0x40]
        push edx
        push eax
        push ecx
        call dword ptr ds : [public_6fb3650]
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 0x10
        add edx, 0x10
        mov dword ptr ss : [esp+0x20], eax
        push edx
        lea eax, ss:[esp+0x64]
        push eax
        mov byte ptr ss : [esp+0x1B], 0
        call public_6f15c70
        mov ebx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [ebx+0x150]
        mov edi, dword ptr ds : [edx]
        cmp edi, edx
        mov dword ptr ss : [esp+0x1C], ebx
        je public_6ecb203
        mov edi, edi
        public_6ecb1c0 : nop
        lea esi, ss:[esp+0x64]
        lea eax, ds:[edi+0xC]
        public_6ecb1c7 : nop
        mov bl, byte ptr ds : [eax]
        mov cl, bl
        cmp bl, byte ptr ds : [esi]
        jne public_6ecb1eb
        test cl, cl
        je public_6ecb1e7
        mov bl, byte ptr ds : [eax+1]
        mov cl, bl
        cmp bl, byte ptr ds : [esi+1]
        jne public_6ecb1eb
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ecb1c7
        public_6ecb1e7 : nop
        xor eax, eax
        jmp public_6ecb1f0
        public_6ecb1eb : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ecb1f0 : nop
        test eax, eax
        sete al
        test al, al
        jne public_6ecb273
        mov edi, dword ptr ds : [edi]
        cmp edi, edx
        jne public_6ecb1c0
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6ecb203 : nop
        mov al, byte ptr ss : [esp+0x13]
        public_6ecb207 : nop
        mov cl, byte ptr ss : [ebp+0x40]
        test cl, cl
        je public_6ecb27b
        test al, al
        jne public_6ecb2a4
        fld dword ptr ss : [ebp+0x44]
        mov ecx, 0xD
        lea esi, ss:[esp+0x60]
        lea edi, ss:[esp+0x24]
        rep movsd
        mov cl, byte ptr ss : [ebp+0x41]
        mov byte ptr ss : [esp+0x5C], cl
        push 0x44
        fstp dword ptr ss : [esp+0x5C]
        mov esi, dword ptr ds : [ebx+0x150]
        mov edi, dword ptr ds : [esi+4]
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6ecb24e
        mov edi, eax
        public_6ecb24e : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x24]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_6ed2d80
        mov eax, dword ptr ds : [ebx+0x154]
        add esp, 8
        inc eax
        jmp public_6ecb29e
        public_6ecb273 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        mov al, 1
        jmp public_6ecb207
        public_6ecb27b : nop
        test al, al
        je public_6ecb2a4
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi+4]
        push edi
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+0x154]
        add esp, 4
        dec eax
        public_6ecb29e : nop
        mov dword ptr ds : [ebx+0x154], eax
        public_6ecb2a4 : nop
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        je public_6ecb2bc
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [ebp+4]
        add eax, 0x10
        push eax
        call public_6f156b0
        public_6ecb2bc : nop
        lea ecx, ss:[esp+0x14]
        call public_6f1fa00
        mov ecx, dword ptr ss : [ebp+4]
        lea edx, ss:[esp+0x18]
        add ecx, 0xEC
        push edx
        call public_6ed1670
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        jne public_6ecb170
        pop edi
        pop esi
        pop ebx
        mov al, 1
        pop ebp
        add esp, 0x84
        ret 
        public_6ecb2f1 : nop
        mov eax, dword ptr ss : [ebp+4]
        add eax, 0xC
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ecb346
        mov ecx, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [ecx+8]
        call public_6f478c0
        test eax, eax
        je public_6ecb346
        mov edx, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [edx+4]
        push ecx
        lea edx, ss:[ebp+0xC]
        push edx
        mov ecx, eax
        call public_6f73ac0
        test eax, 0x3FFFFFFF
        je public_6ecb346
        mov ecx, dword ptr ss : [ebp+0x44]
        push ecx
        xor edx, edx
        mov dl, byte ptr ss : [ebp+0x41]
        xor ecx, ecx
        mov cl, byte ptr ss : [ebp+0x40]
        push edx
        push ecx
        push eax
        call dword ptr ds : [public_6fb3650]
        add esp, 0x10
        public_6ecb346 : nop
        mov al, 1
        pop ebp
        add esp, 0x84
        ret 
        UNREACHABLE_TRAP(0x6ecb0d0)
    }
}

#undef public_6ecb13a
#undef public_6ecb170
#undef public_6ecb1c0
#undef public_6ecb1c7
#undef public_6ecb1e7
#undef public_6ecb1eb
#undef public_6ecb1f0
#undef public_6ecb203
#undef public_6ecb207
#undef public_6ecb24e
#undef public_6ecb273
#undef public_6ecb27b
#undef public_6ecb29e
#undef public_6ecb2a4
#undef public_6ecb2bc
#undef public_6ecb2f1
#undef public_6ecb346
