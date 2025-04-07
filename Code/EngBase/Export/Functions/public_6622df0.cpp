#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6622df0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6622e44 _public_6622e44
#define public_6622e46 _public_6622e46
#define public_6622e4e _public_6622e4e
#define public_6622e61 _public_6622e61
#define public_6622e6e _public_6622e6e
#define public_6622e8e _public_6622e8e
#define public_6622ea1 _public_6622ea1
#define public_6622eaf _public_6622eaf
#define public_6622eb7 _public_6622eb7
#define public_6622ecc _public_6622ecc
#define public_6622ed2 _public_6622ed2
#define public_6622ef7 _public_6622ef7
#define public_6622f0e _public_6622f0e
#define public_6622f18 _public_6622f18
#define public_6622f57 _public_6622f57
#define public_6622f86 _public_6622f86
#define public_6622fbd _public_6622fbd
#define public_6622fd4 _public_6622fd4
#define public_6622fde _public_6622fde
#define public_6623000 _public_6623000
#define public_6623017 _public_6623017
#define public_662301d _public_662301d
#define public_6623026 _public_6623026
#define public_662303c _public_662303c
#define public_6623052 _public_6623052
#define public_662306b _public_662306b
#define public_6623082 _public_6623082
#define public_662308c _public_662308c
#define public_6623097 _public_6623097
#define public_66230b6 _public_66230b6
#define public_66230c3 _public_66230c3
#define public_66230d9 _public_66230d9
#define public_66230dc _public_66230dc

PROC_DECLARE(0x6622df0, internal_6622df0, public_6622df0);
extern "C" NAKED register_t __cdecl internal_6622df0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, 0x38E38E39
        mov ebp, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x10], edi
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, ebx
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_6622f86
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        je public_6622e44
        mov ecx, ebx
        mov eax, 0x38E38E39
        sub ecx, esi
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp ebp, edx
        mov ecx, edx
        jb public_6622e46
        public_6622e44 : nop
        mov ecx, ebp
        public_6622e46 : nop
        test esi, esi
        jne public_6622e4e
        xor edx, edx
        jmp public_6622e61
        public_6622e4e : nop
        sub ebx, esi
        mov eax, 0x38E38E39
        imul ebx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6622e61 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_6622e6e
        xor eax, eax
        public_6622e6e : nop
        lea ecx, ds:[eax+eax*8]
        shl ecx, 3
        push ecx
        call public_66281dc
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ecx
        je public_6622eaf
        public_6622e8e : nop
        test edx, edx
        je public_6622ea1
        mov ecx, 0x12
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_6622ea1 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, 0x48
        add edx, 0x48
        cmp eax, ecx
        jne public_6622e8e
        public_6622eaf : nop
        test ebp, ebp
        mov eax, edx
        jbe public_6622ed2
        mov ebx, ebp
        public_6622eb7 : nop
        test eax, eax
        je public_6622ecc
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, 0x12
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_6622ecc : nop
        add eax, 0x48
        dec ebx
        jne public_6622eb7
        public_6622ed2 : nop
        mov esi, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x1C]
        lea ecx, ss:[ebp+ebp*8]
        mov dword ptr ss : [esp+0x24], esi
        shl ecx, 3
        cmp eax, esi
        lea ebx, ds:[ecx+edx]
        je public_6622f18
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        sub eax, edx
        add eax, ecx
        public_6622ef7 : nop
        test ebx, ebx
        je public_6622f0e
        mov ecx, 0x12
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x24]
        public_6622f0e : nop
        add eax, 0x48
        add ebx, 0x48
        cmp eax, esi
        jne public_6622ef7
        public_6622f18 : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_66281d0
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ss : [esp+0x18]
        add esp, 4
        lea eax, ds:[eax+eax*8]
        lea ecx, ds:[esi+eax*8]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        mov dword ptr ds : [edi+0xC], ecx
        jne public_6622f57
        xor edx, edx
        mov dword ptr ds : [edi+4], esi
        add ebp, edx
        lea ecx, ss:[ebp+ebp*8]
        lea edx, ds:[esi+ecx*8]
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6622f57 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [edi+4], esi
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add ebp, edx
        lea ecx, ss:[ebp+ebp*8]
        lea edx, ds:[esi+ecx*8]
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6622f86 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_6623052
        lea ecx, ss:[ebp+ebp*8]
        shl ecx, 3
        cmp esi, ebx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ds:[ecx+esi]
        je public_6622fde
        mov edx, eax
        sub edx, ecx
        public_6622fbd : nop
        test eax, eax
        je public_6622fd4
        mov ecx, 0x12
        mov esi, edx
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        public_6622fd4 : nop
        add edx, 0x48
        add eax, 0x48
        cmp edx, ebx
        jne public_6622fbd
        public_6622fde : nop
        mov ebx, dword ptr ds : [edi+8]
        mov eax, 0x38E38E39
        mov ecx, ebx
        sub ecx, esi
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub ebp, edx
        mov eax, ebp
        mov ebp, dword ptr ss : [esp+0x24]
        je public_662301d
        public_6623000 : nop
        test ebx, ebx
        je public_6623017
        mov ecx, 0x12
        mov esi, ebp
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        public_6623017 : nop
        add ebx, 0x48
        dec eax
        jne public_6623000
        public_662301d : nop
        mov edx, dword ptr ds : [edi+8]
        mov eax, esi
        cmp esi, edx
        je public_662303c
        public_6623026 : nop
        mov edi, eax
        add eax, 0x48
        mov ecx, 0x12
        mov esi, ebp
        cmp eax, edx
        rep movsd
        jne public_6623026
        mov edi, dword ptr ss : [esp+0x10]
        public_662303c : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi+8]
        add eax, edx
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6623052 : nop
        test ebp, ebp
        jbe public_66230dc
        lea ebp, ss:[ebp+ebp*8]
        mov eax, ebx
        shl ebp, 3
        sub eax, ebp
        mov edx, ebx
        cmp eax, ebx
        je public_662308c
        public_662306b : nop
        test edx, edx
        je public_6623082
        mov ecx, 0x12
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        public_6623082 : nop
        add eax, 0x48
        add edx, 0x48
        cmp eax, ebx
        jne public_662306b
        public_662308c : nop
        mov edx, dword ptr ds : [edi+8]
        mov eax, edx
        sub eax, ebp
        cmp esi, eax
        je public_66230b6
        public_6623097 : nop
        sub eax, 0x48
        sub edx, 0x48
        mov ecx, 0x12
        mov esi, eax
        mov edi, edx
        rep movsd
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp eax, ecx
        jne public_6623097
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, ecx
        public_66230b6 : nop
        lea edx, ds:[esi+ebp]
        mov eax, esi
        cmp esi, edx
        je public_66230d9
        mov ebx, dword ptr ss : [esp+0x24]
        public_66230c3 : nop
        mov edi, eax
        add eax, 0x48
        mov ecx, 0x12
        mov esi, ebx
        cmp eax, edx
        rep movsd
        jne public_66230c3
        mov edi, dword ptr ss : [esp+0x10]
        public_66230d9 : nop
        add dword ptr ds : [edi+8], ebp
        public_66230dc : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6622df0)
    }
}

#undef public_6622e44
#undef public_6622e46
#undef public_6622e4e
#undef public_6622e61
#undef public_6622e6e
#undef public_6622e8e
#undef public_6622ea1
#undef public_6622eaf
#undef public_6622eb7
#undef public_6622ecc
#undef public_6622ed2
#undef public_6622ef7
#undef public_6622f0e
#undef public_6622f18
#undef public_6622f57
#undef public_6622f86
#undef public_6622fbd
#undef public_6622fd4
#undef public_6622fde
#undef public_6623000
#undef public_6623017
#undef public_662301d
#undef public_6623026
#undef public_662303c
#undef public_6623052
#undef public_662306b
#undef public_6623082
#undef public_662308c
#undef public_6623097
#undef public_66230b6
#undef public_66230c3
#undef public_66230d9
#undef public_66230dc
