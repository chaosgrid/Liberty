#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f4de0);
CLANG_FORWARD_PROC_SYMBOL(public_65f50b0);

#define public_65f50d0 _public_65f50d0
#define public_65f5158 _public_65f5158
#define public_65f5172 _public_65f5172
#define public_65f51b8 _public_65f51b8
#define public_65f51ba _public_65f51ba
#define public_65f51c5 _public_65f51c5

PROC_DECLARE(0x65f50b0, internal_65f50b0, public_65f50b0);
extern "C" NAKED register_t __cdecl internal_65f50b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x2C
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi+0x20], eax
        call public_65f4de0
        mov esi, dword ptr ds : [edi+0xC]
        test esi, esi
        je public_65f51c5
        mov edi, edi
        public_65f50d0 : nop
        cmp byte ptr ds : [esi], 0
        jne public_65f51ba
        mov eax, dword ptr ds : [public_6603138]
        lea edx, ss:[esp+0x38]
        push edx
        mov edx, dword ptr ds : [esi+4]
        push edx
        mov dword ptr ss : [esp+0x40], 0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x60]
        test eax, eax
        je public_65f5158
        mov eax, dword ptr ds : [public_6603138]
        lea edx, ss:[esp+0x1C]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        mov edx, dword ptr ds : [esi+4]
        push edx
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x54]
        fld dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+8], ecx
        jmp public_65f5172
        public_65f5158 : nop
        mov edx, dword ptr ds : [edi+8]
        fld dword ptr ds : [edi+0x24]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+0x34]
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], edx
        public_65f5172 : nop
        fadd dword ptr ss : [esp+8]
        fadd dword ptr ds : [edi+0x20]
        fsub dword ptr ss : [esp+0xC]
        fld st(0)
        fabs 
        fcomp qword ptr ds : [public_6601330]
        fnstsw ax
        test ah, 0x41
        jne public_65f51b8
        mov eax, dword ptr ds : [public_6603138]
        fstp dword ptr ss : [esp+0x2C]
        lea edx, ss:[esp+0x28]
        push edx
        mov edx, dword ptr ds : [esi+4]
        push edx
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x38], 0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x58]
        jmp public_65f51ba
        public_65f51b8 : nop
        fstp st(0)
        public_65f51ba : nop
        mov esi, dword ptr ds : [esi+0x10]
        test esi, esi
        jne public_65f50d0
        public_65f51c5 : nop
        pop edi
        pop esi
        add esp, 0x2C
        ret 4
        UNREACHABLE_TRAP(0x65f50b0)
    }
}

#undef public_65f50d0
#undef public_65f5158
#undef public_65f5172
#undef public_65f51b8
#undef public_65f51ba
#undef public_65f51c5
