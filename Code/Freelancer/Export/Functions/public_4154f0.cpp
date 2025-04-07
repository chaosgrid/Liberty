#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415050);
CLANG_FORWARD_PROC_SYMBOL(public_4154f0);
CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b886b);

#define public_415569 _public_415569
#define public_41558d _public_41558d

PROC_DECLARE(0x4154f0, internal_4154f0, public_4154f0);
extern "C" NAKED register_t __cdecl internal_4154f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b886b @0x4154f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b886b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [edi], offset public_5c8ce8
        mov eax, dword ptr ds : [edi+0x30]
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr ss : [esp+0x20], ebp
        je public_41558d
        mov eax, dword ptr ds : [eax+0x15C]
        push esi
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, offset public_616524
        mov dword ptr ss : [esp+0x18], eax
        call public_432240
        mov esi, dword ptr ds : [edi+0x30]
        mov ecx, dword ptr ds : [esi+0x160]
        dec ecx
        mov ebx, ecx
        cmp ebx, ebp
        mov dword ptr ds : [esi+0x160], ecx
        jg public_415569
        mov ecx, esi
        call public_415050
        push esi
        call public_5b7e1d
        add esp, 4
        public_415569 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+0x30], ebp
        cmp eax, dword ptr ds : [public_616528]
        pop esi
        je public_41558d
        cmp ebx, ebp
        jg public_41558d
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, offset public_616524
        call public_46c8c0
        public_41558d : nop
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov dword ptr ds : [edi+8], ebp
        mov dword ptr ds : [edi+0xC], ebp
        mov dword ptr ds : [edi+0x10], ebp
        pop edi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x4154f0)
    }
}

#undef public_415569
#undef public_41558d
