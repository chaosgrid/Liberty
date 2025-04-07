#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09906);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09b66);

#define public_6bd9803 _public_6bd9803
#define public_6bd980b _public_6bd980b
#define public_6bd9820 _public_6bd9820

PROC_DECLARE(0x6bd97d0, internal_6bd97d0, public_6bd97d0);
extern "C" NAKED register_t __cdecl internal_6bd97d0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6bd980b
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6c09906 @0x6bd97e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6c09906
        lea edi, ds:[esi-4]
        push eax
        push 0x90
        push esi
        call public_6c09b66
        test bl, 1
        je public_6bd9803
        push edi
        call public_6c09aaa
        add esp, 4
        public_6bd9803 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6bd980b : nop
        mov ecx, esi
        call public_6c09906
        test bl, 1
        je public_6bd9820
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bd9820 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6bd97d0)
    }
}

#undef public_6bd9803
#undef public_6bd980b
#undef public_6bd9820
