#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f270);
CLANG_FORWARD_PROC_SYMBOL(public_6f52890);
CLANG_FORWARD_PROC_SYMBOL(public_6f53710);
CLANG_FORWARD_PROC_SYMBOL(public_6f53790);
CLANG_FORWARD_PROC_SYMBOL(public_6f54700);

#define public_6f54748 _public_6f54748

PROC_DECLARE(0x6f54700, internal_6f54700, public_6f54700);
extern "C" NAKED register_t __cdecl internal_6f54700()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [esi+0x14]
        add edx, eax
/*FIXUP push offset public_6f613f8 @0x6f54712*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f613f8
        mov eax, edx
        push 0x64
        push eax
        push edi
        mov dword ptr ds : [esi+0x14], edx
        call public_6f53790
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi+0x14]
        add esp, 0x10
        test ecx, ecx
        jne public_6f54748
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx+0x10]
        push eax
        push edi
        mov byte ptr ds : [edx+1], al
        call public_6f52890
        add esp, 8
        pop edi
        pop esi
        ret 
        public_6f54748 : nop
        mov edx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edx+0x10]
        mov cl, al
        add cl, 0x80
        inc eax
        push eax
        push edi
        mov byte ptr ds : [edx+1], cl
        call public_6f52890
/*FIXUP push offset public_6f613f4 @0x6f5475d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f613f4
        call public_6f4f270
        push eax
        push edi
        call public_6f53710
        add esp, 0x14
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f54700)
    }
}

#undef public_6f54748
