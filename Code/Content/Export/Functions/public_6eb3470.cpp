#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eab740);
CLANG_FORWARD_PROC_SYMBOL(public_6eaed70);
CLANG_FORWARD_PROC_SYMBOL(public_6eb25a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3470);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3de0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6560);

#define public_6eb34a0 _public_6eb34a0
#define public_6eb34cd _public_6eb34cd
#define public_6eb34e3 _public_6eb34e3
#define public_6eb34f3 _public_6eb34f3
#define public_6eb3524 _public_6eb3524
#define public_6eb3540 _public_6eb3540
#define public_6eb3550 _public_6eb3550
#define public_6eb355e _public_6eb355e

PROC_DECLARE(0x6eb3470, internal_6eb3470, public_6eb3470);
extern "C" NAKED register_t __cdecl internal_6eb3470()
{
    __asm
    {
        sub esp, 0x34
        mov eax, dword ptr ss : [esp+0x38]
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov edi, dword ptr ss : [ebp+8]
        lea esi, ds:[eax+0x28]
        cmp esi, edi
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x10], esi
        je public_6eb3540
        lea ebx, ds:[esi-0xC]
        lea ebx, ds:[ebx]
        public_6eb34a0 : nop
        mov ecx, dword ptr ds : [esi]
        lea edx, ds:[ebx+0x10]
        mov dword ptr ds : [ebx-0x1C], ecx
        push edx
        lea ecx, ds:[ebx-0x18]
        call public_6eb6560
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx-4]
        push eax
        lea ebp, ds:[ebx-8]
        push ecx
        mov ecx, ebp
        call public_6eb25a0
        mov eax, dword ptr ds : [ebx+0x24]
        test eax, eax
        jne public_6eb34cd
        xor edx, edx
        jmp public_6eb34e3
        public_6eb34cd : nop
        mov ecx, dword ptr ds : [ebx+0x28]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6eb34e3 : nop
        push edx
        mov ecx, ebp
        call public_6eb3de0
        mov ebp, dword ptr ds : [ebx+0x24]
        cmp ebp, dword ptr ds : [ebx+0x28]
        je public_6eb3524
        public_6eb34f3 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, 0xA
        mov esi, ebp
        lea edi, ss:[esp+0x1C]
        rep movsd
        lea ecx, ss:[esp+0x1C]
        push ecx
        push 1
        push edx
        lea ecx, ds:[ebx-8]
        call public_6eaed70
        mov eax, dword ptr ds : [ebx+0x28]
        add ebp, 0x28
        cmp ebp, eax
        jne public_6eb34f3
        mov esi, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x14]
        public_6eb3524 : nop
        mov eax, dword ptr ds : [ebx+0x30]
        add esi, 0x28
        mov dword ptr ds : [ebx+8], eax
        add ebx, 0x28
        cmp esi, edi
        mov dword ptr ss : [esp+0x10], esi
        jne public_6eb34a0
        mov ebp, dword ptr ss : [esp+0x18]
        public_6eb3540 : nop
        mov ebx, dword ptr ss : [ebp+8]
        lea esi, ds:[ebx-0x28]
        cmp esi, ebx
        je public_6eb355e
        lea ebx, ds:[ebx]
        public_6eb3550 : nop
        mov ecx, esi
        call public_6eab740
        add esi, 0x28
        cmp esi, ebx
        jne public_6eb3550
        public_6eb355e : nop
        mov eax, dword ptr ss : [ebp+8]
        pop edi
        add eax, 0xFFFFFFD8
        pop esi
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [esp+0x40]
        pop ebp
        pop ebx
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x6eb3470)
    }
}

#undef public_6eb34a0
#undef public_6eb34cd
#undef public_6eb34e3
#undef public_6eb34f3
#undef public_6eb3524
#undef public_6eb3540
#undef public_6eb3550
#undef public_6eb355e
