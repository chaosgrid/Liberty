#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63658f0);
CLANG_FORWARD_PROC_SYMBOL(public_6365d50);

#define public_6365d92 _public_6365d92
#define public_6365d9e _public_6365d9e
#define public_6365dc0 _public_6365dc0
#define public_6365de1 _public_6365de1

PROC_DECLARE(0x6365d50, internal_6365d50, public_6365d50);
extern "C" NAKED register_t __cdecl internal_6365d50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [esp+0x1C]
        xor ebx, ebx
        cmp eax, ebx
        push edi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ecx
        je public_6365d92
        mov ecx, 0xC
        xor eax, eax
        lea edi, ds:[esi+0xD4]
        rep stosd
        mov dword ptr ds : [esi+0x104], ebx
        mov dword ptr ds : [esi+0x108], ebx
        mov dword ptr ds : [esi+0x10C], ebx
        jmp public_6365d9e
        public_6365d92 : nop
        mov dword ptr ds : [esi+0xD4], ebx
        mov dword ptr ds : [esi+0x104], ebx
        public_6365d9e : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        mov edi, dword ptr ss : [esp+0x18]
        je public_6365dc0
        push 0x3F800000
        lea edx, ds:[esi+0x74]
        push edx
        lea ecx, ds:[esi+0xC]
        push ecx
        push eax
        push edi
        mov ecx, esi
        call public_63658f0
        public_6365dc0 : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        je public_6365de1
        push 0xBF800000
        lea edx, ds:[esi+0xA4]
        push edx
        lea ecx, ds:[esi+0x3C]
        push ecx
        push eax
        push edi
        mov ecx, esi
        call public_63658f0
        public_6365de1 : nop
        pop edi
        pop esi
        pop ebx
        ret 0x18
        UNREACHABLE_TRAP(0x6365d50)
    }
}

#undef public_6365d92
#undef public_6365d9e
#undef public_6365dc0
#undef public_6365de1
