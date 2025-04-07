#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f70);
CLANG_FORWARD_PROC_SYMBOL(public_6362ef0);

#define public_6362f22 _public_6362f22
#define public_6362f3a _public_6362f3a

PROC_DECLARE(0x6362ef0, internal_6362ef0, public_6362ef0);
extern "C" NAKED register_t __cdecl internal_6362ef0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov word ptr ds : [esi], ax
        and eax, 0xFFFF
        push edi
        shl eax, 4
        xor edi, edi
        push eax
        mov word ptr ds : [esi+0x10], di
        call public_6343f70
        mov dword ptr ds : [esi+4], eax
        add esp, 4
        xor eax, eax
        cmp word ptr ds : [esi], di
        mov word ptr ds : [esi+2], di
        jbe public_6362f3a
        xor ecx, ecx
        public_6362f22 : nop
        mov edi, dword ptr ds : [esi+4]
        lea edx, ds:[eax+1]
        mov word ptr ds : [edi+ecx+4], dx
        xor edx, edx
        mov dx, word ptr ds : [esi]
        inc eax
        add ecx, 0x10
        cmp eax, edx
        jb public_6362f22
        public_6362f3a : nop
        mov ecx, dword ptr ds : [esi+4]
        xor eax, eax
        mov ax, word ptr ds : [esi]
        pop edi
        shl eax, 4
        mov word ptr ds : [eax+ecx-0xC], 0xFFFF
        mov word ptr ds : [esi+0xE], 0xFFFF
        mov word ptr ds : [esi+0xC], 0xFFFF
        mov dword ptr ds : [esi+8], 0x501502F9
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6362ef0)
    }
}

#undef public_6362f22
#undef public_6362f3a
