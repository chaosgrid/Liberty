#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f780);
CLANG_FORWARD_PROC_SYMBOL(public_6323240);
CLANG_FORWARD_PROC_SYMBOL(public_63236a0);
CLANG_FORWARD_PROC_SYMBOL(public_6323850);
CLANG_FORWARD_PROC_SYMBOL(public_63238a0);
CLANG_FORWARD_PROC_SYMBOL(public_6323d70);
CLANG_FORWARD_PROC_SYMBOL(public_63241a0);

#define public_63236c6 _public_63236c6
#define public_63236d0 _public_63236d0
#define public_63236d4 _public_63236d4
#define public_63236d8 _public_63236d8
#define public_63236e4 _public_63236e4
#define public_63236fd _public_63236fd
#define public_6323705 _public_6323705
#define public_632370f _public_632370f
#define public_6323716 _public_6323716
#define public_632371e _public_632371e
#define public_6323746 _public_6323746
#define public_6323770 _public_6323770
#define public_6323799 _public_6323799
#define public_63237a0 _public_63237a0
#define public_63237ce _public_63237ce

PROC_DECLARE(0x63236a0, internal_63236a0, public_63236a0);
extern "C" NAKED register_t __cdecl internal_63236a0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        push edi
        mov esi, ecx
        call public_627f780
        mov ecx, dword ptr ds : [esi+4]
        mov ebp, eax
        mov eax, dword ptr ds : [ecx+4]
        mov ebx, ecx
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_63236d8
        mov edi, dword ptr ds : [edi]
        public_63236c6 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jge public_63236d0
        mov eax, dword ptr ds : [eax+8]
        jmp public_63236d4
        public_63236d0 : nop
        mov ebx, eax
        mov eax, dword ptr ds : [eax]
        public_63236d4 : nop
        cmp eax, ecx
        jne public_63236c6
        public_63236d8 : nop
        xor edi, edi
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x1C], edi
        mov eax, ebx
        je public_632371e
        public_63236e4 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x9D]
        inc edi
        test dl, dl
        jne public_63236fd
        push ecx
        call public_6323d70
        add esp, 4
        jmp public_6323716
        public_63236fd : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_632370f
        public_6323705 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6323705
        public_632370f : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6323716
        mov eax, ecx
        public_6323716 : nop
        cmp eax, ebp
        jne public_63236e4
        mov dword ptr ss : [esp+0x1C], edi
        public_632371e : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_6323799
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx]
        jne public_6323799
        cmp ebp, ecx
        jne public_6323799
        mov ebx, dword ptr ds : [ecx+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6323770
        mov ebp, dword ptr ds : [public_63990ec]
        public_6323746 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6323850
        mov edi, dword ptr ds : [edi]
        push 0
        lea ecx, ds:[ebx+0xC]
        call public_63241a0
        mov ecx, dword ptr ds : [public_6401818]
        push ebx
        push 1
        push ecx
        call ebp
        cmp edi, dword ptr ds : [esi+8]
        mov ebx, edi
        jne public_6323746
        public_6323770 : nop
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_6323799 : nop
        cmp ebx, ebp
        je public_63237ce
        lea ecx, ds:[ecx]
        public_63237a0 : nop
        lea ecx, ss:[esp+0x10]
        mov edi, eax
        call public_63238a0
        push edi
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call public_6323240
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        jne public_63237a0
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_63237ce : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x63236a0)
    }
}

#undef public_63236c6
#undef public_63236d0
#undef public_63236d4
#undef public_63236d8
#undef public_63236e4
#undef public_63236fd
#undef public_6323705
#undef public_632370f
#undef public_6323716
#undef public_632371e
#undef public_6323746
#undef public_6323770
#undef public_6323799
#undef public_63237a0
#undef public_63237ce
