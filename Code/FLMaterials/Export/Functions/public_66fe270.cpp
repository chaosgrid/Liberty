#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fe480);
CLANG_FORWARD_PROC_SYMBOL(public_66fe4b0);

#define public_66fe3ff _public_66fe3ff
#define public_66fe461 _public_66fe461
#define public_66fe46f _public_66fe46f

PROC_DECLARE(0x66fe270, internal_66fe270, public_66fe270);
extern "C" NAKED register_t __cdecl internal_66fe270()
{
    __asm
    {
        sub esp, 0x44
        push ebx
        mov ebx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [ebx+0x10]
        test eax, eax
        je public_66fe46f
        mov eax, dword ptr ds : [public_670461c]
        mov ecx, dword ptr ss : [esp+0x50]
        push ebp
        mov ebp, dword ptr ds : [ebx+0x20]
        mov edx, dword ptr ss : [ebp]
        push esi
        mov esi, dword ptr ds : [ebx+0x14]
        push edi
        mov dword ptr ss : [ebp+4], ecx
        mov byte ptr ss : [ebp+8], 1
        mov byte ptr ss : [ebp+9], 0
        mov edi, dword ptr ds : [esi]
        push ebp
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [edx+0x24]
        mov eax, dword ptr ss : [ebp]
        push ecx
        fstp dword ptr ss : [esp]
        push ebp
        call dword ptr ds : [eax+0x20]
        push ecx
        mov ecx, dword ptr ss : [ebp]
        fstp dword ptr ss : [esp]
        push ebp
        call dword ptr ds : [ecx+0x28]
        mov edx, dword ptr ss : [ebp]
        push ecx
        fstp dword ptr ss : [esp]
        push ebp
        call dword ptr ds : [edx+0x1C]
        push ecx
        fstp dword ptr ss : [esp]
        push esi
        call dword ptr ds : [edi+0x94]
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ds : [eax+8]
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp]
        sub edx, edi
        mov dword ptr ss : [esp+0x58], edx
        fild dword ptr ss : [esp+0x58]
        push ebp
        fmul dword ptr ds : [public_6702fb0]
        fstp dword ptr ss : [esp+0x5C]
        call dword ptr ds : [eax+0x2C]
        fdivr dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [ebp]
        push ebp
        fstp dword ptr ss : [esp+0x5C]
        call dword ptr ds : [ecx+0x28]
        fdivr dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x58]
        lea esi, ss:[ebp+0x6C]
        mov ecx, esi
        mov dword ptr ds : [esi], 0x3F800000
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], edx
        fstp dword ptr ss : [esp+0x10]
        call public_66fe480
        fdivr dword ptr ds : [public_6701394]
        mov eax, dword ptr ss : [esp+0x10]
        fld st(0)
        fmul dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        lea esi, ss:[ebp+0x78]
        mov ecx, esi
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+4], 0x3F800000
        mov dword ptr ds : [esi+8], eax
        call public_66fe480
        fdivr dword ptr ds : [public_6701394]
        fld st(0)
        fmul dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        mov al, byte ptr ss : [ebp+9]
        test al, al
        je public_66fe3ff
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ss : [esp+0x18]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, 9
        lea edi, ss:[esp+0x24]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x50], ecx
        lea eax, ss:[ebp+0xC]
        mov dword ptr ss : [esp+0x48], edx
        mov edi, eax
        mov ecx, 0xC
        lea esi, ss:[esp+0x24]
        lea edx, ss:[esp+0x24]
        rep movsd
        push edx
        mov ecx, eax
        call public_66fe4b0
        lea edi, ss:[ebp+0x3C]
        mov ecx, 0xC
        mov esi, eax
        rep movsd
        public_66fe3ff : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x64]
        push 0
        push 0
        push 0x3F800000
        push edx
        mov edx, dword ptr ds : [ebx+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov esi, dword ptr ds : [ebx+0x14]
        mov ebx, dword ptr ds : [ebx+0x20]
        mov al, byte ptr ds : [ebx+8]
        test al, al
        je public_66fe461
        mov eax, dword ptr ds : [ebx]
        mov byte ptr ds : [ebx+8], 0
        mov edi, dword ptr ds : [esi]
        push ebx
        call dword ptr ds : [eax+0x24]
        push ecx
        mov ecx, dword ptr ds : [ebx]
        fstp dword ptr ss : [esp]
        push ebx
        call dword ptr ds : [ecx+0x20]
        mov edx, dword ptr ds : [ebx]
        push ecx
        fstp dword ptr ss : [esp]
        push ebx
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [ebx]
        push ecx
        fstp dword ptr ss : [esp]
        push ebx
        call dword ptr ds : [eax+0x1C]
        push ecx
        fstp dword ptr ss : [esp]
        push esi
        call dword ptr ds : [edi+0x94]
        public_66fe461 : nop
        pop edi
        pop esi
        mov byte ptr ds : [ebx+9], 0
        mov dword ptr ds : [ebx+4], 0
        pop ebp
        public_66fe46f : nop
        xor eax, eax
        pop ebx
        add esp, 0x44
        ret 0xC
        UNREACHABLE_TRAP(0x66fe270)
    }
}

#undef public_66fe3ff
#undef public_66fe461
#undef public_66fe46f
