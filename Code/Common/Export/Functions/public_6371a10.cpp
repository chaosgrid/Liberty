#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636f2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6371a10);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6378820);

#define public_6371a2f _public_6371a2f
#define public_6371a37 _public_6371a37
#define public_6371a96 _public_6371a96
#define public_6371a9d _public_6371a9d
#define public_6371ac7 _public_6371ac7

PROC_DECLARE(0x6371a10, internal_6371a10, public_6371a10);
extern "C" NAKED register_t __cdecl internal_6371a10()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 8
        mov eax, dword ptr ds : [public_658b810]
        push esi
        mov esi, dword ptr ss : [ebp+8]
        push edi
        xor edi, edi
        cmp esi, eax
        jne public_6371a2f
        mov dword ptr ds : [public_658bc50], edi
        public_6371a2f : nop
        test esi, esi
        je public_6371ac7
        public_6371a37 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_6371a9d
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        je public_6371a96
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        push esi
        call public_636f2c0
        add esp, 0xC
        test eax, eax
        jne public_6371a96
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x4C]
        push ecx
        push edx
        push eax
/*FIXUP push offset public_63f00bc @0x6371a67*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f00bc
        call public_6356960
        mov eax, dword ptr ds : [public_658b05c]
        add esp, 0x10
        test eax, eax
        jne public_6371a96
        push 0
        push 0
        push 0
        push esi
/*FIXUP push offset public_63ee94c @0x6371a84*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee94c
        call public_6378820
        add esp, 0x14
        mov edi, 1
        public_6371a96 : nop
        mov esi, dword ptr ds : [esi+0x30]
        test esi, esi
        jne public_6371a37
        public_6371a9d : nop
        test edi, edi
        je public_6371ac7
        fld qword ptr ds : [public_658b6a0]
        sub esp, 8
        fchs 
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_63f0048 @0x6371aaf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f0048
        call public_6356960
        push 0
        push 0
        push 3
        call public_6378600
        add esp, 0x18
        public_6371ac7 : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6371a10)
    }
}

#undef public_6371a2f
#undef public_6371a37
#undef public_6371a96
#undef public_6371a9d
#undef public_6371ac7
