#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45b820);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba328);

#define public_45b881 _public_45b881

PROC_DECLARE(0x45b820, internal_45b820, public_45b820);
extern "C" NAKED register_t __cdecl internal_45b820()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5ba328 @0x45b822*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba328
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        lea ebx, ds:[esi+0x32C]
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_5cea44
        mov dword ptr ds : [esi+0x7C], offset public_5cea38
        mov dword ptr ds : [ebx], offset public_5cea30
        mov dword ptr ds : [esi+0x330], offset public_5cea24
        mov dword ptr ds : [esi+0x350], offset public_5cea18
        mov eax, dword ptr ds : [public_66d3f0]
        xor edi, edi
        cmp eax, esi
        mov dword ptr ss : [esp+0x18], edi
        jne public_45b881
        mov dword ptr ds : [public_66d3f0], edi
        public_45b881 : nop
        mov eax, dword ptr ds : [esi+0x358]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x358], edi
        mov dword ptr ds : [esi+0x35C], edi
        mov dword ptr ds : [esi+0x360], edi
        mov eax, dword ptr ds : [esi+0x338]
        push eax
        call public_5b7e1d
        add esp, 8
        mov ecx, ebx
        mov dword ptr ds : [esi+0x338], edi
        mov dword ptr ds : [esi+0x33C], edi
        mov dword ptr ds : [esi+0x340], edi
        call public_576010
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x45b820)
    }
}

#undef public_45b881
