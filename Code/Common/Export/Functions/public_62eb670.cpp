#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e9ae0);
CLANG_FORWARD_PROC_SYMBOL(public_62eac70);
CLANG_FORWARD_PROC_SYMBOL(public_62eb070);
CLANG_FORWARD_PROC_SYMBOL(public_62eb390);
CLANG_FORWARD_PROC_SYMBOL(public_62eb670);

#define public_62eb6b1 _public_62eb6b1

PROC_DECLARE(0x62eb670, internal_62eb670, public_62eb670);
extern "C" NAKED register_t __cdecl internal_62eb670()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x1094]
        test al, al
        je public_62eb6b1
        mov eax, dword ptr ss : [esp+8]
        push eax
        call public_62e9ae0
        test al, al
        je public_62eb6b1
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        mov ecx, esi
        call public_62eac70
        push edi
        mov ecx, esi
        mov dword ptr ds : [esi], eax
        call public_62eb070
        push edi
        mov ecx, esi
        call public_62eb390
        pop edi
        mov al, 1
        pop esi
        ret 0xC
        public_62eb6b1 : nop
        xor al, al
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x62eb670)
    }
}

#undef public_62eb6b1
