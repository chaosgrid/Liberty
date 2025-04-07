#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805fb0);
CLANG_FORWARD_PROC_SYMBOL(public_68065d0);
CLANG_FORWARD_PROC_SYMBOL(public_6809000);
CLANG_FORWARD_PROC_SYMBOL(public_68090b0);
CLANG_FORWARD_PROC_SYMBOL(public_6809110);

#define public_68090f7 _public_68090f7

PROC_DECLARE(0x68090b0, internal_68090b0, public_68090b0);
extern "C" NAKED register_t __cdecl internal_68090b0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
/*FIXUP push offset public_680de20 @0x68090b7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680de20
        push ebx
        call public_6809000
        mov esi, eax
        lea eax, ds:[esi+5]
        push eax
        push 0
        call public_68065d0
        mov edi, eax
        push esi
        push edi
        push ebx
        call public_6809110
        mov al, byte ptr ds : [esi+edi-1]
        add esi, edi
        add esp, 0x1C
        test al, al
        je public_68090f7
        mov ecx, dword ptr ds : [ebx+0x10]
        push ecx
/*FIXUP push offset public_680de10 @0x68090ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680de10
        call public_6805fb0
        add esp, 8
        public_68090f7 : nop
        xor edx, edx
        mov dword ptr ds : [esi], edx
        mov eax, edi
        pop edi
        mov byte ptr ds : [esi+4], dl
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x68090b0)
    }
}

#undef public_68090f7
