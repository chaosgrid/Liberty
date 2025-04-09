#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_446ca0);
CLANG_FORWARD_PROC_SYMBOL(public_446d90);
CLANG_FORWARD_PROC_SYMBOL(public_557360);
CLANG_FORWARD_PROC_SYMBOL(public_5574a0);

#define public_446d48 _public_446d48
#define public_446d74 _public_446d74

PROC_DECLARE(0x446ca0, internal_446ca0, public_446ca0);
extern "C" NAKED register_t __cdecl internal_446ca0()
{
    __asm
    {
        push ebp
        push esi
        push edi
        mov ebp, ecx
        call public_5574a0
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        lea edi, ss:[ebp+0x18]
        mov ecx, 9
        lea esi, ss:[esp+0x28]
        rep movsd
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [esp+0x20]
        lea ecx, ss:[ebp+0xC]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        mov byte ptr ss : [ebp+0x3C], 0
        mov dword ptr ss : [ebp+0x40], 0
        mov dword ptr ds : [ecx+8], edx
        call dword ptr ds : [public_5c603c]
        mov esi, eax
        mov edx, dword ptr ds : [esi]
        add esp, 4
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        cmp eax, 0xC
        jne public_446d74
        mov esi, dword ptr ds : [esi+4]
        add esi, 0x9C
        mov ecx, esi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_446d74
        push esi
        call public_40f080
        add esp, 4
        test eax, eax
        je public_446d48
        mov eax, dword ptr ds : [eax+8]
        push eax
        mov ecx, ebp
        call public_557360
        test al, al
        je public_446d74
        mov eax, dword ptr ss : [esp+0x14]
        push 0
        mov ecx, ebp
        mov byte ptr ss : [ebp+0x3C], 0
        mov dword ptr ss : [ebp+0x40], eax
        call public_446d90
        pop edi
        pop esi
        pop ebp
        ret 0x3C
        public_446d48 : nop
        mov edi, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [public_5c6044]
        push eax
        push edi
        push 0x84
/*FIXUP push offset public_5cbdbc @0x446d59*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbdbc
        mov ecx, 0x100001
/*FIXUP push offset public_5cbd78 @0x446d63*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbd78
        push ecx
        mov ecx, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [ecx]
        add esp, 0x18
        public_446d74 : nop
        push 0
        mov ecx, ebp
        call public_446d90
        pop edi
        pop esi
        pop ebp
        ret 0x3C
        UNREACHABLE_TRAP(0x446ca0)
    }
}

#undef public_446d48
#undef public_446d74
