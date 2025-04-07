#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef94e0);
CLANG_FORWARD_PROC_SYMBOL(public_6efa050);
CLANG_FORWARD_PROC_SYMBOL(public_6efa340);
CLANG_FORWARD_PROC_SYMBOL(public_6efa9e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6efa0a2 _public_6efa0a2
#define public_6efa0a4 _public_6efa0a4
#define public_6efa0ac _public_6efa0ac
#define public_6efa0bf _public_6efa0bf
#define public_6efa0cc _public_6efa0cc
#define public_6efa0f0 _public_6efa0f0
#define public_6efa108 _public_6efa108
#define public_6efa112 _public_6efa112
#define public_6efa132 _public_6efa132
#define public_6efa14b _public_6efa14b
#define public_6efa150 _public_6efa150
#define public_6efa163 _public_6efa163
#define public_6efa170 _public_6efa170
#define public_6efa17e _public_6efa17e
#define public_6efa1a8 _public_6efa1a8
#define public_6efa1be _public_6efa1be
#define public_6efa1d8 _public_6efa1d8
#define public_6efa213 _public_6efa213
#define public_6efa217 _public_6efa217
#define public_6efa22e _public_6efa22e
#define public_6efa250 _public_6efa250
#define public_6efa260 _public_6efa260
#define public_6efa270 _public_6efa270
#define public_6efa285 _public_6efa285
#define public_6efa29b _public_6efa29b
#define public_6efa2b5 _public_6efa2b5
#define public_6efa2d9 _public_6efa2d9
#define public_6efa2e4 _public_6efa2e4
#define public_6efa300 _public_6efa300
#define public_6efa310 _public_6efa310
#define public_6efa329 _public_6efa329
#define public_6efa32c _public_6efa32c

PROC_DECLARE(0x6efa050, internal_6efa050, public_6efa050);
extern "C" NAKED register_t __cdecl internal_6efa050()
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
        mov eax, 0x66666667
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        add edx, eax
        cmp edx, edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6efa1d8
        mov ebx, dword ptr ds : [ecx+4]
        test ebx, ebx
        je public_6efa0a2
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x66666667
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edi, edx
        mov ecx, edx
        jb public_6efa0a4
        public_6efa0a2 : nop
        mov ecx, edi
        public_6efa0a4 : nop
        test ebx, ebx
        jne public_6efa0ac
        xor edx, edx
        jmp public_6efa0bf
        public_6efa0ac : nop
        sub esi, ebx
        mov eax, 0x66666667
        imul esi
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6efa0bf : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6efa0cc
        xor eax, eax
        public_6efa0cc : nop
        lea ecx, ds:[eax+eax*4]
        shl ecx, 4
        push ecx
        call public_6fa912a
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_6efa108
        public_6efa0f0 : nop
        push esi
        push ebp
        call public_6efa340
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x50
        add esp, 8
        add ebp, 0x50
        cmp esi, eax
        jne public_6efa0f0
        public_6efa108 : nop
        test edi, edi
        mov esi, ebp
        jbe public_6efa132
        mov dword ptr ss : [esp+0x24], edi
        public_6efa112 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push esi
        call public_6efa340
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x50
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6efa112
        mov eax, dword ptr ss : [esp+0x20]
        public_6efa132 : nop
        lea ecx, ds:[edi+edi*4]
        shl ecx, 4
        add ecx, ebp
        mov ebp, dword ptr ds : [ebx+8]
        cmp eax, ebp
        mov esi, eax
        je public_6efa163
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6efa150
        public_6efa14b : nop
        mov ecx, dword ptr ss : [esp+0x20]
        nop 
        public_6efa150 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6efa340
        add esi, 0x50
        add esp, 8
        cmp esi, ebp
        jne public_6efa14b
        public_6efa163 : nop
        mov ebp, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, ebp
        je public_6efa17e
        lea ecx, ds:[ecx]
        public_6efa170 : nop
        mov ecx, esi
        call public_6ef94e0
        add esi, 0x50
        cmp esi, ebp
        jne public_6efa170
        public_6efa17e : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        lea eax, ds:[eax+eax*4]
        shl eax, 4
        add eax, esi
        mov dword ptr ds : [ebx+0xC], eax
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        test eax, eax
        jne public_6efa1a8
        xor edx, edx
        jmp public_6efa1be
        public_6efa1a8 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6efa1be : nop
        add edi, edx
        lea edx, ds:[edi+edi*4]
        pop edi
        shl edx, 4
        add edx, esi
        mov dword ptr ds : [ebx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6efa1d8 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        mov eax, 0x66666667
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, edi
        jae public_6efa29b
        lea eax, ds:[edi+edi*4]
        shl eax, 4
        mov dword ptr ss : [esp+0x24], eax
        add eax, ebx
        cmp ebx, esi
        mov ebp, ebx
        je public_6efa22e
        sub eax, ebx
        mov dword ptr ss : [esp+0x20], eax
        jmp public_6efa217
        public_6efa213 : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_6efa217 : nop
        add eax, ebp
        push ebp
        push eax
        call public_6efa340
        add ebp, 0x50
        add esp, 8
        cmp ebp, esi
        jne public_6efa213
        mov ecx, dword ptr ss : [esp+0x10]
        public_6efa22e : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x66666667
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub edi, edx
        je public_6efa260
        mov edi, edi
        public_6efa250 : nop
        push ebp
        push esi
        call public_6efa340
        add esp, 8
        add esi, 0x50
        dec edi
        jne public_6efa250
        public_6efa260 : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [edi+8]
        cmp ebx, esi
        je public_6efa285
        nop 
        lea esp, ss:[esp]
        public_6efa270 : nop
        push ebp
        mov ecx, ebx
        call public_6efa9e0
        mov edx, dword ptr ss : [ebp+0x4C]
        mov dword ptr ds : [ebx+0x4C], edx
        add ebx, 0x50
        cmp ebx, esi
        jne public_6efa270
        public_6efa285 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x24]
        add ecx, eax
        mov dword ptr ds : [edi+8], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6efa29b : nop
        test edi, edi
        jbe public_6efa32c
        lea ebp, ds:[edi+edi*4]
        shl ebp, 4
        mov edi, esi
        sub edi, ebp
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], esi
        je public_6efa2d9
        public_6efa2b5 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push edi
        push ecx
        call public_6efa340
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0x50
        add edi, 0x50
        add esp, 8
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_6efa2b5
        mov ecx, dword ptr ss : [esp+0x10]
        public_6efa2d9 : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, ebp
        cmp ebx, esi
        je public_6efa300
        public_6efa2e4 : nop
        sub esi, 0x50
        sub edi, 0x50
        push esi
        mov ecx, edi
        call public_6efa9e0
        cmp esi, ebx
        mov edx, dword ptr ds : [esi+0x4C]
        mov dword ptr ds : [edi+0x4C], edx
        jne public_6efa2e4
        mov ecx, dword ptr ss : [esp+0x10]
        public_6efa300 : nop
        lea edi, ds:[ebx+ebp]
        cmp ebx, edi
        je public_6efa329
        mov esi, dword ptr ss : [esp+0x28]
        nop 
        lea esp, ss:[esp]
        public_6efa310 : nop
        push esi
        mov ecx, ebx
        call public_6efa9e0
        mov eax, dword ptr ds : [esi+0x4C]
        mov dword ptr ds : [ebx+0x4C], eax
        add ebx, 0x50
        cmp ebx, edi
        jne public_6efa310
        mov ecx, dword ptr ss : [esp+0x10]
        public_6efa329 : nop
        add dword ptr ds : [ecx+8], ebp
        public_6efa32c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6efa050)
    }
}

#undef public_6efa0a2
#undef public_6efa0a4
#undef public_6efa0ac
#undef public_6efa0bf
#undef public_6efa0cc
#undef public_6efa0f0
#undef public_6efa108
#undef public_6efa112
#undef public_6efa132
#undef public_6efa14b
#undef public_6efa150
#undef public_6efa163
#undef public_6efa170
#undef public_6efa17e
#undef public_6efa1a8
#undef public_6efa1be
#undef public_6efa1d8
#undef public_6efa213
#undef public_6efa217
#undef public_6efa22e
#undef public_6efa250
#undef public_6efa260
#undef public_6efa270
#undef public_6efa285
#undef public_6efa29b
#undef public_6efa2b5
#undef public_6efa2d9
#undef public_6efa2e4
#undef public_6efa300
#undef public_6efa310
#undef public_6efa329
#undef public_6efa32c
