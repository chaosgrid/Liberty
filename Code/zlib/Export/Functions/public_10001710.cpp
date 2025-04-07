#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001710);

#define public_10001733 _public_10001733
#define public_10001741 _public_10001741
#define public_10001750 _public_10001750
#define public_10001770 _public_10001770
#define public_100017f9 _public_100017f9
#define public_10001800 _public_10001800
#define public_1000180b _public_1000180b
#define public_1000182e _public_1000182e

PROC_DECLARE(0x10001710, internal_10001710, public_10001710);
extern "C" NAKED register_t __cdecl internal_10001710()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov ecx, edi
        and ecx, 0xFFFF
        shr edi, 0x10
        test esi, esi
        jne public_10001733
        pop edi
        mov eax, 1
        pop esi
        ret 0xC
        public_10001733 : nop
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        test ebx, ebx
        jbe public_1000182e
        push ebp
        public_10001741 : nop
        cmp ebx, 0x15B0
        mov eax, ebx
        jb public_10001750
        mov eax, 0x15B0
        public_10001750 : nop
        sub ebx, eax
        cmp eax, 0x10
        jl public_100017f9
        mov edx, eax
        shr edx, 4
        mov ebp, edx
        neg ebp
        shl ebp, 4
        add eax, ebp
        lea esp, ss:[esp]
        public_10001770 : nop
        movzx ebp, byte ptr ds : [esi]
        add ecx, ebp
        movzx ebp, byte ptr ds : [esi+1]
        add edi, ecx
        add ecx, ebp
        movzx ebp, byte ptr ds : [esi+2]
        add edi, ecx
        add ecx, ebp
        movzx ebp, byte ptr ds : [esi+3]
        add edi, ecx
        add ecx, ebp
        movzx ebp, byte ptr ds : [esi+4]
        add edi, ecx
        add ecx, ebp
        movzx ebp, byte ptr ds : [esi+5]
        add edi, ecx
        add ecx, ebp
        movzx ebp, byte ptr ds : [esi+6]
        add edi, ecx
        add ecx, ebp
        movzx ebp, byte ptr ds : [esi+7]
        add edi, ecx
        add ecx, ebp
        movzx ebp, byte ptr ds : [esi+8]
        add edi, ecx
        add ecx, ebp
        movzx ebp, byte ptr ds : [esi+9]
        add edi, ecx
        add ecx, ebp
        movzx ebp, byte ptr ds : [esi+0xA]
        add edi, ecx
        add ecx, ebp
        movzx ebp, byte ptr ds : [esi+0xB]
        add edi, ecx
        add ecx, ebp
        movzx ebp, byte ptr ds : [esi+0xC]
        add edi, ecx
        add ecx, ebp
        movzx ebp, byte ptr ds : [esi+0xD]
        add edi, ecx
        add ecx, ebp
        movzx ebp, byte ptr ds : [esi+0xE]
        add edi, ecx
        add ecx, ebp
        movzx ebp, byte ptr ds : [esi+0xF]
        add edi, ecx
        add ecx, ebp
        add edi, ecx
        add esi, 0x10
        dec edx
        jne public_10001770
        public_100017f9 : nop
        test eax, eax
        je public_1000180b
        lea ecx, ds:[ecx]
        public_10001800 : nop
        movzx edx, byte ptr ds : [esi]
        add ecx, edx
        inc esi
        add edi, ecx
        dec eax
        jne public_10001800
        public_1000180b : nop
        mov eax, ecx
        xor edx, edx
        mov ecx, 0xFFF1
        div ecx
        mov eax, edi
        mov edi, 0xFFF1
        mov ecx, edx
        xor edx, edx
        div edi
        test ebx, ebx
        mov edi, edx
        ja public_10001741
        pop ebp
        public_1000182e : nop
        mov eax, edi
        pop ebx
        shl eax, 0x10
        pop edi
        or eax, ecx
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x10001710)
    }
}

#undef public_10001733
#undef public_10001741
#undef public_10001750
#undef public_10001770
#undef public_100017f9
#undef public_10001800
#undef public_1000180b
#undef public_1000182e
