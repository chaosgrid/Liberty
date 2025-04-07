#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6373fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);

#define public_6373fb4 _public_6373fb4
#define public_6373fb6 _public_6373fb6
#define public_6373fda _public_6373fda
#define public_6373ffc _public_6373ffc

PROC_DECLARE(0x6373fa0, internal_6373fa0, public_6373fa0);
extern "C" NAKED register_t __cdecl internal_6373fa0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi]
        mov esi, dword ptr ds : [edi+eax*4+4]
        test esi, esi
        je public_6373fb4
        dec esi
        jmp public_6373fb6
        public_6373fb4 : nop
        mov esi, eax
        public_6373fb6 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        push ebx
        call public_6370570
        add esp, 4
        test eax, eax
        jge public_6373fda
        push eax
        push ebx
/*FIXUP push offset public_63f1094 @0x6373fc9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f1094
        call public_6356960
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        ret 
        public_6373fda : nop
        cmp eax, esi
        jl public_6373ffc
        push esi
        push eax
/*FIXUP push offset public_63f1050 @0x6373fe0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f1050
        call public_6356960
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x18
        pop edi
        pop esi
        pop ebx
        ret 
        public_6373ffc : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi+eax*4+4], ecx
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6373fa0)
    }
}

#undef public_6373fb4
#undef public_6373fb6
#undef public_6373fda
#undef public_6373ffc
