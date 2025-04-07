#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6f35db0);
CLANG_FORWARD_PROC_SYMBOL(public_6f36d10);
CLANG_FORWARD_PROC_SYMBOL(public_6f36ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6f720);
CLANG_FORWARD_PROC_SYMBOL(public_6f6f760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f35dd0 _public_6f35dd0
#define public_6f35de4 _public_6f35de4
#define public_6f35dfb _public_6f35dfb
#define public_6f35e62 _public_6f35e62
#define public_6f35e67 _public_6f35e67
#define public_6f35e6f _public_6f35e6f
#define public_6f35e81 _public_6f35e81
#define public_6f35e8e _public_6f35e8e
#define public_6f35eb0 _public_6f35eb0
#define public_6f35ec4 _public_6f35ec4
#define public_6f35f2c _public_6f35f2c
#define public_6f35f90 _public_6f35f90
#define public_6f35faf _public_6f35faf
#define public_6f35fc6 _public_6f35fc6
#define public_6f35fe8 _public_6f35fe8
#define public_6f35ff0 _public_6f35ff0
#define public_6f3600d _public_6f3600d
#define public_6f36011 _public_6f36011
#define public_6f3602f _public_6f3602f
#define public_6f36045 _public_6f36045

PROC_DECLARE(0x6f35db0, internal_6f35db0, public_6f35db0);
extern "C" NAKED register_t __cdecl internal_6f35db0()
{
    __asm
    {
        sub esp, 0x20
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp], eax
        je public_6f36045
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x38]
        push edi
        nop 
        public_6f35dd0 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        mov ebp, dword ptr ds : [ecx+4]
        cmp ebp, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x3C], ebp
        je public_6f3602f
        public_6f35de4 : nop
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [eax]
        jne public_6f36011
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6f35dfb
        mov eax, 1
        public_6f35dfb : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ds : [esi+8]
        sub edx, ecx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        mov dword ptr ss : [esp+0x20], 0
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        fild qword ptr ss : [esp+0x1C]
        mov edi, ecx
        fstp dword ptr ss : [esp+0x2C]
        jae public_6f35f2c
        mov ebx, dword ptr ds : [esi+4]
        test ebx, ebx
        je public_6f35e62
        mov edx, ecx
        sub edx, ebx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov ebp, edx
        ja public_6f35e67
        public_6f35e62 : nop
        mov ebp, 1
        public_6f35e67 : nop
        test ebx, ebx
        jne public_6f35e6f
        xor edx, edx
        jmp public_6f35e81
        public_6f35e6f : nop
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f35e81 : nop
        lea eax, ds:[edx+ebp]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6f35e8e
        xor eax, eax
        public_6f35e8e : nop
        lea edx, ds:[eax+eax*2]
        shl edx, 2
        push edx
        call public_6fa912a
        mov ebp, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x18], eax
        mov ebx, eax
        je public_6f35ec4
        lea ebx, ds:[ebx]
        public_6f35eb0 : nop
        push ebp
        push ebx
        call public_6f36ef0
        add ebp, 0xC
        add esp, 8
        add ebx, 0xC
        cmp ebp, edi
        jne public_6f35eb0
        public_6f35ec4 : nop
        lea eax, ss:[esp+0x24]
        push eax
        push 1
        push ebx
        mov ecx, esi
        call public_6f6f760
        mov ecx, dword ptr ds : [esi+8]
        add ebx, 0xC
        push ebx
        push ecx
        push edi
        mov ecx, esi
        call public_6f6f720
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6ea1490
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x1C]
        lea edx, ds:[eax+eax*2]
        lea eax, ds:[edi+edx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6f36d10
        mov ebp, dword ptr ss : [esp+0x3C]
        inc eax
        lea ecx, ds:[eax+eax*2]
        lea edx, ds:[edi+ecx*4]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+4], edi
        jmp public_6f36011
        public_6f35f2c : nop
        mov edx, ecx
        sub edx, edi
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6f35faf
        lea edx, ds:[edi+0xC]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_6f6f720
        mov ebx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, 1
        sub eax, edx
        push eax
        push ebx
        mov ecx, esi
        call public_6f6f760
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6f3600d
        lea esp, ss:[esp]
        public_6f35f90 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x2C]
        add edi, 0xC
        cmp edi, eax
        mov dword ptr ds : [ecx+8], edx
        jne public_6f35f90
        jmp public_6f3600d
        public_6f35faf : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFF4
        push ecx
        mov ecx, esi
        call public_6f6f720
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-0xC]
        cmp edi, eax
        je public_6f35fe8
        public_6f35fc6 : nop
        sub eax, 0xC
        sub ecx, 0xC
        cmp eax, edi
        mov edx, eax
        mov ebp, dword ptr ds : [edx]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], ebp
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx+8], edx
        jne public_6f35fc6
        mov ebp, dword ptr ss : [esp+0x3C]
        public_6f35fe8 : nop
        lea eax, ds:[edi+0xC]
        cmp edi, eax
        je public_6f3600d
        nop 
        public_6f35ff0 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x2C]
        add edi, 0xC
        cmp edi, eax
        mov dword ptr ds : [ecx+8], edx
        jne public_6f35ff0
        public_6f3600d : nop
        add dword ptr ds : [esi+8], 0xC
        public_6f36011 : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x10]
        add ebp, 8
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x3C], ebp
        jne public_6f35de4
        mov edx, dword ptr ss : [esp+0x34]
        public_6f3602f : nop
        mov ecx, dword ptr ds : [edx+8]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jne public_6f35dd0
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6f36045 : nop
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6f35db0)
    }
}

#undef public_6f35dd0
#undef public_6f35de4
#undef public_6f35dfb
#undef public_6f35e62
#undef public_6f35e67
#undef public_6f35e6f
#undef public_6f35e81
#undef public_6f35e8e
#undef public_6f35eb0
#undef public_6f35ec4
#undef public_6f35f2c
#undef public_6f35f90
#undef public_6f35faf
#undef public_6f35fc6
#undef public_6f35fe8
#undef public_6f35ff0
#undef public_6f3600d
#undef public_6f36011
#undef public_6f3602f
#undef public_6f36045
