#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f02b0);
CLANG_FORWARD_PROC_SYMBOL(public_62fbfa0);
CLANG_FORWARD_PROC_SYMBOL(public_62fc380);
CLANG_FORWARD_PROC_SYMBOL(public_62fd3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6319b80);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63954db);

#define public_62f02ea _public_62f02ea
#define public_62f0315 _public_62f0315
#define public_62f033d _public_62f033d
#define public_62f0362 _public_62f0362
#define public_62f0366 _public_62f0366
#define public_62f0386 _public_62f0386

PROC_DECLARE(0x62f02b0, internal_62f02b0, public_62f02b0);
extern "C" NAKED register_t __cdecl internal_62f02b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63954db @0x62f02b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63954db
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_63a11f0
        mov ecx, dword ptr ds : [esi+4]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x24], ebp
        je public_62f02ea
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_62f02ea : nop
        mov edi, dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ds : [esi+0x58]
        mov eax, dword ptr ds : [edi]
        add esi, 0x48
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], eax
        je public_62f0362
        mov ecx, eax
        cmp eax, ecx
        jne public_62f0362
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62f033d
        public_62f0315 : nop
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        mov ecx, esi
        call public_62fc380
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_62fd3e0
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62f0315
        public_62f033d : nop
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_632c410
        jmp public_62f0386
        public_62f0362 : nop
        cmp eax, edi
        je public_62f0386
        public_62f0366 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6319b80
        push ebx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_62fbfa0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_62f0366
        public_62f0386 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x62f02b0)
    }
}

#undef public_62f02ea
#undef public_62f0315
#undef public_62f033d
#undef public_62f0362
#undef public_62f0366
#undef public_62f0386
