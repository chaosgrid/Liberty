#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_575d70);

#define public_575db7 _public_575db7

PROC_DECLARE(0x575d70, internal_575d70, public_575d70);
extern "C" NAKED register_t __cdecl internal_575d70()
{
    __asm
    {
        mov al, byte ptr ds : [public_67c2a0]
        test al, al
        jne public_575db7
        push edi
/*FIXUP push offset public_67c2a0 @0x575d7a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67c2a0
        call dword ptr ds : [public_5c6c00]
        mov edx, dword ptr ds : [public_5e4278]
        xor eax, eax
        or ecx, 0xFFFFFFFF
        add esp, 4
        mov edi, offset public_67c2a0
        repne scasb
        mov eax, dword ptr ds : [public_5e4270]
        mov ecx, dword ptr ds : [public_5e4274]
        dec edi
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [public_5e427c]
        mov dword ptr ds : [edi+4], ecx
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        public_575db7 : nop
        mov eax, offset public_67c2a0
        ret 
        UNREACHABLE_TRAP(0x575d70)
    }
}

#undef public_575db7
