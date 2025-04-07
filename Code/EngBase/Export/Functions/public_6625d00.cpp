#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611d80);
CLANG_FORWARD_PROC_SYMBOL(public_6625d00);
CLANG_FORWARD_PROC_SYMBOL(public_6627250);
CLANG_FORWARD_PROC_SYMBOL(public_66276d0);
CLANG_FORWARD_PROC_SYMBOL(public_66277d0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);
CLANG_FORWARD_PROC_SYMBOL(public_6628230);

#define public_6625d25 _public_6625d25
#define public_6625d6c _public_6625d6c
#define public_6625dae _public_6625dae
#define public_6625db3 _public_6625db3
#define public_6625dd4 _public_6625dd4

PROC_DECLARE(0x6625d00, internal_6625d00, public_6625d00);
extern "C" NAKED register_t __cdecl internal_6625d00()
{
    __asm
    {
        mov eax, 0x2008
        call public_6628230
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [esi], offset public_6629780
        mov dword ptr ds : [esi+4], offset public_662974c
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], eax
        public_6625d25 : nop
        cmp eax, dword ptr ds : [esi+0x14]
        je public_6625d6c
        mov ecx, dword ptr ds : [eax+0xC]
        lea edx, ss:[esp+0x14]
        push ecx
/*FIXUP push offset public_662ab10 @0x6625d32*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662ab10
        push edx
        call public_6611d80
        push eax
        mov eax, dword ptr ds : [public_6629004]
        push 0xC8
        mov ecx, 0x100003
/*FIXUP push offset public_662aac0 @0x6625d4d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662aac0
/*FIXUP push offset public_662a5ac @0x6625d52*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a5ac
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x20
        lea ecx, ss:[esp+0xC]
        call public_66277d0
        mov eax, dword ptr ss : [esp+0xC]
        jmp public_6625d25
        public_6625d6c : nop
        xor ebp, ebp
        mov dword ptr ds : [esi+0x30], ebp
        mov edi, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [esi+0x20]
        add esi, 0x10
        mov eax, dword ptr ds : [edi]
        cmp ecx, ebp
        mov dword ptr ss : [esp+0xC], eax
        je public_6625dae
        mov ecx, eax
        cmp eax, ecx
        jne public_6625dae
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        mov ecx, esi
        call public_66276d0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_6625dd4
        public_6625dae : nop
        cmp eax, edi
        je public_6625dd4
        push ebx
        public_6625db3 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_66277d0
        lea ecx, ss:[esp+0x14]
        push ebx
        push ecx
        mov ecx, esi
        call public_6627250
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6625db3
        pop ebx
        public_6625dd4 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_66281d0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ebp
        push eax
        mov dword ptr ds : [esi+0x10], ebp
        call public_66281d0
        add esp, 8
        mov dword ptr ds : [esi+8], ebp
        pop edi
        pop esi
        pop ebp
        add esp, 0x2008
        ret 
        UNREACHABLE_TRAP(0x6625d00)
    }
}

#undef public_6625d25
#undef public_6625d6c
#undef public_6625dae
#undef public_6625db3
#undef public_6625dd4
