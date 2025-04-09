#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4142a0);
CLANG_FORWARD_PROC_SYMBOL(public_4145d0);
CLANG_FORWARD_PROC_SYMBOL(public_415860);
CLANG_FORWARD_PROC_SYMBOL(public_58bcb0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4618);

#define public_58bd4b _public_58bd4b
#define public_58bd7b _public_58bd7b
#define public_58bd91 _public_58bd91

PROC_DECLARE(0x58bcb0, internal_58bcb0, public_58bcb0);
extern "C" NAKED register_t __cdecl internal_58bcb0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c4618 @0x58bcb8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4618
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        mov ebx, ecx
        mov al, byte ptr ds : [ebx+0x3A4]
        test al, al
        push esi
        je public_58bd91
        xor esi, esi
        push ebp
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ss : [esp+0x10], esi
        mov eax, dword ptr ds : [ebx+0x334]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, esi
        mov dword ptr ss : [esp+0x28], esi
        je public_58bd7b
        push edi
        push ebp
        call dword ptr ds : [public_5c71c8]
        mov edi, eax
        add esp, 4
        lea ecx, ds:[edi+1]
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_4142a0
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        push ebp
        push esi
        call dword ptr ds : [public_5c71c0]
        add esp, 0xC
        test esi, esi
        mov word ptr ds : [esi+edi*2], 0
        pop edi
        je public_58bd7b
        push esi
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        test eax, eax
        jle public_58bd7b
        mov ecx, dword ptr ss : [esp+0x10]
        dec eax
        cmp ecx, eax
        jbe public_58bd4b
        mov word ptr ds : [esi+eax*2], 0
        public_58bd4b : nop
        fld dword ptr ds : [ebx+0xB0]
        mov eax, dword ptr ds : [ebx+0x32C]
        fadd dword ptr ds : [ebx+0x68]
        mov ecx, dword ptr ds : [ebx+0x334]
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        call public_4145d0
        mov ecx, dword ptr ds : [ebx+0x334]
        push esi
        call public_415860
        public_58bd7b : nop
        test esi, esi
        mov byte ptr ds : [ebx+0x3A4], 0
        pop ebp
        je public_58bd91
        push esi
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        public_58bd91 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x58bcb0)
    }
}

#undef public_58bd4b
#undef public_58bd7b
#undef public_58bd91
