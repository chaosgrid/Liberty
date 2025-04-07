#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6628190);

#define public_661bcef _public_661bcef

PROC_DECLARE(0x661bc80, internal_661bc80, public_661bc80);
extern "C" NAKED register_t __cdecl internal_661bc80()
{
    __asm
    {
        sub esp, 0x10
        fld qword ptr ss : [esp+0x20]
        push ebx
        push esi
        fst dword ptr ss : [esp+0x28]
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ss : [esp+0x20]
        mov eax, ebx
        fld dword ptr ds : [edi]
        fsub dword ptr ds : [esi]
        fmul st, st(1)
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [edi+4]
        fsub dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [edi+8]
        fsub dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fadd dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [public_662acf4]
        test eax, eax
        fstp st(0)
        jne public_661bcef
        call public_6628190
        mov dword ptr ds : [public_662acf4], eax
        public_661bcef : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [eax]
        add edi, 0xC
        push ecx
        add esi, 0xC
        push edi
        lea ecx, ss:[esp+0x14]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x58]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        add ebx, 0xC
        pop edi
        pop esi
        mov dword ptr ds : [ebx], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+0xC], edx
        pop ebx
        add esp, 0x10
        ret 0x14
        UNREACHABLE_TRAP(0x661bc80)
    }
}

#undef public_661bcef
