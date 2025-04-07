#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdc790);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6becf40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a8a8);

#define public_6becf83 _public_6becf83

PROC_DECLARE(0x6becf40, internal_6becf40, public_6becf40);
extern "C" NAKED register_t __cdecl internal_6becf40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6c0a8a8 @0x6becf42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a8a8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], edi
        mov dword ptr ds : [edi], offset public_6c0dc10
        mov esi, dword ptr ds : [edi+0x20]
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_6becf83
        mov ecx, esi
        call public_6bdc790
        push esi
        call public_6c09aaa
        add esp, 4
        public_6becf83 : nop
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_6bebe40
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6becf40)
    }
}

#undef public_6becf83
