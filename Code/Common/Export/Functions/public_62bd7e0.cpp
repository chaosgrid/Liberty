#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62a1c30);
CLANG_FORWARD_PROC_SYMBOL(public_62bd7e0);
CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_62be7d0);
CLANG_FORWARD_PROC_SYMBOL(public_62bea50);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6394946);

#define public_62bd830 _public_62bd830
#define public_62bd83d _public_62bd83d
#define public_62bd84e _public_62bd84e
#define public_62bd873 _public_62bd873
#define public_62bd888 _public_62bd888
#define public_62bd902 _public_62bd902
#define public_62bd906 _public_62bd906
#define public_62bd92a _public_62bd92a

PROC_DECLARE(0x62bd7e0, internal_62bd7e0, public_62bd7e0);
extern "C" NAKED register_t __cdecl internal_62bd7e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394946 @0x62bd7e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394946
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [edi], offset public_639ef00
        lea eax, ss:[esp+0x10]
        lea esi, ds:[edi+0x10]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], 1
        call public_632c410
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [edi+0x14]
        cmp eax, ebx
        mov dword ptr ss : [esp+0xC], eax
        je public_62bd84e
        lea ecx, ds:[ecx]
        public_62bd830 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        je public_62bd83d
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_62bd83d : nop
        lea ecx, ss:[esp+0xC]
        call public_63429f0
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, ebx
        jne public_62bd830
        public_62bd84e : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push eax
        push ecx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_62be7d0
        mov ebx, dword ptr ds : [edi+0x2C]
        lea ebp, ds:[edi+0x28]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        mov byte ptr ss : [esp+0x2C], 0
        je public_62bd888
        public_62bd873 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebp
        call public_6271cc0
        cmp edi, ebx
        jne public_62bd873
        public_62bd888 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        xor ebx, ebx
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], ebx
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x10]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], edx
        pop ebp
        je public_62bd902
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call public_632c410
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [eax]
        jne public_62bd902
        mov ecx, dword ptr ds : [esi+4]
        cmp edi, ecx
        jne public_62bd902
        mov eax, dword ptr ds : [ecx+4]
        push eax
        mov ecx, esi
        call public_62bea50
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_632c410
        jmp public_62bd92a
        public_62bd902 : nop
        cmp edx, edi
        je public_62bd92a
        public_62bd906 : nop
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_62a1c30
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call public_62be400
        cmp dword ptr ss : [esp+0xC], edi
        jne public_62bd906
        public_62bd92a : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 8
        mov dword ptr ds : [esi+8], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x62bd7e0)
    }
}

#undef public_62bd830
#undef public_62bd83d
#undef public_62bd84e
#undef public_62bd873
#undef public_62bd888
#undef public_62bd902
#undef public_62bd906
#undef public_62bd92a
