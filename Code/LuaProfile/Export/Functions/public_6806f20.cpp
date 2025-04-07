#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806990);
CLANG_FORWARD_PROC_SYMBOL(public_6806f20);
CLANG_FORWARD_PROC_SYMBOL(public_680a850);

#define public_6806f5a _public_6806f5a
#define public_6806f73 _public_6806f73
#define public_6806f8f _public_6806f8f

PROC_DECLARE(0x6806f20, internal_6806f20, public_6806f20);
extern "C" NAKED register_t __cdecl internal_6806f20()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0x14]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [ecx+0x10]
        push edx
        push edi
        call public_6806990
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 8
        cmp ecx, 0xFF
        jg public_6806f5a
        mov eax, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ss : [esp+0x14]
        mov byte ptr ds : [esi+eax], dl
        pop edi
        mov byte ptr ds : [esi+eax+1], cl
        pop esi
        ret 
        public_6806f5a : nop
        cmp ecx, 0xFFFFFF
        jle public_6806f73
/*FIXUP push offset public_680db70 @0x6806f62*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680db70
        push edi
        call public_680a850
        add esp, 8
        pop edi
        pop esi
        ret 
        public_6806f73 : nop
        cmp ecx, 0xFFFF
        mov eax, dword ptr ss : [esp+0x10]
        jle public_6806f8f
        mov edx, ecx
        sar edx, 0x10
        mov byte ptr ds : [esi+eax], 0x3E
        mov byte ptr ds : [esi+eax+1], dl
        add eax, 2
        public_6806f8f : nop
        mov dl, byte ptr ss : [esp+0x14]
        dec dl
        mov byte ptr ds : [esi+eax], dl
        mov edx, ecx
        sar edx, 8
        mov byte ptr ds : [esi+eax+1], dl
        pop edi
        mov byte ptr ds : [esi+eax+2], cl
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6806f20)
    }
}

#undef public_6806f5a
#undef public_6806f73
#undef public_6806f8f
