#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec3c30);
CLANG_FORWARD_PROC_SYMBOL(public_6ec3f50);

#define public_6ec2d89 _public_6ec2d89
#define public_6ec2d9f _public_6ec2d9f
#define public_6ec2da2 _public_6ec2da2
#define public_6ec2dd9 _public_6ec2dd9
#define public_6ec2def _public_6ec2def
#define public_6ec2e36 _public_6ec2e36
#define public_6ec2e42 _public_6ec2e42
#define public_6ec2e58 _public_6ec2e58
#define public_6ec2e6b _public_6ec2e6b
#define public_6ec2e98 _public_6ec2e98
#define public_6ec2e9c _public_6ec2e9c
#define public_6ec2ece _public_6ec2ece

PROC_DECLARE(0x6ec2d60, internal_6ec2d60, public_6ec2d60);
extern "C" NAKED register_t __cdecl internal_6ec2d60()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        push ebp
        push esi
        or esi, 0xFFFFFFFF
        test ebx, ebx
        je public_6ec2ece
        mov ebp, dword ptr ss : [esp+0x2C]
        cmp ebp, 0xFFFFFFFE
        jne public_6ec2da2
        mov eax, dword ptr ds : [ebx+0x14]
        test eax, eax
        jne public_6ec2d89
        xor edx, edx
        jmp public_6ec2d9f
        public_6ec2d89 : nop
        mov ecx, dword ptr ds : [ebx+0x18]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ec2d9f : nop
        lea ebp, ds:[edx-1]
        public_6ec2da2 : nop
        mov eax, dword ptr ds : [ebx+0x14]
        test eax, eax
        lea ecx, ds:[ebx+0x10]
        je public_6ec2ece
        mov edx, dword ptr ds : [ecx+8]
        sub edx, eax
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ebp, edx
        jae public_6ec2ece
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6ec2dd9
        xor edx, edx
        jmp public_6ec2def
        public_6ec2dd9 : nop
        mov edx, dword ptr ds : [ecx+8]
        sub edx, eax
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ec2def : nop
        push edi
        lea edi, ss:[ebp+1]
        cmp edx, edi
        jae public_6ec2e9c
        mov esi, dword ptr ds : [ecx+4]
        xor edx, edx
        cmp esi, edx
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0x3F800000
        je public_6ec2e36
        mov edx, dword ptr ds : [ecx+8]
        sub edx, esi
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ec2e36 : nop
        cmp edx, edi
        jae public_6ec2e6b
        test esi, esi
        jne public_6ec2e42
        xor edx, edx
        jmp public_6ec2e58
        public_6ec2e42 : nop
        mov edx, dword ptr ds : [ecx+8]
        sub edx, esi
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ec2e58 : nop
        lea eax, ss:[esp+0x10]
        push eax
        sub edi, edx
        mov edx, dword ptr ds : [ecx+8]
        push edi
        push edx
        call public_6ec3c30
        jmp public_6ec2e9c
        public_6ec2e6b : nop
        test esi, esi
        je public_6ec2e9c
        mov ebx, dword ptr ds : [ecx+8]
        mov edx, ebx
        sub edx, esi
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edi, edx
        jae public_6ec2e98
        lea edx, ds:[edi+edi*4]
        push ebx
        lea eax, ds:[esi+edx*4]
        push eax
        call public_6ec3f50
        public_6ec2e98 : nop
        mov ebx, dword ptr ss : [esp+0x2C]
        public_6ec2e9c : nop
        mov edx, dword ptr ds : [ebx+0x14]
        lea ecx, ss:[ebp+ebp*4]
        lea eax, ds:[edx+ecx*4]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x38]
        pop edi
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ss : [esp+0x3C]
        pop esi
        pop ebp
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], edx
        xor eax, eax
        pop ebx
        add esp, 0x14
        ret 0x1C
        public_6ec2ece : nop
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0x1C
        UNREACHABLE_TRAP(0x6ec2d60)
    }
}

#undef public_6ec2d89
#undef public_6ec2d9f
#undef public_6ec2da2
#undef public_6ec2dd9
#undef public_6ec2def
#undef public_6ec2e36
#undef public_6ec2e42
#undef public_6ec2e58
#undef public_6ec2e6b
#undef public_6ec2e98
#undef public_6ec2e9c
#undef public_6ec2ece
