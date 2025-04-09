#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418f70);
CLANG_FORWARD_PROC_SYMBOL(public_445dc0);
CLANG_FORWARD_PROC_SYMBOL(public_590f30);
CLANG_FORWARD_PROC_SYMBOL(public_591420);
CLANG_FORWARD_PROC_SYMBOL(public_591460);
CLANG_FORWARD_PROC_SYMBOL(public_5995f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_590f7b _public_590f7b
#define public_590f90 _public_590f90
#define public_590f93 _public_590f93
#define public_590fb1 _public_590fb1
#define public_590fc3 _public_590fc3
#define public_590fe2 _public_590fe2
#define public_590fea _public_590fea
#define public_590ff5 _public_590ff5
#define public_590ffd _public_590ffd
#define public_591008 _public_591008
#define public_59101c _public_59101c
#define public_591025 _public_591025
#define public_591035 _public_591035
#define public_591050 _public_591050
#define public_59106a _public_59106a
#define public_591072 _public_591072
#define public_59107a _public_59107a
#define public_591082 _public_591082
#define public_59108a _public_59108a
#define public_591096 _public_591096
#define public_59109e _public_59109e
#define public_5910cb _public_5910cb
#define public_5910f0 _public_5910f0
#define public_591116 _public_591116
#define public_591119 _public_591119
#define public_59111d _public_59111d

PROC_DECLARE(0x590f30, internal_590f30, public_590f30);
extern "C" NAKED register_t __cdecl internal_590f30()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_590fb1
        push eax
        call dword ptr ds : [public_5c71c8]
        mov edi, eax
        mov eax, dword ptr ss : [ebp+4]
        lea esi, ds:[edi+1]
        add esp, 4
        cmp esi, eax
        jbe public_590f93
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        je public_590f7b
        lea ecx, ds:[esi+esi]
        push ecx
        push eax
        call dword ptr ds : [public_5c71bc]
        add esp, 8
        mov dword ptr ss : [ebp], eax
        jmp public_590f90
        public_590f7b : nop
        lea edx, ds:[esi+esi]
        push edx
        call dword ptr ds : [public_5c71cc]
        mov dword ptr ss : [ebp], eax
        add esp, 4
        mov word ptr ds : [eax], 0
        public_590f90 : nop
        mov dword ptr ss : [ebp+4], esi
        public_590f93 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [ebp]
        push edi
        push eax
        push ecx
        call dword ptr ds : [public_5c71c0]
        mov edx, dword ptr ss : [ebp]
        add esp, 0xC
        mov word ptr ds : [edx+edi*2], 0
        jmp public_590fc3
        public_590fb1 : nop
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        je public_590fc3
        cmp word ptr ds : [eax], 0
        je public_590fc3
        mov word ptr ds : [eax], 0
        public_590fc3 : nop
        mov eax, dword ptr ds : [ebx+8]
        lea edi, ds:[ebx+0xC]
        lea esi, ss:[ebp+0xC]
        cmp esi, edi
        mov dword ptr ss : [ebp+8], eax
        je public_59111d
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_590fe2
        xor ebx, ebx
        jmp public_590fea
        public_590fe2 : nop
        mov ebx, dword ptr ds : [edi+8]
        sub ebx, eax
        sar ebx, 3
        public_590fea : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_590ff5
        xor edx, edx
        jmp public_590ffd
        public_590ff5 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        sar edx, 3
        public_590ffd : nop
        cmp ebx, edx
        ja public_59106a
        mov edx, dword ptr ds : [edi+8]
        cmp eax, edx
        je public_59101c
        public_591008 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        mov ebx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], ebx
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_591008
        public_59101c : nop
        mov ebp, dword ptr ds : [esi+8]
        cmp ecx, ebp
        mov ebx, ecx
        je public_591035
        public_591025 : nop
        push 0
        mov ecx, ebx
        call public_418f70
        add ebx, 8
        cmp ebx, ebp
        jne public_591025
        public_591035 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_591050
        mov ecx, dword ptr ds : [esi+4]
        mov ebp, dword ptr ss : [esp+0x14]
        xor edi, edi
        lea edx, ds:[ecx+edi*8]
        mov dword ptr ds : [esi+8], edx
        jmp public_591119
        public_591050 : nop
        mov edi, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [esi+4]
        mov ebp, dword ptr ss : [esp+0x14]
        sub edi, eax
        sar edi, 3
        lea edx, ds:[ecx+edi*8]
        mov dword ptr ds : [esi+8], edx
        jmp public_591119
        public_59106a : nop
        test eax, eax
        jne public_591072
        xor ebx, ebx
        jmp public_59107a
        public_591072 : nop
        mov ebx, dword ptr ds : [edi+8]
        sub ebx, eax
        sar ebx, 3
        public_59107a : nop
        test ecx, ecx
        jne public_591082
        xor edx, edx
        jmp public_59108a
        public_591082 : nop
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, ecx
        sar edx, 3
        public_59108a : nop
        cmp ebx, edx
        ja public_5910cb
        test ecx, ecx
        jne public_591096
        xor edx, edx
        jmp public_59109e
        public_591096 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        sar edx, 3
        public_59109e : nop
        push ecx
        lea ebx, ds:[eax+edx*8]
        push ebx
        push eax
        call public_591460
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [edi+8]
        add esp, 0xC
        push eax
        push ecx
        push ebx
        mov ecx, esi
        call public_591420
        mov ecx, edi
        call public_5995f0
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*8]
        jmp public_591116
        public_5910cb : nop
        mov edx, dword ptr ds : [esi+8]
        push edx
        push ecx
        mov ecx, esi
        call public_445dc0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        add esp, 4
        mov ecx, edi
        call public_5995f0
        test eax, eax
        jge public_5910f0
        xor eax, eax
        public_5910f0 : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_5b7e84
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_591420
        mov dword ptr ds : [esi+0xC], eax
        public_591116 : nop
        mov dword ptr ds : [esi+8], eax
        public_591119 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_59111d : nop
        mov edx, dword ptr ds : [ebx+0x1C]
        mov dword ptr ss : [ebp+0x1C], edx
        mov eax, dword ptr ds : [ebx+0x20]
        mov dword ptr ss : [ebp+0x20], eax
        mov ecx, dword ptr ds : [ebx+0x24]
        mov dword ptr ss : [ebp+0x24], ecx
        mov edx, dword ptr ds : [ebx+0x28]
        mov dword ptr ss : [ebp+0x28], edx
        mov eax, dword ptr ds : [ebx+0x2C]
        mov dword ptr ss : [ebp+0x2C], eax
        mov cl, byte ptr ds : [ebx+0x30]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x30], cl
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x590f30)
    }
}

#undef public_590f7b
#undef public_590f90
#undef public_590f93
#undef public_590fb1
#undef public_590fc3
#undef public_590fe2
#undef public_590fea
#undef public_590ff5
#undef public_590ffd
#undef public_591008
#undef public_59101c
#undef public_591025
#undef public_591035
#undef public_591050
#undef public_59106a
#undef public_591072
#undef public_59107a
#undef public_591082
#undef public_59108a
#undef public_591096
#undef public_59109e
#undef public_5910cb
#undef public_5910f0
#undef public_591116
#undef public_591119
#undef public_59111d
