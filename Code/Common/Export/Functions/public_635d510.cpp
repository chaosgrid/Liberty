#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348be0);
CLANG_FORWARD_PROC_SYMBOL(public_63522f0);
CLANG_FORWARD_PROC_SYMBOL(public_635d510);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63982f8);

#define public_635d544 _public_635d544
#define public_635d55f _public_635d55f
#define public_635d563 _public_635d563

PROC_DECLARE(0x635d510, internal_635d510, public_635d510);
extern "C" NAKED register_t __cdecl internal_635d510()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63982f8 @0x635d512*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63982f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], edi
        mov dword ptr ds : [edi], offset public_63a54c0
        mov ebx, dword ptr ds : [edi+4]
        test ebx, ebx
        mov dword ptr ss : [esp+0x14], 0
        jl public_635d563
        push esi
        public_635d544 : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov esi, dword ptr ds : [eax+ebx*8+4]
        test esi, esi
        je public_635d55f
        mov ecx, esi
        call public_6348be0
        push esi
        call public_6391d5a
        add esp, 4
        public_635d55f : nop
        dec ebx
        jns public_635d544
        pop esi
        public_635d563 : nop
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_63522f0
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x635d510)
    }
}

#undef public_635d544
#undef public_635d55f
#undef public_635d563
