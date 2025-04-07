#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_632ee30);
CLANG_FORWARD_PROC_SYMBOL(public_6332380);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_639750b);

#define public_632eea0 _public_632eea0

PROC_DECLARE(0x632ee30, internal_632ee30, public_632ee30);
extern "C" NAKED register_t __cdecl internal_632ee30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639750b @0x632ee32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639750b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ds : [ecx], offset public_63a48ec
        mov ebx, dword ptr ds : [ecx+8]
        lea esi, ds:[ecx+4]
        xor ebp, ebp
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x20], ebp
        je public_632eea0
        mov edi, dword ptr ds : [esi+8]
        mov ecx, edi
        sub ecx, ebx
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x14], edx
        je public_632eea0
        push ebx
        push edi
        push edi
        call public_6332380
        mov ecx, dword ptr ds : [esi+8]
        add esp, 0xC
        push ecx
        mov edi, eax
        push edi
        mov ecx, esi
        call public_628f050
        mov dword ptr ds : [esi+8], edi
        public_632eea0 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x632ee30)
    }
}

#undef public_632eea0
