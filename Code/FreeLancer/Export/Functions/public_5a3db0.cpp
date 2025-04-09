#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59d960);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5a3db0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c5138);

#define public_5a3df4 _public_5a3df4
#define public_5a3e19 _public_5a3e19
#define public_5a3e22 _public_5a3e22

PROC_DECLARE(0x5a3db0, internal_5a3db0, public_5a3db0);
extern "C" NAKED register_t __cdecl internal_5a3db0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c5138 @0x5a3db2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c5138
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi], offset public_5e614c
        mov dword ptr ds : [esi+0x7C], offset public_5e613c
        mov al, byte ptr ds : [esi+0x388]
        xor ebx, ebx
        test al, 1
        mov dword ptr ss : [esp+0x14], ebx
        je public_5a3df4
        push esi
        call public_59d960
        add esp, 4
        public_5a3df4 : nop
        mov eax, dword ptr ds : [esi+0x36C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        je public_5a3e22
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_5a3e19
        cmp cl, 0xFF
        je public_5a3e19
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_5a3e22
        public_5a3e19 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5a3e22 : nop
        mov ecx, esi
        mov dword ptr ds : [esi+0x36C], ebx
        mov dword ptr ds : [esi+0x370], ebx
        mov dword ptr ds : [esi+0x374], ebx
        call public_59fa50
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x5a3db0)
    }
}

#undef public_5a3df4
#undef public_5a3e19
#undef public_5a3e22
