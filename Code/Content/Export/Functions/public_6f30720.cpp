#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6f30720);
CLANG_FORWARD_PROC_SYMBOL(public_6f30820);
CLANG_FORWARD_PROC_SYMBOL(public_6f309a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae963);

#define public_6f307b0 _public_6f307b0
#define public_6f307e9 _public_6f307e9

PROC_DECLARE(0x6f30720, internal_6f30720, public_6f30720);
extern "C" NAKED register_t __cdecl internal_6f30720()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fae963 @0x6f30722*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae963
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        mov eax, dword ptr ds : [edi+0x28]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0x24]
        push eax
        push ecx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], 1
        call public_6f309a0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        xor ebp, ebp
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6fa8fe0
        mov dword ptr ds : [esi+8], ebp
        mov eax, dword ptr ds : [edi+0x18]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [edi+0x18], ebp
        mov dword ptr ds : [edi+0x1C], ebp
        mov dword ptr ds : [edi+0x20], ebp
        mov eax, dword ptr ds : [edi+8]
        mov ebx, dword ptr ds : [edi+4]
        add esp, 0xC
        cmp ebx, eax
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], eax
        je public_6f307e9
        lea esi, ds:[ebx+8]
        nop 
        lea esp, ss:[esp]
        public_6f307b0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        push edx
        lea ecx, ds:[esi-4]
        push eax
        call public_6ea1490
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        push ecx
        push eax
        lea ecx, ds:[esi-4]
        call public_6f30820
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        add ebx, 0x14
        add esi, 0x14
        cmp ebx, eax
        jne public_6f307b0
        public_6f307e9 : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], ebp
        mov dword ptr ds : [edi+0xC], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f30720)
    }
}

#undef public_6f307b0
#undef public_6f307e9
