#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f99cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa2db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4600);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6280);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa2e02 _public_6fa2e02
#define public_6fa2e04 _public_6fa2e04
#define public_6fa2e0c _public_6fa2e0c
#define public_6fa2e1f _public_6fa2e1f
#define public_6fa2e2c _public_6fa2e2c
#define public_6fa2e50 _public_6fa2e50
#define public_6fa2e68 _public_6fa2e68
#define public_6fa2e72 _public_6fa2e72
#define public_6fa2e92 _public_6fa2e92
#define public_6fa2eaa _public_6fa2eaa
#define public_6fa2eb0 _public_6fa2eb0
#define public_6fa2ec3 _public_6fa2ec3
#define public_6fa2ed0 _public_6fa2ed0
#define public_6fa2ede _public_6fa2ede
#define public_6fa2f1c _public_6fa2f1c
#define public_6fa2f4a _public_6fa2f4a
#define public_6fa2f85 _public_6fa2f85
#define public_6fa2f90 _public_6fa2f90
#define public_6fa2fa7 _public_6fa2fa7
#define public_6fa2fc7 _public_6fa2fc7
#define public_6fa2fd7 _public_6fa2fd7
#define public_6fa2ff0 _public_6fa2ff0
#define public_6fa3010 _public_6fa3010
#define public_6fa3026 _public_6fa3026
#define public_6fa3042 _public_6fa3042
#define public_6fa305e _public_6fa305e
#define public_6fa3070 _public_6fa3070
#define public_6fa3093 _public_6fa3093
#define public_6fa30a8 _public_6fa30a8
#define public_6fa30cc _public_6fa30cc
#define public_6fa30cf _public_6fa30cf

PROC_DECLARE(0x6fa2db0, internal_6fa2db0, public_6fa2db0);
extern "C" NAKED register_t __cdecl internal_6fa2db0()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub edx, esi
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        add edx, eax
        cmp edx, edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6fa2f4a
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6fa2e02
        mov edx, esi
        sub edx, ecx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edi, edx
        mov ebx, edx
        jb public_6fa2e04
        public_6fa2e02 : nop
        mov ebx, edi
        public_6fa2e04 : nop
        test ecx, ecx
        jne public_6fa2e0c
        xor edx, edx
        jmp public_6fa2e1f
        public_6fa2e0c : nop
        sub esi, ecx
        mov eax, 0x2AAAAAAB
        imul esi
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6fa2e1f : nop
        lea eax, ds:[edx+ebx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6fa2e2c
        xor eax, eax
        public_6fa2e2c : nop
        lea edx, ds:[eax+eax*2]
        shl edx, 3
        push edx
        call public_6fa912a
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_6fa2e68
        public_6fa2e50 : nop
        push esi
        push ebp
        call public_6fa4600
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x18
        add esp, 8
        add ebp, 0x18
        cmp esi, eax
        jne public_6fa2e50
        public_6fa2e68 : nop
        test edi, edi
        mov esi, ebp
        jbe public_6fa2e92
        mov dword ptr ss : [esp+0x24], edi
        public_6fa2e72 : nop
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        push esi
        call public_6fa4600
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x18
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6fa2e72
        mov eax, dword ptr ss : [esp+0x20]
        public_6fa2e92 : nop
        lea ecx, ds:[edi+edi*2]
        lea ecx, ss:[ebp+ecx*8]
        mov ebp, dword ptr ds : [ebx+8]
        cmp eax, ebp
        mov esi, eax
        je public_6fa2ec3
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6fa2eb0
        public_6fa2eaa : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_6fa2eb0 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6fa4600
        add esi, 0x18
        add esp, 8
        cmp esi, ebp
        jne public_6fa2eaa
        public_6fa2ec3 : nop
        mov ebp, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, ebp
        je public_6fa2ede
        lea ecx, ds:[ecx]
        public_6fa2ed0 : nop
        mov ecx, esi
        call public_6f99cd0
        add esi, 0x18
        cmp esi, ebp
        jne public_6fa2ed0
        public_6fa2ede : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        lea eax, ds:[eax+eax*2]
        lea ecx, ds:[esi+eax*8]
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [ebx+0xC], ecx
        jne public_6fa2f1c
        xor edx, edx
        add edi, edx
        lea ecx, ds:[edi+edi*2]
        pop edi
        lea edx, ds:[esi+ecx*8]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6fa2f1c : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edi, edx
        lea ecx, ds:[edi+edi*2]
        pop edi
        lea edx, ds:[esi+ecx*8]
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6fa2f4a : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, edi
        jae public_6fa3026
        lea eax, ds:[edi+edi*2]
        shl eax, 3
        mov dword ptr ss : [esp+0x20], eax
        add eax, ebx
        cmp ebx, esi
        mov ebp, ebx
        je public_6fa2fa7
        sub eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_6fa2f90
        public_6fa2f85 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_6fa2f90 : nop
        add eax, ebp
        push ebp
        push eax
        call public_6fa4600
        add ebp, 0x18
        add esp, 8
        cmp ebp, esi
        jne public_6fa2f85
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa2fa7 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub edi, edx
        je public_6fa2fd7
        public_6fa2fc7 : nop
        push ebp
        push esi
        call public_6fa4600
        add esp, 8
        add esi, 0x18
        dec edi
        jne public_6fa2fc7
        public_6fa2fd7 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+8]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x28], eax
        je public_6fa3010
        lea edi, ss:[ebp+8]
        lea esi, ds:[ebx+8]
        lea esp, ss:[esp]
        public_6fa2ff0 : nop
        mov dl, byte ptr ss : [ebp+4]
        push edi
        mov ecx, esi
        mov byte ptr ds : [esi-4], dl
        call public_6fa6280
        mov ecx, dword ptr ss : [esp+0x28]
        add esi, 0x18
        lea eax, ds:[esi-8]
        cmp eax, ecx
        jne public_6fa2ff0
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa3010 : nop
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6fa3026 : nop
        test edi, edi
        jbe public_6fa30cf
        lea eax, ds:[edi+edi*2]
        shl eax, 3
        mov edi, esi
        sub edi, eax
        cmp edi, esi
        mov ebp, esi
        mov dword ptr ss : [esp+0x20], eax
        je public_6fa305e
        public_6fa3042 : nop
        push edi
        push ebp
        call public_6fa4600
        add edi, 0x18
        add esp, 8
        add ebp, 0x18
        cmp edi, esi
        jne public_6fa3042
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_6fa305e : nop
        mov edx, dword ptr ds : [ecx+8]
        mov esi, edx
        sub esi, eax
        cmp ebx, esi
        je public_6fa3093
        lea edi, ds:[edx+8]
        lea esp, ss:[esp]
        public_6fa3070 : nop
        mov al, byte ptr ds : [esi-0x14]
        sub esi, 0x18
        lea ecx, ds:[esi+8]
        sub edi, 0x18
        push ecx
        mov ecx, edi
        mov byte ptr ds : [edi-4], al
        call public_6fa6280
        cmp esi, ebx
        jne public_6fa3070
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_6fa3093 : nop
        lea edx, ds:[eax+ebx]
        cmp ebx, edx
        mov dword ptr ss : [esp+0x24], edx
        je public_6fa30cc
        mov edi, dword ptr ss : [esp+0x28]
        lea ebp, ds:[edi+8]
        lea esi, ds:[ebx+8]
        public_6fa30a8 : nop
        mov dl, byte ptr ds : [edi+4]
        push ebp
        mov ecx, esi
        mov byte ptr ds : [esi-4], dl
        call public_6fa6280
        mov ecx, dword ptr ss : [esp+0x24]
        add esi, 0x18
        lea eax, ds:[esi-8]
        cmp eax, ecx
        jne public_6fa30a8
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        public_6fa30cc : nop
        add dword ptr ds : [ecx+8], eax
        public_6fa30cf : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6fa2db0)
    }
}

#undef public_6fa2e02
#undef public_6fa2e04
#undef public_6fa2e0c
#undef public_6fa2e1f
#undef public_6fa2e2c
#undef public_6fa2e50
#undef public_6fa2e68
#undef public_6fa2e72
#undef public_6fa2e92
#undef public_6fa2eaa
#undef public_6fa2eb0
#undef public_6fa2ec3
#undef public_6fa2ed0
#undef public_6fa2ede
#undef public_6fa2f1c
#undef public_6fa2f4a
#undef public_6fa2f85
#undef public_6fa2f90
#undef public_6fa2fa7
#undef public_6fa2fc7
#undef public_6fa2fd7
#undef public_6fa2ff0
#undef public_6fa3010
#undef public_6fa3026
#undef public_6fa3042
#undef public_6fa305e
#undef public_6fa3070
#undef public_6fa3093
#undef public_6fa30a8
#undef public_6fa30cc
#undef public_6fa30cf
