#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6282f90);
CLANG_FORWARD_PROC_SYMBOL(public_62a01e0);
CLANG_FORWARD_PROC_SYMBOL(public_62a1230);
CLANG_FORWARD_PROC_SYMBOL(public_62a1c30);
CLANG_FORWARD_PROC_SYMBOL(public_62a1c90);
CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6393c2b);

#define public_62a1268 _public_62a1268
#define public_62a127f _public_62a127f
#define public_62a1292 _public_62a1292
#define public_62a12ce _public_62a12ce
#define public_62a131a _public_62a131a
#define public_62a1320 _public_62a1320
#define public_62a1344 _public_62a1344

PROC_DECLARE(0x62a1230, internal_62a1230, public_62a1230);
extern "C" NAKED register_t __cdecl internal_62a1230()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393c2b @0x62a1232*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393c2b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov edi, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edi]
        mov ebp, dword ptr ds : [esi+0x14]
        xor ebx, ebx
        cmp eax, edi
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_62a1292
        public_62a1268 : nop
        mov ebx, dword ptr ds : [eax+0x10]
        test ebx, ebx
        je public_62a127f
        mov ecx, ebx
        call public_62a01e0
        push ebx
        call public_6391d5a
        add esp, 4
        public_62a127f : nop
        lea ecx, ss:[esp+0x10]
        call public_63429f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_62a1268
        xor ebx, ebx
        public_62a1292 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        add esi, 4
        push eax
        push ecx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call public_62a1c90
        cmp ebp, ebx
        je public_62a12ce
        mov ecx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_639da14 @0x62a12b2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639da14
        push 0x12
/*FIXUP push offset public_639d9e0 @0x62a12b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d9e0
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x62a12c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_62a12ce : nop
        mov edi, dword ptr ds : [esi+4]
        cmp dword ptr ds : [esi+0x10], ebx
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], eax
        je public_62a131a
        mov ecx, eax
        cmp eax, ecx
        jne public_62a131a
        mov edx, dword ptr ds : [edi+4]
        push edx
        mov ecx, esi
        call public_6282f90
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_632c410
        jmp public_62a1344
        public_62a131a : nop
        cmp eax, edi
        je public_62a1344
        mov edi, edi
        public_62a1320 : nop
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_62a1c30
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call public_62be400
        cmp dword ptr ss : [esp+0x10], edi
        jne public_62a1320
        public_62a1344 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x62a1230)
    }
}

#undef public_62a1268
#undef public_62a127f
#undef public_62a1292
#undef public_62a12ce
#undef public_62a131a
#undef public_62a1320
#undef public_62a1344
