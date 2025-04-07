#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec3c30);
CLANG_FORWARD_PROC_SYMBOL(public_6ec3f50);

#define public_6ec2c19 _public_6ec2c19
#define public_6ec2c2f _public_6ec2c2f
#define public_6ec2c32 _public_6ec2c32
#define public_6ec2c69 _public_6ec2c69
#define public_6ec2c7f _public_6ec2c7f
#define public_6ec2cc6 _public_6ec2cc6
#define public_6ec2cd2 _public_6ec2cd2
#define public_6ec2ce8 _public_6ec2ce8
#define public_6ec2cfb _public_6ec2cfb
#define public_6ec2d28 _public_6ec2d28
#define public_6ec2d2c _public_6ec2d2c
#define public_6ec2d46 _public_6ec2d46

PROC_DECLARE(0x6ec2bf0, internal_6ec2bf0, public_6ec2bf0);
extern "C" NAKED register_t __cdecl internal_6ec2bf0()
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
        je public_6ec2d46
        mov ebp, dword ptr ss : [esp+0x2C]
        cmp ebp, 0xFFFFFFFE
        jne public_6ec2c32
        mov eax, dword ptr ds : [ebx+0x14]
        test eax, eax
        jne public_6ec2c19
        xor edx, edx
        jmp public_6ec2c2f
        public_6ec2c19 : nop
        mov ecx, dword ptr ds : [ebx+0x18]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ec2c2f : nop
        lea ebp, ds:[edx-1]
        public_6ec2c32 : nop
        mov eax, dword ptr ds : [ebx+0x14]
        test eax, eax
        lea ecx, ds:[ebx+0x10]
        je public_6ec2d46
        mov edx, dword ptr ds : [ecx+8]
        sub edx, eax
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ebp, edx
        jae public_6ec2d46
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6ec2c69
        xor edx, edx
        jmp public_6ec2c7f
        public_6ec2c69 : nop
        mov edx, dword ptr ds : [ecx+8]
        sub edx, eax
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ec2c7f : nop
        push edi
        lea edi, ss:[ebp+1]
        cmp edx, edi
        jae public_6ec2d2c
        mov esi, dword ptr ds : [ecx+4]
        xor edx, edx
        cmp esi, edx
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0x3F800000
        je public_6ec2cc6
        mov edx, dword ptr ds : [ecx+8]
        sub edx, esi
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ec2cc6 : nop
        cmp edx, edi
        jae public_6ec2cfb
        test esi, esi
        jne public_6ec2cd2
        xor edx, edx
        jmp public_6ec2ce8
        public_6ec2cd2 : nop
        mov edx, dword ptr ds : [ecx+8]
        sub edx, esi
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ec2ce8 : nop
        lea eax, ss:[esp+0x10]
        push eax
        sub edi, edx
        mov edx, dword ptr ds : [ecx+8]
        push edi
        push edx
        call public_6ec3c30
        jmp public_6ec2d2c
        public_6ec2cfb : nop
        test esi, esi
        je public_6ec2d2c
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
        jae public_6ec2d28
        lea edx, ds:[edi+edi*4]
        push ebx
        lea eax, ds:[esi+edx*4]
        push eax
        call public_6ec3f50
        public_6ec2d28 : nop
        mov ebx, dword ptr ss : [esp+0x2C]
        public_6ec2d2c : nop
        mov edx, dword ptr ds : [ebx+0x14]
        mov eax, dword ptr ss : [esp+0x34]
        pop edi
        pop esi
        lea ecx, ss:[ebp+ebp*4]
        pop ebp
        mov dword ptr ds : [edx+ecx*4], eax
        xor eax, eax
        pop ebx
        add esp, 0x14
        ret 0x10
        public_6ec2d46 : nop
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0x10
        UNREACHABLE_TRAP(0x6ec2bf0)
    }
}

#undef public_6ec2c19
#undef public_6ec2c2f
#undef public_6ec2c32
#undef public_6ec2c69
#undef public_6ec2c7f
#undef public_6ec2cc6
#undef public_6ec2cd2
#undef public_6ec2ce8
#undef public_6ec2cfb
#undef public_6ec2d28
#undef public_6ec2d2c
#undef public_6ec2d46
