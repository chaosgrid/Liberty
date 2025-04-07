#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63705e0);
CLANG_FORWARD_PROC_SYMBOL(public_6372880);
CLANG_FORWARD_PROC_SYMBOL(public_6374170);

#define public_63728a6 _public_63728a6
#define public_63728c9 _public_63728c9
#define public_63728cb _public_63728cb
#define public_63728d1 _public_63728d1
#define public_6372915 _public_6372915

PROC_DECLARE(0x6372880, internal_6372880, public_6372880);
extern "C" NAKED register_t __cdecl internal_6372880()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0xC
        mov ecx, dword ptr ds : [public_658b810]
        push esi
        xor esi, esi
        test ecx, ecx
        mov dword ptr ss : [esp+8], 0xFFFFFFFF
        mov dword ptr ss : [esp+0xC], 0xFFEFFFFF
        je public_6372915
        public_63728a6 : nop
        mov edx, dword ptr ds : [ecx+0x30]
        test edx, edx
        je public_63728d1
        mov eax, dword ptr ds : [ecx+0x40]
        test eax, eax
        je public_63728cb
        fld qword ptr ds : [ecx]
        fcom qword ptr ss : [esp+8]
        fnstsw ax
        test ah, 0x41
        jne public_63728c9
        fstp qword ptr ss : [esp+8]
        mov esi, ecx
        jmp public_63728cb
        public_63728c9 : nop
        fstp st(0)
        public_63728cb : nop
        mov ecx, edx
        test ecx, ecx
        jne public_63728a6
        public_63728d1 : nop
        test esi, esi
        je public_6372915
        push esi
        call public_63705e0
/*FIXUP push offset public_658b818 @0x63728db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b818
        push esi
        call public_6374170
        mov eax, dword ptr ds : [public_658b078]
        add esp, 0xC
        cmp eax, 1
        jl public_6372915
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [esi+0x4C]
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
        push ecx
        push edx
/*FIXUP push offset public_63f070c @0x6372906*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f070c
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x14
        public_6372915 : nop
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6372880)
    }
}

#undef public_63728a6
#undef public_63728c9
#undef public_63728cb
#undef public_63728d1
#undef public_6372915
