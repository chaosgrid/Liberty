#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40ea90);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_418c24);
CLANG_FORWARD_PROC_SYMBOL(public_418d86);
CLANG_FORWARD_PROC_SYMBOL(public_4190f8);
CLANG_FORWARD_PROC_SYMBOL(public_41910a);
CLANG_FORWARD_PROC_SYMBOL(public_419110);
CLANG_FORWARD_PROC_SYMBOL(public_419116);
CLANG_FORWARD_JUMP_SYMBOL(public_41a3dc);

#define public_40eada _public_40eada
#define public_40eae6 _public_40eae6
#define public_40eb15 _public_40eb15
#define public_40eb21 _public_40eb21

PROC_DECLARE(0x40ea90, internal_40ea90, public_40ea90);
extern "C" NAKED register_t __cdecl internal_40ea90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a3dc @0x40ea92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a3dc
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_41d710
        xor ebx, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov eax, dword ptr ds : [esi+0x21C]
        cmp eax, ebx
        je public_40eae6
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_40eada
        cmp cl, 0xFF
        je public_40eada
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_40eae6
        public_40eada : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_418978
        add esp, 4
        public_40eae6 : nop
        mov dword ptr ds : [esi+0x21C], ebx
        mov dword ptr ds : [esi+0x220], ebx
        mov dword ptr ds : [esi+0x224], ebx
        mov eax, dword ptr ds : [esi+0x20C]
        cmp eax, ebx
        je public_40eb21
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_40eb15
        cmp cl, 0xFF
        je public_40eb15
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_40eb21
        public_40eb15 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_418978
        add esp, 4
        public_40eb21 : nop
        lea edi, ds:[esi+0x1F8]
        mov dword ptr ds : [esi+0x20C], ebx
        mov dword ptr ds : [esi+0x210], ebx
        mov dword ptr ds : [esi+0x214], ebx
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ds : [edi], offset public_41daa4
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 7
        call public_41910a
        mov dword ptr ds : [edi], offset public_41da90
        lea edi, ds:[esi+0x1F0]
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ds : [edi], offset public_41daa4
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 8
        call public_41910a
        lea ecx, ds:[esi+0x180]
        mov dword ptr ds : [edi], offset public_41da90
        mov byte ptr ss : [esp+0x1C], 4
        call public_419110
        lea ecx, ds:[esi+0x140]
        mov byte ptr ss : [esp+0x1C], 3
        call public_418d86
        lea ecx, ds:[esi+0x100]
        mov byte ptr ss : [esp+0x1C], 2
        call public_4190f8
        lea ecx, ds:[esi+0xC0]
        mov byte ptr ss : [esp+0x1C], 1
        call public_418d86
        lea ecx, ds:[esi+0x80]
        mov byte ptr ss : [esp+0x1C], bl
        call public_418c24
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_419116
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x40ea90)
    }
}

#undef public_40eada
#undef public_40eae6
#undef public_40eb15
#undef public_40eb21
