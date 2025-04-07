#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52890);
CLANG_FORWARD_PROC_SYMBOL(public_6f52f20);

#define public_6f52f51 _public_6f52f51

PROC_DECLARE(0x6f52f20, internal_6f52f20, public_6f52f20);
extern "C" NAKED register_t __cdecl internal_6f52f20()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        jle public_6f52f51
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        xor edx, edx
        mov byte ptr ds : [ecx+esi-1], al
        mov dl, byte ptr ds : [ecx+esi]
        sub eax, edx
        dec eax
        push eax
        push edi
        call public_6f52890
        add esp, 8
        pop edi
        public_6f52f51 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f52f20)
    }
}

#undef public_6f52f51
