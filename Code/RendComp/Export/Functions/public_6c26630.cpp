#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c23f90);
CLANG_FORWARD_PROC_SYMBOL(public_6c26630);
CLANG_FORWARD_PROC_SYMBOL(public_6c26700);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c26643 _public_6c26643
#define public_6c2664b _public_6c2664b
#define public_6c26666 _public_6c26666
#define public_6c26674 _public_6c26674
#define public_6c26693 _public_6c26693
#define public_6c2669e _public_6c2669e
#define public_6c266d5 _public_6c266d5
#define public_6c266de _public_6c266de
#define public_6c266e1 _public_6c266e1

PROC_DECLARE(0x6c26630, internal_6c26630, public_6c26630);
extern "C" NAKED register_t __cdecl internal_6c26630()
{
    __asm
    {
        sub esp, 0x70
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        push edi
        jne public_6c26643
        xor eax, eax
        jmp public_6c2664b
        public_6c26643 : nop
        mov eax, dword ptr ds : [esi+0x14]
        sub eax, ecx
        sar eax, 2
        public_6c2664b : nop
        shl eax, 2
        push eax
        call public_6c34eac
        mov edi, dword ptr ds : [esi+0x14]
        mov ebx, eax
        mov eax, dword ptr ds : [esi+0x10]
        add esp, 4
        xor edx, edx
        cmp eax, edi
        je public_6c266d5
        push ebp
        public_6c26666 : nop
        mov ecx, dword ptr ds : [eax]
        mov ebp, dword ptr ds : [ecx+0x2C]
        cmp ebp, dword ptr ds : [ecx+0x30]
        jne public_6c26674
        mov dword ptr ds : [ebx+edx*4], ecx
        inc edx
        public_6c26674 : nop
        add eax, 4
        cmp eax, edi
        jne public_6c26666
        test edx, edx
        pop ebp
        jle public_6c266d5
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_6c26693
        mov eax, dword ptr ds : [esi+0x14]
        sub eax, ecx
        sar eax, 2
        cmp edx, eax
        jb public_6c2669e
        public_6c26693 : nop
        mov al, byte ptr ss : [esp+0x80]
        test al, al
        je public_6c266e1
        public_6c2669e : nop
        xor eax, eax
        mov ecx, 0x1C
        lea edi, ss:[esp+0xC]
        rep stosd
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edi, ds:[esi+0x1C]
        push edi
        push edx
        push ebx
        call public_6c26700
        add esp, 0x10
        test eax, eax
        jne public_6c266e1
        push edi
        call public_6c23f90
        mov ecx, 0x1C
        lea esi, ss:[esp+0x10]
        rep movsd
        jmp public_6c266de
        public_6c266d5 : nop
        add esi, 0x1C
        push esi
        call public_6c23f90
        public_6c266de : nop
        add esp, 4
        public_6c266e1 : nop
        push ebx
        call public_6c34ea0
        add esp, 4
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x70
        ret 4
        UNREACHABLE_TRAP(0x6c26630)
    }
}

#undef public_6c26643
#undef public_6c2664b
#undef public_6c26666
#undef public_6c26674
#undef public_6c26693
#undef public_6c2669e
#undef public_6c266d5
#undef public_6c266de
#undef public_6c266e1
