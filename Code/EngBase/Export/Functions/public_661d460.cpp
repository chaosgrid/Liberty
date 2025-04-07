#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661d460);
CLANG_FORWARD_PROC_SYMBOL(public_6628190);

#define public_661d4cb _public_661d4cb

PROC_DECLARE(0x661d460, internal_661d460, public_661d460);
extern "C" NAKED register_t __cdecl internal_661d460()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ss : [esp+0x20]
        mov eax, ebx
        fld dword ptr ds : [edi]
        fsub dword ptr ds : [esi]
        fmul dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [edi+4]
        fsub dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [edi+8]
        fsub dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [public_662b0f8]
        test eax, eax
        jne public_661d4cb
        call public_6628190
        mov dword ptr ds : [public_662b0f8], eax
        public_661d4cb : nop
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
        ret 
        UNREACHABLE_TRAP(0x661d460)
    }
}

#undef public_661d4cb
