#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4482b0);
CLANG_FORWARD_PROC_SYMBOL(public_585380);
CLANG_FORWARD_PROC_SYMBOL(public_585890);
CLANG_FORWARD_PROC_SYMBOL(public_59ec80);
CLANG_FORWARD_PROC_SYMBOL(public_59eee0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_5858ec _public_5858ec
#define public_5859fe _public_5859fe
#define public_585a6e _public_585a6e

PROC_DECLARE(0x585890, internal_585890, public_585890);
extern "C" NAKED register_t __cdecl internal_585890()
{
    __asm
    {
        sub esp, 0xAC
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0xB8]
        test edi, edi
        mov ebx, ecx
        je public_585a6e
        cmp byte ptr ds : [edi], 0
        je public_585a6e
        push esi
        lea esi, ds:[ebx+0x330]
        mov ecx, esi
        call public_59eee0
        mov eax, dword ptr ss : [esp+0xC0]
        push 0
        push eax
        push edi
        mov ecx, esi
        call public_59ec80
        mov al, byte ptr ss : [esp+0xC8]
        test al, al
        je public_5858ec
        mov ecx, dword ptr ds : [ebx+0x334]
        push ecx
        call public_4482b0
        add esp, 4
        public_5858ec : nop
        mov edx, dword ptr ss : [esp+0xC4]
        mov eax, dword ptr ds : [ebx+0x334]
        push edx
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x4C], 0x3F800000
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x50], 0
        call public_585380
        mov ecx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xC]
        push ecx
        lea ecx, ss:[esp+0x64]
        push ecx
        mov ecx, dword ptr ds : [ebx+0x4B8]
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0x88]
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ebx+0x4B8]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA0]
        fld dword ptr ss : [esp+0xC]
        mov esi, eax
        mov eax, dword ptr ds : [public_67c500]
        test eax, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x64]
        rep movsd
        fsub dword ptr ss : [esp+0x88]
        mov ecx, 9
        fstp dword ptr ss : [esp+0x54]
        lea esi, ss:[esp+0x64]
        fld dword ptr ss : [esp+0x10]
        lea edi, ss:[esp+0x94]
        fsub dword ptr ss : [esp+0x8C]
        rep movsd
        pop esi
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x8C]
        fstp dword ptr ss : [esp+0x58]
        jne public_5859fe
        call public_5b73e0
        mov dword ptr ds : [public_67c500], eax
        public_5859fe : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x50]
        push edx
        lea edx, ss:[esp+0x94]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x4C], edx
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ds : [public_5c6d90]
        lea edx, ss:[esp+0x20]
        push edx
        mov edx, dword ptr ds : [ebx+0x334]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x4C], ecx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [ebx+0x334]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_585a6e : nop
        mov ecx, dword ptr ds : [ebx+0x4B8]
        xor eax, eax
        cmp ecx, 0xFFFFFFFF
        pop edi
        setne al
        pop ebx
        add esp, 0xAC
        ret 0x10
        UNREACHABLE_TRAP(0x585890)
    }
}

#undef public_5858ec
#undef public_5859fe
#undef public_585a6e
