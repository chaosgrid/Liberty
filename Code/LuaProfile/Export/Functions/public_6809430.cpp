#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6809050);
CLANG_FORWARD_PROC_SYMBOL(public_6809430);

#define public_6809444 _public_6809444
#define public_680945c _public_680945c
#define public_6809472 _public_6809472

PROC_DECLARE(0x6809430, internal_6809430, public_6809430);
extern "C" NAKED register_t __cdecl internal_6809430()
{
    __asm
    {
        mov al, byte ptr ds : [public_680df88]
        test al, al
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, offset public_680df88
        je public_680945c
        public_6809444 : nop
        push edi
        call public_6809050
        movsx ecx, byte ptr ds : [esi]
        add esp, 4
        cmp eax, ecx
        jne public_680945c
        mov al, byte ptr ds : [esi+1]
        inc esi
        test al, al
        jne public_6809444
        public_680945c : nop
        cmp byte ptr ds : [esi], 0
        je public_6809472
        mov edx, dword ptr ds : [edi+0x10]
        push edx
/*FIXUP push offset public_680df74 @0x6809465*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680df74
        call public_6805fb0
        add esp, 8
        public_6809472 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6809430)
    }
}

#undef public_6809444
#undef public_680945c
#undef public_6809472
