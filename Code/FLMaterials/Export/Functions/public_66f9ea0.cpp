#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f60d0);
CLANG_FORWARD_JUMP_SYMBOL(public_6700cc0);

#define public_66f9f70 _public_66f9f70
#define public_66f9faf _public_66f9faf
#define public_66f9fe8 _public_66f9fe8

PROC_DECLARE(0x66f9ea0, internal_66f9ea0, public_66f9ea0);
extern "C" NAKED register_t __cdecl internal_66f9ea0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6700cc0 @0x66f9ea2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700cc0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [esi+4]
        push edi
        lea edx, ss:[esp+0x24]
        push edx
        push 0xE
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], 0xE
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x18]
        push edx
        push 0x17
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], 0x17
        mov ecx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0x3C], 0
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push 4
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ss : [esp+0x54]
        test ah, 1
        mov ebx, dword ptr ss : [esp+0x50]
        mov ebp, dword ptr ss : [esp+0x3C]
        mov byte ptr ss : [esp+0x30], 1
        je public_66f9f70
        mov edx, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [edx+4]
        mov edi, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push ebx
        add edx, edi
        push edx
        mov edx, dword ptr ss : [esp+0x50]
        push edx
        mov edx, dword ptr ss : [esp+0x50]
        push edx
        mov edx, dword ptr ss : [esp+0x50]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        mov edi, eax
        test edi, edi
        jge public_66f9fe8
        public_66f9f70 : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        or eax, 0xFFFFFFFF
        test ecx, ecx
        je public_66f9faf
        mov edi, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push ebx
        mov ebx, dword ptr ss : [esp+0x54]
        lea edi, ds:[edi+ebx*2]
        mov ebx, dword ptr ss : [esp+0x4C]
        push edi
        mov edi, dword ptr ss : [esp+0x54]
        push edi
        mov edi, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx]
        add edi, ebx
        push edi
        push ecx
        mov ecx, dword ptr ss : [esp+0x58]
        push ecx
        push eax
        call dword ptr ds : [edx+0x120]
        mov ebx, dword ptr ss : [esp+0x50]
        public_66f9faf : nop
        test eax, eax
        mov edi, eax
        jge public_66f9fe8
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_66f9fe8
        mov eax, dword ptr ss : [esp+0x48]
        test eax, eax
        jbe public_66f9fe8
        test ebx, ebx
        jbe public_66f9fe8
        mov edx, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x4C]
        push edx
        mov edx, dword ptr ss : [esp+0x48]
        push ebx
        push ecx
        push eax
        mov eax, dword ptr ss : [esp+0x50]
        push edx
        push eax
        push ebp
        mov ecx, esi
        call public_66f60d0
        mov edi, eax
        public_66f9fe8 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push eax
        mov byte ptr ss : [esp+0x3C], 0
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        push eax
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        call dword ptr ds : [ecx+0xF0]
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 0x20
        UNREACHABLE_TRAP(0x66f9ea0)
    }
}

#undef public_66f9f70
#undef public_66f9faf
#undef public_66f9fe8
