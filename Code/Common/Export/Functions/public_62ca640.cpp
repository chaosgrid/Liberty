#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d20d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d21d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d4e50);
CLANG_FORWARD_PROC_SYMBOL(public_62d6700);
CLANG_FORWARD_PROC_SYMBOL(public_62d9490);
CLANG_FORWARD_PROC_SYMBOL(public_62ed5a0);

#define public_62ca67b _public_62ca67b
#define public_62ca67d _public_62ca67d
#define public_62ca6c9 _public_62ca6c9
#define public_62ca720 _public_62ca720
#define public_62ca732 _public_62ca732

PROC_DECLARE(0x62ca640, internal_62ca640, public_62ca640);
extern "C" NAKED register_t __cdecl internal_62ca640()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        mov esi, ecx
        call public_62d20d0
        push 3
        push 1
        mov ecx, esi
        call public_62d21d0
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x142C
        call public_62ed5a0
        mov edi, eax
        xor ebx, ebx
        cmp edi, ebx
        jne public_62ca67d
        mov eax, dword ptr ds : [esi+0x1D4]
        cmp eax, ebx
        je public_62ca67b
        lea edi, ds:[eax-8]
        jmp public_62ca67d
        public_62ca67b : nop
        xor edi, edi
        public_62ca67d : nop
        mov eax, dword ptr ds : [esi+0x24]
        mov byte ptr ds : [esi+0x1EC], bl
        mov dword ptr ds : [esi+0x1F4], ebx
        mov dword ptr ds : [esi+0x1F8], ebx
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62ca6c9
        mov ecx, dword ptr ds : [esi+0x14]
        lea edx, ss:[esp+0xC]
        mov byte ptr ss : [esp+0xC], bl
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        lea ecx, ds:[esi+0x2C]
        call public_62d6700
        public_62ca6c9 : nop
        cmp edi, ebx
        mov byte ptr ds : [esi+0x22C], bl
        mov dword ptr ds : [esi+0x230], ebx
        mov dword ptr ds : [esi+0x234], ebx
        mov dword ptr ds : [esi+0x238], ebx
        mov dword ptr ds : [esi+0x218], ebx
        je public_62ca720
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        push eax
        lea ecx, ds:[esi+0x148]
        call public_62d4e50
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        push eax
        lea ecx, ds:[esi+0x88]
        call public_62d4e50
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        mov dword ptr ds : [esi+0x1DC], eax
        jmp public_62ca732
        public_62ca720 : nop
        push ebx
        lea ecx, ds:[esi+0x148]
        call public_62d4e50
        mov dword ptr ds : [esi+0x1DC], ebx
        public_62ca732 : nop
        mov eax, dword ptr ds : [esi+0x24]
        fld dword ptr ds : [eax+0x16AC]
        fcos 
        fstp dword ptr ds : [esi+0x1F0]
        mov ecx, dword ptr ds : [eax+0x16B0]
        mov dword ptr ds : [esi+0x1FC], ecx
        mov edx, dword ptr ds : [eax+0x16B4]
        mov dword ptr ds : [esi+0x204], edx
        mov ecx, dword ptr ds : [eax+0x16B8]
        mov dword ptr ds : [esi+0x208], ecx
        mov dl, byte ptr ds : [eax+0x16BC]
        mov byte ptr ds : [esi+0x20C], dl
        fld dword ptr ds : [eax+0x16C0]
        fst dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        fstp dword ptr ds : [esi+0x210]
        lea ecx, ds:[esi+0x88]
        call public_62d9490
        pop edi
        mov byte ptr ds : [esi+0x214], bl
        mov byte ptr ds : [esi+0x23C], bl
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62ca640)
    }
}

#undef public_62ca67b
#undef public_62ca67d
#undef public_62ca6c9
#undef public_62ca720
#undef public_62ca732
