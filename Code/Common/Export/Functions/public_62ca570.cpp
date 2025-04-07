#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d2090);
CLANG_FORWARD_PROC_SYMBOL(public_62d5980);
CLANG_FORWARD_PROC_SYMBOL(public_62d6730);
CLANG_FORWARD_PROC_SYMBOL(public_62d6740);
CLANG_FORWARD_PROC_SYMBOL(public_63275d0);

#define public_62ca5fa _public_62ca5fa
#define public_62ca638 _public_62ca638

PROC_DECLARE(0x62ca570, internal_62ca570, public_62ca570);
extern "C" NAKED register_t __cdecl internal_62ca570()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push eax
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push ebp
        push ecx
        mov ecx, esi
        call public_62d2090
        test al, al
        mov byte ptr ss : [esp+0x14], al
        je public_62ca638
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0x88]
        push edi
        push ebp
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0x88]
        push eax
        mov byte ptr ds : [esi+0x1E0], 0
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+0x2C]
        push ebp
        push eax
        lea edi, ds:[esi+0x2C]
        push ecx
        mov ecx, edi
        call dword ptr ds : [edx]
        push 0x40490FDB
        mov ecx, edi
        call public_63275d0
        mov edx, dword ptr ds : [esi+0x244]
        push edx
        mov ecx, edi
        call public_62d6740
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xBC]
        test al, al
        jne public_62ca5fa
        push 1
        mov ecx, edi
        call public_62d6730
        public_62ca5fa : nop
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+0x148]
        push ebp
        push eax
        lea edi, ds:[esi+0x148]
        push ecx
        mov ecx, edi
        call dword ptr ds : [edx]
        push 1
        mov ecx, edi
        call public_62d5980
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0x1C0]
        push ebp
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0x1C0]
        push eax
        call dword ptr ds : [edx]
        mov al, byte ptr ss : [esp+0x18]
        pop edi
        public_62ca638 : nop
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x62ca570)
    }
}

#undef public_62ca5fa
#undef public_62ca638
