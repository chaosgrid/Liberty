#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead810);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e220);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e3a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e450);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e490);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e800);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e970);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f4e25f _public_6f4e25f
#define public_6f4e264 _public_6f4e264
#define public_6f4e26c _public_6f4e26c
#define public_6f4e271 _public_6f4e271
#define public_6f4e27d _public_6f4e27d
#define public_6f4e296 _public_6f4e296
#define public_6f4e2aa _public_6f4e2aa
#define public_6f4e309 _public_6f4e309
#define public_6f4e351 _public_6f4e351
#define public_6f4e37c _public_6f4e37c
#define public_6f4e382 _public_6f4e382

PROC_DECLARE(0x6f4e220, internal_6f4e220, public_6f4e220);
extern "C" NAKED register_t __cdecl internal_6f4e220()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebx, edi
        sub ecx, eax
        sub ebx, edx
        sar ebx, 4
        sar ecx, 4
        cmp ecx, 1
        mov dword ptr ss : [esp+0x14], ebx
        jae public_6f4e309
        test edx, edx
        je public_6f4e25f
        mov ecx, eax
        sub ecx, edx
        sar ecx, 4
        cmp ecx, 1
        ja public_6f4e264
        public_6f4e25f : nop
        mov ecx, 1
        public_6f4e264 : nop
        test edx, edx
        jne public_6f4e26c
        xor eax, eax
        jmp public_6f4e271
        public_6f4e26c : nop
        sub eax, edx
        sar eax, 4
        public_6f4e271 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6f4e27d
        xor eax, eax
        public_6f4e27d : nop
        shl eax, 4
        push eax
        call public_6fa912a
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_6f4e2aa
        public_6f4e296 : nop
        push ebx
        push ebp
        call public_6f4e970
        add ebx, 0x10
        add esp, 8
        add ebp, 0x10
        cmp ebx, edi
        jne public_6f4e296
        public_6f4e2aa : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push ebp
        call public_6f4e970
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 0x10
        push ebp
        push eax
        push edi
        mov ecx, esi
        call public_6f4e450
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6f4e3a0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        shl eax, 4
        add eax, edi
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6ead810
        mov ebx, dword ptr ss : [esp+0x14]
        inc eax
        shl eax, 4
        add eax, edi
        mov dword ptr ds : [esi+4], edi
        jmp public_6f4e382
        public_6f4e309 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 4
        cmp ecx, 1
        mov ecx, esi
        jae public_6f4e351
        lea edx, ds:[edi+0x10]
        push edx
        push eax
        push edi
        call public_6f4e450
        mov eax, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, eax
        sub ecx, edi
        sar ecx, 4
        push ebp
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_6f4e490
        mov eax, dword ptr ds : [esi+8]
        push ebp
        push eax
        push edi
        call public_6f4e6a0
        add esp, 0xC
        jmp public_6f4e37c
        public_6f4e351 : nop
        push eax
        push eax
        add eax, 0xFFFFFFF0
        push eax
        call public_6f4e450
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFFF0
        push eax
        push edi
        call public_6f4e800
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        lea edx, ds:[edi+0x10]
        push edx
        push edi
        call public_6f4e6a0
        add esp, 0x18
        public_6f4e37c : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x10
        public_6f4e382 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], eax
        pop edi
        mov eax, ebx
        pop esi
        shl eax, 4
        pop ebp
        add eax, ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6f4e220)
    }
}

#undef public_6f4e25f
#undef public_6f4e264
#undef public_6f4e26c
#undef public_6f4e271
#undef public_6f4e27d
#undef public_6f4e296
#undef public_6f4e2aa
#undef public_6f4e309
#undef public_6f4e351
#undef public_6f4e37c
#undef public_6f4e382
