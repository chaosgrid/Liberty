#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b73ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6b760c0);

#define public_6b72721 _public_6b72721
#define public_6b72734 _public_6b72734
#define public_6b7274d _public_6b7274d
#define public_6b72767 _public_6b72767
#define public_6b72780 _public_6b72780
#define public_6b72786 _public_6b72786
#define public_6b727a9 _public_6b727a9
#define public_6b72804 _public_6b72804
#define public_6b7280a _public_6b7280a
#define public_6b72822 _public_6b72822
#define public_6b7285b _public_6b7285b
#define public_6b7286f _public_6b7286f

PROC_DECLARE(0x6b726f0, internal_6b726f0, public_6b726f0);
extern "C" NAKED register_t __cdecl internal_6b726f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        push eax
        lea ecx, ds:[esi+0x20]
        call public_6b73ea0
        mov edi, eax
        xor ebx, ebx
        cmp edi, ebx
        je public_6b7286f
        mov eax, dword ptr ds : [edi]
        cmp eax, ebx
        je public_6b7286f
        mov ecx, dword ptr ds : [esi+0xC]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6b72734
        public_6b72721 : nop
        mov dword ptr ds : [esi+0x474], 0x12
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_6b72734 : nop
        mov cl, byte ptr ds : [edi+8]
        lea ebp, ds:[edi+8]
        cmp cl, 0x2A
        jne public_6b7274d
        cmp byte ptr ss : [ebp+1], bl
        je public_6b727a9
        cmp dword ptr ss : [ebp], 0x2A2E2A
        je public_6b727a9
        public_6b7274d : nop
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+8]
        and edx, 0x7FFFFFFF
        lea ecx, ds:[edx+eax+4]
        mov edx, ebp
        call public_6b760c0
        test eax, eax
        jne public_6b727a9
        public_6b72767 : nop
        mov eax, dword ptr ds : [edi+0x110]
        cmp eax, 1
        jbe public_6b72780
        dec eax
        mov dword ptr ds : [edi+0x110], eax
        mov eax, dword ptr ds : [edi]
        add eax, 0xC
        jmp public_6b72786
        public_6b72780 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx+4]
        public_6b72786 : nop
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [esi+0xC]
        cmp eax, dword ptr ds : [edx+4]
        je public_6b72721
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+8]
        and eax, 0x7FFFFFFF
        mov edx, ebp
        lea ecx, ds:[eax+ecx+4]
        call public_6b760c0
        test eax, eax
        je public_6b72767
        public_6b727a9 : nop
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edx]
        shr ecx, 0x1F
        and ecx, 1
        shl ecx, 4
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [esi+0x478]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ds : [esi+0x47C]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ds : [esi+0x480]
        mov dword ptr ds : [eax+0xC], ecx
        mov ecx, dword ptr ds : [esi+0x484]
        mov dword ptr ds : [eax+0x10], ecx
        mov ecx, dword ptr ds : [esi+0x488]
        mov dword ptr ds : [eax+0x14], ecx
        mov ecx, dword ptr ds : [esi+0x48C]
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ebx
        mov ecx, dword ptr ds : [edx]
        shr ecx, 0x1F
        test cl, 1
        je public_6b72804
        mov dword ptr ds : [eax+0x20], ebx
        jmp public_6b7280a
        public_6b72804 : nop
        mov ecx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+0x20], ecx
        public_6b7280a : nop
        mov dword ptr ds : [eax+0x24], ebx
        mov dword ptr ds : [eax+0x28], ebx
        mov ecx, dword ptr ds : [edx]
        mov ebx, dword ptr ds : [esi+8]
        and ecx, 0x7FFFFFFF
        lea ebp, ds:[ecx+ebx+4]
        lea ebx, ds:[eax+0x2C]
        public_6b72822 : nop
        mov cl, byte ptr ss : [ebp]
        inc ebp
        mov byte ptr ds : [ebx], cl
        inc ebx
        test cl, cl
        jne public_6b72822
        mov byte ptr ds : [eax+0x130], cl
        mov eax, dword ptr ds : [edi+0x110]
        cmp eax, 1
        mov dword ptr ds : [edi+4], edx
        jbe public_6b7285b
        dec eax
        mov dword ptr ds : [edi+0x110], eax
        mov eax, dword ptr ds : [edi]
        add eax, 0xC
        mov dword ptr ds : [edi], eax
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 8
        public_6b7285b : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi], eax
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 8
        public_6b7286f : nop
        mov dword ptr ds : [esi+0x474], 6
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6b726f0)
    }
}

#undef public_6b72721
#undef public_6b72734
#undef public_6b7274d
#undef public_6b72767
#undef public_6b72780
#undef public_6b72786
#undef public_6b727a9
#undef public_6b72804
#undef public_6b7280a
#undef public_6b72822
#undef public_6b7285b
#undef public_6b7286f
