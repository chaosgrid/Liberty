#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6277dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6278230);
CLANG_FORWARD_PROC_SYMBOL(public_62782b0);
CLANG_FORWARD_PROC_SYMBOL(public_6279d70);
CLANG_FORWARD_PROC_SYMBOL(public_631bf50);
CLANG_FORWARD_PROC_SYMBOL(public_631c040);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);
CLANG_FORWARD_JUMP_SYMBOL(public_6396b63);

#define public_631c073 _public_631c073
#define public_631c0a0 _public_631c0a0
#define public_631c0c9 _public_631c0c9
#define public_631c0e6 _public_631c0e6
#define public_631c0f0 _public_631c0f0
#define public_631c110 _public_631c110

PROC_DECLARE(0x631c040, internal_631c040, public_631c040);
extern "C" NAKED register_t __cdecl internal_631c040()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396b63 @0x631c042*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396b63
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x28], 0
        lea ebp, ds:[ecx+4]
        mov dword ptr ss : [esp+0x14], 7
        public_631c073 : nop
        mov esi, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+0xC]
        test ecx, ecx
        mov eax, dword ptr ds : [esi]
        lea ebx, ss:[ebp-4]
        mov dword ptr ss : [esp+0x10], eax
        je public_631c0e6
        mov ecx, eax
        cmp eax, ecx
        jne public_631c0e6
        cmp esi, esi
        jne public_631c0e6
        mov edi, dword ptr ds : [esi+4]
        cmp edi, dword ptr ss : [ebp+4]
        mov esi, edi
        je public_631c0c9
        lea ebx, ds:[ebx]
        public_631c0a0 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6278230
        mov esi, dword ptr ds : [esi]
        push 0
        lea ecx, ds:[edi+0xC]
        call public_6279d70
        push edi
        call public_6391d5a
        mov eax, dword ptr ss : [ebp+4]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_631c0a0
        public_631c0c9 : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+0x10], 0
        mov dword ptr ds : [eax], eax
        mov ebx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], ebx
        jmp public_631c110
        public_631c0e6 : nop
        cmp eax, esi
        je public_631c110
        lea ebx, ds:[ebx]
        public_631c0f0 : nop
        lea ecx, ss:[esp+0x10]
        mov edi, eax
        call public_62782b0
        push edi
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebx
        call public_6277dd0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, esi
        jne public_631c0f0
        public_631c110 : nop
        mov eax, dword ptr ss : [esp+0x14]
        add ebp, 0x14
        dec eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_631c073
        mov ecx, dword ptr ss : [esp+0x18]
/*FIXUP push offset _public_631bf50 @0x631c126*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_631bf50
        push 7
        push 0x14
        push ecx
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call public_6391dfc
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x631c040)
    }
}

#undef public_631c073
#undef public_631c0a0
#undef public_631c0c9
#undef public_631c0e6
#undef public_631c0f0
#undef public_631c110
