#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6f96f90);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f96fcb _public_6f96fcb
#define public_6f96fd3 _public_6f96fd3
#define public_6f96fde _public_6f96fde
#define public_6f96fe6 _public_6f96fe6
#define public_6f9700d _public_6f9700d
#define public_6f97064 _public_6f97064
#define public_6f9707d _public_6f9707d
#define public_6f970a3 _public_6f970a3
#define public_6f970a7 _public_6f970a7
#define public_6f970aa _public_6f970aa
#define public_6f970c9 _public_6f970c9
#define public_6f970d1 _public_6f970d1
#define public_6f970dc _public_6f970dc
#define public_6f970e4 _public_6f970e4
#define public_6f97110 _public_6f97110
#define public_6f97172 _public_6f97172
#define public_6f9718b _public_6f9718b
#define public_6f971b4 _public_6f971b4

PROC_DECLARE(0x6f96f90, internal_6f96f90, public_6f96f90);
extern "C" NAKED register_t __cdecl internal_6f96f90()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp]
        mov ebx, ecx
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ss : [ebp+4]
        push esi
        mov dword ptr ds : [ebx+4], ecx
        mov edx, dword ptr ss : [ebp+8]
        push edi
        mov dword ptr ds : [ebx+8], edx
        mov eax, dword ptr ss : [ebp+0xC]
        lea edi, ss:[ebp+0x10]
        lea esi, ds:[ebx+0x10]
        cmp esi, edi
        mov dword ptr ds : [ebx+0xC], eax
        je public_6f970aa
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6f96fcb
        xor ecx, ecx
        jmp public_6f96fd3
        public_6f96fcb : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        sar ecx, 2
        public_6f96fd3 : nop
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        jne public_6f96fde
        xor eax, eax
        jmp public_6f96fe6
        public_6f96fde : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 2
        public_6f96fe6 : nop
        cmp ecx, eax
        ja public_6f9700d
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edi+4]
        push edx
        push ecx
        push eax
        call public_6f6a640
        add esp, 0xC
        mov ecx, edi
        call public_6fa3db0
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*4]
        jmp public_6f970a7
        public_6f9700d : nop
        mov ecx, edi
        call public_6fa3db0
        mov ecx, esi
        mov ebp, eax
        call public_6eb6b30
        cmp ebp, eax
        ja public_6f97064
        mov ebp, dword ptr ds : [edi+4]
        mov ecx, esi
        call public_6fa3db0
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[ebp+eax*4]
        push ecx
        push eax
        push ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f6a640
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        push edx
        push eax
        push ecx
        mov ecx, esi
        call public_6eed270
        mov ecx, edi
        call public_6fa3db0
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*4]
        jmp public_6f970a3
        public_6f97064 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        add esp, 4
        mov ecx, edi
        call public_6fa3db0
        test eax, eax
        jge public_6f9707d
        xor eax, eax
        public_6f9707d : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6eed270
        mov dword ptr ds : [esi+0xC], eax
        public_6f970a3 : nop
        mov ebp, dword ptr ss : [esp+0x18]
        public_6f970a7 : nop
        mov dword ptr ds : [esi+8], eax
        public_6f970aa : nop
        mov al, byte ptr ss : [ebp+0x20]
        lea edi, ss:[ebp+0x24]
        lea esi, ds:[ebx+0x24]
        cmp esi, edi
        mov byte ptr ds : [ebx+0x20], al
        je public_6f971b4
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        jne public_6f970c9
        xor edx, edx
        jmp public_6f970d1
        public_6f970c9 : nop
        mov edx, dword ptr ds : [edi+8]
        sub edx, ebp
        sar edx, 2
        public_6f970d1 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6f970dc
        xor eax, eax
        jmp public_6f970e4
        public_6f970dc : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6f970e4 : nop
        cmp edx, eax
        ja public_6f97110
        push ecx
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        push ebp
        call public_6f6a640
        add esp, 0xC
        mov ecx, edi
        call public_6fa3db0
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*4]
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        public_6f97110 : nop
        mov ecx, esi
        call public_6eb6b30
        mov ecx, edi
        mov ebp, eax
        call public_6fa3db0
        cmp eax, ebp
        ja public_6f97172
        mov ebp, dword ptr ds : [edi+4]
        mov ecx, esi
        call public_6fa3db0
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[ebp+eax*4]
        push ecx
        push eax
        push ebp
        mov dword ptr ss : [esp+0x24], eax
        call public_6f6a640
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 0xC
        push edx
        push eax
        push ecx
        mov ecx, esi
        call public_6eed270
        mov ecx, edi
        call public_6fa3db0
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*4]
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        public_6f97172 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        add esp, 4
        mov ecx, edi
        call public_6fa3db0
        test eax, eax
        jge public_6f9718b
        xor eax, eax
        public_6f9718b : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6eed270
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+8], eax
        public_6f971b4 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f96f90)
    }
}

#undef public_6f96fcb
#undef public_6f96fd3
#undef public_6f96fde
#undef public_6f96fe6
#undef public_6f9700d
#undef public_6f97064
#undef public_6f9707d
#undef public_6f970a3
#undef public_6f970a7
#undef public_6f970aa
#undef public_6f970c9
#undef public_6f970d1
#undef public_6f970dc
#undef public_6f970e4
#undef public_6f97110
#undef public_6f97172
#undef public_6f9718b
#undef public_6f971b4
