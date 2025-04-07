#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0160);
CLANG_FORWARD_PROC_SYMBOL(public_6ed02c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8910);
CLANG_FORWARD_PROC_SYMBOL(public_6f20230);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f93490);

#define public_6ed02f0 _public_6ed02f0
#define public_6ed0356 _public_6ed0356
#define public_6ed039d _public_6ed039d
#define public_6ed03a6 _public_6ed03a6
#define public_6ed03bc _public_6ed03bc

PROC_DECLARE(0x6ed02c0, internal_6ed02c0, public_6ed02c0);
extern "C" NAKED register_t __cdecl internal_6ed02c0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        mov ebp, ecx
        mov edx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, edx
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x10], edx
        mov esi, eax
        je public_6ed039d
        mov ebp, ecx
        lea edi, ds:[ecx+0x48]
        sub ebp, eax
        lea ecx, ds:[ecx]
        public_6ed02f0 : nop
        lea eax, ds:[esi+ebp+8]
        push eax
        lea ecx, ds:[esi+4]
        call public_6ed0160
        mov ecx, dword ptr ds : [esi+ebp+0x38]
        lea edx, ds:[edi-0xC]
        mov dword ptr ds : [esi+0x38], ecx
        push edx
        lea ecx, ds:[esi+0x3C]
        call public_6f93490
        mov al, byte ptr ds : [edi]
        mov byte ptr ds : [esi+0x48], al
        mov cl, byte ptr ds : [edi+1]
        mov byte ptr ds : [esi+0x49], cl
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+0x4C], edx
        mov al, byte ptr ds : [edi+8]
        mov byte ptr ds : [esi+0x50], al
        mov ecx, dword ptr ds : [edi+0xC]
        lea edx, ds:[edi+0x10]
        mov dword ptr ds : [esi+0x54], ecx
        push edx
        lea ecx, ds:[esi+0x58]
        call public_6f20230
        mov eax, dword ptr ds : [edi+0x1C]
        lea ebx, ds:[esi+0x68]
        mov ecx, ebx
        mov dword ptr ds : [esi+0x64], eax
        call public_6f28e10
        mov ecx, dword ptr ds : [edi+0x20]
        test ecx, ecx
        mov dword ptr ds : [ebx], ecx
        je public_6ed0356
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        public_6ed0356 : nop
        lea eax, ds:[edi+0x24]
        push eax
        lea ecx, ds:[esi+0x6C]
        call public_6ef8910
        mov ecx, dword ptr ds : [edi+0x34]
        mov dword ptr ds : [esi+0x7C], ecx
        mov edx, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [esi+0x80], edx
        mov eax, dword ptr ds : [edi+0x3C]
        add edi, 0x88
        mov dword ptr ds : [esi+0x84], eax
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ds:[edi-0x48]
        add esi, 0x88
        cmp ecx, eax
        jne public_6ed02f0
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x1C]
        public_6ed039d : nop
        mov ebx, dword ptr ss : [ebp+8]
        cmp esi, ebx
        mov edi, esi
        je public_6ed03bc
        public_6ed03a6 : nop
        mov edx, dword ptr ds : [edi]
        push 0
        mov ecx, edi
        call dword ptr ds : [edx]
        add edi, 0x88
        cmp edi, ebx
        jne public_6ed03a6
        mov eax, dword ptr ss : [esp+0x1C]
        public_6ed03bc : nop
        pop edi
        mov dword ptr ss : [ebp+8], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6ed02c0)
    }
}

#undef public_6ed02f0
#undef public_6ed0356
#undef public_6ed039d
#undef public_6ed03a6
#undef public_6ed03bc
