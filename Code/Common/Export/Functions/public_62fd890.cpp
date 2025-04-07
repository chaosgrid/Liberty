#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d2090);
CLANG_FORWARD_PROC_SYMBOL(public_62d5a10);

#define public_62fd90b _public_62fd90b

PROC_DECLARE(0x62fd890, internal_62fd890, public_62fd890);
extern "C" NAKED register_t __cdecl internal_62fd890()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push eax
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push ebp
        push ecx
        mov ecx, esi
        call public_62d2090
        mov bl, al
        test bl, bl
        je public_62fd90b
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+0x2C]
        push edi
        push ebp
        push eax
        lea edi, ds:[esi+0x2C]
        push ecx
        mov ecx, edi
        mov byte ptr ds : [esi+0x367], 1
        call dword ptr ds : [edx]
        xor edx, edx
        mov dl, byte ptr ds : [esi+0x367]
        mov ecx, edi
        push edx
        call public_62d5a10
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [esi+0xA4]
        push ebp
        push edx
        mov edx, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0xA4]
        push edx
        call dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [esi+0x164]
        push ebp
        push edx
        mov edx, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0x164]
        push edx
        call dword ptr ds : [eax]
        pop edi
        public_62fd90b : nop
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62fd890)
    }
}

#undef public_62fd90b
