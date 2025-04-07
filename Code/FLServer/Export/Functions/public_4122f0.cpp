#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_419134);
CLANG_FORWARD_PROC_SYMBOL(public_419140);
CLANG_FORWARD_PROC_SYMBOL(public_419236);
CLANG_FORWARD_PROC_SYMBOL(public_419272);
CLANG_FORWARD_PROC_SYMBOL(public_419278);
CLANG_FORWARD_PROC_SYMBOL(public_41927e);
CLANG_FORWARD_PROC_SYMBOL(public_419284);
CLANG_FORWARD_PROC_SYMBOL(public_41928a);
CLANG_FORWARD_PROC_SYMBOL(public_419290);
CLANG_FORWARD_JUMP_SYMBOL(public_41a720);

#define public_4123dc _public_4123dc
#define public_412405 _public_412405

PROC_DECLARE(0x4122f0, internal_4122f0, public_4122f0);
extern "C" NAKED register_t __cdecl internal_4122f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a720 @0x4122f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a720
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        push ebp
        push esi
        push edi
        mov esi, ecx
/*FIXUP push offset public_425908 @0x41230d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425908
        lea ecx, ss:[esp+0x14]
        call public_419290
        xor ebp, ebp
/*FIXUP push offset public_425900 @0x41231d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425900
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x4C], ebp
        call public_419290
        mov edi, dword ptr ds : [esi+0xC0]
        lea eax, ss:[esp+0x18]
        push eax
        mov byte ptr ss : [esp+0x4C], 1
        call public_419236
        mov eax, dword ptr ds : [eax]
/*FIXUP push offset public_4258f4 @0x412346*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4258f4
        lea ecx, ss:[esp+0x1C]
        sub eax, edi
        push ecx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x1C], eax
        call public_41928a
        push eax
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x4C], 2
        call public_419284
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x48], 1
        call public_418aa4
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        call public_41927e
        push eax
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x4C], 3
        call public_419284
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x48], 1
        call public_418aa4
        mov edx, dword ptr ds : [esi+0xE4]
        push ebp
        push ebp
        push 0x31
        push edx
        call dword ptr ds : [public_41bbe8]
        push ebp
        lea ecx, ss:[esp+0x30]
        mov edi, eax
        call public_419140
        test edi, edi
        je public_4123dc
        mov eax, dword ptr ss : [esp+0x30]
        push edi
        push eax
        call dword ptr ds : [public_41b10c]
        mov ebp, eax
        public_4123dc : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax-8]
        lea edx, ss:[esp+0x18]
        push edx
        push ecx
        push eax
        mov eax, dword ptr ss : [esp+0x40]
        push eax
        call dword ptr ds : [public_41b0f4]
        test ebp, ebp
        je public_412405
        mov ecx, dword ptr ss : [esp+0x30]
        push ebp
        push ecx
        call dword ptr ds : [public_41b10c]
        public_412405 : nop
        lea ecx, ss:[esp+0x2C]
        call public_419134
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        add esi, 0xC4
        push 0
        mov ecx, esi
        call public_419278
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        push edx
        push eax
        push ecx
        push 0
        mov ecx, esi
        call public_419272
        mov esi, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        lea ecx, ss:[esp+0xC]
        mov byte ptr ss : [esp+0x48], 0
        call public_418aa4
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        call public_418aa4
        mov ecx, dword ptr ss : [esp+0x40]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 4
        UNREACHABLE_TRAP(0x4122f0)
    }
}

#undef public_4123dc
#undef public_412405
