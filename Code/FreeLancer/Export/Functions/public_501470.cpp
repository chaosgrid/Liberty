#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_501470);
CLANG_FORWARD_PROC_SYMBOL(public_5018a0);

#define public_501481 _public_501481
#define public_501489 _public_501489
#define public_5014b0 _public_5014b0
#define public_5014c1 _public_5014c1
#define public_5014c5 _public_5014c5
#define public_5014f4 _public_5014f4
#define public_501521 _public_501521

PROC_DECLARE(0x501470, internal_501470, public_501470);
extern "C" NAKED register_t __cdecl internal_501470()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_501481
        xor ebx, ebx
        jmp public_501489
        public_501481 : nop
        mov ebx, dword ptr ds : [edi+8]
        sub ebx, eax
        sar ebx, 2
        public_501489 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        cmp ebp, 8
        jl public_501521
        cmp ebx, 8
        jl public_501521
        push esi
        xor esi, esi
        test ebp, ebp
        jle public_5014c1
        mov ecx, ebx
        sub ecx, ebp
        shl ecx, 2
        lea ecx, ds:[ecx]
        public_5014b0 : nop
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ecx+eax]
        mov dword ptr ds : [eax+esi*4], edx
        inc esi
        add ecx, 4
        cmp esi, ebp
        jl public_5014b0
        public_5014c1 : nop
        cmp esi, ebx
        jge public_5014f4
        public_5014c5 : nop
        mov ebp, dword ptr ds : [edi+4]
        call dword ptr ds : [public_5c71dc]
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        inc esi
        cmp esi, ebx
        fmul dword ptr ds : [public_5da778]
        fld dword ptr ds : [edi+0x24]
        fsub dword ptr ds : [edi+0x20]
        fmulp 
        fadd dword ptr ds : [edi+0x20]
        fstp dword ptr ss : [ebp+esi*4-4]
        jl public_5014c5
        mov ebp, dword ptr ss : [esp+0x18]
        public_5014f4 : nop
        mov ecx, dword ptr ds : [edi+4]
        lea eax, ds:[edi+0x10]
        push eax
        lea esi, ds:[ebx-1]
        push esi
        push ecx
        call public_5018a0
        mov eax, ebx
        sub eax, ebp
        cdq 
        idiv esi
        add esp, 0xC
        pop esi
        pop edi
        pop ebp
        pop ebx
        neg eax
        mov dword ptr ss : [esp+8], eax
        fild dword ptr ss : [esp+8]
        pop ecx
        ret 4
        public_501521 : nop
        fld dword ptr ds : [public_5c7474]
        pop edi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x501470)
    }
}

#undef public_501481
#undef public_501489
#undef public_5014b0
#undef public_5014c1
#undef public_5014c5
#undef public_5014f4
#undef public_501521
