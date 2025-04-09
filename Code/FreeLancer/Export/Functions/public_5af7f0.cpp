#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5af7f0);
CLANG_FORWARD_PROC_SYMBOL(public_5afb40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c5902);

#define public_5af8da _public_5af8da
#define public_5af8e3 _public_5af8e3

PROC_DECLARE(0x5af7f0, internal_5af7f0, public_5af7f0);
extern "C" NAKED register_t __cdecl internal_5af7f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c5902 @0x5af7f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c5902
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], edi
        mov eax, dword ptr ds : [edi+0x40]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0x3C]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], 2
        call public_5afb40
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        xor ebx, ebx
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_5b7e1d
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+0x2C]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea esi, ds:[edi+0x28]
        push eax
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x28], 1
        call public_5afb40
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_5b7e1d
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+0x18]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        lea esi, ds:[edi+0x14]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x28], bl
        call public_5afb40
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_5b7e1d
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+8]
        add esp, 8
        cmp eax, ebx
        je public_5af8e3
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_5af8da
        cmp cl, 0xFF
        je public_5af8da
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_5af8e3
        public_5af8da : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5af8e3 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [edi+0x10], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x5af7f0)
    }
}

#undef public_5af8da
#undef public_5af8e3
