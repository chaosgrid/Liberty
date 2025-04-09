#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_595840);

#define public_595eee _public_595eee
#define public_595f0b _public_595f0b
#define public_595f11 _public_595f11

PROC_DECLARE(0x595e90, internal_595e90, public_595e90);
extern "C" NAKED register_t __cdecl internal_595e90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        push 0
        push eax
        mov esi, ecx
        call public_4b5060
        mov bl, al
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_595eee
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x334], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x338], edx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+0x3C0], ecx
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [esi+0x3C4], edx
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0x3CC], ecx
        mov edx, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [esi+0x3D0], edx
        mov al, byte ptr ds : [eax+0x18]
        mov byte ptr ds : [esi+0x42C], al
        mov dword ptr ds : [esi+0x428], ecx
        public_595eee : nop
        fld dword ptr ds : [esi+0x334]
        fld dword ptr ds : [esi+0x338]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_595f0b
        fld dword ptr ds : [esi+0x334]
        jmp public_595f11
        public_595f0b : nop
        fld dword ptr ds : [esi+0x338]
        public_595f11 : nop
        fmul qword ptr ds : [public_5cf100]
        mov ecx, esi
        fstp dword ptr ds : [esi+0x3B0]
        call public_595840
        pop esi
        mov al, bl
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x595e90)
    }
}

#undef public_595eee
#undef public_595f0b
#undef public_595f11
