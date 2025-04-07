#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6374170);

#define public_63741a3 _public_63741a3
#define public_63741b0 _public_63741b0
#define public_63741c6 _public_63741c6
#define public_63741d4 _public_63741d4

PROC_DECLARE(0x6374170, internal_6374170, public_6374170);
extern "C" NAKED register_t __cdecl internal_6374170()
{
    __asm
    {
        cmp dword ptr ds : [public_658b078], 4
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ds : [ebx]
        jl public_63741a3
        mov eax, dword ptr ds : [edi+0x4C]
        mov ecx, dword ptr ds : [esi+0x4C]
        mov edx, dword ptr ds : [public_658b7fc]
        push eax
        push ecx
/*FIXUP push offset public_63f10d0 @0x6374194*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f10d0
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_63741a3 : nop
        mov eax, dword ptr ds : [edi+0x2C]
        test eax, eax
        mov dword ptr ds : [esi+0x2C], eax
        je public_63741b0
        mov dword ptr ds : [eax+0x30], esi
        public_63741b0 : nop
        mov dword ptr ds : [edi+0x2C], esi
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ds : [esi+0x30], eax
        cmp dword ptr ds : [public_658b810], edi
        jne public_63741c6
        mov dword ptr ds : [public_658b810], esi
        public_63741c6 : nop
        cmp dword ptr ds : [public_658b818], edi
        jne public_63741d4
        mov dword ptr ds : [public_658b818], esi
        public_63741d4 : nop
        mov dword ptr ds : [ebx], esi
        mov eax, dword ptr ds : [public_658b844]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [public_658b844], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6374170)
    }
}

#undef public_63741a3
#undef public_63741b0
#undef public_63741c6
#undef public_63741d4
