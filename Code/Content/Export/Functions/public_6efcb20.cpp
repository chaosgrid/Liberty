#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efcb20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fa0);

#define public_6efcb63 _public_6efcb63
#define public_6efcba2 _public_6efcba2

PROC_DECLARE(0x6efcb20, internal_6efcb20, public_6efcb20);
extern "C" NAKED register_t __cdecl internal_6efcb20()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        push edi
        je public_6efcba2
        mov ecx, dword ptr ds : [esi+0x3C]
        mov edi, dword ptr ss : [esp+0x1C]
        sub ecx, eax
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edi, edx
        jae public_6efcba2
        mov eax, dword ptr ds : [public_6fcf3a0]
        test eax, eax
        push ebx
        mov ebx, dword ptr ds : [esi+0x38]
        jne public_6efcb63
        call public_6fa8fa0
        mov dword ptr ds : [public_6fcf3a0], eax
        public_6efcb63 : nop
        mov ecx, dword ptr ds : [eax]
        imul edi, 0x34
        add edi, ebx
        push edi
        lea edx, ds:[esi+0x10]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x14]
        pop ebx
        fadd dword ptr ds : [esi+0xC]
        pop edi
        fld dword ptr ss : [esp+8]
        fadd dword ptr ds : [esi+8]
        fld dword ptr ss : [esp+4]
        fadd dword ptr ds : [esi+4]
        pop esi
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        add esp, 0xC
        ret 8
        public_6efcba2 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+8], 0
        mov edx, dword ptr ss : [esp+8]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0xC], 0
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ss : [esp+0x10], 0
        mov edx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [ecx+8], edx
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6efcb20)
    }
}

#undef public_6efcb63
#undef public_6efcba2
