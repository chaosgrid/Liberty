#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5aaee0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad940);
CLANG_FORWARD_PROC_SYMBOL(public_5ae2d0);
CLANG_FORWARD_PROC_SYMBOL(public_5ae310);
CLANG_FORWARD_PROC_SYMBOL(public_5ae920);
CLANG_FORWARD_PROC_SYMBOL(public_5aeb00);
CLANG_FORWARD_PROC_SYMBOL(public_5af120);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5aaf30 _public_5aaf30
#define public_5aaf35 _public_5aaf35
#define public_5aaf3d _public_5aaf3d
#define public_5aaf50 _public_5aaf50
#define public_5aaf5d _public_5aaf5d
#define public_5aaf80 _public_5aaf80
#define public_5aaf94 _public_5aaf94
#define public_5ab001 _public_5ab001
#define public_5ab02e _public_5ab02e
#define public_5ab0a1 _public_5ab0a1

PROC_DECLARE(0x5aaee0, internal_5aaee0, public_5aaee0);
extern "C" NAKED register_t __cdecl internal_5aaee0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, ecx
        mov eax, 0x66666667
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        push edi
        mov edi, ecx
        jae public_5ab02e
        mov ebx, dword ptr ds : [esi+4]
        test ebx, ebx
        je public_5aaf30
        mov edx, ecx
        sub edx, ebx
        mov eax, 0x66666667
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov ebp, edx
        ja public_5aaf35
        public_5aaf30 : nop
        mov ebp, 1
        public_5aaf35 : nop
        test ebx, ebx
        jne public_5aaf3d
        xor edx, edx
        jmp public_5aaf50
        public_5aaf3d : nop
        sub ecx, ebx
        mov eax, 0x66666667
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_5aaf50 : nop
        lea eax, ds:[edx+ebp]
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_5aaf5d
        xor eax, eax
        public_5aaf5d : nop
        lea edx, ds:[eax+eax*4]
        shl edx, 4
        push edx
        call public_5b7e84
        mov ebp, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebx, eax
        je public_5aaf94
        lea esp, ss:[esp]
        public_5aaf80 : nop
        push ebp
        push ebx
        call public_5af120
        add ebp, 0x50
        add esp, 8
        add ebx, 0x50
        cmp ebp, edi
        jne public_5aaf80
        public_5aaf94 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push 1
        push ebx
        mov ecx, esi
        call public_5ae310
        mov ecx, dword ptr ds : [esi+8]
        add ebx, 0x50
        push ebx
        push ecx
        push edi
        mov ecx, esi
        call public_5ae2d0
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_5ad940
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x14]
        lea edx, ds:[eax+eax*4]
        mov eax, dword ptr ds : [esi+4]
        shl edx, 4
        add edx, edi
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+0xC], edx
        jne public_5ab001
        xor edx, edx
        lea ecx, ds:[edx+edx*4+5]
        shl ecx, 4
        add ecx, edi
        mov dword ptr ds : [esi+4], edi
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 
        public_5ab001 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        lea ecx, ds:[edx+edx*4+5]
        shl ecx, 4
        add ecx, edi
        mov dword ptr ds : [esi+4], edi
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 
        public_5ab02e : nop
        mov edx, ecx
        sub edx, edi
        mov eax, 0x66666667
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_5ab0a1
        lea edx, ds:[edi+0x50]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_5ae2d0
        mov ebx, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x66666667
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        push ebp
        mov ecx, 1
        sub ecx, edx
        push ecx
        push ebx
        mov ecx, esi
        call public_5ae310
        mov edx, dword ptr ds : [esi+8]
        push ebp
        push edx
        push edi
        call public_5ae920
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        add eax, 0x50
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 
        public_5ab0a1 : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFB0
        push ecx
        mov ecx, esi
        call public_5ae2d0
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFFB0
        push eax
        push edi
        call public_5aeb00
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        lea ecx, ds:[edi+0x50]
        push ecx
        push edi
        call public_5ae920
        mov eax, dword ptr ds : [esi+8]
        add esp, 0x18
        add eax, 0x50
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5aaee0)
    }
}

#undef public_5aaf30
#undef public_5aaf35
#undef public_5aaf3d
#undef public_5aaf50
#undef public_5aaf5d
#undef public_5aaf80
#undef public_5aaf94
#undef public_5ab001
#undef public_5ab02e
#undef public_5ab0a1
