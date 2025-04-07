#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f148f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6f14930 _public_6f14930
#define public_6f1495e _public_6f1495e
#define public_6f14962 _public_6f14962
#define public_6f1496e _public_6f1496e

PROC_DECLARE(0x6f148f0, internal_6f148f0, public_6f148f0);
extern "C" NAKED register_t __cdecl internal_6f148f0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        lea eax, ds:[ebx+0xC]
        push esi
        push eax
        mov dword ptr ss : [esp+0xC], ebx
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f1496e
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6f1496e
        mov eax, dword ptr ds : [ebx+0x9C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f1496e
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        lea esp, ss:[esp]
        public_6f14930 : nop
        mov al, byte ptr ds : [esi+0x2C]
        test al, al
        je public_6f14962
        mov eax, dword ptr ds : [esi+0x44]
        mov ecx, dword ptr ds : [esi+0x48]
        mov edx, dword ptr ds : [ecx]
        push edi
        push ebp
        push eax
        call dword ptr ds : [edx+0xC]
        test al, al
        je public_6f1495e
        mov ecx, dword ptr ds : [esi+0x44]
        mov dword ptr ds : [esi+0x4C], 0
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x10]
        mov byte ptr ds : [esi+0x2C], 0
        public_6f1495e : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f14962 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0x9C]
        jne public_6f14930
        pop edi
        pop ebp
        public_6f1496e : nop
        pop esi
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f148f0)
    }
}

#undef public_6f14930
#undef public_6f1495e
#undef public_6f14962
#undef public_6f1496e
