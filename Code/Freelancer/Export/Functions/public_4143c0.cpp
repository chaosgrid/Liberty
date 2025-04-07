#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4142f0);
CLANG_FORWARD_PROC_SYMBOL(public_4143c0);
CLANG_FORWARD_PROC_SYMBOL(public_4155c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4143f7 _public_4143f7
#define public_414409 _public_414409
#define public_414416 _public_414416
#define public_414422 _public_414422
#define public_414430 _public_414430
#define public_41448f _public_41448f
#define public_414499 _public_414499

PROC_DECLARE(0x4143c0, internal_4143c0, public_4143c0);
extern "C" NAKED register_t __cdecl internal_4143c0()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        push ebp
        push edi
        xor edi, edi
        cmp ebx, edi
        mov ebp, ecx
        je public_414499
        mov eax, dword ptr ss : [ebp]
        fld dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x10], ecx
        call public_5b7ec0
        cmp eax, dword ptr ds : [ebx+0x2C]
        je public_4143f7
        mov dword ptr ds : [ebx+0x2C], eax
        mov dword ptr ds : [ebx+0x28], edi
        public_4143f7 : nop
        mov edx, dword ptr ds : [ebx+0x28]
        cmp edx, dword ptr ds : [public_6105b0]
        je public_414409
        mov ecx, ebx
        call public_4155c0
        public_414409 : nop
        mov ecx, dword ptr ds : [ebx+0x10]
        cmp ecx, edi
        jne public_414416
        mov dword ptr ss : [esp+0x28], edi
        jmp public_414422
        public_414416 : nop
        mov eax, dword ptr ds : [ebx+0x14]
        sub eax, ecx
        sar eax, 3
        mov dword ptr ss : [esp+0x28], eax
        public_414422 : nop
        cmp dword ptr ss : [esp+0x28], edi
        jle public_414499
        push esi
        lea esp, ss:[esp]
        public_414430 : nop
        mov ecx, dword ptr ds : [ebx+0x10]
        test ecx, ecx
        je public_41448f
        mov eax, dword ptr ds : [ebx+0x14]
        sub eax, ecx
        sar eax, 3
        cmp edi, eax
        jae public_41448f
        mov eax, ecx
        mov esi, dword ptr ds : [eax+edi*8]
        test esi, esi
        je public_41448f
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x18]
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        imul edx, edi
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        fild qword ptr ss : [esp+0x18]
        push eax
        push ecx
        push esi
        fadd dword ptr ss : [esp+0x20]
        mov ecx, ebp
        fstp dword ptr ss : [ebp+4]
        call public_4142f0
        public_41448f : nop
        mov eax, dword ptr ss : [esp+0x2C]
        inc edi
        cmp edi, eax
        jl public_414430
        pop esi
        public_414499 : nop
        pop edi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x4143c0)
    }
}

#undef public_4143f7
#undef public_414409
#undef public_414416
#undef public_414422
#undef public_414430
#undef public_41448f
#undef public_414499
